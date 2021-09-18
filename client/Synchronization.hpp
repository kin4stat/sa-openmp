/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.hpp"
#include "Vector.hpp"
#include "Animation.hpp"
#include "ControllerState.hpp"

BEGIN_PACK

namespace Synchronization {
    struct OnfootData {
        ControllerState m_controllerState;
        Vector         m_position;
        float           m_fQuaternion[4];
        unsigned char   m_nHealth;
        unsigned char   m_nArmor;
        unsigned char   m_nCurrentWeapon;
        unsigned char   m_nSpecialAction;
        Vector         m_speed;
        Vector         m_surfingOffset;
        ID              m_nSurfingVehicleId;
        Animation       m_animation;
    };

    struct IncarData {
        ID              m_nVehicle;
        ControllerState m_controllerState;
        float           m_fQuaternion[4];
        Vector         m_position;
        Vector         m_speed;
        float           m_fHealth;
        unsigned char   m_nDriverHealth;
        unsigned char   m_nDriverArmor;
        unsigned char   m_nCurrentWeapon;
        bool            m_bSirenEnabled;
        bool            m_bLandingGear;
        ID              m_nTrailerId;
        union {
            unsigned short m_aHydraThrustAngle[2];
            float          m_fTrainSpeed;
        };
    };

    struct AimData {
        enum WeaponState {
            WS_NO_BULLETS = 0,
            WS_LAST_BULLET = 1,
            WS_MORE_BULLETS = 2,
            WS_RELOADING = 3,
        };

        unsigned char m_nCameraMode;
        Vector       m_aimf1;
        Vector       m_aimPos;
        float         m_fAimZ;
        unsigned char m_nCameraExtZoom : 6;
        unsigned char m_nWeaponState : 2;
        char          m_nAspectRatio;
    };

    struct TrailerData {
        ID      m_nId;
        Vector m_position;
        float   m_fQuaternion[4];
        Vector m_speed;
        Vector m_turnSpeed;
    };

    struct PassengerData {
        ID              m_nVehicleId;
        unsigned char   m_nSeatId; // flags
        unsigned char   m_nCurrentWeapon;
        unsigned char   m_nHealth;
        unsigned char   m_nArmor;
        ControllerState m_controllerState;
        Vector         m_position;
    };

    struct UnoccupiedData {
        ID            m_nVehicleId;
        unsigned char m_nSeatId;
        Vector       m_roll;
        Vector       m_direction;
        Vector       m_position;
        Vector       m_speed;
        Vector       m_turnSpeed;
        float         m_fHealth;
    };

    struct BulletData {
        unsigned char m_nTargetType;
        ID            m_nTargetId;
        Vector       m_origin;
        Vector       m_target;
        Vector       m_center;
        unsigned char m_nWeapon;
    };

    struct SpectatorData {
        ControllerState m_controllerState;
        Vector         m_position;
    };

    struct StatsData {
        int m_nMoney;
        int m_nDrunkLevel;
    };

    inline char CompressAspectRatio(float v) {
        return static_cast<char>(v * 255.0f);
    }

    inline float DecompressAspectRatio(char v) {
        return v / 255.0f;
    }

    inline unsigned char CompressCameraExtZoom(float v) {
        return static_cast<unsigned char>(v * 63.0f) & 63;
    }

    inline float DecompressCameraExtZoom(unsigned char v) {
        return (v & 63) / 63.0f;
    }

    /*
		a structure in this block has dynamic size
		
		struct SAMPAPI_EXPORT WeaponsData {
			ID m_nAimedPlayer;
			ID m_nAimedActor;

			struct {
				char m_nSlot;
				char m_nWeapon;
				unsigned short m_nAmmo;
			} m_aWeapons[n]; // 0 < n < 14
		};

		struct SAMPAPI_EXPORT RconCommand {
			unsigned long m_nTextLen;
			char m_szText[m_nTextLen];
		};

		struct SAMPAPI_EXPORT MarkersData {
			bool m_bCreate; // create(1)/remove(0)
			int m_nCount;

			struct {
				ID m_nPlayer;
				VectorCompressed m_vPos;
			} m_aMarkers[m_nCount];
		};
	*/

#if defined(__RAK_CLIENT_H)
    template<class T>
    void Send(T packet) {
        RakNet::BitStream bs;

        bs.Write(T::ID);
        bs.Write(packet);

        pNetGame->m_pRakClient->Send(&bs, HIGH_PRIORITY, RELIABLE, 0);
    }
#endif
} // namespace Synchronization

END_PACK