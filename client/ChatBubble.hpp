#ifndef CHATBUBBLE_HPP_
#define CHATBUBBLE_HPP_

#include "common.hpp"

BEGIN_PACK

class ChatBubble {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("ChatBubble", "Draw", GetAddress(0x66760), &ChatBubble::Draw);
    }


    struct Player {
        BOOL     m_bExists;
        char     m_szText[256];
        int      m_creationTick;
        int      m_lifeSpan;
        D3DCOLOR m_color;
        float    m_fDrawDistance;
        int      m_nMaxLineLength;
    } m_player[1004];

    
    ChatBubble();
    ~ChatBubble();

    void Draw();
};

END_PACK

#endif // CHATBUBBLE_HPP_