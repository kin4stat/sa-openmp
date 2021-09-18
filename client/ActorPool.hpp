#ifndef ACTORPOOL_HPP_
#define ACTORPOOL_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Actor.hpp"

BEGIN_PACK

class ActorPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("ActorPool", "Get", GetAddress(0x1600), &ActorPool::Get);
        ReversibleHooks::Install("ActorPool", "DoesExist", GetAddress(0x1630), &ActorPool::DoesExist);
        ReversibleHooks::Install("ActorPool", "UpdateLargestId", GetAddress(0x1650), &ActorPool::UpdateLargestId);
        ReversibleHooks::Install("ActorPool", "Delete", GetAddress(0x16E0), &ActorPool::Delete);
        ReversibleHooks::Install("ActorPool", "Create", GetAddress(0x18F0), &ActorPool::Create);
    }


    enum { MAX_ACTORS = 1000 };

    int     m_nLargestId;
    Actor* m_pObject[MAX_ACTORS];
    BOOL    m_bNotEmpty[MAX_ACTORS];
    ::CPed* m_pGameObject[MAX_ACTORS];
    int     pad_2ee4[MAX_ACTORS];
    int     pad_3e84[MAX_ACTORS];

    
    ActorPool();
    ~ActorPool();

    Actor* Get(ID nId);
    BOOL DoesExist(ID nId);
    void UpdateLargestId();
    BOOL Delete(ID nId);
    BOOL Create(ActorInfo* pInfo);
};

END_PACK

#endif // ACTORPOOL_HPP_