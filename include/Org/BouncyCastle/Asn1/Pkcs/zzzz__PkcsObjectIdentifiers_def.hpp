#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkcsObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PkcsObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Pkcs::PkcsObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::PkcsObjectIdentifiers*
class CORDL_TYPE PkcsObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field CannotDecryptAny, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CannotDecryptAny, put = setStaticF_CannotDecryptAny))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CannotDecryptAny;

  /// @brief Field CertBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertBag, put = setStaticF_CertBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertBag;

  /// @brief Field CrlBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlBag, put = setStaticF_CrlBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlBag;

  /// @brief Field Data, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Data, put = setStaticF_Data))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Data;

  /// @brief Field DesEde3Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde3Cbc, put = setStaticF_DesEde3Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde3Cbc;

  /// @brief Field DhKeyAgreement, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DhKeyAgreement, put = setStaticF_DhKeyAgreement))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DhKeyAgreement;

  /// @brief Field DigestedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestedData, put = setStaticF_DigestedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestedData;

  /// @brief Field EncryptedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptedData, put = setStaticF_EncryptedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptedData;

  /// @brief Field EnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnvelopedData, put = setStaticF_EnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EnvelopedData;

  /// @brief Field IdAAAsymmDecryptKeyID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAAsymmDecryptKeyID, put = setStaticF_IdAAAsymmDecryptKeyID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAAsymmDecryptKeyID;

  /// @brief Field IdAACommitmentType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAACommitmentType, put = setStaticF_IdAACommitmentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAACommitmentType;

  /// @brief Field IdAACommunityIdentifiers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAACommunityIdentifiers, put = setStaticF_IdAACommunityIdentifiers))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAACommunityIdentifiers;

  /// @brief Field IdAAContentHint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAContentHint, put = setStaticF_IdAAContentHint))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAContentHint;

  /// @brief Field IdAAContentIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAContentIdentifier, put = setStaticF_IdAAContentIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAContentIdentifier;

  /// @brief Field IdAAContentReference, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAContentReference, put = setStaticF_IdAAContentReference))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAContentReference;

  /// @brief Field IdAADecryptKeyID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAADecryptKeyID, put = setStaticF_IdAADecryptKeyID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAADecryptKeyID;

  /// @brief Field IdAAEncrypKeyPref, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEncrypKeyPref, put = setStaticF_IdAAEncrypKeyPref))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEncrypKeyPref;

  /// @brief Field IdAAEtsArchiveTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsArchiveTimestamp, put = setStaticF_IdAAEtsArchiveTimestamp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsArchiveTimestamp;

  /// @brief Field IdAAEtsCertCrlTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsCertCrlTimestamp, put = setStaticF_IdAAEtsCertCrlTimestamp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsCertCrlTimestamp;

  /// @brief Field IdAAEtsCertValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsCertValues, put = setStaticF_IdAAEtsCertValues))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsCertValues;

  /// @brief Field IdAAEtsCertificateRefs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsCertificateRefs, put = setStaticF_IdAAEtsCertificateRefs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsCertificateRefs;

  /// @brief Field IdAAEtsCommitmentType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsCommitmentType, put = setStaticF_IdAAEtsCommitmentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsCommitmentType;

  /// @brief Field IdAAEtsContentTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsContentTimestamp, put = setStaticF_IdAAEtsContentTimestamp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsContentTimestamp;

  /// @brief Field IdAAEtsEscTimeStamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsEscTimeStamp, put = setStaticF_IdAAEtsEscTimeStamp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsEscTimeStamp;

  /// @brief Field IdAAEtsOtherSigCert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsOtherSigCert, put = setStaticF_IdAAEtsOtherSigCert))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsOtherSigCert;

  /// @brief Field IdAAEtsRevocationRefs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsRevocationRefs, put = setStaticF_IdAAEtsRevocationRefs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsRevocationRefs;

  /// @brief Field IdAAEtsRevocationValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsRevocationValues, put = setStaticF_IdAAEtsRevocationValues))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsRevocationValues;

  /// @brief Field IdAAEtsSigPolicyID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsSigPolicyID, put = setStaticF_IdAAEtsSigPolicyID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsSigPolicyID;

  /// @brief Field IdAAEtsSignerAttr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsSignerAttr, put = setStaticF_IdAAEtsSignerAttr))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsSignerAttr;

  /// @brief Field IdAAEtsSignerLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAEtsSignerLocation, put = setStaticF_IdAAEtsSignerLocation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAEtsSignerLocation;

  /// @brief Field IdAAImplCompressAlgs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAImplCompressAlgs, put = setStaticF_IdAAImplCompressAlgs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAImplCompressAlgs;

  /// @brief Field IdAAImplCryptoAlgs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAImplCryptoAlgs, put = setStaticF_IdAAImplCryptoAlgs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAImplCryptoAlgs;

  /// @brief Field IdAAMsgSigDigest, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAMsgSigDigest, put = setStaticF_IdAAMsgSigDigest))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAMsgSigDigest;

  /// @brief Field IdAAOid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAOid, put = setStaticF_IdAAOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAOid;

  /// @brief Field IdAAOtherSigCert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAOtherSigCert, put = setStaticF_IdAAOtherSigCert))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAOtherSigCert;

  /// @brief Field IdAAReceiptRequest, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAAReceiptRequest, put = setStaticF_IdAAReceiptRequest))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAAReceiptRequest;

  /// @brief Field IdAASigPolicyID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAASigPolicyID, put = setStaticF_IdAASigPolicyID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAASigPolicyID;

  /// @brief Field IdAASignatureTimeStampToken, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAASignatureTimeStampToken, put = setStaticF_IdAASignatureTimeStampToken))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAASignatureTimeStampToken;

  /// @brief Field IdAASignerLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAASignerLocation, put = setStaticF_IdAASignerLocation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAASignerLocation;

  /// @brief Field IdAASigningCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAASigningCertificate, put = setStaticF_IdAASigningCertificate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAASigningCertificate;

  /// @brief Field IdAASigningCertificateV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAASigningCertificateV2, put = setStaticF_IdAASigningCertificateV2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAASigningCertificateV2;

  /// @brief Field IdAlg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlg, put = setStaticF_IdAlg))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlg;

  /// @brief Field IdAlgAeadChaCha20Poly1305, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgAeadChaCha20Poly1305, put = setStaticF_IdAlgAeadChaCha20Poly1305))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgAeadChaCha20Poly1305;

  /// @brief Field IdAlgCms3DesWrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgCms3DesWrap, put = setStaticF_IdAlgCms3DesWrap))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgCms3DesWrap;

  /// @brief Field IdAlgCmsRC2Wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgCmsRC2Wrap, put = setStaticF_IdAlgCmsRC2Wrap))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgCmsRC2Wrap;

  /// @brief Field IdAlgEsdh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgEsdh, put = setStaticF_IdAlgEsdh))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgEsdh;

  /// @brief Field IdAlgPwriKek, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgPwriKek, put = setStaticF_IdAlgPwriKek))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgPwriKek;

  /// @brief Field IdAlgSsdh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAlgSsdh, put = setStaticF_IdAlgSsdh))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAlgSsdh;

  /// @brief Field IdCTAuthData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCTAuthData, put = setStaticF_IdCTAuthData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCTAuthData;

  /// @brief Field IdCTAuthEnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCTAuthEnvelopedData, put = setStaticF_IdCTAuthEnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCTAuthEnvelopedData;

  /// @brief Field IdCTCompressedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCTCompressedData, put = setStaticF_IdCTCompressedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCTCompressedData;

  /// @brief Field IdCTTimestampedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCTTimestampedData, put = setStaticF_IdCTTimestampedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCTTimestampedData;

  /// @brief Field IdCTTstInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCTTstInfo, put = setStaticF_IdCTTstInfo))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCTTstInfo;

  /// @brief Field IdCtiEtsProofOfApproval, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfApproval, put = setStaticF_IdCtiEtsProofOfApproval))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfApproval;

  /// @brief Field IdCtiEtsProofOfCreation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfCreation, put = setStaticF_IdCtiEtsProofOfCreation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfCreation;

  /// @brief Field IdCtiEtsProofOfDelivery, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfDelivery, put = setStaticF_IdCtiEtsProofOfDelivery))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfDelivery;

  /// @brief Field IdCtiEtsProofOfOrigin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfOrigin, put = setStaticF_IdCtiEtsProofOfOrigin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfOrigin;

  /// @brief Field IdCtiEtsProofOfReceipt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfReceipt, put = setStaticF_IdCtiEtsProofOfReceipt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfReceipt;

  /// @brief Field IdCtiEtsProofOfSender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdCtiEtsProofOfSender, put = setStaticF_IdCtiEtsProofOfSender))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCtiEtsProofOfSender;

  /// @brief Field IdHmacWithSha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdHmacWithSha1, put = setStaticF_IdHmacWithSha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHmacWithSha1;

  /// @brief Field IdHmacWithSha224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdHmacWithSha224, put = setStaticF_IdHmacWithSha224))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHmacWithSha224;

  /// @brief Field IdHmacWithSha256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdHmacWithSha256, put = setStaticF_IdHmacWithSha256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHmacWithSha256;

  /// @brief Field IdHmacWithSha384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdHmacWithSha384, put = setStaticF_IdHmacWithSha384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHmacWithSha384;

  /// @brief Field IdHmacWithSha512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdHmacWithSha512, put = setStaticF_IdHmacWithSha512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHmacWithSha512;

  /// @brief Field IdMgf1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdMgf1, put = setStaticF_IdMgf1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdMgf1;

  /// @brief Field IdPSpecified, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdPSpecified, put = setStaticF_IdPSpecified))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdPSpecified;

  /// @brief Field IdPbeS2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdPbeS2, put = setStaticF_IdPbeS2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdPbeS2;

  /// @brief Field IdPbkdf2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdPbkdf2, put = setStaticF_IdPbkdf2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdPbkdf2;

  /// @brief Field IdRsaKem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdRsaKem, put = setStaticF_IdRsaKem))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsaKem;

  /// @brief Field IdRsaesOaep, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdRsaesOaep, put = setStaticF_IdRsaesOaep))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsaesOaep;

  /// @brief Field IdRsassaPss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdRsassaPss, put = setStaticF_IdRsassaPss))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsassaPss;

  /// @brief Field IdSmime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSmime, put = setStaticF_IdSmime))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSmime;

  /// @brief Field IdSpqEtsUNotice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSpqEtsUNotice, put = setStaticF_IdSpqEtsUNotice))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSpqEtsUNotice;

  /// @brief Field IdSpqEtsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSpqEtsUri, put = setStaticF_IdSpqEtsUri))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSpqEtsUri;

  /// @brief Field KeyBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KeyBag, put = setStaticF_KeyBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyBag;

  /// @brief Field MD2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD2, put = setStaticF_MD2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD2;

  /// @brief Field MD2WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD2WithRsaEncryption, put = setStaticF_MD2WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD2WithRsaEncryption;

  /// @brief Field MD4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD4, put = setStaticF_MD4))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD4;

  /// @brief Field MD4WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD4WithRsaEncryption, put = setStaticF_MD4WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD4WithRsaEncryption;

  /// @brief Field MD5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD5, put = setStaticF_MD5))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD5;

  /// @brief Field MD5WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD5WithRsaEncryption, put = setStaticF_MD5WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD5WithRsaEncryption;

  /// @brief Field PbeWithMD2AndDesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithMD2AndDesCbc, put = setStaticF_PbeWithMD2AndDesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithMD2AndDesCbc;

  /// @brief Field PbeWithMD2AndRC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithMD2AndRC2Cbc, put = setStaticF_PbeWithMD2AndRC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithMD2AndRC2Cbc;

  /// @brief Field PbeWithMD5AndDesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithMD5AndDesCbc, put = setStaticF_PbeWithMD5AndDesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithMD5AndDesCbc;

  /// @brief Field PbeWithMD5AndRC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithMD5AndRC2Cbc, put = setStaticF_PbeWithMD5AndRC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithMD5AndRC2Cbc;

  /// @brief Field PbeWithSha1AndDesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithSha1AndDesCbc, put = setStaticF_PbeWithSha1AndDesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithSha1AndDesCbc;

  /// @brief Field PbeWithSha1AndRC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithSha1AndRC2Cbc, put = setStaticF_PbeWithSha1AndRC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithSha1AndRC2Cbc;

  /// @brief Field PbeWithShaAnd128BitRC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithShaAnd128BitRC2Cbc, put = setStaticF_PbeWithShaAnd128BitRC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithShaAnd128BitRC2Cbc;

  /// @brief Field PbeWithShaAnd128BitRC4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithShaAnd128BitRC4, put = setStaticF_PbeWithShaAnd128BitRC4))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithShaAnd128BitRC4;

  /// @brief Field PbeWithShaAnd2KeyTripleDesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithShaAnd2KeyTripleDesCbc,
                             put = setStaticF_PbeWithShaAnd2KeyTripleDesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithShaAnd2KeyTripleDesCbc;

  /// @brief Field PbeWithShaAnd3KeyTripleDesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithShaAnd3KeyTripleDesCbc,
                             put = setStaticF_PbeWithShaAnd3KeyTripleDesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithShaAnd3KeyTripleDesCbc;

  /// @brief Field PbeWithShaAnd40BitRC4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbeWithShaAnd40BitRC4, put = setStaticF_PbeWithShaAnd40BitRC4))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbeWithShaAnd40BitRC4;

  /// @brief Field PbewithShaAnd40BitRC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PbewithShaAnd40BitRC2Cbc, put = setStaticF_PbewithShaAnd40BitRC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PbewithShaAnd40BitRC2Cbc;

  /// @brief Field Pkcs1Oid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs1Oid, put = setStaticF_Pkcs1Oid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs1Oid;

  /// @brief Field Pkcs8ShroudedKeyBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs8ShroudedKeyBag, put = setStaticF_Pkcs8ShroudedKeyBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs8ShroudedKeyBag;

  /// @brief Field Pkcs9AtChallengePassword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtChallengePassword, put = setStaticF_Pkcs9AtChallengePassword))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtChallengePassword;

  /// @brief Field Pkcs9AtContentType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtContentType, put = setStaticF_Pkcs9AtContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtContentType;

  /// @brief Field Pkcs9AtCounterSignature, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtCounterSignature, put = setStaticF_Pkcs9AtCounterSignature))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtCounterSignature;

  /// @brief Field Pkcs9AtEmailAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtEmailAddress, put = setStaticF_Pkcs9AtEmailAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtEmailAddress;

  /// @brief Field Pkcs9AtExtendedCertificateAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtExtendedCertificateAttributes,
                             put = setStaticF_Pkcs9AtExtendedCertificateAttributes))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtExtendedCertificateAttributes;

  /// @brief Field Pkcs9AtExtensionRequest, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtExtensionRequest, put = setStaticF_Pkcs9AtExtensionRequest))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtExtensionRequest;

  /// @brief Field Pkcs9AtFriendlyName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtFriendlyName, put = setStaticF_Pkcs9AtFriendlyName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtFriendlyName;

  /// @brief Field Pkcs9AtLocalKeyID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtLocalKeyID, put = setStaticF_Pkcs9AtLocalKeyID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtLocalKeyID;

  /// @brief Field Pkcs9AtMessageDigest, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtMessageDigest, put = setStaticF_Pkcs9AtMessageDigest))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtMessageDigest;

  /// @brief Field Pkcs9AtSigningDescription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtSigningDescription, put = setStaticF_Pkcs9AtSigningDescription))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtSigningDescription;

  /// @brief Field Pkcs9AtSigningTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtSigningTime, put = setStaticF_Pkcs9AtSigningTime))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtSigningTime;

  /// @brief Field Pkcs9AtSmimeCapabilities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtSmimeCapabilities, put = setStaticF_Pkcs9AtSmimeCapabilities))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtSmimeCapabilities;

  /// @brief Field Pkcs9AtUnstructuredAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtUnstructuredAddress, put = setStaticF_Pkcs9AtUnstructuredAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtUnstructuredAddress;

  /// @brief Field Pkcs9AtUnstructuredName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pkcs9AtUnstructuredName, put = setStaticF_Pkcs9AtUnstructuredName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pkcs9AtUnstructuredName;

  /// @brief Field PreferSignedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PreferSignedData, put = setStaticF_PreferSignedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PreferSignedData;

  /// @brief Field RC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RC2Cbc, put = setStaticF_RC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* RC2Cbc;

  /// @brief Field RsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RsaEncryption, put = setStaticF_RsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* RsaEncryption;

  /// @brief Field SafeContentsBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SafeContentsBag, put = setStaticF_SafeContentsBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SafeContentsBag;

  /// @brief Field SdsiCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SdsiCertificate, put = setStaticF_SdsiCertificate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SdsiCertificate;

  /// @brief Field SecretBag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SecretBag, put = setStaticF_SecretBag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SecretBag;

  /// @brief Field Sha1WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha1WithRsaEncryption, put = setStaticF_Sha1WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha1WithRsaEncryption;

  /// @brief Field Sha224WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha224WithRsaEncryption, put = setStaticF_Sha224WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha224WithRsaEncryption;

  /// @brief Field Sha256WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha256WithRsaEncryption, put = setStaticF_Sha256WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha256WithRsaEncryption;

  /// @brief Field Sha384WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha384WithRsaEncryption, put = setStaticF_Sha384WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha384WithRsaEncryption;

  /// @brief Field Sha512WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha512WithRsaEncryption, put = setStaticF_Sha512WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha512WithRsaEncryption;

  /// @brief Field Sha512_224WithRSAEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha512_224WithRSAEncryption, put = setStaticF_Sha512_224WithRSAEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha512_224WithRSAEncryption;

  /// @brief Field Sha512_256WithRSAEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha512_256WithRSAEncryption, put = setStaticF_Sha512_256WithRSAEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha512_256WithRSAEncryption;

  /// @brief Field SignedAndEnvelopedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignedAndEnvelopedData, put = setStaticF_SignedAndEnvelopedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedAndEnvelopedData;

  /// @brief Field SignedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignedData, put = setStaticF_SignedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedData;

  /// @brief Field SmimeCapabilitiesVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SmimeCapabilitiesVersions, put = setStaticF_SmimeCapabilitiesVersions))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SmimeCapabilitiesVersions;

  /// @brief Field SrsaOaepEncryptionSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SrsaOaepEncryptionSet, put = setStaticF_SrsaOaepEncryptionSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SrsaOaepEncryptionSet;

  /// @brief Field X509CertType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_X509CertType, put = setStaticF_X509CertType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* X509CertType;

  /// @brief Field X509Certificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_X509Certificate, put = setStaticF_X509Certificate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* X509Certificate;

  /// @brief Field X509Crl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_X509Crl, put = setStaticF_X509Crl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* X509Crl;

  /// @brief Field rc4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rc4, put = setStaticF_rc4))::Org::BouncyCastle::Asn1::DerObjectIdentifier* rc4;

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x10f7e10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Data();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DhKeyAgreement();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DigestedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncryptedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EnvelopedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAAsymmDecryptKeyID();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAACommitmentType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAACommunityIdentifiers();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentHint();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentIdentifier();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAContentReference();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAADecryptKeyID();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEncrypKeyPref();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsArchiveTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertCrlTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertValues();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCertificateRefs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsCommitmentType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsContentTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsEscTimeStamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsOtherSigCert();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsRevocationRefs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsRevocationValues();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSigPolicyID();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSignerAttr();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAEtsSignerLocation();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAImplCompressAlgs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAImplCryptoAlgs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAMsgSigDigest();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAOid();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAOtherSigCert();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAAReceiptRequest();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigPolicyID();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASignatureTimeStampToken();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASignerLocation();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigningCertificate();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAASigningCertificateV2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlg();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgAeadChaCha20Poly1305();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgCms3DesWrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgCmsRC2Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgEsdh();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgPwriKek();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAlgSsdh();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTAuthData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTAuthEnvelopedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTCompressedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTTimestampedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCTTstInfo();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfApproval();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfCreation();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfDelivery();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfOrigin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfReceipt();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCtiEtsProofOfSender();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHmacWithSha512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdMgf1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPSpecified();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPbeS2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPbkdf2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsaKem();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsaesOaep();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPss();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSmime();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSpqEtsUNotice();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSpqEtsUri();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_KeyBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD2WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD2AndDesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD2AndRC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD5AndDesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithMD5AndRC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithSha1AndDesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithSha1AndRC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd128BitRC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd128BitRC4();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd2KeyTripleDesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd3KeyTripleDesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbeWithShaAnd40BitRC4();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PbewithShaAnd40BitRC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs1Oid();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs8ShroudedKeyBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtChallengePassword();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtContentType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtCounterSignature();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtEmailAddress();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtExtendedCertificateAttributes();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtExtensionRequest();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtFriendlyName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtLocalKeyID();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtMessageDigest();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSigningDescription();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSigningTime();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtSmimeCapabilities();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtUnstructuredAddress();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pkcs9AtUnstructuredName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SafeContentsBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SdsiCertificate();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecretBag();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha1WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha224WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha256WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha384WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512_224WithRSAEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha512_256WithRSAEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedAndEnvelopedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitiesVersions();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SrsaOaepEncryptionSet();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509CertType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509Certificate();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X509Crl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_rc4();

  static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CrlBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DhKeyAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAAsymmDecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAACommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAACommunityIdentifiers(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAContentIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAContentReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAADecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsCertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsCertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsCertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsCommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsEscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsRevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsRevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsSigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsSignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAEtsSignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAImplCompressAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAImplCryptoAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAMsgSigDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAAReceiptRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAASigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAASignatureTimeStampToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAASignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAASigningCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAASigningCertificateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgAeadChaCha20Poly1305(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgCms3DesWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgCmsRC2Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgEsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgPwriKek(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAlgSsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCTAuthData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCTAuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCTCompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCTTimestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCTTstInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCtiEtsProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHmacWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHmacWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHmacWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHmacWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHmacWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdMgf1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdPSpecified(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdPbeS2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdPbkdf2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsaKem(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsaesOaep(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsassaPss(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSmime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSpqEtsUNotice(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSpqEtsUri(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_KeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD2WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MD5WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithMD2AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithMD2AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithMD5AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithMD5AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithSha1AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithSha1AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithShaAnd128BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithShaAnd128BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithShaAnd2KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithShaAnd3KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbeWithShaAnd40BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PbewithShaAnd40BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs1Oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtChallengePassword(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtCounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtEmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtExtendedCertificateAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtExtensionRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtFriendlyName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtLocalKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtMessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtSigningDescription(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtSigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtSmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtUnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Pkcs9AtUnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SafeContentsBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SdsiCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SecretBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha1WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha224WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha256WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha384WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha512WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha512_224WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Sha512_256WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SrsaOaepEncryptionSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_X509CertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_X509Certificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_X509Crl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_rc4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkcsObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkcsObjectIdentifiers(PkcsObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkcsObjectIdentifiers(PkcsObjectIdentifiers const&) = delete;

  /// @brief Field BagTypes offset 0xffffffff size 0x8
  static constexpr ::ConstString BagTypes{ u"1.2.840.113549.1.12.10.1" };

  /// @brief Field CertTypes offset 0xffffffff size 0x8
  static constexpr ::ConstString CertTypes{ u"1.2.840.113549.1.9.22" };

  /// @brief Field CrlTypes offset 0xffffffff size 0x8
  static constexpr ::ConstString CrlTypes{ u"1.2.840.113549.1.9.23" };

  /// @brief Field DigestAlgorithm offset 0xffffffff size 0x8
  static constexpr ::ConstString DigestAlgorithm{ u"1.2.840.113549.2" };

  /// @brief Field EncryptionAlgorithm offset 0xffffffff size 0x8
  static constexpr ::ConstString EncryptionAlgorithm{ u"1.2.840.113549.3" };

  /// @brief Field IdAA offset 0xffffffff size 0x8
  static constexpr ::ConstString IdAA{ u"1.2.840.113549.1.9.16.2" };

  /// @brief Field IdCT offset 0xffffffff size 0x8
  static constexpr ::ConstString IdCT{ u"1.2.840.113549.1.9.16.1" };

  /// @brief Field IdCti offset 0xffffffff size 0x8
  static constexpr ::ConstString IdCti{ u"1.2.840.113549.1.9.16.6" };

  /// @brief Field IdSpq offset 0xffffffff size 0x8
  static constexpr ::ConstString IdSpq{ u"1.2.840.113549.1.9.16.5" };

  /// @brief Field Pkcs1 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs1{ u"1.2.840.113549.1.1" };

  /// @brief Field Pkcs12 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs12{ u"1.2.840.113549.1.12" };

  /// @brief Field Pkcs12PbeIds offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs12PbeIds{ u"1.2.840.113549.1.12.1" };

  /// @brief Field Pkcs3 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs3{ u"1.2.840.113549.1.3" };

  /// @brief Field Pkcs5 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs5{ u"1.2.840.113549.1.5" };

  /// @brief Field Pkcs7 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs7{ u"1.2.840.113549.1.7" };

  /// @brief Field Pkcs9 offset 0xffffffff size 0x8
  static constexpr ::ConstString Pkcs9{ u"1.2.840.113549.1.9" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*, "Org.BouncyCastle.Asn1.Pkcs", "PkcsObjectIdentifiers");
