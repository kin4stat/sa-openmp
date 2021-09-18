#ifndef FONT_HPP_
#define FONT_HPP_

#include "common.hpp"

BEGIN_PACK

class Font {
public:
    static void InjectHooks() {
    }


    // void **m_lpVtbl = 0xEA3B8;
    ID3DXFont* m_pFont;

    
    Font();
    ~Font();

};

END_PACK

#endif // FONT_HPP_