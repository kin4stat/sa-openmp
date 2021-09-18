#ifndef MENU_HPP_
#define MENU_HPP_

#include "common.hpp"

BEGIN_PACK

class Menu {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&AddItem)> AddItem_hook{ GetAddress(0xA6D80) }; AddItem_hook.before.connect(AddItem);
        static kthook::kthook_t<decltype(&SetColumnTitle)> SetColumnTitle_hook{ GetAddress(0xA6DB0) }; SetColumnTitle_hook.before.connect(SetColumnTitle);
        static kthook::kthook_t<decltype(&Hide)> Hide_hook{ GetAddress(0xA6DE0) }; Hide_hook.before.connect(Hide);
        static kthook::kthook_t<decltype(&GetItem)> GetItem_hook{ GetAddress(0xA6E00) }; GetItem_hook.before.connect(GetItem);
        static kthook::kthook_t<decltype(&GetTitle)> GetTitle_hook{ GetAddress(0xA6E20) }; GetTitle_hook.before.connect(GetTitle);
        static kthook::kthook_t<decltype(&MS)> MS_hook{ GetAddress(0xA6E50) }; MS_hook.before.connect(MS);
        static kthook::kthook_t<decltype(&GetActiveRow)> GetActiveRow_hook{ GetAddress(0xA6E80) }; GetActiveRow_hook.before.connect(GetActiveRow);
        static kthook::kthook_t<decltype(&Show)> Show_hook{ GetAddress(0xA6EB0) }; Show_hook.before.connect(Show);
    }


    enum {
        MAX_MENU_ITEMS = 12,
        MAX_COLUMNS = 2,
        MAX_MENU_LINE = 32,
    };

    struct Interaction {
        BOOL m_bMenu;
        BOOL m_bRow[MAX_MENU_ITEMS];
        BOOL m_bPadding[8 - ((MAX_MENU_ITEMS + 1) % 8)];
    };

    unsigned char m_nId;
    char          m_szTitle[MAX_MENU_LINE];
    char          m_szItems[MAX_MENU_ITEMS][MAX_COLUMNS][MAX_MENU_LINE];
    char          m_szHeader[MAX_COLUMNS][MAX_MENU_LINE];
    float         m_fPosX;
    float         m_fPosY;
    float         m_fFirstColumnWidth;
    float         m_fSecondColumnWidth;
    unsigned char m_nColumns;
    Interaction   m_interaction;
    unsigned char m_nColumnCount[MAX_COLUMNS];
    GTAREF        m_panel;

    
    Menu(const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction);
    ~Menu();

    MAKE_RET(void) AddItem(NUMBER nColumn, NUMBER nRow, const char* szText);
    MAKE_RET(void) SetColumnTitle(NUMBER nColumn, const char* szText);
    MAKE_RET(void) Hide();
    MAKE_RET(char*) GetItem(NUMBER nColumn, NUMBER nRow);
    MAKE_RET(char*) GetTitle();
    MAKE_RET(char*) MS(NUMBER nColumn, NUMBER nRow);
    MAKE_RET(char) GetActiveRow();
    MAKE_RET(void) Show();
};

END_PACK

#endif // MENU_HPP_