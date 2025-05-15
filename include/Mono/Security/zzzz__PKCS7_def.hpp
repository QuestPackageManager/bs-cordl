#pragma once
// IWYU pragma private; include "Mono/Security/PKCS7.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class PKCS7_ContentInfo;
}
namespace Mono::Security {
class PKCS7_EncryptedData;
}
namespace Mono::Security {
class PKCS7_SignedData;
}
namespace Mono::Security {
class PKCS7_SignerInfo;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class PKCS7;
}
namespace Mono::Security {
class PKCS7_ContentInfo;
}
namespace Mono::Security {
class PKCS7_EncryptedData;
}
namespace Mono::Security {
class PKCS7_SignedData;
}
namespace Mono::Security {
class PKCS7_SignerInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::PKCS7);
MARK_REF_PTR_T(::Mono::Security::PKCS7_ContentInfo);
MARK_REF_PTR_T(::Mono::Security::PKCS7_EncryptedData);
MARK_REF_PTR_T(::Mono::Security::PKCS7_SignedData);
MARK_REF_PTR_T(::Mono::Security::PKCS7_SignerInfo);
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.PKCS7/ContentInfo
class CORDL_TYPE PKCS7_ContentInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ASN1)) ::Mono::Security::ASN1* ASN1;

  __declspec(property(get = get_Content, put = set_Content)) ::Mono::Security::ASN1* Content;

  __declspec(property(get = get_ContentType, put = set_ContentType)) ::StringW ContentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Mono::Security::ASN1* content;

  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::StringW contentType;

  /// @brief Method GetASN1, addr 0x3c32bc4, size 0xac, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* GetASN1();

  static inline ::Mono::Security::PKCS7_ContentInfo* New_ctor();

  static inline ::Mono::Security::PKCS7_ContentInfo* New_ctor(::Mono::Security::ASN1* asn1);

  static inline ::Mono::Security::PKCS7_ContentInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::PKCS7_ContentInfo* New_ctor(::StringW oid);

  constexpr ::Mono::Security::ASN1* const& __cordl_internal_get_content() const;

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_contentType() const;

  constexpr ::StringW& __cordl_internal_get_contentType();

  constexpr void __cordl_internal_set_content(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_contentType(::StringW value);

  /// @brief Method .ctor, addr 0x3c32948, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c32a44, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor, addr 0x3c329dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3c329b8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid);

  /// @brief Method get_ASN1, addr 0x3c32bc0, size 0x4, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_ASN1();

  /// @brief Method get_Content, addr 0x3c32c70, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_Content();

  /// @brief Method get_ContentType, addr 0x3c32c80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ContentType();

  /// @brief Method set_Content, addr 0x3c32c78, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::Mono::Security::ASN1* value);

  /// @brief Method set_ContentType, addr 0x3c32c88, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7_ContentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_ContentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7_ContentInfo(PKCS7_ContentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_ContentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7_ContentInfo(PKCS7_ContentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15920 };

  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::PKCS7_ContentInfo, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_ContentInfo, ___content) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7_ContentInfo, 0x20>, "Size mismatch!");

} // namespace Mono::Security
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.PKCS7/EncryptedData
class CORDL_TYPE PKCS7_EncryptedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EncryptedContent)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptedContent;

  __declspec(property(get = get_EncryptionAlgorithm)) ::Mono::Security::PKCS7_ContentInfo* EncryptionAlgorithm;

  /// @brief Field _content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content)) ::Mono::Security::PKCS7_ContentInfo* _content;

  /// @brief Field _encrypted, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__encrypted, put = __cordl_internal_set__encrypted)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _encrypted;

  /// @brief Field _encryptionAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionAlgorithm, put = __cordl_internal_set__encryptionAlgorithm)) ::Mono::Security::PKCS7_ContentInfo* _encryptionAlgorithm;

  /// @brief Field _version, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) uint8_t _version;

  static inline ::Mono::Security::PKCS7_EncryptedData* New_ctor();

  static inline ::Mono::Security::PKCS7_EncryptedData* New_ctor(::Mono::Security::ASN1* asn1);

  constexpr ::Mono::Security::PKCS7_ContentInfo* const& __cordl_internal_get__content() const;

  constexpr ::Mono::Security::PKCS7_ContentInfo*& __cordl_internal_get__content();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__encrypted() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__encrypted();

  constexpr ::Mono::Security::PKCS7_ContentInfo* const& __cordl_internal_get__encryptionAlgorithm() const;

  constexpr ::Mono::Security::PKCS7_ContentInfo*& __cordl_internal_get__encryptionAlgorithm();

  constexpr uint8_t const& __cordl_internal_get__version() const;

  constexpr uint8_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__content(::Mono::Security::PKCS7_ContentInfo* value);

  constexpr void __cordl_internal_set__encrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__encryptionAlgorithm(::Mono::Security::PKCS7_ContentInfo* value);

  constexpr void __cordl_internal_set__version(uint8_t value);

  /// @brief Method .ctor, addr 0x3c32c90, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c32cac, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_EncryptedContent, addr 0x3c32f6c, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_EncryptedContent();

  /// @brief Method get_EncryptionAlgorithm, addr 0x3c32f64, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::PKCS7_ContentInfo* get_EncryptionAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7_EncryptedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_EncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7_EncryptedData(PKCS7_EncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_EncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7_EncryptedData(PKCS7_EncryptedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15921 };

  /// @brief Field _version, offset: 0x10, size: 0x1, def value: None
  uint8_t ____version;

  /// @brief Field _content, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::PKCS7_ContentInfo* ____content;

  /// @brief Field _encryptionAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::PKCS7_ContentInfo* ____encryptionAlgorithm;

  /// @brief Field _encrypted, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encrypted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::PKCS7_EncryptedData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_EncryptedData, ____content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_EncryptedData, ____encryptionAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_EncryptedData, ____encrypted) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7_EncryptedData, 0x30>, "Size mismatch!");

} // namespace Mono::Security
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.PKCS7/SignedData
class CORDL_TYPE PKCS7_SignedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificates)) ::Mono::Security::X509::X509CertificateCollection* Certificates;

  __declspec(property(get = get_ContentInfo)) ::Mono::Security::PKCS7_ContentInfo* ContentInfo;

  __declspec(property(put = set_HashName)) ::StringW HashName;

  __declspec(property(get = get_SignerInfo)) ::Mono::Security::PKCS7_SignerInfo* SignerInfo;

  /// @brief Field certs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Mono::Security::X509::X509CertificateCollection* certs;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Mono::Security::PKCS7_ContentInfo* contentInfo;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::System::Collections::ArrayList* crls;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::StringW hashAlgorithm;

  /// @brief Field mda, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mda, put = __cordl_internal_set_mda)) bool mda;

  /// @brief Field signerInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfo, put = __cordl_internal_set_signerInfo)) ::Mono::Security::PKCS7_SignerInfo* signerInfo;

  /// @brief Field version, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) uint8_t version;

  static inline ::Mono::Security::PKCS7_SignedData* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method OidToName, addr 0x3c33a9c, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW OidToName(::StringW oid);

  constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get_certs() const;

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_certs();

  constexpr ::Mono::Security::PKCS7_ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Mono::Security::PKCS7_ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_crls() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_crls();

  constexpr ::StringW const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_hashAlgorithm();

  constexpr bool const& __cordl_internal_get_mda() const;

  constexpr bool& __cordl_internal_get_mda();

  constexpr ::Mono::Security::PKCS7_SignerInfo* const& __cordl_internal_get_signerInfo() const;

  constexpr ::Mono::Security::PKCS7_SignerInfo*& __cordl_internal_get_signerInfo();

  constexpr uint8_t const& __cordl_internal_get_version() const;

  constexpr uint8_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_contentInfo(::Mono::Security::PKCS7_ContentInfo* value);

  constexpr void __cordl_internal_set_crls(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_hashAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_mda(bool value);

  constexpr void __cordl_internal_set_signerInfo(::Mono::Security::PKCS7_SignerInfo* value);

  constexpr void __cordl_internal_set_version(uint8_t value);

  /// @brief Method .ctor, addr 0x3c32fe0, size 0x4c4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_Certificates, addr 0x3c33c70, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates();

  /// @brief Method get_ContentInfo, addr 0x3c33c78, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::PKCS7_ContentInfo* get_ContentInfo();

  /// @brief Method get_SignerInfo, addr 0x3c33c80, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::PKCS7_SignerInfo* get_SignerInfo();

  /// @brief Method set_HashName, addr 0x3c33c50, size 0x20, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7_SignedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7_SignedData(PKCS7_SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7_SignedData(PKCS7_SignedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15922 };

  /// @brief Field version, offset: 0x10, size: 0x1, def value: None
  uint8_t ___version;

  /// @brief Field hashAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hashAlgorithm;

  /// @brief Field contentInfo, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::PKCS7_ContentInfo* ___contentInfo;

  /// @brief Field certs, offset: 0x28, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ___certs;

  /// @brief Field crls, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___crls;

  /// @brief Field signerInfo, offset: 0x38, size: 0x8, def value: None
  ::Mono::Security::PKCS7_SignerInfo* ___signerInfo;

  /// @brief Field mda, offset: 0x40, size: 0x1, def value: None
  bool ___mda;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___contentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___certs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___crls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___signerInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignedData, ___mda) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7_SignedData, 0x48>, "Size mismatch!");

} // namespace Mono::Security
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.PKCS7/SignerInfo
class CORDL_TYPE PKCS7_SignerInfo : public ::System::Object {
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

  static inline ::Mono::Security::PKCS7_SignerInfo* New_ctor();

  static inline ::Mono::Security::PKCS7_SignerInfo* New_ctor(::Mono::Security::ASN1* asn1);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_authenticatedAttributes() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_authenticatedAttributes();

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

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_unauthenticatedAttributes() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_unauthenticatedAttributes();

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

  /// @brief Method .ctor, addr 0x3c33a18, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c336a8, size 0x370, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_AuthenticatedAttributes, addr 0x3c33e40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_AuthenticatedAttributes();

  /// @brief Method get_HashName, addr 0x3c33e48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HashName();

  /// @brief Method get_IssuerName, addr 0x3c33dc4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IssuerName();

  /// @brief Method get_SerialNumber, addr 0x3c33dcc, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_Signature, addr 0x3c33e58, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

  /// @brief Method get_UnauthenticatedAttributes, addr 0x3c33ecc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_UnauthenticatedAttributes();

  /// @brief Method get_Version, addr 0x3c33ed4, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Version();

  /// @brief Method set_HashName, addr 0x3c33e50, size 0x8, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS7_SignerInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_SignerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS7_SignerInfo(PKCS7_SignerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS7_SignerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS7_SignerInfo(PKCS7_SignerInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15923 };

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
static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___authenticatedAttributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___unauthenticatedAttributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___signature) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___issuer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___serial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::PKCS7_SignerInfo, ___ski) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7_SignerInfo, 0x50>, "Size mismatch!");

} // namespace Mono::Security
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.PKCS7
class CORDL_TYPE PKCS7 : public ::System::Object {
public:
  // Declarations
  using ContentInfo = ::Mono::Security::PKCS7_ContentInfo;

  using EncryptedData = ::Mono::Security::PKCS7_EncryptedData;

  using SignedData = ::Mono::Security::PKCS7_SignedData;

  using SignerInfo = ::Mono::Security::PKCS7_SignerInfo;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::PKCS7, 0x10>, "Size mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::PKCS7);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7*, "Mono.Security", "PKCS7");
NEED_NO_BOX(::Mono::Security::PKCS7_ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7_ContentInfo*, "Mono.Security", "PKCS7/ContentInfo");
NEED_NO_BOX(::Mono::Security::PKCS7_EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7_EncryptedData*, "Mono.Security", "PKCS7/EncryptedData");
NEED_NO_BOX(::Mono::Security::PKCS7_SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7_SignedData*, "Mono.Security", "PKCS7/SignedData");
NEED_NO_BOX(::Mono::Security::PKCS7_SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7_SignerInfo*, "Mono.Security", "PKCS7/SignerInfo");
