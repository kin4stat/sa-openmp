#include "HttpClient.hpp"

MAKE_RET(bool) HttpClient::GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(void) HttpClient::InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {

    return true;
}

MAKE_RET(void) HttpClient::HandleEntity() {

    return true;
}

MAKE_RET(bool) HttpClient::Connect(const char* szHost, int nPort) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(void) HttpClient::Process() {

    return true;
}

MAKE_RET(void) HttpClient::Disconnect() {

    return true;
}

MAKE_RET(ErrorCode) HttpClient::ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {

    return kthook::return_value<ErrorCode>::make_true();
}

MAKE_RET(bool) HttpClient::Send(const char* szBuffer) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(int) HttpClient::Receive(char* szBuffer, int nBufferLen) {

    return kthook::return_value<int>::make_true();
}

