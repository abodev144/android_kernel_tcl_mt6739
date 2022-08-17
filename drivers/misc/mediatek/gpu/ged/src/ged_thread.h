
#ifndef __GED_THREAD_H__
#define __GED_THREAD_H__

#include "ged_type.h"

#define GED_THREAD_HANDLE void*

//typedef void (*GED_THREAD_FUNC)(void *);

GED_ERROR ged_thread_create(GED_THREAD_HANDLE *phThread,
	const char *szThreadName, void (*pFunc)(void *), void *pvData);

GED_ERROR ged_thread_destroy(GED_THREAD_HANDLE hThread);

#endif
