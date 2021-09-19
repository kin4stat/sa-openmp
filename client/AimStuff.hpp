/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.hpp"

#include "CVector.h"

BEGIN_PACK

namespace AimStuff {
    struct Aim {
        CVector front;
        CVector source;
        CVector sourceBeforeLookBehind;
        CVector up;
    };

    float& RefLocalPlayerCameraExtZoom();
    float& RefLocalPlayerAspectRatio();
    float*& RefInternalCameraExtZoom();
    float*& RefInternalAspectRatio();
    float* ArrayCameraExtZoom();
    float* ArrayAspectRatio();
    char* ArrayCameraMode();
    char*& RefInternalCameraMode();
    Aim& RefLocalPlayerAim();
    Aim* ArrayPlayerAim();
    Aim*& RefInternalAim();

    void  UpdateCameraExtZoomAndAspectRatio();
    void  ApplyCameraExtZoomAndAspectRatio();
    void  SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio);
    float GetAspectRatio();
    float GetCameraExtZoom();
    void  ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer);
    void  SetCameraMode(char nMode, NUMBER nPlayer);
    char  GetCameraMode(NUMBER nPlayer);
    char  GetCameraMode();
    void  Initialize();
    void  UpdateAim();
    void  ApplyAim();
    Aim* GetAim();
    void SetAim(int nPlayer, const Aim* pAim);
    void ApplyAim(int nPlayer);
    Aim* GetAim(int nPlayer);
} // namespace AimStuff

END_PACK
