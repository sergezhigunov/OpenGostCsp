// OpenGostCsp.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "OpenGostCsp.h"


OPENGOSTCSP_API BOOL WINAPI CPAcquireContext(
    _Out_  HCRYPTPROV *phProv,
    _In_   CHAR *pszContainer,
    _In_   DWORD dwFlags,
    _In_   PVTableProvStruc pVTable)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPCreateHash(
    _In_   HCRYPTPROV hProv,
    _In_   ALG_ID Algid,
    _In_   HCRYPTKEY hKey,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTHASH *phHash)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPDecrypt(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTHASH hHash,
    _In_     BOOL Final,
    _In_     DWORD dwFlags,
    _Inout_  BYTE *pbData,
    _Inout_  DWORD *pdwDataLen)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPDestroyHash(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPDestroyKey(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTKEY hKey)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPDuplicateHash(
    _In_        HCRYPTPROV hProv,
    _In_        HCRYPTHASH hHash,
    _Reserved_  DWORD *pdwReserved,
    _In_        DWORD dwFlags,
    _Out_       HCRYPTHASH *phHash)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPDuplicateKey(
    _In_   HCRYPTPROV hUID,
    _In_   HCRYPTKEY hKey,
    _In_   DWORD *pdwReserved,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPEncrypt(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTHASH hHash,
    _In_     BOOL Final,
    _In_     DWORD dwFlags,
    _Inout_  BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwBufLen)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPExportKey(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTKEY hPubKey,
    _In_     DWORD dwBlobType,
    _In_     DWORD dwFlags,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen)
{
    return E_NOTIMPL;
}

OPENGOSTCSP_API BOOL WINAPI CPGenKey(
    _In_   HCRYPTPROV hProv,
    _In_   ALG_ID Algid,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPGenRandom(
    _In_     HCRYPTPROV hProv,
    _In_     DWORD dwLen,
    _Inout_  BYTE *pbBuffer)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPGetHashParam(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTHASH hHash,
    _In_     DWORD dwParam,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPGetKeyParam(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     DWORD dwParam,
    _Out_    LPBYTE pbData,
    _Inout_  LPDWORD pcbDataLen,
    _In_     DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPGetProvParam(
    _In_     HCRYPTPROV hProv,
    _In_     DWORD dwParam,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPGetUserKey(
    _In_   HCRYPTPROV hProv,
    _In_   DWORD dwKeySpec,
    _Out_  HCRYPTKEY *phUserKey)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPHashData(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  const BYTE *pbData,
    _In_  DWORD dwDataLen,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPHashSessionKey(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  HCRYPTKEY hKey,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPImportKey(
    _In_   HCRYPTPROV hProv,
    _In_   const BYTE *pbData,
    _In_   DWORD dwDataLen,
    _In_   HCRYPTKEY hPubKey,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPReleaseContext(
    _In_  HCRYPTPROV hProv,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPSetHashParam(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPSetKeyParam(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTKEY hKey,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPSetProvParam(
    _In_  HCRYPTPROV hProv,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPSignHash(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTHASH hHash,
    _In_     DWORD dwKeySpec,
    _In_     LPCWSTR sDescription,
    _In_     DWORD dwFlags,
    _Out_    BYTE *pbSignature,
    _Inout_  DWORD *pdwSigLen)
{
    return FALSE;
}

OPENGOSTCSP_API BOOL WINAPI CPVerifySignature(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  const BYTE* pbSignature,
    _In_  DWORD dwSigLen,
    _In_  HCRYPTKEY hPubKey,
    _In_  LPCWSTR sDescription,
    _In_  DWORD dwFlags)
{
    return FALSE;
}
