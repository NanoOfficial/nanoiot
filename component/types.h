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

#define NANO_OUT
#define NANO_IN
#define NANO_INOUT
#define NANO_TRUE 1
#define NANO_FALSE 0

#define __NANOSTATIC static
#define __NANOINLINE inline

typedef bool NBOOL;
typedef char NCHAR;
typedef unsigned char NUINT8;
typedef unsigned short NUINT16;
typedef unsigned int NUINT32;
typedef unsigned long long int NUINT64;
typedef signed char NSINT8;
typedef signed short NSINT16;
typedef signed int NSINT32;
typedef signed long long int NSINT64;

typedef NSINT32 NANO_RESULT;
typedef NUINT8 NanoAddress[20];


typedef enum
{
    NANO_PROTOCOL_UNKNOWN = 0,     
    NANO_PROTOCOL_ETHEREUM,        
    NANO_PROTOCOL_HLFABRIC,        
    NANO_PROTOCOL_PLATON,          
    NANO_PROTOCOL_PLATONE,         
	NANO_PROTOCOL_FISCOBCOS,       
    NANO_PROTOCOL_HWBCS,           
    NANO_PROTOCOL_CHAINMAKER,      
    NANO_PROTOCOL_VENACHAIN,       
    NANO_PROTOCOL_QUORUM,          
    NANO_PROTOCOL_CITA             
} NanoProtocolType;

typedef enum
{
    NANO_HASH_UNKNOWN = 0,    
	NANO_HASH_KECCAK256,      
	NANO_HASH_SHA256          
} NanoHashAlgType;


typedef struct NNanoSignatureResult
{
	NBOOL    native_format_used; 
	NUINT8   native_sign[64];
	
	NBOOL    pkcs_format_used;
	NUINT8   pkcs_sign[139];  
	                          
	NUINT32  pkcs_sign_length;
	NBOOL    signPrefix_used;
	NUINT8   signPrefix;
} NanoSignatureResult;


typedef struct NNanoFieldVariable
{
    NUINT8 *field_ptr;  
    NUINT32 field_len;  
} NanoFieldVariable;

typedef struct NNanoFieldMax4B
{
    NUINT8 field[4];     
    NUINT32 field_len;   
} NanoFieldMax4B;

typedef struct NNanoFieldMax32B
{
    NUINT8 field[32];    
    NUINT32 field_len;   
} NanoFieldMax32B;

typedef struct NNanoFieldMax8B
{
    NUINT8 field[8];     
    NUINT32 field_len;   
} NanoFieldMax8B;      

typedef struct NNanoFieldMax24B
{
    NUINT8 field[24];     
    NUINT32 field_len;    
} NanoFieldMax24B;  

typedef enum
{
    NANO_STORE_TYPE_UNKNOWN = 0,  
    NANO_STORE_TYPE_RAM,          
    NANO_STORE_TYPE_FLASH,        
} NanoStoreType;
