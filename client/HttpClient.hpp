#ifndef HTTPCLIENT_HPP_
#define HTTPCLIENT_HPP_

#include "common.hpp"

BEGIN_PACK

class HttpClient {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetHeaderValue)> GetHeaderValue_hook{ GetAddress(0x2390) }; GetHeaderValue_hook.before.connect(GetHeaderValue);
        static kthook::kthook_t<decltype(&InitializeRequest)> InitializeRequest_hook{ GetAddress(0x2490) }; InitializeRequest_hook.before.connect(InitializeRequest);
        static kthook::kthook_t<decltype(&HandleEntity)> HandleEntity_hook{ GetAddress(0x2660) }; HandleEntity_hook.before.connect(HandleEntity);
        static kthook::kthook_t<decltype(&Connect)> Connect_hook{ GetAddress(0x2980) }; Connect_hook.before.connect(Connect);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x2A40) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&Disconnect)> Disconnect_hook{ GetAddress(0x2420) }; Disconnect_hook.before.connect(Disconnect);
        static kthook::kthook_t<decltype(&ProcessUrl)> ProcessUrl_hook{ GetAddress(0x2C20) }; ProcessUrl_hook.before.connect(ProcessUrl);
        static kthook::kthook_t<decltype(&Send)> Send_hook{ GetAddress(0x2430) }; Send_hook.before.connect(Send);
        static kthook::kthook_t<decltype(&Receive)> Receive_hook{ GetAddress(0x2470) }; Receive_hook.before.connect(Receive);
    }



    ~HttpClient();

    MAKE_RET(bool) GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen);
    MAKE_RET(void) InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    MAKE_RET(void) HandleEntity();
    MAKE_RET(bool) Connect(const char* szHost, int nPort);
    MAKE_RET(void) Process();
    MAKE_RET(void) Disconnect();
    MAKE_RET(ErrorCode) ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    MAKE_RET(bool) Send(const char* szBuffer);
    MAKE_RET(int) Receive(char* szBuffer, int nBufferLen);
};

END_PACK

#endif // HTTPCLIENT_HPP_