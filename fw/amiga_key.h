/*! *******************************************************************************************************
* Copyright (c) 2018 Krist�f Szabolcs Horv�th
*
* All rights reserved
*
* \file amiga_key.h
*
* \brief Amiga keyboard protocol implementation
*
* \author Krist�f Sz. Horv�th
*
**********************************************************************************************************/

#ifndef AMIGA_KEY_H_INCLUDED
#define AMIGA_KEY_H_INCLUDED

//--------------------------------------------------------------------------------------------------------/
// Include files
//--------------------------------------------------------------------------------------------------------/


//--------------------------------------------------------------------------------------------------------/
// Definitions
//--------------------------------------------------------------------------------------------------------/


//--------------------------------------------------------------------------------------------------------/
// Types
//--------------------------------------------------------------------------------------------------------/


//--------------------------------------------------------------------------------------------------------/
// Global functions
//--------------------------------------------------------------------------------------------------------/


//--------------------------------------------------------------------------------------------------------/
// Public functions
//--------------------------------------------------------------------------------------------------------/
void AmigaKey_Init( void );
void AmigaKey_Cycle( void );
BOOL AmigaKey_RegisterScanCode( U8 u8Code, BOOL bIsPressed );
void AmigaKey_Reset( void );


#endif // AMIGA_KEY_H_INCLUDED
/******************************<EOF>**********************************/
