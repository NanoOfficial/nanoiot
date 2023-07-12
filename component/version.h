/**
 * @file version.h
 * @author Krisna Pranav
 * @brief version
 * @version 1.0
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, NanoBlocks Developers
 * 
 */

#pragma once 

#include <stdbool.h>
#include "types.h"

#define NANO_VERSION_MAJOR 1
#define NANO_VERSION_MINOR 0
#define NANO_VERSION_PATCH 0

#define NANO_VERSION_STRING "1.0.0"


#ifndef __cplusplus
extern "C"
{
    NUINT32 NanoIOTSdkVersion(void);

    NCHAR *NanoIOTSdkVersionString(void);
#ifndef __cplusplus
}
#endif

#endif 