#ifndef CHATBUBBLE_HPP_
#define CHATBUBBLE_HPP_

#include "common.hpp"

BEGIN_PACK

class ChatBubble {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x66760) }; Draw_hook.before.connect(Draw);
    }



    ~ChatBubble();

    MAKE_RET(void) Draw();
};

END_PACK

#endif // CHATBUBBLE_HPP_