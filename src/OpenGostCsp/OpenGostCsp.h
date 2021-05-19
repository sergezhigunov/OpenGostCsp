#pragma once

#ifdef OPENGOSTCSP_EXPORTS
#define OPENGOSTCSP_API extern "C" __declspec(dllexport)
#else
#define OPENGOSTCSP_API extern "C" __declspec(dllimport)
#endif

#pragma region Callback definitions

typedef BOOL(WINAPI *CRYPT_VERIFY_IMAGE_A)(LPCSTR  szImage, CONST BYTE *pbSigData);
typedef BOOL(WINAPI *CRYPT_VERIFY_IMAGE_W)(LPCWSTR szImage, CONST BYTE *pbSigData);
typedef void(*CRYPT_RETURN_HWND)(HWND *phWnd);

#pragma endregion

#pragma region Struct definition

typedef struct _VTableProvStruc {
    DWORD Version;
    CRYPT_VERIFY_IMAGE_A FuncVerifyImage;
    CRYPT_RETURN_HWND FuncReturnhWnd;
    DWORD dwProvType;
    BYTE *pbContextInfo;
    DWORD cbContextInfo;
    LPSTR pszProvName;
} VTableProvStruc, *PVTableProvStruc;

typedef struct _VTableProvStrucW {
    DWORD Version;
    CRYPT_VERIFY_IMAGE_W FuncVerifyImage;
    CRYPT_RETURN_HWND FuncReturnhWnd;
    DWORD dwProvType;
    BYTE *pbContextInfo;
    DWORD cbContextInfo;
    LPWSTR pszProvName;
} VTableProvStrucW, *PVTableProvStrucW;

typedef struct {
    DWORD dwVersion;
    DWORD dwCrcOffset;
    BYTE rgbSignature[88];  // 1024-bit key, plus 2 DWORDs of padding.
} InFileSignatureResource;

#pragma endregion

#pragma region Export function definition

OPENGOSTCSP_API BOOL WINAPI CPAcquireContext(
    _Out_  HCRYPTPROV *phProv,
    _In_   CHAR *pszContainer,
    _In_   DWORD dwFlags,
    _In_   PVTableProvStruc pVTable
);

OPENGOSTCSP_API BOOL WINAPI CPCreateHash(
    _In_   HCRYPTPROV hProv,
    _In_   ALG_ID Algid,
    _In_   HCRYPTKEY hKey,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTHASH *phHash
);

OPENGOSTCSP_API BOOL WINAPI CPDecrypt(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTHASH hHash,
    _In_     BOOL Final,
    _In_     DWORD dwFlags,
    _Inout_  BYTE *pbData,
    _Inout_  DWORD *pdwDataLen
);

OPENGOSTCSP_API BOOL WINAPI CPDestroyHash(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash
);

OPENGOSTCSP_API BOOL WINAPI CPDestroyKey(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTKEY hKey
);

OPENGOSTCSP_API BOOL WINAPI CPDuplicateHash(
    _In_        HCRYPTPROV hProv,
    _In_        HCRYPTHASH hHash,
    _Reserved_  DWORD *pdwReserved,
    _In_        DWORD dwFlags,
    _Out_       HCRYPTHASH *phHash
);

OPENGOSTCSP_API BOOL WINAPI CPDuplicateKey(
    _In_   HCRYPTPROV hUID,
    _In_   HCRYPTKEY hKey,
    _In_   DWORD *pdwReserved,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey
);

OPENGOSTCSP_API BOOL WINAPI CPEncrypt(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTHASH hHash,
    _In_     BOOL Final,
    _In_     DWORD dwFlags,
    _Inout_  BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwBufLen
);

OPENGOSTCSP_API BOOL WINAPI CPExportKey(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     HCRYPTKEY hPubKey,
    _In_     DWORD dwBlobType,
    _In_     DWORD dwFlags,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen
);

OPENGOSTCSP_API BOOL WINAPI CPGenKey(
    _In_   HCRYPTPROV hProv,
    _In_   ALG_ID Algid,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey
);

OPENGOSTCSP_API BOOL WINAPI CPGenRandom(
    _In_     HCRYPTPROV hProv,
    _In_     DWORD dwLen,
    _Inout_  BYTE *pbBuffer
);

OPENGOSTCSP_API BOOL WINAPI CPGetHashParam(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTHASH hHash,
    _In_     DWORD dwParam,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPGetKeyParam(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTKEY hKey,
    _In_     DWORD dwParam,
    _Out_    LPBYTE pbData,
    _Inout_  LPDWORD pcbDataLen,
    _In_     DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPGetProvParam(
    _In_     HCRYPTPROV hProv,
    _In_     DWORD dwParam,
    _Out_    BYTE *pbData,
    _Inout_  DWORD *pdwDataLen,
    _In_     DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPGetUserKey(
    _In_   HCRYPTPROV hProv,
    _In_   DWORD dwKeySpec,
    _Out_  HCRYPTKEY *phUserKey
);

OPENGOSTCSP_API BOOL WINAPI CPHashData(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  const BYTE *pbData,
    _In_  DWORD dwDataLen,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPHashSessionKey(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  HCRYPTKEY hKey,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPImportKey(
    _In_   HCRYPTPROV hProv,
    _In_   const BYTE *pbData,
    _In_   DWORD dwDataLen,
    _In_   HCRYPTKEY hPubKey,
    _In_   DWORD dwFlags,
    _Out_  HCRYPTKEY *phKey
);

OPENGOSTCSP_API BOOL WINAPI CPReleaseContext(
    _In_  HCRYPTPROV hProv,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPSetHashParam(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPSetKeyParam(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTKEY hKey,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPSetProvParam(
    _In_  HCRYPTPROV hProv,
    _In_  DWORD dwParam,
    _In_  BYTE *pbData,
    _In_  DWORD dwFlags
);

OPENGOSTCSP_API BOOL WINAPI CPSignHash(
    _In_     HCRYPTPROV hProv,
    _In_     HCRYPTHASH hHash,
    _In_     DWORD dwKeySpec,
    _In_     LPCWSTR sDescription,
    _In_     DWORD dwFlags,
    _Out_    BYTE *pbSignature,
    _Inout_  DWORD *pdwSigLen
);

OPENGOSTCSP_API BOOL WINAPI CPVerifySignature(
    _In_  HCRYPTPROV hProv,
    _In_  HCRYPTHASH hHash,
    _In_  const BYTE *pbSignature,
    _In_  DWORD dwSigLen,
    _In_  HCRYPTKEY hPubKey,
    _In_  LPCWSTR sDescription,
    _In_  DWORD dwFlags
);

#pragma endregion
