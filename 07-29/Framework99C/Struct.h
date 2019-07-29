#pragma once

#ifndef __STRUCT_H__

typedef struct tagLineInfo
{
	float fStartX, fStartY;
	float fEndX, fEndY;
}LINE_INFO;

typedef struct tagInfo
{
	float fX = 0.f;
	float fY = 0.f;
	float fCX = 0.f;
	float fCY = 0.f;
}INFO;

#define __STRUCT_H__
#endif
