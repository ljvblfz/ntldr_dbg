/*++

Module Name:

    xpress.h

Abstract:

    xpress compression

--*/


#ifndef _XPRESS_
#define _XPRESS_

//
// xpress decode
//
ULONG
XpressDecode (
    __in PUCHAR InputBuffer,
    __in ULONG InputSize,
    __in PUCHAR OutputBuffer,
    __in ULONG OutputSize
    );

#endif /* !_XPRESS_ */
