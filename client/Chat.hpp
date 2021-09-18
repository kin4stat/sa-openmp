#ifndef CHAT_HPP_
#define CHAT_HPP_

#include "common.hpp"
#include "Rect.hpp"
#include "Fonts.hpp"

BEGIN_PACK

class Chat {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Chat", "GetMode", GetAddress(0x60B40), &Chat::GetMode);
        ReversibleHooks::Install("Chat", "SwitchMode", GetAddress(0x60B50), &Chat::SwitchMode);
        ReversibleHooks::Install("Chat", "RecalcFontSize", GetAddress(0x669A0), &Chat::RecalcFontSize);
        ReversibleHooks::Install("Chat", "OnLostDevice", GetAddress(0x66A20), &Chat::OnLostDevice);
        ReversibleHooks::Install("Chat", "UpdateScrollbar", GetAddress(0x66A80), &Chat::UpdateScrollbar);
        ReversibleHooks::Install("Chat", "SetPageSize", GetAddress(0x66B20), &Chat::SetPageSize);
        ReversibleHooks::Install("Chat", "PageUp", GetAddress(0x66B50), &Chat::PageUp);
        ReversibleHooks::Install("Chat", "PageDown", GetAddress(0x66BB0), &Chat::PageDown);
        ReversibleHooks::Install("Chat", "ScrollToBottom", GetAddress(0x66C10), &Chat::ScrollToBottom);
        ReversibleHooks::Install("Chat", "Scroll", GetAddress(0x66C40), &Chat::Scroll);
        ReversibleHooks::Install("Chat", "FilterOutInvalidChars", GetAddress(0x66CA0), &Chat::FilterOutInvalidChars);
        ReversibleHooks::Install("Chat", "PushBack", GetAddress(0x66CD0), &Chat::PushBack);
        ReversibleHooks::Install("Chat", "Log", GetAddress(0x67050), &Chat::Log);
        ReversibleHooks::Install("Chat", "ResetDialogControls", GetAddress(0x67120), &Chat::ResetDialogControls);
        ReversibleHooks::Install("Chat", "Render", GetAddress(0x671C0), &Chat::Render);
        ReversibleHooks::Install("Chat", "Draw", GetAddress(0x67680), &Chat::Draw);
        ReversibleHooks::Install("Chat", "RenderToSurface", GetAddress(0x67750), &Chat::RenderToSurface);
        ReversibleHooks::Install("Chat", "OnResetDevice", GetAddress(0x67A50), &Chat::OnResetDevice);
    }


    enum EntryType {
        ENTRY_TYPE_NONE = 0,
        ENTRY_TYPE_CHAT = 1 << 1,
        ENTRY_TYPE_INFO = 1 << 2,
        ENTRY_TYPE_DEBUG = 1 << 3
    };
    enum DisplayMode {
        DISPLAY_MODE_OFF,
        DISPLAY_MODE_NOSHADOW,
        DISPLAY_MODE_NORMAL
    };
    enum { MAX_MESSAGES = 100 };

    unsigned int    m_nPageSize;
    char*           m_szLastMessage;
    int             m_nMode;
    bool            m_bTimestamps;
    BOOL            m_bDoesLogExist;
    char            m_szLogPath[261]; // MAX_PATH(+1)
    CDXUTDialog*    m_pGameUi;
    CDXUTEditBox*   m_pEditbox;
    CDXUTScrollBar* m_pScrollbar;
    D3DCOLOR        m_textColor;  // 0xFFFFFFFF
    D3DCOLOR        m_infoColor;  // 0xFF88AA62
    D3DCOLOR        m_debugColor; // 0xFFA9C4E4
    long            m_nWindowBottom;

    struct ChatEntry {
        __int32  m_timestamp;
        char     m_szPrefix[28];
        char     m_szText[144];
        char     unused[64];
        int      m_nType;
        D3DCOLOR m_textColor;
        D3DCOLOR m_prefixColor;
    };
    ChatEntry m_entry[MAX_MESSAGES];

    Fonts*               m_pFontRenderer;
    ID3DXSprite*          m_pTextSprite;
    ID3DXSprite*          m_pSprite;
    IDirect3DDevice9*     m_pDevice;
    BOOL                  m_bRenderToSurface;
    ID3DXRenderToSurface* m_pRenderToSurface;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DSurface9*    m_pSurface;
#ifdef _d3d9TYPES_H_
    D3DDISPLAYMODE m_displayMode;
#else
    unsigned int m_displayMode[4];
#endif
    int  pad_[2];
    BOOL m_bRedraw;
    long m_nScrollbarPos;
    long m_nCharHeight; // this is the height of the "Y"
    long m_nTimestampWidth;

    
    Chat(IDirect3DDevice9* pDevice, Fonts* pFontRenderer, const char* szLogPath);
    ~Chat();

    int GetMode();
    void SwitchMode();
    void RecalcFontSize();
    void OnLostDevice();
    void UpdateScrollbar();
    void SetPageSize(int nValue);
    void PageUp();
    void PageDown();
    void ScrollToBottom();
    void Scroll(int nDelta);
    void FilterOutInvalidChars(char* szString);
    void PushBack();
    void Log(int nType, const char* szText, const char* szPrefix);
    void ResetDialogControls(CDXUTDialog* pGameUi);
    void Render();
    void Draw();
    void RenderToSurface();
    void OnResetDevice();
};

END_PACK

#endif // CHAT_HPP_