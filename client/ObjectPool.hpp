#ifndef OBJECTPOOL_HPP_
#define OBJECTPOOL_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Object.hpp"

BEGIN_PACK

class ObjectPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("ObjectPool", "UpdateLargestId", GetAddress(0x12450), &ObjectPool::UpdateLargestId);
        ReversibleHooks::Install("ObjectPool", "GetCount", GetAddress(0x124E0), &ObjectPool::GetCount);
        ReversibleHooks::Install("ObjectPool", "Delete", GetAddress(0x12500), &ObjectPool::Delete);
        ReversibleHooks::Install("ObjectPool", "Create", GetAddress(0x12580), &ObjectPool::Create);
        ReversibleHooks::Install("ObjectPool", "Process", GetAddress(0x12700), &ObjectPool::Process);
        ReversibleHooks::Install("ObjectPool", "ConstructMaterials", GetAddress(0x127C0), &ObjectPool::ConstructMaterials);
        ReversibleHooks::Install("ObjectPool", "ShutdownMaterials", GetAddress(0x12800), &ObjectPool::ShutdownMaterials);
        ReversibleHooks::Install("ObjectPool", "Draw", GetAddress(0x12840), &ObjectPool::Draw);
        ReversibleHooks::Install("ObjectPool", "DrawLast", GetAddress(0x12880), &ObjectPool::DrawLast);
        ReversibleHooks::Install("ObjectPool", "Get", GetAddress(0x2DC0), &ObjectPool::Get);
    }


    enum { MAX_OBJECTS = 1000 };

    int      m_nLargestId;
    BOOL     m_bNotEmpty[MAX_OBJECTS];
    Object* m_pObject[MAX_OBJECTS];

    
    ObjectPool();
    ~ObjectPool();

    void UpdateLargestId();
    int GetCount();
    BOOL Delete(ID nId);
    BOOL Create(ID nId, int nModel, Vector position, Vector rotation, float fDrawDistance);
    void Process();
    void ConstructMaterials();
    void ShutdownMaterials();
    void Draw();
    void DrawLast();
    Object* Get(ID nId);
};

END_PACK

#endif // OBJECTPOOL_HPP_