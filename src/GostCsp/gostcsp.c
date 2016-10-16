#include "stdafx.h"
#include "gostcsp.h"

BOOL WINAPI CPAcquireContext(HCRYPTPROV * phProv, CHAR * pszContainer, DWORD dwFlags, PVTableProvStruc pVTable)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPCreateHash(HCRYPTPROV hProv, ALG_ID Algid, HCRYPTKEY hKey, DWORD dwFlags, HCRYPTHASH * phHash)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPDecrypt(HCRYPTPROV hProv, HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE * pbData, DWORD * pdwDataLen)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPDestroyHash(HCRYPTPROV hProv, HCRYPTHASH hHash)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPDestroyKey(HCRYPTPROV hProv, HCRYPTKEY hKey)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPDuplicateHash(HCRYPTPROV hProv, HCRYPTHASH hHash, DWORD * pdwReserved, DWORD dwFlags, HCRYPTHASH * phHash)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPDuplicateKey(HCRYPTPROV hUID, HCRYPTKEY hKey, DWORD * pdwReserved, DWORD dwFlags, HCRYPTKEY * phKey)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPEncrypt(HCRYPTPROV hProv, HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE * pbData, DWORD * pdwDataLen, DWORD dwBufLen)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPExportKey(HCRYPTPROV hProv, HCRYPTKEY hKey, HCRYPTKEY hPubKey, DWORD dwBlobType, DWORD dwFlags, BYTE * pbData, DWORD * pdwDataLen)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGenKey(HCRYPTPROV hProv, ALG_ID Algid, DWORD dwFlags, HCRYPTKEY * phKey)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGenRandom(HCRYPTPROV hProv, DWORD dwLen, BYTE * pbBuffer)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGetHashParam(HCRYPTPROV hProv, HCRYPTHASH hHash, DWORD dwParam, BYTE * pbData, DWORD * pdwDataLen, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGetKeyParam(HCRYPTPROV hProv, HCRYPTKEY hKey, DWORD dwParam, LPBYTE pbData, LPDWORD pcbDataLen, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGetProvParam(HCRYPTPROV hProv, DWORD dwParam, BYTE * pbData, DWORD * pdwDataLen, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPGetUserKey(HCRYPTPROV hProv, DWORD dwKeySpec, HCRYPTKEY * phUserKey)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPHashData(HCRYPTPROV hProv, HCRYPTHASH hHash, const BYTE * pbData, DWORD dwDataLen, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPHashSessionKey(HCRYPTPROV hProv, HCRYPTHASH hHash, HCRYPTKEY hKey, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPImportKey(HCRYPTPROV hProv, const BYTE * pbData, DWORD dwDataLen, HCRYPTKEY hPubKey, DWORD dwFlags, HCRYPTKEY * phKey)
{
    return 0;
}

BOOL WINAPI CPReleaseContext(HCRYPTPROV hProv, DWORD dwFlags)
{
    return E_NOTIMPL;
}

BOOL WINAPI CPSetHashParam(HCRYPTPROV hProv, HCRYPTHASH hHash, DWORD dwParam, BYTE * pbData, DWORD dwFlags)
{
    return 0;
}

BOOL WINAPI CPSetKeyParam(HCRYPTPROV hProv, HCRYPTKEY hKey, DWORD dwParam, BYTE * pbData, DWORD dwFlags)
{
    return 0;
}

BOOL WINAPI CPSetProvParam(HCRYPTPROV hProv, DWORD dwParam, BYTE * pbData, DWORD dwFlags)
{
    return 0;
}

BOOL WINAPI CPSignHash(HCRYPTPROV hProv, HCRYPTHASH hHash, DWORD dwKeySpec, LPCWSTR sDescription, DWORD dwFlags, BYTE * pbSignature, DWORD * pdwSigLen)
{
    return 0;
}

BOOL WINAPI CPVerifySignature(HCRYPTPROV hProv, HCRYPTHASH hHash, const BYTE * pbSignature, DWORD dwSigLen, HCRYPTKEY hPubKey, LPCWSTR sDescription, DWORD dwFlags)
{
    return 0;
}
