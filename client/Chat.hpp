#ifndef CHAT_HPP_
#define CHAT_HPP_

#include "common.hpp"

BEGIN_PACK

class Chat {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetMode)> GetMode_hook{ GetAddress(0x60B40) }; GetMode_hook.before.connect(GetMode);
        static kthook::kthook_t<decltype(&SwitchMode)> SwitchMode_hook{ GetAddress(0x60B50) }; SwitchMode_hook.before.connect(SwitchMode);
        static kthook::kthook_t<decltype(&RecalcFontSize)> RecalcFontSize_hook{ GetAddress(0x669A0) }; RecalcFontSize_hook.before.connect(RecalcFontSize);
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x66A20) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&UpdateScrollbar)> UpdateScrollbar_hook{ GetAddress(0x66A80) }; UpdateScrollbar_hook.before.connect(UpdateScrollbar);
        static kthook::kthook_t<decltype(&SetPageSize)> SetPageSize_hook{ GetAddress(0x66B20) }; SetPageSize_hook.before.connect(SetPageSize);
        static kthook::kthook_t<decltype(&PageUp)> PageUp_hook{ GetAddress(0x66B50) }; PageUp_hook.before.connect(PageUp);
        static kthook::kthook_t<decltype(&PageDown)> PageDown_hook{ GetAddress(0x66BB0) }; PageDown_hook.before.connect(PageDown);
        static kthook::kthook_t<decltype(&ScrollToBottom)> ScrollToBottom_hook{ GetAddress(0x66C10) }; ScrollToBottom_hook.before.connect(ScrollToBottom);
        static kthook::kthook_t<decltype(&Scroll)> Scroll_hook{ GetAddress(0x66C40) }; Scroll_hook.before.connect(Scroll);
        static kthook::kthook_t<decltype(&FilterOutInvalidChars)> FilterOutInvalidChars_hook{ GetAddress(0x66CA0) }; FilterOutInvalidChars_hook.before.connect(FilterOutInvalidChars);
        static kthook::kthook_t<decltype(&PushBack)> PushBack_hook{ GetAddress(0x66CD0) }; PushBack_hook.before.connect(PushBack);
        static kthook::kthook_t<decltype(&Log)> Log_hook{ GetAddress(0x67050) }; Log_hook.before.connect(Log);
        static kthook::kthook_t<decltype(&ResetDialogControls)> ResetDialogControls_hook{ GetAddress(0x67120) }; ResetDialogControls_hook.before.connect(ResetDialogControls);
        static kthook::kthook_t<decltype(&Render)> Render_hook{ GetAddress(0x671C0) }; Render_hook.before.connect(Render);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x67680) }; Draw_hook.before.connect(Draw);
        static kthook::kthook_t<decltype(&RenderToSurface)> RenderToSurface_hook{ GetAddress(0x67750) }; RenderToSurface_hook.before.connect(RenderToSurface);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x67A50) }; OnResetDevice_hook.before.connect(OnResetDevice);
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

    CFonts*               m_pFontRenderer;
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

    
    Chat(IDirect3DDevice9* pDevice, CFonts* pFontRenderer, const char* szLogPath);
    ~Chat();

    MAKE_RET(int) GetMode();
    MAKE_RET(void) SwitchMode();
    MAKE_RET(void) RecalcFontSize();
    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) UpdateScrollbar();
    MAKE_RET(void) SetPageSize(int nValue);
    MAKE_RET(void) PageUp();
    MAKE_RET(void) PageDown();
    MAKE_RET(void) ScrollToBottom();
    MAKE_RET(void) Scroll(int nDelta);
    MAKE_RET(void) FilterOutInvalidChars(char* szString);
    MAKE_RET(void) PushBack();
    MAKE_RET(void) Log(int nType, const char* szText, const char* szPrefix);
    MAKE_RET(void) ResetDialogControls(CDXUTDialog* pGameUi);
    MAKE_RET(void) Render();
    MAKE_RET(void) Draw();
    MAKE_RET(void) RenderToSurface();
    MAKE_RET(void) OnResetDevice();
};

END_PACK

#endif // CHAT_HPP_