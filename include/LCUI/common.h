
#ifndef LCUI_INCLUDE_LCUI_COMMON_H
#define LCUI_INCLUDE_LCUI_COMMON_H

#include "config.h"

#ifndef LCUI_API
#if defined(_MSC_VER) && !defined(LCUI_STATIC_BUILD)
#ifdef LCUI_DLL_EXPORT
#define LCUI_API __declspec(dllexport)
#else
#define LCUI_API __declspec(dllimport)
#endif
#elif __GNUC__ >= 4
#define LCUI_API extern __attribute__((visibility("default")))
#else
#define LCUI_API extern
#endif
#endif

#if defined(_WIN32) && !defined(__cplusplus)
#define INLINE __inline
#else
#define INLINE static inline
#endif

#ifdef _WIN32
#define LIBPLAT_WIN32
#if defined(WINAPI_FAMILY) && (WINAPI_FAMILY == WINAPI_FAMILY_APP)
#define LIBPLAT_UWP
#else
#define LIBPLAT_WIN_DESKTOP
#endif
#else
#define LIBPLAT_LINUX
#endif

#ifdef __cplusplus
#define LCUI_BEGIN_HEADER extern "C" {
#define LCUI_END_HEADER }
#else
#define LCUI_BEGIN_HEADER /* nothing */
#define LCUI_END_HEADER
#endif

#ifdef DEBUG
#define DEBUG_MSG _DEBUG_MSG
#else
#define DEBUG_MSG(format, ...)
#endif

#define _DEBUG_MSG(format, ...)                                       \
        logger_log(LOGGER_LEVEL_DEBUG, __FILE__ ":%d: %s(): " format, \
                   __LINE__, __FUNCTION__, ##__VA_ARGS__)

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

typedef unsigned char LCUI_BOOL;
typedef unsigned char uchar_t;

#endif