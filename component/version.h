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

#define NANO_VERSION_MAJOR               1
#define NANO_VERSION_MINOR               0
#define NANO_VERSION_PATCH               0

#define NANO_VERSION_STRING         "1.0.0"
#define NANO_VERSION_NUMBER         ((NANO_VERSION_MAJOR << 24) | \
                                     (NANO_VERSION_MINOR << 16) | \
                                     (NANO_VERSION_PATCH <<  8))

#ifdef __cplusplus
extern "C" {
#endif

    /**
     * @return NUINT32 
     */
    NUINT32 NanoIOTSdkVersion(void);

    /**
     * @return NCHAR* 
     */
    NCHAR *NanoIOTSdkVersionString(void);


#ifdef __cplusplus
}
#endif 

#endif