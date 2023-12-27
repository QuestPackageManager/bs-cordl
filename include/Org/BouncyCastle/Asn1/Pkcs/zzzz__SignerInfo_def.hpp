#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignerInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SignerInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo);
// Type: Org.BouncyCastle.Asn1.Pkcs::SignerInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(253))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::SignerInfo*
class CORDL_TYPE SignerInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field issuerAndSerialNumber, offset 0x18, size 0x8
  __declspec(property(get = __get_issuerAndSerialNumber, put = __set_issuerAndSerialNumber))::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber;

  /// @brief Field digAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __get_digAlgorithm, put = __set_digAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm;

  /// @brief Field authenticatedAttributes, offset 0x28, size 0x8
  __declspec(property(get = __get_authenticatedAttributes, put = __set_authenticatedAttributes))::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes;

  /// @brief Field digEncryptionAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __get_digEncryptionAlgorithm, put = __set_digEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm;

  /// @brief Field encryptedDigest, offset 0x38, size 0x8
  __declspec(property(get = __get_encryptedDigest, put = __set_encryptedDigest))::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest;

  /// @brief Field unauthenticatedAttributes, offset 0x40, size 0x8
  __declspec(property(get = __get_unauthenticatedAttributes, put = __set_unauthenticatedAttributes))::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_IssuerAndSerialNumber))::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* IssuerAndSerialNumber;

  __declspec(property(get = get_AuthenticatedAttributes))::Org::BouncyCastle::Asn1::Asn1Set* AuthenticatedAttributes;

  __declspec(property(get = get_DigestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  __declspec(property(get = get_EncryptedDigest))::Org::BouncyCastle::Asn1::Asn1OctetString* EncryptedDigest;

  __declspec(property(get = get_DigestEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestEncryptionAlgorithm;

  __declspec(property(get = get_UnauthenticatedAttributes))::Org::BouncyCastle::Asn1::Asn1Set* UnauthenticatedAttributes;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber*& __get_issuerAndSerialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber*> const& __get_issuerAndSerialNumber() const;

  constexpr void __set_issuerAndSerialNumber(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_digAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_digAlgorithm() const;

  constexpr void __set_digAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_authenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_authenticatedAttributes() const;

  constexpr void __set_authenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_digEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_digEncryptionAlgorithm() const;

  constexpr void __set_digEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_encryptedDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_encryptedDigest() const;

  constexpr void __set_encryptedDigest(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unauthenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unauthenticatedAttributes() const;

  constexpr void __set_unauthenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xf900fc size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm,
                                                                      ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest, ::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes);

  /// @brief Method .ctor addr 0xf90928 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* issuerAndSerialNumber,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set* authenticatedAttributes,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedDigest,
                    ::Org::BouncyCastle::Asn1::Asn1Set* unauthenticatedAttributes);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignerInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf90284 size 0x6a4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xf9098c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_IssuerAndSerialNumber addr 0xf90994 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* get_IssuerAndSerialNumber();

  /// @brief Method get_AuthenticatedAttributes addr 0xf9099c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthenticatedAttributes();

  /// @brief Method get_DigestAlgorithm addr 0xf909a4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  /// @brief Method get_EncryptedDigest addr 0xf909ac size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedDigest();

  /// @brief Method get_DigestEncryptionAlgorithm addr 0xf909b4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestEncryptionAlgorithm();

  /// @brief Method get_UnauthenticatedAttributes addr 0xf909bc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthenticatedAttributes();

  /// @brief Method ToAsn1Object addr 0xf909c4 size 0x1fc virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInfo(SignerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInfo(SignerInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::SignerInfo, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SignerInfo*, "Org.BouncyCastle.Asn1.Pkcs", "SignerInfo");
