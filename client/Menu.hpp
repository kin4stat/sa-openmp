#ifndef MENU_HPP_
#define MENU_HPP_

#include "common.hpp"

BEGIN_PACK

class Menu {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Menu", "AddItem", GetAddress(0xA6D80), &Menu::AddItem);
        ReversibleHooks::Install("Menu", "SetColumnTitle", GetAddress(0xA6DB0), &Menu::SetColumnTitle);
        ReversibleHooks::Install("Menu", "Hide", GetAddress(0xA6DE0), &Menu::Hide);
        ReversibleHooks::Install("Menu", "GetItem", GetAddress(0xA6E00), &Menu::GetItem);
        ReversibleHooks::Install("Menu", "GetTitle", GetAddress(0xA6E20), &Menu::GetTitle);
        ReversibleHooks::Install("Menu", "MS", GetAddress(0xA6E50), &Menu::MS);
        ReversibleHooks::Install("Menu", "GetActiveRow", GetAddress(0xA6E80), &Menu::GetActiveRow);
        ReversibleHooks::Install("Menu", "Show", GetAddress(0xA6EB0), &Menu::Show);
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

    void AddItem(NUMBER nColumn, NUMBER nRow, const char* szText);
    void SetColumnTitle(NUMBER nColumn, const char* szText);
    void Hide();
    char* GetItem(NUMBER nColumn, NUMBER nRow);
    char* GetTitle();
    char* MS(NUMBER nColumn, NUMBER nRow);
    char GetActiveRow();
    void Show();
};

END_PACK

#endif // MENU_HPP_