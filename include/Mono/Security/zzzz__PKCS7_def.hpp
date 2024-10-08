#pragma once
// IWYU pragma private; include "Mono/Security/PKCS7.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS7)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security {
class ASN1;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::PKCS7::ContentInfo*
class CORDL_TYPE __PKCS7__ContentInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ASN1)) ::Mono::Security::ASN1* ASN1;

  __declspec(property(get = get_Content, put = set_Content)) ::Mono::Security::ASN1* Content;

  __declspec(property(get = get_ContentType, put = set_ContentType)) ::StringW ContentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Mono::Security::ASN1* content;

  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::StringW contentType;

  /// @brief Method GetASN1, addr 0x3bbcbf0, size 0xac, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* GetASN1();

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor();

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::Mono::Security::ASN1* asn1);

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::__PKCS7__ContentInfo* New_ctor(::StringW oid);

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __cordl_internal_get_content() const;

  constexpr ::StringW const& __cordl_internal_get_contentType() const;

  constexpr ::StringW& __cordl_internal_get_contentType();

  constexpr void __cordl_internal_set_content(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_contentType(::StringW value);

  /// @brief Method .ctor, addr 0x3bbc974, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3bbca70, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor, addr 0x3bbca08, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3bbc9e4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid);

  /// @brief Method get_ASN1, addr 0x3bbcbec, size 0x4, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_ASN1();

  /// @brief Method get_Content, addr 0x3bbcc9c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_Content();

  /// @brief Method get_ContentType, addr 0x3bbccac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ContentType();

  /// @brief Method set_Content, addr 0x3bbcca4, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::Mono::Security::ASN1* value);

  /// @brief Method set_ContentType, addr 0x3bbccb4, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__ContentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__ContentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__ContentInfo(__PKCS7__ContentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__ContentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__ContentInfo(__PKCS7__ContentInfo const&) = delete;

  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___content;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__ContentInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__ContentInfo, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__ContentInfo, ___content) == 0x18, "Offset mismatch!");

} // namespace Mono::Security
// Type: ::EncryptedData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::PKCS7::EncryptedData*
class CORDL_TYPE __PKCS7__EncryptedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EncryptedContent)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptedContent;

  __declspec(property(get = get_EncryptionAlgorithm)) ::Mono::Security::__PKCS7__ContentInfo* EncryptionAlgorithm;

  /// @brief Field _content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content)) ::Mono::Security::__PKCS7__ContentInfo* _content;

  /// @brief Field _encrypted, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__encrypted, put = __cordl_internal_set__encrypted)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _encrypted;

  /// @brief Field _encryptionAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionAlgorithm, put = __cordl_internal_set__encryptionAlgorithm)) ::Mono::Security::__PKCS7__ContentInfo* _encryptionAlgorithm;

  /// @brief Field _version, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) uint8_t _version;

  static inline ::Mono::Security::__PKCS7__EncryptedData* New_ctor();

  static inline ::Mono::Security::__PKCS7__EncryptedData* New_ctor(::Mono::Security::ASN1* asn1);

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __cordl_internal_get__content();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __cordl_internal_get__content() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__encrypted() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__encrypted();

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __cordl_internal_get__encryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __cordl_internal_get__encryptionAlgorithm() const;

  constexpr uint8_t const& __cordl_internal_get__version() const;

  constexpr uint8_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__content(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr void __cordl_internal_set__encrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__encryptionAlgorithm(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr void __cordl_internal_set__version(uint8_t value);

  /// @brief Method .ctor, addr 0x3bbccbc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3bbccd8, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_EncryptedContent, addr 0x3bbcf98, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_EncryptedContent();

  /// @brief Method get_EncryptionAlgorithm, addr 0x3bbcf90, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::__PKCS7__ContentInfo* get_EncryptionAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__EncryptedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__EncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__EncryptedData(__PKCS7__EncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__EncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__EncryptedData(__PKCS7__EncryptedData const&) = delete;

  /// @brief Field _version, offset: 0x10, size: 0x1, def value: None
  uint8_t ____version;

  /// @brief Field _content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__ContentInfo* ____content;

  /// @brief Field _encryptionAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::__PKCS7__ContentInfo* ____encryptionAlgorithm;

  /// @brief Field _encrypted, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encrypted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__EncryptedData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__EncryptedData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__EncryptedData, ____content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__EncryptedData, ____encryptionAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__EncryptedData, ____encrypted) == 0x28, "Offset mismatch!");

} // namespace Mono::Security
// Type: ::SignedData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::PKCS7::SignedData*
class CORDL_TYPE __PKCS7__SignedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificates)) ::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_ContentInfo)) ::Mono::Security::__PKCS7__ContentInfo* ContentInfo;

  __declspec(property(put = set_HashName)) ::StringW HashName;

  __declspec(property(get = get_SignerInfo)) ::Mono::Security::__PKCS7__SignerInfo* SignerInfo;

  /// @brief Field certs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Mono::Security::X509::X509CertificateCollection* certs;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Mono::Security::__PKCS7__ContentInfo* contentInfo;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::System::Collections::ArrayList* crls;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::StringW hashAlgorithm;

  /// @brief Field mda, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mda, put = __cordl_internal_set_mda)) bool mda;

  /// @brief Field signerInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfo, put = __cordl_internal_set_signerInfo)) ::Mono::Security::__PKCS7__SignerInfo* signerInfo;

  /// @brief Field version, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) uint8_t version;

  static inline ::Mono::Security::__PKCS7__SignedData* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method OidToName, addr 0x3bbdac8, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW OidToName(::StringW oid);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get_certs() const;

  constexpr ::Mono::Security::__PKCS7__ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__ContentInfo*> const& __cordl_internal_get_contentInfo() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_crls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_crls() const;

  constexpr ::StringW const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_hashAlgorithm();

  constexpr bool const& __cordl_internal_get_mda() const;

  constexpr bool& __cordl_internal_get_mda();

  constexpr ::Mono::Security::__PKCS7__SignerInfo*& __cordl_internal_get_signerInfo();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::__PKCS7__SignerInfo*> const& __cordl_internal_get_signerInfo() const;

  constexpr uint8_t const& __cordl_internal_get_version() const;

  constexpr uint8_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_contentInfo(::Mono::Security::__PKCS7__ContentInfo* value);

  constexpr void __cordl_internal_set_crls(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_hashAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_mda(bool value);

  constexpr void __cordl_internal_set_signerInfo(::Mono::Security::__PKCS7__SignerInfo* value);

  constexpr void __cordl_internal_set_version(uint8_t value);

  /// @brief Method .ctor, addr 0x3bbd00c, size 0x4c4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_Certificates, addr 0x3bbdc9c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_ContentInfo, addr 0x3bbdca4, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::__PKCS7__ContentInfo* get_ContentInfo();

  /// @brief Method get_SignerInfo, addr 0x3bbdcac, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::__PKCS7__SignerInfo* get_SignerInfo();

  /// @brief Method set_HashName, addr 0x3bbdc7c, size 0x20, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__SignedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__SignedData(__PKCS7__SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__SignedData(__PKCS7__SignedData const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__SignedData, 0x48>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___contentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___certs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___crls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___signerInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignedData, ___mda) == 0x40, "Offset mismatch!");

} // namespace Mono::Security
// Type: ::SignerInfo
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::PKCS7::SignerInfo*
class CORDL_TYPE __PKCS7__SignerInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthenticatedAttributes)) ::System::Collections::ArrayList* AuthenticatedAttributes;

  __declspec(property(get = get_HashName, put = set_HashName)) ::StringW HashName;

  __declspec(property(get = get_IssuerName)) ::StringW IssuerName;

  __declspec(property(get = get_SerialNumber)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_Signature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  __declspec(property(get = get_UnauthenticatedAttributes)) ::System::Collections::ArrayList* UnauthenticatedAttributes;

  __declspec(property(get = get_Version)) uint8_t Version;

  /// @brief Field authenticatedAttributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_authenticatedAttributes, put = __cordl_internal_set_authenticatedAttributes)) ::System::Collections::ArrayList* authenticatedAttributes;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::StringW hashAlgorithm;

  /// @brief Field issuer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::StringW issuer;

  /// @brief Field serial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serial, put = __cordl_internal_set_serial)) ::ArrayW<uint8_t, ::Array<uint8_t>*> serial;

  /// @brief Field signature, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  /// @brief Field ski, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ski, put = __cordl_internal_set_ski)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ski;

  /// @brief Field unauthenticatedAttributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthenticatedAttributes, put = __cordl_internal_set_unauthenticatedAttributes)) ::System::Collections::ArrayList* unauthenticatedAttributes;

  /// @brief Field version, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) uint8_t version;

  static inline ::Mono::Security::__PKCS7__SignerInfo* New_ctor();

  static inline ::Mono::Security::__PKCS7__SignerInfo* New_ctor(::Mono::Security::ASN1* asn1);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_authenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_authenticatedAttributes() const;

  constexpr ::StringW const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_hashAlgorithm();

  constexpr ::StringW const& __cordl_internal_get_issuer() const;

  constexpr ::StringW& __cordl_internal_get_issuer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_serial() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_serial();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ski() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ski();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_unauthenticatedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_unauthenticatedAttributes() const;

  constexpr uint8_t const& __cordl_internal_get_version() const;

  constexpr uint8_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_authenticatedAttributes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_hashAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_issuer(::StringW value);

  constexpr void __cordl_internal_set_serial(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ski(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_unauthenticatedAttributes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_version(uint8_t value);

  /// @brief Method .ctor, addr 0x3bbda44, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3bbd6d4, size 0x370, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_AuthenticatedAttributes, addr 0x3bbde6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_AuthenticatedAttributes();

  /// @brief Method get_HashName, addr 0x3bbde74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HashName();

  /// @brief Method get_IssuerName, addr 0x3bbddf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_SerialNumber, addr 0x3bbddf8, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_Signature, addr 0x3bbde84, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

  /// @brief Method get_UnauthenticatedAttributes, addr 0x3bbdef8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_UnauthenticatedAttributes();

  /// @brief Method get_Version, addr 0x3bbdf00, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Version();

  /// @brief Method set_HashName, addr 0x3bbde7c, size 0x8, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PKCS7__SignerInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PKCS7__SignerInfo(__PKCS7__SignerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PKCS7__SignerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PKCS7__SignerInfo(__PKCS7__SignerInfo const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::__PKCS7__SignerInfo, 0x50>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___authenticatedAttributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___unauthenticatedAttributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___signature) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___issuer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___serial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::__PKCS7__SignerInfo, ___ski) == 0x48, "Offset mismatch!");

} // namespace Mono::Security
// Type: Mono.Security::PKCS7
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::Mono.Security::PKCS7*
class CORDL_TYPE PKCS7 : public ::System::Object {
public:
  // Declarations
  using ContentInfo = ::Mono::Security::__PKCS7__ContentInfo;

  using EncryptedData = ::Mono::Security::__PKCS7__EncryptedData;

  using SignedData = ::Mono::Security::__PKCS7__SignedData;

  using SignerInfo = ::Mono::Security::__PKCS7__SignerInfo;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7(PKCS7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7(PKCS7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15872 };

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
