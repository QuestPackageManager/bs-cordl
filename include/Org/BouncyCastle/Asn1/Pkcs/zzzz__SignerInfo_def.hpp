#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/SignerInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignerInfo)
namespace Org::BouncyCastle::Asn1::Pkcs {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SignerInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.SignerInfo
class CORDL_TYPE SignerInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AuthenticatedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Set* AuthenticatedAttributes;

  __declspec(property(get = get_DigestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  __declspec(property(get = get_DigestEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestEncryptionAlgorithm;

  __declspec(property(get = get_EncryptedDigest)) ::Org::BouncyCastle::Asn1::Asn1OctetString* EncryptedDigest;

  __declspec(property(get = get_IssuerAndSerialNumber)) ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* IssuerAndSerialNumber;

  __declspec(property(get = get_UnauthenticatedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Set* UnauthenticatedAttributes;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field authenticatedAttributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authenticatedAttributes, put = __cordl_internal_set_authenticatedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes;

  /// @brief Field digAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_digAlgorithm, put = __cordl_internal_set_digAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm;

  /// @brief Field digEncryptionAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_digEncryptionAlgorithm,
                      put = __cordl_internal_set_digEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm;

  /// @brief Field encryptedDigest, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedDigest, put = __cordl_internal_set_encryptedDigest)) ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest;

  /// @brief Field issuerAndSerialNumber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerAndSerialNumber,
                      put = __cordl_internal_set_issuerAndSerialNumber)) ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber;

  /// @brief Field unauthenticatedAttributes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthenticatedAttributes, put = __cordl_internal_set_unauthenticatedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x2415940, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm,
                                                                      ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest, ::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes);

  /// @brief Method ToAsn1Object, addr 0x24161fc, size 0x1f8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_authenticatedAttributes() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_authenticatedAttributes();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_digAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_digEncryptionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digEncryptionAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_encryptedDigest() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_encryptedDigest();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* const& __cordl_internal_get_issuerAndSerialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber*& __cordl_internal_get_issuerAndSerialNumber();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_unauthenticatedAttributes() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unauthenticatedAttributes();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_authenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_digAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_digEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_encryptedDigest(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_issuerAndSerialNumber(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* value);

  constexpr void __cordl_internal_set_unauthenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2415abc, size 0x6a4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2416160, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest,
                    ::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes);

  /// @brief Method get_AuthenticatedAttributes, addr 0x24161d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthenticatedAttributes();

  /// @brief Method get_DigestAlgorithm, addr 0x24161dc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  /// @brief Method get_DigestEncryptionAlgorithm, addr 0x24161ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestEncryptionAlgorithm();

  /// @brief Method get_EncryptedDigest, addr 0x24161e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedDigest();

  /// @brief Method get_IssuerAndSerialNumber, addr 0x24161cc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* get_IssuerAndSerialNumber();

  /// @brief Method get_UnauthenticatedAttributes, addr 0x24161f4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthenticatedAttributes();

  /// @brief Method get_Version, addr 0x24161c4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInfo(SignerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInfo(SignerInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 253 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field issuerAndSerialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* ___issuerAndSerialNumber;

  /// @brief Field digAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digAlgorithm;

  /// @brief Field authenticatedAttributes, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___authenticatedAttributes;

  /// @brief Field digEncryptionAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digEncryptionAlgorithm;

  /// @brief Field encryptedDigest, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encryptedDigest;

  /// @brief Field unauthenticatedAttributes, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unauthenticatedAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___issuerAndSerialNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___digAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___authenticatedAttributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___digEncryptionAlgorithm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___encryptedDigest) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, ___unauthenticatedAttributes) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo*, "Org.BouncyCastle.Asn1.Pkcs", "SignerInfo");
