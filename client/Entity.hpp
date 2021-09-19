#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "common.hpp"
#include "Matrix.hpp"

#include "CEntity.h"
#include "CVector.h"

BEGIN_PACK

class Entity {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Entity", "GetMatrix", GetAddress(0x9E400), &Entity::GetMatrix);
        ReversibleHooks::Install("Entity", "SetMatrix", GetAddress(0x9E4B0), &Entity::SetMatrix);
        ReversibleHooks::Install("Entity", "GetSpeed", GetAddress(0x9E5D0), &Entity::GetSpeed);
        ReversibleHooks::Install("Entity", "SetSpeed", GetAddress(0x9E600), &Entity::SetSpeed);
        ReversibleHooks::Install("Entity", "GetTurnSpeed", GetAddress(0x9E720), &Entity::GetTurnSpeed);
        ReversibleHooks::Install("Entity", "SetTurnSpeed", GetAddress(0x9E750), &Entity::SetTurnSpeed);
        ReversibleHooks::Install("Entity", "ApplyTurnSpeed", GetAddress(0x9E780), &Entity::ApplyTurnSpeed);
        ReversibleHooks::Install("Entity", "GetDistanceFromCentreOfMassToBaseOfModel", GetAddress(0x9E7A0), &Entity::GetDistanceFromCentreOfMassToBaseOfModel);
        ReversibleHooks::Install("Entity", "GetBoundCentre", GetAddress(0x9E7E0), &Entity::GetBoundCentre);
        ReversibleHooks::Install("Entity", "SetModelIndex", GetAddress(0x9E840), &Entity::SetModelIndex);
        ReversibleHooks::Install("Entity", "GetModelIndex", GetAddress(0x9E920), &Entity::GetModelIndex);
        ReversibleHooks::Install("Entity", "Teleport", GetAddress(0x9E930), &Entity::Teleport);
        ReversibleHooks::Install("Entity", "GetDistanceToLocalPlayer", GetAddress(0x9E9B0), &Entity::GetDistanceToLocalPlayer);
        ReversibleHooks::Install("Entity", "GetDistanceToCamera", GetAddress(0x9EA80), &Entity::GetDistanceToCamera);
        ReversibleHooks::Install("Entity", "GetDistanceToPoint", GetAddress(0x9EBA0), &Entity::GetDistanceToPoint);
        ReversibleHooks::Install("Entity", "DoesExist", GetAddress(0x9ECC0), &Entity::DoesExist);
        ReversibleHooks::Install("Entity", "EnforceWorldBoundries", GetAddress(0x9ED10), &Entity::EnforceWorldBoundries);
        ReversibleHooks::Install("Entity", "HasExceededWorldBoundries", GetAddress(0x9EEB0), &Entity::HasExceededWorldBoundries);
        ReversibleHooks::Install("Entity", "GetEulerInverted", GetAddress(0x9F1E0), &Entity::GetEulerInverted);
        ReversibleHooks::Install("Entity", "IsIgnored", GetAddress(0x9F5D0), &Entity::IsIgnored);
        ReversibleHooks::Install("Entity", "IsStationary", GetAddress(0x9F6D0), &Entity::IsStationary);
        ReversibleHooks::Install("Entity", "GetCollisionFlag", GetAddress(0x9EF50), &Entity::GetCollisionFlag);
        ReversibleHooks::Install("Entity", "SetCollisionFlag", GetAddress(0x9EF20), &Entity::SetCollisionFlag);
        ReversibleHooks::Install("Entity", "GetRwObject", GetAddress(0x9F350), &Entity::GetRwObject);
        ReversibleHooks::Install("Entity", "DeleteRwObject", GetAddress(0x9F4A0), &Entity::DeleteRwObject);
        ReversibleHooks::Install("Entity", "UpdateRwFrame", GetAddress(0x9E570), &Entity::UpdateRwFrame);
        ReversibleHooks::Install("Entity", "GetDistanceToLocalPlayerNoHeight", GetAddress(0x9EAE0), &Entity::GetDistanceToLocalPlayerNoHeight);
        ReversibleHooks::Install("Entity", "SetCollisionProcessed", GetAddress(0x9EF70), &Entity::SetCollisionProcessed);
    }


    // void **m_lpVtbl = samp.dll+0xEC28C;
    char       pad_4[60];
    ::CEntity* m_pGameEntity;
    GTAREF     m_handle;

    
    Entity();

    virtual ~Entity() = 0;
    virtual void Add() = 0;    // adds entity to the game world
    virtual void Remove() = 0; // removes entity from the game world

    void GetMatrix(Matrix* pMatrix);
    void SetMatrix(Matrix matrix);
    void GetSpeed(CVector* pVec);
    void SetSpeed(CVector vec);
    void GetTurnSpeed(CVector* pVec);
    void SetTurnSpeed(CVector vec);
    void ApplyTurnSpeed();
    float GetDistanceFromCentreOfMassToBaseOfModel();
    void GetBoundCentre(CVector* pVec);
    void SetModelIndex(int nModel);
    int GetModelIndex();
    void Teleport(CVector position);
    float GetDistanceToLocalPlayer();
    float GetDistanceToCamera();
    float GetDistanceToPoint(CVector position);
    BOOL DoesExist();
    BOOL EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    BOOL HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    void GetEulerInverted(float* x, float* y, float* z);
    BOOL IsIgnored();
    BOOL IsStationary();
    BOOL GetCollisionFlag();
    void SetCollisionFlag(BOOL bEnable);
    RwObject* GetRwObject();
    void DeleteRwObject();
    void UpdateRwFrame();
    float GetDistanceToLocalPlayerNoHeight();
    void SetCollisionProcessed(BOOL bProcessed);
};

END_PACK

#endif // ENTITY_HPP_