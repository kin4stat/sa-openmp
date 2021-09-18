#ifndef TEXTDRAWPOOL_HPP_
#define TEXTDRAWPOOL_HPP_

#include "common.hpp"
#include "TextDraw.hpp"

BEGIN_PACK

class TextDrawPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("TextDrawPool", "Delete", GetAddress(0x1E0A0), &TextDrawPool::Delete);
        ReversibleHooks::Install("TextDrawPool", "Draw", GetAddress(0x1E0E0), &TextDrawPool::Draw);
    }


    enum {
        MAX_TEXTDRAWS = 2048,
        MAX_LOCAL_TEXTDRAWS = 256
    };

    BOOL       m_bNotEmpty[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];
    TextDraw* m_pObject[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];

    
    TextDrawPool();
    ~TextDrawPool();

    void Delete(ID nId);
    void Draw();
};

END_PACK

#endif // TEXTDRAWPOOL_HPP_