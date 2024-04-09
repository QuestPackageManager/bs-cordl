#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MiscObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class MiscObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Misc::MiscObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Misc::MiscObjectIdentifiers*
class CORDL_TYPE MiscObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Entrust, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Entrust, put = setStaticF_Entrust))::StringW Entrust;

  /// @brief Field EntrustVersionExtension, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EntrustVersionExtension, put = setStaticF_EntrustVersionExtension))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EntrustVersionExtension;

  /// @brief Field HMAC_SHA1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HMAC_SHA1, put = setStaticF_HMAC_SHA1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* HMAC_SHA1;

  /// @brief Field Netscape, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Netscape, put = setStaticF_Netscape))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Netscape;

  /// @brief Field NetscapeBaseUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeBaseUrl, put = setStaticF_NetscapeBaseUrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeBaseUrl;

  /// @brief Field NetscapeCAPolicyUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeCAPolicyUrl, put = setStaticF_NetscapeCAPolicyUrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeCAPolicyUrl;

  /// @brief Field NetscapeCARevocationUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeCARevocationUrl, put = setStaticF_NetscapeCARevocationUrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeCARevocationUrl;

  /// @brief Field NetscapeCertComment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeCertComment, put = setStaticF_NetscapeCertComment))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeCertComment;

  /// @brief Field NetscapeCertType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeCertType, put = setStaticF_NetscapeCertType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeCertType;

  /// @brief Field NetscapeRenewalUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeRenewalUrl, put = setStaticF_NetscapeRenewalUrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeRenewalUrl;

  /// @brief Field NetscapeRevocationUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeRevocationUrl, put = setStaticF_NetscapeRevocationUrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeRevocationUrl;

  /// @brief Field NetscapeSslServerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetscapeSslServerName, put = setStaticF_NetscapeSslServerName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NetscapeSslServerName;

  /// @brief Field Novell, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Novell, put = setStaticF_Novell))::StringW Novell;

  /// @brief Field NovellSecurityAttribs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NovellSecurityAttribs, put = setStaticF_NovellSecurityAttribs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NovellSecurityAttribs;

  /// @brief Field Verisign, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Verisign, put = setStaticF_Verisign))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Verisign;

  /// @brief Field VerisignBitString_6_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignBitString_6_13, put = setStaticF_VerisignBitString_6_13))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignBitString_6_13;

  /// @brief Field VerisignCzagExtension, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignCzagExtension, put = setStaticF_VerisignCzagExtension))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignCzagExtension;

  /// @brief Field VerisignDnbDunsNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignDnbDunsNumber, put = setStaticF_VerisignDnbDunsNumber))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignDnbDunsNumber;

  /// @brief Field VerisignIssStrongCrypto, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignIssStrongCrypto, put = setStaticF_VerisignIssStrongCrypto))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignIssStrongCrypto;

  /// @brief Field VerisignOnSiteJurisdictionHash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignOnSiteJurisdictionHash,
                             put = setStaticF_VerisignOnSiteJurisdictionHash))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignOnSiteJurisdictionHash;

  /// @brief Field VerisignPrivate_6_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerisignPrivate_6_9, put = setStaticF_VerisignPrivate_6_9))::Org::BouncyCastle::Asn1::DerObjectIdentifier* VerisignPrivate_6_9;

  /// @brief Field as_sys_sec_alg_ideaCBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_as_sys_sec_alg_ideaCBC, put = setStaticF_as_sys_sec_alg_ideaCBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* as_sys_sec_alg_ideaCBC;

  /// @brief Field blake2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blake2, put = setStaticF_blake2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* blake2;

  /// @brief Field cast5CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cast5CBC, put = setStaticF_cast5CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cast5CBC;

  /// @brief Field cryptlib, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib, put = setStaticF_cryptlib))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib;

  /// @brief Field cryptlib_algorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib_algorithm, put = setStaticF_cryptlib_algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib_algorithm;

  /// @brief Field cryptlib_algorithm_blowfish_CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib_algorithm_blowfish_CBC,
                             put = setStaticF_cryptlib_algorithm_blowfish_CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib_algorithm_blowfish_CBC;

  /// @brief Field cryptlib_algorithm_blowfish_CFB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib_algorithm_blowfish_CFB,
                             put = setStaticF_cryptlib_algorithm_blowfish_CFB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib_algorithm_blowfish_CFB;

  /// @brief Field cryptlib_algorithm_blowfish_ECB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib_algorithm_blowfish_ECB,
                             put = setStaticF_cryptlib_algorithm_blowfish_ECB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib_algorithm_blowfish_ECB;

  /// @brief Field cryptlib_algorithm_blowfish_OFB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptlib_algorithm_blowfish_OFB,
                             put = setStaticF_cryptlib_algorithm_blowfish_OFB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* cryptlib_algorithm_blowfish_OFB;

  /// @brief Field id_blake2b160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2b160, put = setStaticF_id_blake2b160))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2b160;

  /// @brief Field id_blake2b256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2b256, put = setStaticF_id_blake2b256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2b256;

  /// @brief Field id_blake2b384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2b384, put = setStaticF_id_blake2b384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2b384;

  /// @brief Field id_blake2b512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2b512, put = setStaticF_id_blake2b512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2b512;

  /// @brief Field id_blake2s128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2s128, put = setStaticF_id_blake2s128))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2s128;

  /// @brief Field id_blake2s160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2s160, put = setStaticF_id_blake2s160))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2s160;

  /// @brief Field id_blake2s224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2s224, put = setStaticF_id_blake2s224))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2s224;

  /// @brief Field id_blake2s256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_blake2s256, put = setStaticF_id_blake2s256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_blake2s256;

  /// @brief Field id_scrypt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_scrypt, put = setStaticF_id_scrypt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_scrypt;

  static inline ::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x10e8064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_Entrust();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EntrustVersionExtension();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HMAC_SHA1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Netscape();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeBaseUrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeCAPolicyUrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeCARevocationUrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeCertComment();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeCertType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeRenewalUrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeRevocationUrl();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NetscapeSslServerName();

  static inline ::StringW getStaticF_Novell();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NovellSecurityAttribs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Verisign();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignBitString_6_13();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignCzagExtension();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignDnbDunsNumber();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignIssStrongCrypto();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignOnSiteJurisdictionHash();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VerisignPrivate_6_9();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_as_sys_sec_alg_ideaCBC();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_blake2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cast5CBC();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib_algorithm();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib_algorithm_blowfish_CBC();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib_algorithm_blowfish_CFB();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib_algorithm_blowfish_ECB();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_cryptlib_algorithm_blowfish_OFB();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2b160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2b256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2b384();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2b512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2s128();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2s160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2s224();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_blake2s256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_scrypt();

  static inline void setStaticF_Entrust(::StringW value);

  static inline void setStaticF_EntrustVersionExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_HMAC_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Netscape(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeBaseUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeCAPolicyUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeCARevocationUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeCertComment(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeCertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeRenewalUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeRevocationUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_NetscapeSslServerName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Novell(::StringW value);

  static inline void setStaticF_NovellSecurityAttribs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Verisign(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignBitString_6_13(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignCzagExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignDnbDunsNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignIssStrongCrypto(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignOnSiteJurisdictionHash(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_VerisignPrivate_6_9(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_as_sys_sec_alg_ideaCBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_blake2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cast5CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib_algorithm_blowfish_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib_algorithm_blowfish_CFB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib_algorithm_blowfish_ECB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_cryptlib_algorithm_blowfish_OFB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2b160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2b256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2b384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2b512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2s128(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2s160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2s224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_blake2s256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_scrypt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscObjectIdentifiers(MiscObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscObjectIdentifiers(MiscObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers*, "Org.BouncyCastle.Asn1.Misc", "MiscObjectIdentifiers");
