#include "Menu.hpp"

Menu::Menu(const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction) {

}
MAKE_RET(void) Menu::AddItem(NUMBER nColumn, NUMBER nRow, const char* szText) {

    return true;
}

MAKE_RET(void) Menu::SetColumnTitle(NUMBER nColumn, const char* szText) {

    return true;
}

MAKE_RET(void) Menu::Hide() {

    return true;
}

MAKE_RET(char*) Menu::GetItem(NUMBER nColumn, NUMBER nRow) {

    return kthook::return_value<char*>::make_true();
}

MAKE_RET(char*) Menu::GetTitle() {

    return kthook::return_value<char*>::make_true();
}

MAKE_RET(char*) Menu::MS(NUMBER nColumn, NUMBER nRow) {

    return kthook::return_value<char*>::make_true();
}

MAKE_RET(char) Menu::GetActiveRow() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Menu::Show() {

    return true;
}

