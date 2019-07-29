#pragma once

#ifndef __DEFINE_H__

#define PI 3.141592f
#define GRAVITY 9.8f

#define WINCX 800
#define WINCY 600

#define NO_EVENT 0
#define DEAD_OBJ 1

#define NULL_CHECK(ptr)	\
if(nullptr == (ptr)) return;

#define NULL_CHECK_RETURN(ptr, val)	\
if(nullptr == (ptr)) return val;

#define __DEFINE_H__
#endif
