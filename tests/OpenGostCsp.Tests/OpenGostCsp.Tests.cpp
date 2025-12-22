#include "pch.h"
#include "CppUnitTest.h"
#include "..\..\src\OpenGostCsp\OpenGostCsp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OpenGostCsp::Tests
{
    TEST_CLASS(OpenGostCspTests)
    {
    public:

        TEST_METHOD(CPAcquireContext_ReturnsFalse)
        {
            HCRYPTPROV *phProv = NULL;
            LPCWSTR pszContainer = NULL;
            DWORD dwFlags = NULL;
            PVTableProvStruc pVTable = NULL;

            BOOL result = CPAcquireContext(phProv, pszContainer, dwFlags, pVTable);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPCreateHash_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            ALG_ID Algid = NULL;
            HCRYPTKEY hKey = NULL;
            DWORD dwFlags = NULL;
            HCRYPTHASH *phHash = NULL;

            BOOL result = CPCreateHash(hProv, Algid, hKey, dwFlags, phHash);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPDecrypt_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            HCRYPTHASH hHash = NULL;
            BOOL Final = NULL;
            DWORD dwFlags = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;

            BOOL result = CPDecrypt(hProv, hKey, hHash, Final, dwFlags, pbData, pdwDataLen);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPDestroyHash_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;

            BOOL result = CPDestroyHash(hProv, hHash);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPDestroyKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            BOOL result = CPDestroyKey(hProv, hKey);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPDuplicateHash_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            DWORD *pdwReserved = NULL;
            DWORD dwFlags = NULL;
            HCRYPTHASH *phHash = NULL;

            BOOL result = CPDuplicateHash(hProv, hHash, pdwReserved, dwFlags, phHash);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPDuplicateKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            DWORD *pdwReserved = NULL;
            DWORD dwFlags = NULL;
            HCRYPTKEY *phKey = NULL;

            BOOL result = CPDuplicateKey(hProv, hKey, pdwReserved, dwFlags, phKey);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPEncrypt_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            HCRYPTHASH hHash = NULL;
            BOOL Final = NULL;
            DWORD dwFlags = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;
            DWORD dwBufLen = NULL;

            BOOL result = CPEncrypt(hProv, hKey, hHash, Final, dwFlags, pbData, pdwDataLen, dwBufLen);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPExportKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            HCRYPTKEY hPubKey = NULL;
            DWORD dwBlobType = NULL;
            DWORD dwFlags = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;

            BOOL result = CPExportKey(hProv, hKey, hPubKey, dwBlobType, dwFlags, pbData, pdwDataLen);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGenKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            ALG_ID Algid = NULL;
            DWORD dwFlags = NULL;
            HCRYPTKEY *phKey = NULL;

            BOOL result = CPGenKey(hProv, Algid, dwFlags, phKey);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGenRandom_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            DWORD dwLen = NULL;
            BYTE *pbBuffer = NULL;

            BOOL result = CPGenRandom(hProv, dwLen, pbBuffer);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGetHashParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPGetHashParam(hProv, hHash, dwParam, pbData, pdwDataLen, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGetKeyParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPGetKeyParam(hProv, hKey, dwParam, pbData, pdwDataLen, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGetProvParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD *pdwDataLen = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPGetProvParam(hProv, dwParam, pbData, pdwDataLen, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPGetUserKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            DWORD dwKeySpec = NULL;
            HCRYPTKEY *phUserKey = NULL;

            BOOL result = CPGetUserKey(hProv, dwKeySpec, phUserKey);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPHashData_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            BYTE *pbData = NULL;
            DWORD pdwDataLen = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPHashData(hProv, hHash, pbData, pdwDataLen, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPHashSessionKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            HCRYPTKEY hKey = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPHashSessionKey(hProv, hHash, hKey, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPImportKey_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            const BYTE *pbData = NULL;
            DWORD dwDataLen = NULL;
            HCRYPTKEY hPubKey = NULL;
            DWORD dwFlags = NULL;
            HCRYPTKEY *phKey = NULL;

            BOOL result = CPImportKey(hProv, pbData, dwDataLen, hPubKey, dwFlags, phKey);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPReleaseContext_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPReleaseContext(hProv, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPSetHashParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPSetHashParam(hProv, hHash, dwParam, pbData, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPSetKeyParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTKEY hKey = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPSetKeyParam(hProv, hKey, dwParam, pbData, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPSetProvParam_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            DWORD dwParam = NULL;
            BYTE *pbData = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPSetProvParam(hProv, dwParam, pbData, dwFlags);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPSignHash_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            DWORD dwKeySpec = NULL;
            LPCWSTR sDescription = NULL;
            DWORD dwFlags = NULL;
            BYTE *pbSignature = NULL;
            DWORD *pdwSigLen = NULL;

            BOOL result = CPSignHash(hProv, hHash, dwKeySpec, sDescription, dwFlags, pbSignature, pdwSigLen);

            Assert::AreEqual(FALSE, result);
        }

        TEST_METHOD(CPVerifySignature_ReturnsFalse)
        {
            HCRYPTPROV hProv = NULL;
            HCRYPTHASH hHash = NULL;
            const BYTE *pbSignature = NULL;
            DWORD dwSigLen = NULL;
            HCRYPTKEY hPubKey = NULL;
            LPCWSTR sDescription = NULL;
            DWORD dwFlags = NULL;

            BOOL result = CPVerifySignature(hProv, hHash, pbSignature, dwSigLen, hPubKey, sDescription, dwFlags);

            Assert::AreEqual(FALSE, result);
        }
    };
}
