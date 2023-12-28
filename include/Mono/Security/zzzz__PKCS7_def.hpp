#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS7)
namespace Mono::Security {
class __PKCS7__ContentInfo;
}
namespace Mono::Security {
class __PKCS7__EncryptedData;
}
namespace Mono::Security {
class __PKCS7__SignedData;
}
namespace Mono::Security {
class __PKCS7__SignerInfo;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class PKCS7;
}
namespace Mono::Security {
class __PKCS7__ContentInfo;
}
namespace Mono::Security {
class __PKCS7__EncryptedData;
}
namespace Mono::Security {
class __PKCS7__SignedData;
}
namespace Mono::Security {
class __PKCS7__SignerInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::PKCS7);
MARK_REF_PTR_T(::Mono::Security::__PKCS7__ContentInfo);
MARK_REF_PTR_T(::Mono::Security::__PKCS7__EncryptedData);
MARK_REF_PTR_T(::Mono::Security::__PKCS7__SignedData);
MARK_REF_PTR_T(::Mono::Security::__PKCS7__SignerInfo);
// Type: ::ContentInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13740))
// CS Name: ::PKCS7::ContentInfo*
class CORDL_TYPE __PKCS7__ContentInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __get_contentType, put = __set_contentType))::StringW contentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::Mono::Security::ASN1* content;

  __declspec(property(get = get_ASN1))::Mono::Security::ASN1* ASN1;

  __declspec(property(get = get_Content, put = set_Content))::Mono::Security::ASN1* Content;

  __declspec(property(get = get_ContentType, put = set_ContentType))::StringW ContentType;

  constexpr ::StringW& __get_contentType();

  constexpr ::StringW const& __get_contentType() const;

  constexpr void __set_contentType(::StringW value);

  constexpr ::Mono::Security::ASN1*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __get_content() const;

  constexpr void __set_content(::Mono::Security::ASN1* value);

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor();

  /// @brief Method .ctor addr 0x23eef3c size 0x78 virtual false final false
  inline void _ctor();

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::StringW oid);

  /// @brief Method .ctor addr 0x23eefb4 size 0x24 virtual false final false
  inline void _ctor(::StringW oid);

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x23eefd8 size 0x70 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23ef048 size 0x188 virtual false final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_ASN1 addr 0x23ef1d0 size 0x4 virtual false final false
  inline ::Mono::Security::ASN1* get_ASN1();

  /// @brief Method get_Content addr 0x23ef288 size 0x8 virtual false final false
  inline ::Mono::Security::ASN1* get_Content();

  /// @brief Method set_Content addr 0x23ef290 size 0x8 virtual false final false
  inline void set_Content(::Mono::Security::ASN1* value);

  /// @brief Method get_ContentType addr 0x23ef298 size 0x8 virtual false final false
  inline ::StringW get_ContentType();

  /// @brief Method set_ContentType addr 0x23ef2a0 size 0x8 virtual false final false
  inline void set_ContentType(::StringW value);

  /// @brief Method GetASN1 addr 0x23ef1d4 size 0xb4 virtual false final false
  inline ::Mono::Security::ASN1* GetASN1();

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__ContentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__ContentInfo(__PKCS7__ContentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__ContentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__ContentInfo(__PKCS7__ContentInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__ContentInfo();

public:
  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__ContentInfo, 0x20>, "Size mismatch!");

} // namespace Mono::Security
// Type: ::EncryptedData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13741))
// CS Name: ::PKCS7::EncryptedData*
class CORDL_TYPE __PKCS7__EncryptedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x1
  __declspec(property(get = __get__version, put = __set__version)) uint8_t _version;

  /// @brief Field _content, offset 0x18, size 0x8
  __declspec(property(get = __get__content, put = __set__content))::Mono::Security::__PKCS7__ContentInfo* _content;

  /// @brief Field _encryptionAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __get__encryptionAlgorithm, put = __set__encryptionAlgorithm))::Mono::Security::__PKCS7__ContentInfo* _encryptionAlgorithm;

  /// @brief Field _encrypted, offset 0x28, size 0x8
  __declspec(property(get = __get__encrypted, put = __set__encrypted))::ArrayW<uint8_t, ::Array<uint8_t>*> _encrypted;

  __declspec(property(get = get_EncryptionAlgorithm))::Mono::Security::__PKCS7__ContentInfo* EncryptionAlgorithm;

  __declspec(property(get = get_EncryptedContent))::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptedContent;

  constexpr uint8_t& __get__version();

  constexpr uint8_t const& __get__version() const;

  constexpr void __set__version(uint8_t value);

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __get__content();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __get__content() const;

  constexpr void __set__content(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __get__encryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __get__encryptionAlgorithm() const;

  constexpr void __set__encryptionAlgorithm(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__encrypted();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__encrypted() const;

  constexpr void __set__encrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Mono::Security::__PKCS7__EncryptedData* New_ctor();

  /// @brief Method .ctor addr 0x23ef2a8 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::Mono::Security::__PKCS7__EncryptedData* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23ef2c4 size 0x2d8 virtual false final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_EncryptionAlgorithm addr 0x23ef59c size 0x8 virtual false final false
  inline ::Mono::Security::__PKCS7__ContentInfo* get_EncryptionAlgorithm();

  /// @brief Method get_EncryptedContent addr 0x23ef5a4 size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_EncryptedContent();

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__EncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__EncryptedData(__PKCS7__EncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__EncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__EncryptedData(__PKCS7__EncryptedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__EncryptedData();

public:
  /// @brief Field _version, offset: 0x10, size: 0x1, def value: None
  uint8_t ____version;

  /// @brief Field _content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__ContentInfo* ____content;

  /// @brief Field _encryptionAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__ContentInfo* ____encryptionAlgorithm;

  /// @brief Field _encrypted, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encrypted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__EncryptedData, 0x30>, "Size mismatch!");

} // namespace Mono::Security
// Type: ::SignedData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13742))
// CS Name: ::PKCS7::SignedData*
class CORDL_TYPE __PKCS7__SignedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x1
  __declspec(property(get = __get_version, put = __set_version)) uint8_t version;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::StringW hashAlgorithm;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Mono::Security::__PKCS7__ContentInfo* contentInfo;

  /// @brief Field certs, offset 0x28, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Mono::Security::X509::X509CertificateCollection* certs;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __get_crls, put = __set_crls))::System::Collections::ArrayList* crls;

  /// @brief Field signerInfo, offset 0x38, size 0x8
  __declspec(property(get = __get_signerInfo, put = __set_signerInfo))::Mono::Security::__PKCS7__SignerInfo* signerInfo;

  /// @brief Field mda, offset 0x40, size 0x1
  __declspec(property(get = __get_mda, put = __set_mda)) bool mda;

  __declspec(property(get = get_Certificates))::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_ContentInfo))::Mono::Security::__PKCS7__ContentInfo* ContentInfo;

  __declspec(property(put = set_HashName))::StringW HashName;

  __declspec(property(get = get_SignerInfo))::Mono::Security::__PKCS7__SignerInfo* SignerInfo;

  constexpr uint8_t& __get_version();

  constexpr uint8_t const& __get_version() const;

  constexpr void __set_version(uint8_t value);

  constexpr ::StringW& __get_hashAlgorithm();

  constexpr ::StringW const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::StringW value);

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __get_certs() const;

  constexpr void __set_certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr ::System::Collections::ArrayList*& __get_crls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_crls() const;

  constexpr void __set_crls(::System::Collections::ArrayList* value);

  constexpr ::Mono::Security::__PKCS7__SignerInfo*& __get_signerInfo();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__SignerInfo*> const& __get_signerInfo() const;

  constexpr void __set_signerInfo(::Mono::Security::__PKCS7__SignerInfo* value);

  constexpr bool& __get_mda();

  constexpr bool const& __get_mda() const;

  constexpr void __set_mda(bool value);

  static inline ::Mono::Security::__PKCS7__SignedData* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23ef618 size 0x4e4 virtual false final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_Certificates addr 0x23f02e8 size 0x8 virtual false final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_ContentInfo addr 0x23f02f0 size 0x8 virtual false final false
  inline ::Mono::Security::__PKCS7__ContentInfo* get_ContentInfo();

  /// @brief Method set_HashName addr 0x23f02c8 size 0x20 virtual false final false
  inline void set_HashName(::StringW value);

  /// @brief Method get_SignerInfo addr 0x23f02f8 size 0x8 virtual false final false
  inline ::Mono::Security::__PKCS7__SignerInfo* get_SignerInfo();

  /// @brief Method OidToName addr 0x23f0114 size 0x1b4 virtual false final false
  inline ::StringW OidToName(::StringW oid);

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__SignedData(__PKCS7__SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__SignedData(__PKCS7__SignedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__SignedData();

public:
  /// @brief Field version, offset: 0x10, size: 0x1, def value: None
  uint8_t ___version;

  /// @brief Field hashAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hashAlgorithm;

  /// @brief Field contentInfo, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__ContentInfo* ___contentInfo;

  /// @brief Field certs, offset: 0x28, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ___certs;

  /// @brief Field crls, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___crls;

  /// @brief Field signerInfo, offset: 0x38, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__SignerInfo* ___signerInfo;

  /// @brief Field mda, offset: 0x40, size: 0x1, def value: None
  bool ___mda;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__SignedData, 0x48>, "Size mismatch!");

} // namespace Mono::Security
// Type: ::SignerInfo
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13743))
// CS Name: ::PKCS7::SignerInfo*
class CORDL_TYPE __PKCS7__SignerInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x1
  __declspec(property(get = __get_version, put = __set_version)) uint8_t version;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::StringW hashAlgorithm;

  /// @brief Field authenticatedAttributes, offset 0x20, size 0x8
  __declspec(property(get = __get_authenticatedAttributes, put = __set_authenticatedAttributes))::System::Collections::ArrayList* authenticatedAttributes;

  /// @brief Field unauthenticatedAttributes, offset 0x28, size 0x8
  __declspec(property(get = __get_unauthenticatedAttributes, put = __set_unauthenticatedAttributes))::System::Collections::ArrayList* unauthenticatedAttributes;

  /// @brief Field signature, offset 0x30, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field issuer, offset 0x38, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::StringW issuer;

  /// @brief Field serial, offset 0x40, size 0x8
  __declspec(property(get = __get_serial, put = __set_serial))::ArrayW<uint8_t, ::Array<uint8_t>*> serial;

  /// @brief Field ski, offset 0x48, size 0x8
  __declspec(property(get = __get_ski, put = __set_ski))::ArrayW<uint8_t, ::Array<uint8_t>*> ski;

  __declspec(property(get = get_IssuerName))::StringW IssuerName;

  __declspec(property(get = get_SerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_AuthenticatedAttributes))::System::Collections::ArrayList* AuthenticatedAttributes;

  __declspec(property(get = get_HashName, put = set_HashName))::StringW HashName;

  __declspec(property(get = get_Signature))::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  __declspec(property(get = get_UnauthenticatedAttributes))::System::Collections::ArrayList* UnauthenticatedAttributes;

  __declspec(property(get = get_Version)) uint8_t Version;

  constexpr uint8_t& __get_version();

  constexpr uint8_t const& __get_version() const;

  constexpr void __set_version(uint8_t value);

  constexpr ::StringW& __get_hashAlgorithm();

  constexpr ::StringW const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::StringW value);

  constexpr ::System::Collections::ArrayList*& __get_authenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_authenticatedAttributes() const;

  constexpr void __set_authenticatedAttributes(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_unauthenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_unauthenticatedAttributes() const;

  constexpr void __set_unauthenticatedAttributes(::System::Collections::ArrayList* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_signature() const;

  constexpr void __set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_issuer();

  constexpr ::StringW const& __get_issuer() const;

  constexpr void __set_issuer(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serial();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serial() const;

  constexpr void __set_serial(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ski();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ski() const;

  constexpr void __set_ski(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Mono::Security::__PKCS7__SignerInfo* New_ctor();

  /// @brief Method .ctor addr 0x23f0084 size 0x90 virtual false final false
  inline void _ctor();

  static inline ::Mono::Security::__PKCS7__SignerInfo* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23efd0c size 0x378 virtual false final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_IssuerName addr 0x23f0438 size 0x8 virtual false final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_SerialNumber addr 0x23f0440 size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_AuthenticatedAttributes addr 0x23f04b4 size 0x8 virtual false final false
  inline ::System::Collections::ArrayList* get_AuthenticatedAttributes();

  /// @brief Method get_HashName addr 0x23f04bc size 0x8 virtual false final false
  inline ::StringW get_HashName();

  /// @brief Method set_HashName addr 0x23f04c4 size 0x8 virtual false final false
  inline void set_HashName(::StringW value);

  /// @brief Method get_Signature addr 0x23f04cc size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

  /// @brief Method get_UnauthenticatedAttributes addr 0x23f0540 size 0x8 virtual false final false
  inline ::System::Collections::ArrayList* get_UnauthenticatedAttributes();

  /// @brief Method get_Version addr 0x23f0548 size 0x8 virtual false final false
  inline uint8_t get_Version();

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__SignerInfo(__PKCS7__SignerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__SignerInfo(__PKCS7__SignerInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__SignerInfo();

public:
  /// @brief Field version, offset: 0x10, size: 0x1, def value: None
  uint8_t ___version;

  /// @brief Field hashAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hashAlgorithm;

  /// @brief Field authenticatedAttributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___authenticatedAttributes;

  /// @brief Field unauthenticatedAttributes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___unauthenticatedAttributes;

  /// @brief Field signature, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signature;

  /// @brief Field issuer, offset: 0x38, size: 0x8, def value: None
  ::StringW ___issuer;

  /// @brief Field serial, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serial;

  /// @brief Field ski, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ski;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__SignerInfo, 0x50>, "Size mismatch!");

} // namespace Mono::Security
// Type: Mono.Security::PKCS7
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13744))
// CS Name: ::Mono.Security::PKCS7*
class CORDL_TYPE PKCS7 : public ::System::Object {
public:
  // Declarations
  using SignerInfo = ::Mono::Security::__PKCS7__SignerInfo;

  using SignedData = ::Mono::Security::__PKCS7__SignedData;

  using EncryptedData = ::Mono::Security::__PKCS7__EncryptedData;

  using ContentInfo = ::Mono::Security::__PKCS7__ContentInfo;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7(PKCS7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7(PKCS7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7, 0x10>, "Size mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::PKCS7);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7*, "Mono.Security", "PKCS7");
NEED_NO_BOX(::Mono::Security::__PKCS7__ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::__PKCS7__ContentInfo*, "Mono.Security", "PKCS7/ContentInfo");
NEED_NO_BOX(::Mono::Security::__PKCS7__EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::__PKCS7__EncryptedData*, "Mono.Security", "PKCS7/EncryptedData");
NEED_NO_BOX(::Mono::Security::__PKCS7__SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::__PKCS7__SignedData*, "Mono.Security", "PKCS7/SignedData");
NEED_NO_BOX(::Mono::Security::__PKCS7__SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::__PKCS7__SignerInfo*, "Mono.Security", "PKCS7/SignerInfo");
