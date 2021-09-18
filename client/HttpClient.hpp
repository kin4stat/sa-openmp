#ifndef HTTPCLIENT_HPP_
#define HTTPCLIENT_HPP_

#include "common.hpp"

#undef ERROR_SUCCESS

BEGIN_PACK

class HttpClient {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("HttpClient", "GetHeaderValue", GetAddress(0x2390), &HttpClient::GetHeaderValue);
        ReversibleHooks::Install("HttpClient", "InitializeRequest", GetAddress(0x2490), &HttpClient::InitializeRequest);
        ReversibleHooks::Install("HttpClient", "HandleEntity", GetAddress(0x2660), &HttpClient::HandleEntity);
        ReversibleHooks::Install("HttpClient", "Connect", GetAddress(0x2980), &HttpClient::Connect);
        ReversibleHooks::Install("HttpClient", "Process", GetAddress(0x2A40), &HttpClient::Process);
        ReversibleHooks::Install("HttpClient", "Disconnect", GetAddress(0x2420), &HttpClient::Disconnect);
        ReversibleHooks::Install("HttpClient", "ProcessUrl", GetAddress(0x2C20), &HttpClient::ProcessUrl);
        ReversibleHooks::Install("HttpClient", "Send", GetAddress(0x2430), &HttpClient::Send);
        ReversibleHooks::Install("HttpClient", "Receive", GetAddress(0x2470), &HttpClient::Receive);
    }


    enum {
        RECEIVE_BUFFER_SIZE = 4096
    };

    struct Request {
        enum RequestType {
            GET = 1,
            POST,
            HEAD
        };

        unsigned short m_nPort;
        int            m_nType;
        char*          m_szHost;
        char*          m_szFile;
        char*          m_szData;
        char*          m_szReferer;
    };

    struct Response {
        enum ContentType {
            CONTENT_UNKNOWN,
            CONTENT_TEXT,
            CONTENT_HTML
        };

        char*        m_szHeader;
        char*        m_szResponse;
        unsigned int m_nHeaderLen;
        unsigned int m_nResponseLen;
        unsigned int m_nResponseCode;
        unsigned int m_nContentType;
    };

    enum ErrorCode {
        ERROR_SUCCESS,
        ERROR_BAD_HOST,
        ERROR_NO_SOCKET,
        ERROR_CANNOT_CONNECT,
        ERROR_CANNOT_WRITE,
        ERROR_TOO_BIG_CONTENT,
        ERROR_INCORRECT_RESPONSE
    };

    int       m_nSocket;
    Request   m_request;
    Response  m_response;
    ErrorCode m_error;

    
    HttpClient();
    ~HttpClient();

    bool GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen);
    void InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    void HandleEntity();
    bool Connect(const char* szHost, int nPort);
    void Process();
    void Disconnect();
    ErrorCode ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    bool Send(const char* szBuffer);
    int Receive(char* szBuffer, int nBufferLen);
};

END_PACK

#endif // HTTPCLIENT_HPP_