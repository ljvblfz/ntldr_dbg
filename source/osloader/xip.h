/*++

Module Name:

    xip.h

Abstract:

    eXecute In Place

--*/


#ifndef _XIP_
#define _XIP_


#pragma once

//
// read xip rom/ram to memory
//
ARC_STATUS
XipLargeRead (
    __in ULONG FileId,
    __in ULONG BasePage,
    __in ULONG PageCount
    );

//
// xip enabled
//
extern BOOLEAN  XIPEnabled;

//
// page count
//
extern ULONG    XIPPageCount;

//
// base page
//
extern ULONG    XIPBasePage;

//
// xip load path
//
extern PCHAR    XIPLoadPath;

//
// boot flags
//
extern BOOLEAN  XIPBootFlag;


#endif /* !_XIP_ */
