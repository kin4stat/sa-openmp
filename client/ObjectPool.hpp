#ifndef OBJECTPOOL_HPP_
#define OBJECTPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class ObjectPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&UpdateLargestId)> UpdateLargestId_hook{ GetAddress(0x12450) }; UpdateLargestId_hook.before.connect(UpdateLargestId);
        static kthook::kthook_t<decltype(&GetCount)> GetCount_hook{ GetAddress(0x124E0) }; GetCount_hook.before.connect(GetCount);
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x12500) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x12580) }; Create_hook.before.connect(Create);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x12700) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&ConstructMaterials)> ConstructMaterials_hook{ GetAddress(0x127C0) }; ConstructMaterials_hook.before.connect(ConstructMaterials);
        static kthook::kthook_t<decltype(&ShutdownMaterials)> ShutdownMaterials_hook{ GetAddress(0x12800) }; ShutdownMaterials_hook.before.connect(ShutdownMaterials);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x12840) }; Draw_hook.before.connect(Draw);
        static kthook::kthook_t<decltype(&DrawLast)> DrawLast_hook{ GetAddress(0x12880) }; DrawLast_hook.before.connect(DrawLast);
        static kthook::kthook_t<decltype(&Get)> Get_hook{ GetAddress(0x2DC0) }; Get_hook.before.connect(Get);
    }



    ~ObjectPool();

    MAKE_RET(void) UpdateLargestId();
    MAKE_RET(int) GetCount();
    MAKE_RET(BOOL) Delete(ID nId);
    MAKE_RET(BOOL) Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance);
    MAKE_RET(void) Process();
    MAKE_RET(void) ConstructMaterials();
    MAKE_RET(void) ShutdownMaterials();
    MAKE_RET(void) Draw();
    MAKE_RET(void) DrawLast();
    MAKE_RET(CObject*) Get(ID nId);
};

END_PACK

#endif // OBJECTPOOL_HPP_