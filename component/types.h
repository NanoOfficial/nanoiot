/**
 * @file types.h
 * @author Krisna Pranav
 * @brief types
 * @version 1.0
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, NanoBlocks Developers
 * 
 */

#pragma once

#include <stdbool.h>

#define OUT
#define IN
#define INOUT

#define NANO_TRUE 1
#define NANO_FALSE 0 

#define __NANOSTATIC static
#define __NANOINLINE inline 

typedef bool NBOOL;
typedef char NCHAR;
typedef unsigned char NUINT8;
typedef unsigned long long int NUINT64;
typedef signed long long int NSINT64;


typedef struct NNanoFieldVariable
{
    NUINT8 *field_ptr;
    NUINT64 field_len;
} NanoFieldVariable;

typedef struct NNanoFieldMax8B 
{
    NUINT8 field[8];
    NUINT64 field_len;
} NanoFieldMax8B;

typedef enum 
{
    NANO_STORE_TYPE_UNKOWN = 0,
    NANO_STORE_TYPE_RAM,
    NANO_STORE_TYPE_FLASH,
} NanoFieldType;