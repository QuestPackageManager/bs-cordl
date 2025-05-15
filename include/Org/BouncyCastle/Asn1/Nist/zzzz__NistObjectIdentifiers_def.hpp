#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Nist/NistObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NistObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Nist {
class NistObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Nist {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Nist.NistObjectIdentifiers
class CORDL_TYPE NistObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Aes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes, put = setStaticF_Aes)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes;

  /// @brief Field DsaWithSha224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DsaWithSha224, put = setStaticF_DsaWithSha224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DsaWithSha224;

  /// @brief Field DsaWithSha256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DsaWithSha256, put = setStaticF_DsaWithSha256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DsaWithSha256;

  /// @brief Field DsaWithSha384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DsaWithSha384, put = setStaticF_DsaWithSha384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DsaWithSha384;

  /// @brief Field DsaWithSha512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DsaWithSha512, put = setStaticF_DsaWithSha512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DsaWithSha512;

  /// @brief Field HashAlgs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HashAlgs, put = setStaticF_HashAlgs)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* HashAlgs;

  /// @brief Field IdAes128Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Cbc, put = setStaticF_IdAes128Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Cbc;

  /// @brief Field IdAes128Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Ccm, put = setStaticF_IdAes128Ccm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Ccm;

  /// @brief Field IdAes128Cfb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Cfb, put = setStaticF_IdAes128Cfb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Cfb;

  /// @brief Field IdAes128Ecb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Ecb, put = setStaticF_IdAes128Ecb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Ecb;

  /// @brief Field IdAes128Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Gcm, put = setStaticF_IdAes128Gcm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Gcm;

  /// @brief Field IdAes128Ofb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Ofb, put = setStaticF_IdAes128Ofb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Ofb;

  /// @brief Field IdAes128Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes128Wrap, put = setStaticF_IdAes128Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes128Wrap;

  /// @brief Field IdAes192Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Cbc, put = setStaticF_IdAes192Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Cbc;

  /// @brief Field IdAes192Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Ccm, put = setStaticF_IdAes192Ccm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Ccm;

  /// @brief Field IdAes192Cfb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Cfb, put = setStaticF_IdAes192Cfb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Cfb;

  /// @brief Field IdAes192Ecb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Ecb, put = setStaticF_IdAes192Ecb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Ecb;

  /// @brief Field IdAes192Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Gcm, put = setStaticF_IdAes192Gcm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Gcm;

  /// @brief Field IdAes192Ofb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Ofb, put = setStaticF_IdAes192Ofb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Ofb;

  /// @brief Field IdAes192Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes192Wrap, put = setStaticF_IdAes192Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes192Wrap;

  /// @brief Field IdAes256Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Cbc, put = setStaticF_IdAes256Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Cbc;

  /// @brief Field IdAes256Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Ccm, put = setStaticF_IdAes256Ccm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Ccm;

  /// @brief Field IdAes256Cfb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Cfb, put = setStaticF_IdAes256Cfb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Cfb;

  /// @brief Field IdAes256Ecb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Ecb, put = setStaticF_IdAes256Ecb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Ecb;

  /// @brief Field IdAes256Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Gcm, put = setStaticF_IdAes256Gcm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Gcm;

  /// @brief Field IdAes256Ofb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Ofb, put = setStaticF_IdAes256Ofb)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Ofb;

  /// @brief Field IdAes256Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdAes256Wrap, put = setStaticF_IdAes256Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAes256Wrap;

  /// @brief Field IdDsaWithSha2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdDsaWithSha2, put = setStaticF_IdDsaWithSha2)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdDsaWithSha2;

  /// @brief Field IdDsaWithSha3_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdDsaWithSha3_224, put = setStaticF_IdDsaWithSha3_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdDsaWithSha3_224;

  /// @brief Field IdDsaWithSha3_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdDsaWithSha3_256, put = setStaticF_IdDsaWithSha3_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdDsaWithSha3_256;

  /// @brief Field IdDsaWithSha3_384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdDsaWithSha3_384, put = setStaticF_IdDsaWithSha3_384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdDsaWithSha3_384;

  /// @brief Field IdDsaWithSha3_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdDsaWithSha3_512, put = setStaticF_IdDsaWithSha3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdDsaWithSha3_512;

  /// @brief Field IdEcdsaWithSha3_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdEcdsaWithSha3_224, put = setStaticF_IdEcdsaWithSha3_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEcdsaWithSha3_224;

  /// @brief Field IdEcdsaWithSha3_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdEcdsaWithSha3_256, put = setStaticF_IdEcdsaWithSha3_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEcdsaWithSha3_256;

  /// @brief Field IdEcdsaWithSha3_384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdEcdsaWithSha3_384, put = setStaticF_IdEcdsaWithSha3_384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEcdsaWithSha3_384;

  /// @brief Field IdEcdsaWithSha3_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdEcdsaWithSha3_512, put = setStaticF_IdEcdsaWithSha3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEcdsaWithSha3_512;

  /// @brief Field IdHMacWithSha3_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdHMacWithSha3_224, put = setStaticF_IdHMacWithSha3_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHMacWithSha3_224;

  /// @brief Field IdHMacWithSha3_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdHMacWithSha3_256, put = setStaticF_IdHMacWithSha3_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHMacWithSha3_256;

  /// @brief Field IdHMacWithSha3_384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdHMacWithSha3_384, put = setStaticF_IdHMacWithSha3_384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHMacWithSha3_384;

  /// @brief Field IdHMacWithSha3_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdHMacWithSha3_512, put = setStaticF_IdHMacWithSha3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdHMacWithSha3_512;

  /// @brief Field IdKmacWithShake128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKmacWithShake128, put = setStaticF_IdKmacWithShake128)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdKmacWithShake128;

  /// @brief Field IdKmacWithShake256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKmacWithShake256, put = setStaticF_IdKmacWithShake256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdKmacWithShake256;

  /// @brief Field IdRsassaPkcs1V15WithSha3_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdRsassaPkcs1V15WithSha3_224, put = setStaticF_IdRsassaPkcs1V15WithSha3_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsassaPkcs1V15WithSha3_224;

  /// @brief Field IdRsassaPkcs1V15WithSha3_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdRsassaPkcs1V15WithSha3_256, put = setStaticF_IdRsassaPkcs1V15WithSha3_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsassaPkcs1V15WithSha3_256;

  /// @brief Field IdRsassaPkcs1V15WithSha3_384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdRsassaPkcs1V15WithSha3_384, put = setStaticF_IdRsassaPkcs1V15WithSha3_384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsassaPkcs1V15WithSha3_384;

  /// @brief Field IdRsassaPkcs1V15WithSha3_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdRsassaPkcs1V15WithSha3_512, put = setStaticF_IdRsassaPkcs1V15WithSha3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdRsassaPkcs1V15WithSha3_512;

  /// @brief Field IdSha224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha224, put = setStaticF_IdSha224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha224;

  /// @brief Field IdSha256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha256, put = setStaticF_IdSha256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha256;

  /// @brief Field IdSha384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha384, put = setStaticF_IdSha384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha384;

  /// @brief Field IdSha3_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha3_224, put = setStaticF_IdSha3_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha3_224;

  /// @brief Field IdSha3_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha3_256, put = setStaticF_IdSha3_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha3_256;

  /// @brief Field IdSha3_384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha3_384, put = setStaticF_IdSha3_384)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha3_384;

  /// @brief Field IdSha3_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha3_512, put = setStaticF_IdSha3_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha3_512;

  /// @brief Field IdSha512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha512, put = setStaticF_IdSha512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha512;

  /// @brief Field IdSha512_224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha512_224, put = setStaticF_IdSha512_224)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha512_224;

  /// @brief Field IdSha512_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSha512_256, put = setStaticF_IdSha512_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha512_256;

  /// @brief Field IdShake128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdShake128, put = setStaticF_IdShake128)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdShake128;

  /// @brief Field IdShake128Len, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdShake128Len, put = setStaticF_IdShake128Len)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdShake128Len;

  /// @brief Field IdShake256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdShake256, put = setStaticF_IdShake256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdShake256;

  /// @brief Field IdShake256Len, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdShake256Len, put = setStaticF_IdShake256Len)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdShake256Len;

  /// @brief Field NistAlgorithm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NistAlgorithm, put = setStaticF_NistAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* NistAlgorithm;

  static inline ::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x2403e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HashAlgs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ccm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Gcm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ccm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Gcm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ccm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Cfb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ecb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Gcm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ofb();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdKmacWithShake128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdKmacWithShake256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512_224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake128Len();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake256Len();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NistAlgorithm();

  static inline void setStaticF_Aes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DsaWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DsaWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DsaWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DsaWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_HashAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes128Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes192Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAes256Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdDsaWithSha2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdDsaWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdDsaWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdDsaWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdDsaWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdEcdsaWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdEcdsaWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdEcdsaWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdEcdsaWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHMacWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHMacWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHMacWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdHMacWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdKmacWithShake128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdKmacWithShake256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsassaPkcs1V15WithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsassaPkcs1V15WithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsassaPkcs1V15WithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdRsassaPkcs1V15WithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha512_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha512_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdShake128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdShake128Len(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdShake256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdShake256Len(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NistAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NistObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NistObjectIdentifiers(NistObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NistObjectIdentifiers(NistObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Nist
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers*, "Org.BouncyCastle.Asn1.Nist", "NistObjectIdentifiers");
