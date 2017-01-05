#ifndef main_H_
#define main_H_

#include <stdio.h>
#include <3ds.h>
#include <citro3d.h>

/*
C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C3D_RenderTarget* target = C3D_RenderTargetCreate(240, 400, GPU_RB_RGB8, GPU_RB_DEPTH24_STENCIL8);
	C3D_RenderTargetSetClear(target, C3D_CLEAR_ALL, 0xFF0505, 0);
	u32 transferFlags = GX_TRANSFER_FLIP_VERT(false)|
		GX_TRANSFER_OUT_TILED(false)|
		GX_TRANSFER_RAW_COPY(false)|
		GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8)|
		GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGBA8)|
		GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_XY);

	C3D_RenderTargetSetOutput(target, GFX_TOP, GFX_LEFT, transferFlags);
*/

#endif // main_H_
