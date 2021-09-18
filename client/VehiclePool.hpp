#ifndef VEHICLEPOOL_HPP_
#define VEHICLEPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class VehiclePool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&UpdateCount)> UpdateCount_hook{ GetAddress(0x1E260) }; UpdateCount_hook.before.connect(UpdateCount);
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x1E330) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&ChangeInterior)> ChangeInterior_hook{ GetAddress(0x1E3B0) }; ChangeInterior_hook.before.connect(ChangeInterior);
        static kthook::kthook_t<decltype(&SetParams)> SetParams_hook{ GetAddress(0x1E3E0) }; SetParams_hook.before.connect(SetParams);
        static kthook::kthook_t<decltype(&GetRef)> GetRef_hook{ GetAddress(0x1E490) }; GetRef_hook.before.connect(GetRef);
        static kthook::kthook_t<decltype(&GetNearest)> GetNearest_hook{ GetAddress(0x1E520) }; GetNearest_hook.before.connect(GetNearest);
        static kthook::kthook_t<decltype(&GetNearest)> GetNearest_hook{ GetAddress(0x1E520) }; GetNearest_hook.before.connect(GetNearest);
        static kthook::kthook_t<decltype(&AddToWaitingList)> AddToWaitingList_hook{ GetAddress(0x1E5C0) }; AddToWaitingList_hook.before.connect(AddToWaitingList);
        static kthook::kthook_t<decltype(&ConstructLicensePlates)> ConstructLicensePlates_hook{ GetAddress(0x1E620) }; ConstructLicensePlates_hook.before.connect(ConstructLicensePlates);
        static kthook::kthook_t<decltype(&ShutdownLicensePlates)> ShutdownLicensePlates_hook{ GetAddress(0x1E690) }; ShutdownLicensePlates_hook.before.connect(ShutdownLicensePlates);
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x1E930) }; Create_hook.before.connect(Create);
        static kthook::kthook_t<decltype(&SendDestroyNotification)> SendDestroyNotification_hook{ GetAddress(0x1EAE0) }; SendDestroyNotification_hook.before.connect(SendDestroyNotification);
        static kthook::kthook_t<decltype(&ProcessWaitingList)> ProcessWaitingList_hook{ GetAddress(0x1EBC0) }; ProcessWaitingList_hook.before.connect(ProcessWaitingList);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x1EC80) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&Get)> Get_hook{ GetAddress(0x1110) }; Get_hook.before.connect(Get);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0x1140) }; DoesExist_hook.before.connect(DoesExist);
    }



    ~VehiclePool();

    MAKE_RET(void) UpdateCount();
    MAKE_RET(BOOL) Delete(ID nId);
    MAKE_RET(void) ChangeInterior(ID nId, int nInteriorId);
    MAKE_RET(void) SetParams(ID nId, bool bIsObjective, bool bIsLocked);
    MAKE_RET(GTAREF) GetRef(int nId);
    MAKE_RET(ID) GetNearest();
    MAKE_RET(ID) GetNearest(CVector point);
    MAKE_RET(void) AddToWaitingList(const VehicleInfo* pInfo);
    MAKE_RET(void) ConstructLicensePlates();
    MAKE_RET(void) ShutdownLicensePlates();
    MAKE_RET(BOOL) Create(VehicleInfo* pInfo);
    MAKE_RET(void) SendDestroyNotification(ID nId);
    MAKE_RET(void) ProcessWaitingList();
    MAKE_RET(void) Process();
    MAKE_RET(CVehicle*) Get(ID nId);
    MAKE_RET(BOOL) DoesExist(ID nId);
};

END_PACK

#endif // VEHICLEPOOL_HPP_