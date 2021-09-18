#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Matrix.hpp"
#include "Entity.hpp"

BEGIN_PACK

class Object {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Object", "GetDistance", GetAddress(0xA7730), &Object::GetDistance);
        ReversibleHooks::Install("Object", "Stop", GetAddress(0xA77A0), &Object::Stop);
        ReversibleHooks::Install("Object", "SetRotation", GetAddress(0xA7810), &Object::SetRotation);
        ReversibleHooks::Install("Object", "SetAttachedToVehicle", GetAddress(0xA7880), &Object::SetAttachedToVehicle);
        ReversibleHooks::Install("Object", "AttachToVehicle", GetAddress(0xA79B0), &Object::AttachToVehicle);
        ReversibleHooks::Install("Object", "AttachToObject", GetAddress(0xA7A30), &Object::AttachToObject);
        ReversibleHooks::Install("Object", "Rotate", GetAddress(0xA7B30), &Object::Rotate);
        ReversibleHooks::Install("Object", "AttachedToMovingEntity", GetAddress(0xA7C30), &Object::AttachedToMovingEntity);
        ReversibleHooks::Install("Object", "GetMaterialSize", GetAddress(0xA83F0), &Object::GetMaterialSize);
        ReversibleHooks::Install("Object", "Render", GetAddress(0xA86D0), &Object::Render);
        ReversibleHooks::Install("Object", "Process", GetAddress(0xA8DC0), &Object::Process);
        ReversibleHooks::Install("Object", "ConstructMaterialText", GetAddress(0xA9650), &Object::ConstructMaterialText);
        ReversibleHooks::Install("Object", "Draw", GetAddress(0xA9700), &Object::Draw);
        ReversibleHooks::Install("Object", "ShutdownMaterialText", GetAddress(0xA8640), &Object::ShutdownMaterialText);
    }


    // void **m_lpVtbl = 0xECD1C;
    char    pad_0[6];
    int     m_nModel;
    char    pad_1;
    bool    m_bDontCollideWithCamera;
    float   m_fDrawDistance;
    float   field_0;
    Vector m_position;
    float   m_fDistanceToCamera;
    bool    m_bDrawLast;
    char    pad_2[64];
    Vector m_rotation;
    char    pad_3[5];
    ID      m_nAttachedToVehicle;
    ID      m_nAttachedToObject;
    Vector m_attachOffset;
    Vector m_attachRotation;
    char    field_1;
    Matrix m_targetMatrix;
    char    pad_4[148];
    char    m_bMoving;
    float   m_fSpeed;
    char    pad_5[99];

    enum {
        MAX_MATERIALS = 16
    };
    enum MaterialType {
        MATERIAL_TYPE_NONE = 0,
        MATERIAL_TYPE_TEXTURE = 1,
        MATERIAL_TYPE_TEXT = 2
    };
    enum MaterialSize {
        MATERIAL_SIZE_32X32 = 10,
        MATERIAL_SIZE_64X32 = 20,
        MATERIAL_SIZE_64X64 = 30,
        MATERIAL_SIZE_128X32 = 40,
        MATERIAL_SIZE_128X64 = 50,
        MATERIAL_SIZE_128X128 = 60,
        MATERIAL_SIZE_256X32 = 70,
        MATERIAL_SIZE_256X64 = 80,
        MATERIAL_SIZE_256X128 = 90,
        MATERIAL_SIZE_256X256 = 100,
        MATERIAL_SIZE_512X64 = 110,
        MATERIAL_SIZE_512X128 = 120,
        MATERIAL_SIZE_512X256 = 130,
        MATERIAL_SIZE_512X512 = 140
    };

    struct ObjectMaterial {
        union {
            ::CSprite2d* m_pSprite[MAX_MATERIALS];
            ::RwTexture* m_pTextBackground[MAX_MATERIALS];
        };

        D3DCOLOR m_color[MAX_MATERIALS];
        char     pad_6[68];
        int      m_nType[MAX_MATERIALS];
        BOOL     m_bTextureWasCreated[MAX_MATERIALS];

        struct MaterialText {
            char     m_nMaterialIndex;
            char     pad_0[137];
            char     m_nMaterialSize;
            char     m_szFont[65];
            char     m_nFontSize;
            bool     m_bBold;
            D3DCOLOR m_fontColor;
            D3DCOLOR m_backgroundColor;
            char     m_align;
        };
        MaterialText       m_textInfo[MAX_MATERIALS];
        char*              m_szText[MAX_MATERIALS];
        IDirect3DTexture9* m_pBackgroundTexture[MAX_MATERIALS];
        IDirect3DTexture9* m_pTexture[MAX_MATERIALS];
    };
    ObjectMaterial m_material;

    BOOL m_bHasCustomMaterial;
    char pad_9[13];

    
    Object(int nModel, Vector position, Vector rotation, float fDrawDistance, int a10, char a11, char a12);
    ~Object();

    float GetDistance(const Matrix* pMatrix);
    void Stop();
    void SetRotation(const Vector* pVector);
    void SetAttachedToVehicle(ID nId, const Vector* pOffset, const Vector* pRotation);
    void AttachToVehicle(Vehicle* pVehicle);
    void AttachToObject(Object* pObject);
    void Rotate(Vector vector);
    BOOL AttachedToMovingEntity();
    bool GetMaterialSize(int nSize, int* x, int* y);
    void Render();
    void Process(float fElapsedTime);
    void ConstructMaterialText();
    void Draw();
    void ShutdownMaterialText();
};

END_PACK

#endif // OBJECT_HPP_