#include "HttpClient.hpp"

HttpClient::HttpClient() {

}
bool HttpClient::GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen) {

    return bool{};
}

void HttpClient::InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {

    return;
}

void HttpClient::HandleEntity() {

    return;
}

bool HttpClient::Connect(const char* szHost, int nPort) {

    return bool{};
}

void HttpClient::Process() {

    return;
}

void HttpClient::Disconnect() {

    return;
}

ErrorCode HttpClient::ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {

    return ErrorCode{};
}

bool HttpClient::Send(const char* szBuffer) {

    return bool{};
}

int HttpClient::Receive(char* szBuffer, int nBufferLen) {

    return int{};
}

