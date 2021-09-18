#ifndef ACTORPOOL_HPP_
#define ACTORPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class ActorPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Get)> Get_hook{ GetAddress(0x1600) }; Get_hook.before.connect(Get);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0x1630) }; DoesExist_hook.before.connect(DoesExist);
        static kthook::kthook_t<decltype(&UpdateLargestId)> UpdateLargestId_hook{ GetAddress(0x1650) }; UpdateLargestId_hook.before.connect(UpdateLargestId);
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x16E0) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x18F0) }; Create_hook.before.connect(Create);
    }



    ~ActorPool();

    MAKE_RET(CActor*) Get(ID nId);
    MAKE_RET(BOOL) DoesExist(ID nId);
    MAKE_RET(void) UpdateLargestId();
    MAKE_RET(BOOL) Delete(ID nId);
    MAKE_RET(BOOL) Create(ActorInfo* pInfo);
};

END_PACK

#endif // ACTORPOOL_HPP_