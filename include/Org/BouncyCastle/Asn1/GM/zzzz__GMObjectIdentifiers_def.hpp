#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GMObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::GM {
class GMObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.GM::GMObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(171))
// CS Name: ::Org.BouncyCastle.Asn1.GM::GMObjectIdentifiers*
class CORDL_TYPE GMObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field sm_scheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm_scheme, put = setStaticF_sm_scheme))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm_scheme;

  /// @brief Field sm6_ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm6_ecb, put = setStaticF_sm6_ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm6_ecb;

  /// @brief Field sm6_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm6_cbc, put = setStaticF_sm6_cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm6_cbc;

  /// @brief Field sm6_ofb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm6_ofb128, put = setStaticF_sm6_ofb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm6_ofb128;

  /// @brief Field sm6_cfb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm6_cfb128, put = setStaticF_sm6_cfb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm6_cfb128;

  /// @brief Field sm1_ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_ecb, put = setStaticF_sm1_ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_ecb;

  /// @brief Field sm1_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_cbc, put = setStaticF_sm1_cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_cbc;

  /// @brief Field sm1_ofb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_ofb128, put = setStaticF_sm1_ofb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_ofb128;

  /// @brief Field sm1_cfb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_cfb128, put = setStaticF_sm1_cfb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_cfb128;

  /// @brief Field sm1_cfb1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_cfb1, put = setStaticF_sm1_cfb1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_cfb1;

  /// @brief Field sm1_cfb8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm1_cfb8, put = setStaticF_sm1_cfb8))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm1_cfb8;

  /// @brief Field ssf33_ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_ecb, put = setStaticF_ssf33_ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_ecb;

  /// @brief Field ssf33_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_cbc, put = setStaticF_ssf33_cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_cbc;

  /// @brief Field ssf33_ofb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_ofb128, put = setStaticF_ssf33_ofb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_ofb128;

  /// @brief Field ssf33_cfb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_cfb128, put = setStaticF_ssf33_cfb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_cfb128;

  /// @brief Field ssf33_cfb1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_cfb1, put = setStaticF_ssf33_cfb1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_cfb1;

  /// @brief Field ssf33_cfb8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ssf33_cfb8, put = setStaticF_ssf33_cfb8))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ssf33_cfb8;

  /// @brief Field sms4_ecb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_ecb, put = setStaticF_sms4_ecb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_ecb;

  /// @brief Field sms4_cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_cbc, put = setStaticF_sms4_cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_cbc;

  /// @brief Field sms4_ofb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_ofb128, put = setStaticF_sms4_ofb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_ofb128;

  /// @brief Field sms4_cfb128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_cfb128, put = setStaticF_sms4_cfb128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_cfb128;

  /// @brief Field sms4_cfb1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_cfb1, put = setStaticF_sms4_cfb1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_cfb1;

  /// @brief Field sms4_cfb8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_cfb8, put = setStaticF_sms4_cfb8))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_cfb8;

  /// @brief Field sms4_ctr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_ctr, put = setStaticF_sms4_ctr))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_ctr;

  /// @brief Field sms4_gcm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_gcm, put = setStaticF_sms4_gcm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_gcm;

  /// @brief Field sms4_ccm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_ccm, put = setStaticF_sms4_ccm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_ccm;

  /// @brief Field sms4_xts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_xts, put = setStaticF_sms4_xts))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_xts;

  /// @brief Field sms4_wrap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_wrap, put = setStaticF_sms4_wrap))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_wrap;

  /// @brief Field sms4_wrap_pad, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_wrap_pad, put = setStaticF_sms4_wrap_pad))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_wrap_pad;

  /// @brief Field sms4_ocb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sms4_ocb, put = setStaticF_sms4_ocb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sms4_ocb;

  /// @brief Field sm5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm5, put = setStaticF_sm5))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm5;

  /// @brief Field sm2p256v1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2p256v1, put = setStaticF_sm2p256v1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2p256v1;

  /// @brief Field sm2sign, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign, put = setStaticF_sm2sign))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign;

  /// @brief Field sm2exchange, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2exchange, put = setStaticF_sm2exchange))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2exchange;

  /// @brief Field sm2encrypt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt, put = setStaticF_sm2encrypt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt;

  /// @brief Field wapip192v1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wapip192v1, put = setStaticF_wapip192v1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* wapip192v1;

  /// @brief Field sm2encrypt_recommendedParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_recommendedParameters,
                             put = setStaticF_sm2encrypt_recommendedParameters))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_recommendedParameters;

  /// @brief Field sm2encrypt_specifiedParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_specifiedParameters,
                             put = setStaticF_sm2encrypt_specifiedParameters))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_specifiedParameters;

  /// @brief Field sm2encrypt_with_sm3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sm3, put = setStaticF_sm2encrypt_with_sm3))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sm3;

  /// @brief Field sm2encrypt_with_sha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sha1, put = setStaticF_sm2encrypt_with_sha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sha1;

  /// @brief Field sm2encrypt_with_sha224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sha224, put = setStaticF_sm2encrypt_with_sha224))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sha224;

  /// @brief Field sm2encrypt_with_sha256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sha256, put = setStaticF_sm2encrypt_with_sha256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sha256;

  /// @brief Field sm2encrypt_with_sha384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sha384, put = setStaticF_sm2encrypt_with_sha384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sha384;

  /// @brief Field sm2encrypt_with_sha512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_sha512, put = setStaticF_sm2encrypt_with_sha512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_sha512;

  /// @brief Field sm2encrypt_with_rmd160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_rmd160, put = setStaticF_sm2encrypt_with_rmd160))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_rmd160;

  /// @brief Field sm2encrypt_with_whirlpool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_whirlpool, put = setStaticF_sm2encrypt_with_whirlpool))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_whirlpool;

  /// @brief Field sm2encrypt_with_blake2b512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_blake2b512, put = setStaticF_sm2encrypt_with_blake2b512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_blake2b512;

  /// @brief Field sm2encrypt_with_blake2s256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_blake2s256, put = setStaticF_sm2encrypt_with_blake2s256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_blake2s256;

  /// @brief Field sm2encrypt_with_md5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2encrypt_with_md5, put = setStaticF_sm2encrypt_with_md5))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2encrypt_with_md5;

  /// @brief Field id_sm9PublicKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_sm9PublicKey, put = setStaticF_id_sm9PublicKey))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_sm9PublicKey;

  /// @brief Field sm9sign, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm9sign, put = setStaticF_sm9sign))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm9sign;

  /// @brief Field sm9keyagreement, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm9keyagreement, put = setStaticF_sm9keyagreement))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm9keyagreement;

  /// @brief Field sm9encrypt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm9encrypt, put = setStaticF_sm9encrypt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm9encrypt;

  /// @brief Field sm3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm3, put = setStaticF_sm3))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm3;

  /// @brief Field hmac_sm3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hmac_sm3, put = setStaticF_hmac_sm3))::Org::BouncyCastle::Asn1::DerObjectIdentifier* hmac_sm3;

  /// @brief Field sm2sign_with_sm3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sm3, put = setStaticF_sm2sign_with_sm3))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sm3;

  /// @brief Field sm2sign_with_sha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sha1, put = setStaticF_sm2sign_with_sha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sha1;

  /// @brief Field sm2sign_with_sha256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sha256, put = setStaticF_sm2sign_with_sha256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sha256;

  /// @brief Field sm2sign_with_sha512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sha512, put = setStaticF_sm2sign_with_sha512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sha512;

  /// @brief Field sm2sign_with_sha224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sha224, put = setStaticF_sm2sign_with_sha224))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sha224;

  /// @brief Field sm2sign_with_sha384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_sha384, put = setStaticF_sm2sign_with_sha384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_sha384;

  /// @brief Field sm2sign_with_rmd160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_rmd160, put = setStaticF_sm2sign_with_rmd160))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_rmd160;

  /// @brief Field sm2sign_with_whirlpool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_whirlpool, put = setStaticF_sm2sign_with_whirlpool))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_whirlpool;

  /// @brief Field sm2sign_with_blake2b512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_blake2b512, put = setStaticF_sm2sign_with_blake2b512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_blake2b512;

  /// @brief Field sm2sign_with_blake2s256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sm2sign_with_blake2s256, put = setStaticF_sm2sign_with_blake2s256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sm2sign_with_blake2s256;

  static inline void setStaticF_sm_scheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm_scheme();

  static inline void setStaticF_sm6_ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm6_ecb();

  static inline void setStaticF_sm6_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm6_cbc();

  static inline void setStaticF_sm6_ofb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm6_ofb128();

  static inline void setStaticF_sm6_cfb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm6_cfb128();

  static inline void setStaticF_sm1_ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_ecb();

  static inline void setStaticF_sm1_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_cbc();

  static inline void setStaticF_sm1_ofb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_ofb128();

  static inline void setStaticF_sm1_cfb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_cfb128();

  static inline void setStaticF_sm1_cfb1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_cfb1();

  static inline void setStaticF_sm1_cfb8(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm1_cfb8();

  static inline void setStaticF_ssf33_ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_ecb();

  static inline void setStaticF_ssf33_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_cbc();

  static inline void setStaticF_ssf33_ofb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_ofb128();

  static inline void setStaticF_ssf33_cfb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_cfb128();

  static inline void setStaticF_ssf33_cfb1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_cfb1();

  static inline void setStaticF_ssf33_cfb8(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ssf33_cfb8();

  static inline void setStaticF_sms4_ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_ecb();

  static inline void setStaticF_sms4_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_cbc();

  static inline void setStaticF_sms4_ofb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_ofb128();

  static inline void setStaticF_sms4_cfb128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_cfb128();

  static inline void setStaticF_sms4_cfb1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_cfb1();

  static inline void setStaticF_sms4_cfb8(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_cfb8();

  static inline void setStaticF_sms4_ctr(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_ctr();

  static inline void setStaticF_sms4_gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_gcm();

  static inline void setStaticF_sms4_ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_ccm();

  static inline void setStaticF_sms4_xts(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_xts();

  static inline void setStaticF_sms4_wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_wrap();

  static inline void setStaticF_sms4_wrap_pad(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_wrap_pad();

  static inline void setStaticF_sms4_ocb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sms4_ocb();

  static inline void setStaticF_sm5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm5();

  static inline void setStaticF_sm2p256v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2p256v1();

  static inline void setStaticF_sm2sign(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign();

  static inline void setStaticF_sm2exchange(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2exchange();

  static inline void setStaticF_sm2encrypt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt();

  static inline void setStaticF_wapip192v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_wapip192v1();

  static inline void setStaticF_sm2encrypt_recommendedParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_recommendedParameters();

  static inline void setStaticF_sm2encrypt_specifiedParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_specifiedParameters();

  static inline void setStaticF_sm2encrypt_with_sm3(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sm3();

  static inline void setStaticF_sm2encrypt_with_sha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sha1();

  static inline void setStaticF_sm2encrypt_with_sha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sha224();

  static inline void setStaticF_sm2encrypt_with_sha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sha256();

  static inline void setStaticF_sm2encrypt_with_sha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sha384();

  static inline void setStaticF_sm2encrypt_with_sha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_sha512();

  static inline void setStaticF_sm2encrypt_with_rmd160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_rmd160();

  static inline void setStaticF_sm2encrypt_with_whirlpool(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_whirlpool();

  static inline void setStaticF_sm2encrypt_with_blake2b512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_blake2b512();

  static inline void setStaticF_sm2encrypt_with_blake2s256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_blake2s256();

  static inline void setStaticF_sm2encrypt_with_md5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2encrypt_with_md5();

  static inline void setStaticF_id_sm9PublicKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_sm9PublicKey();

  static inline void setStaticF_sm9sign(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm9sign();

  static inline void setStaticF_sm9keyagreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm9keyagreement();

  static inline void setStaticF_sm9encrypt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm9encrypt();

  static inline void setStaticF_sm3(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm3();

  static inline void setStaticF_hmac_sm3(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_hmac_sm3();

  static inline void setStaticF_sm2sign_with_sm3(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sm3();

  static inline void setStaticF_sm2sign_with_sha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sha1();

  static inline void setStaticF_sm2sign_with_sha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sha256();

  static inline void setStaticF_sm2sign_with_sha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sha512();

  static inline void setStaticF_sm2sign_with_sha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sha224();

  static inline void setStaticF_sm2sign_with_sha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_sha384();

  static inline void setStaticF_sm2sign_with_rmd160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_rmd160();

  static inline void setStaticF_sm2sign_with_whirlpool(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_whirlpool();

  static inline void setStaticF_sm2sign_with_blake2b512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_blake2b512();

  static inline void setStaticF_sm2sign_with_blake2s256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sm2sign_with_blake2s256();

  static inline ::Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xe294d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GMObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GMObjectIdentifiers(GMObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GMObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GMObjectIdentifiers(GMObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GMObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::GM
NEED_NO_BOX(::Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers*, "Org.BouncyCastle.Asn1.GM", "GMObjectIdentifiers");
