#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include "common.hpp"

BEGIN_PACK

class Object {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetDistance)> GetDistance_hook{ GetAddress(0xA7730) }; GetDistance_hook.before.connect(GetDistance);
        static kthook::kthook_t<decltype(&Stop)> Stop_hook{ GetAddress(0xA77A0) }; Stop_hook.before.connect(Stop);
        static kthook::kthook_t<decltype(&SetRotation)> SetRotation_hook{ GetAddress(0xA7810) }; SetRotation_hook.before.connect(SetRotation);
        static kthook::kthook_t<decltype(&SetAttachedToVehicle)> SetAttachedToVehicle_hook{ GetAddress(0xA7880) }; SetAttachedToVehicle_hook.before.connect(SetAttachedToVehicle);
        static kthook::kthook_t<decltype(&AttachToVehicle)> AttachToVehicle_hook{ GetAddress(0xA79B0) }; AttachToVehicle_hook.before.connect(AttachToVehicle);
        static kthook::kthook_t<decltype(&AttachToObject)> AttachToObject_hook{ GetAddress(0xA7A30) }; AttachToObject_hook.before.connect(AttachToObject);
        static kthook::kthook_t<decltype(&Rotate)> Rotate_hook{ GetAddress(0xA7B30) }; Rotate_hook.before.connect(Rotate);
        static kthook::kthook_t<decltype(&AttachedToMovingEntity)> AttachedToMovingEntity_hook{ GetAddress(0xA7C30) }; AttachedToMovingEntity_hook.before.connect(AttachedToMovingEntity);
        static kthook::kthook_t<decltype(&GetMaterialSize)> GetMaterialSize_hook{ GetAddress(0xA83F0) }; GetMaterialSize_hook.before.connect(GetMaterialSize);
        static kthook::kthook_t<decltype(&Render)> Render_hook{ GetAddress(0xA86D0) }; Render_hook.before.connect(Render);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0xA8DC0) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&ConstructMaterialText)> ConstructMaterialText_hook{ GetAddress(0xA9650) }; ConstructMaterialText_hook.before.connect(ConstructMaterialText);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0xA9700) }; Draw_hook.before.connect(Draw);
        static kthook::kthook_t<decltype(&ShutdownMaterialText)> ShutdownMaterialText_hook{ GetAddress(0xA8640) }; ShutdownMaterialText_hook.before.connect(ShutdownMaterialText);
    }


    // void **m_lpVtbl = 0xECD1C;
    char    pad_0[6];
    int     m_nModel;
    char    pad_1;
    bool    m_bDontCollideWithCamera;
    float   m_fDrawDistance;
    float   field_0;
    CVector m_position;
    float   m_fDistanceToCamera;
    bool    m_bDrawLast;
    char    pad_2[64];
    CVector m_rotation;
    char    pad_3[5];
    ID      m_nAttachedToVehicle;
    ID      m_nAttachedToObject;
    CVector m_attachOffset;
    CVector m_attachRotation;
    char    field_1;
    CMatrix m_targetMatrix;
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

    
    Object(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12);
    ~Object();

    MAKE_RET(float) GetDistance(const CMatrix* pMatrix);
    MAKE_RET(void) Stop();
    MAKE_RET(void) SetRotation(const CVector* pVector);
    MAKE_RET(void) SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation);
    MAKE_RET(void) AttachToVehicle(CVehicle* pVehicle);
    MAKE_RET(void) AttachToObject(CObject* pObject);
    MAKE_RET(void) Rotate(CVector vector);
    MAKE_RET(BOOL) AttachedToMovingEntity();
    MAKE_RET(bool) GetMaterialSize(int nSize, int* x, int* y);
    MAKE_RET(void) Render();
    MAKE_RET(void) Process(float fElapsedTime);
    MAKE_RET(void) ConstructMaterialText();
    MAKE_RET(void) Draw();
    MAKE_RET(void) ShutdownMaterialText();
};

END_PACK

#endif // OBJECT_HPP_