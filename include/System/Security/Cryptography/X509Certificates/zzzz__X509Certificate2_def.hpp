#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2);
// Dependencies System.Security.Cryptography.X509Certificates.X509Certificate
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2
class CORDL_TYPE X509Certificate2 : public ::System::Security::Cryptography::X509Certificates::X509Certificate {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_HasPrivateKey)) bool HasPrivateKey;

  __declspec(property(get = get_Impl)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Impl;

  __declspec(property(get = get_IssuerName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* IssuerName;

  __declspec(property(get = get_NotAfter)) ::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore)) ::System::DateTime NotBefore;

  __declspec(property(get = get_PrivateKey)) ::System::Security::Cryptography::AsymmetricAlgorithm* PrivateKey;

  __declspec(property(get = get_PublicKey)) ::System::Security::Cryptography::X509Certificates::PublicKey* PublicKey;

  __declspec(property(get = get_RawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_SerialNumber)) ::StringW SerialNumber;

  __declspec(property(get = get_SignatureAlgorithm)) ::System::Security::Cryptography::Oid* SignatureAlgorithm;

  __declspec(property(get = get_SubjectName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* SubjectName;

  __declspec(property(get = get_Thumbprint)) ::StringW Thumbprint;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field lazyExtensions, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyExtensions,
                      put = __cordl_internal_set_lazyExtensions)) ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* lazyExtensions;

  /// @brief Field lazyIssuerName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyIssuerName, put = __cordl_internal_set_lazyIssuerName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* lazyIssuerName;

  /// @brief Field lazyPrivateKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyPrivateKey, put = __cordl_internal_set_lazyPrivateKey)) ::System::Security::Cryptography::AsymmetricAlgorithm* lazyPrivateKey;

  /// @brief Field lazyPublicKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyPublicKey, put = __cordl_internal_set_lazyPublicKey)) ::System::Security::Cryptography::X509Certificates::PublicKey* lazyPublicKey;

  /// @brief Field lazyRawData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyRawData, put = __cordl_internal_set_lazyRawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> lazyRawData;

  /// @brief Field lazySignatureAlgorithm, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lazySignatureAlgorithm, put = __cordl_internal_set_lazySignatureAlgorithm)) ::System::Security::Cryptography::Oid* lazySignatureAlgorithm;

  /// @brief Field lazySubjectName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lazySubjectName,
                      put = __cordl_internal_set_lazySubjectName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* lazySubjectName;

  /// @brief Field lazyVersion, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_lazyVersion, put = __cordl_internal_set_lazyVersion)) int32_t lazyVersion;

  /// @brief Method CreateCustomExtensionIfAny, addr 0x443d1f8, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Extension* CreateCustomExtensionIfAny(::System::Security::Cryptography::Oid* oid);

  /// @brief Method GetCertContentType, addr 0x443d8a8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method GetNameInfo, addr 0x443d940, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::StringW fileName);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                               ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method Reset, addr 0x443cb1c, size 0x58, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x443d97c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x443d988, size 0xe90, virtual true, abstract: false, final false
  inline ::StringW ToString(bool verbose);

  /// @brief Method Verify, addr 0x443e818, size 0x2c, virtual false, abstract: false, final false
  inline bool Verify();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* const& __cordl_internal_get_lazyExtensions() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*& __cordl_internal_get_lazyExtensions();

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const& __cordl_internal_get_lazyIssuerName() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __cordl_internal_get_lazyIssuerName();

  constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& __cordl_internal_get_lazyPrivateKey() const;

  constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& __cordl_internal_get_lazyPrivateKey();

  constexpr ::System::Security::Cryptography::X509Certificates::PublicKey* const& __cordl_internal_get_lazyPublicKey() const;

  constexpr ::System::Security::Cryptography::X509Certificates::PublicKey*& __cordl_internal_get_lazyPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lazyRawData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lazyRawData();

  constexpr ::System::Security::Cryptography::Oid* const& __cordl_internal_get_lazySignatureAlgorithm() const;

  constexpr ::System::Security::Cryptography::Oid*& __cordl_internal_get_lazySignatureAlgorithm();

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const& __cordl_internal_get_lazySubjectName() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __cordl_internal_get_lazySubjectName();

  constexpr int32_t const& __cordl_internal_get_lazyVersion() const;

  constexpr int32_t& __cordl_internal_get_lazyVersion();

  constexpr void __cordl_internal_set_lazyExtensions(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* value);

  constexpr void __cordl_internal_set_lazyIssuerName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr void __cordl_internal_set_lazyPrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value);

  constexpr void __cordl_internal_set_lazyPublicKey(::System::Security::Cryptography::X509Certificates::PublicKey* value);

  constexpr void __cordl_internal_set_lazyRawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lazySignatureAlgorithm(::System::Security::Cryptography::Oid* value);

  constexpr void __cordl_internal_set_lazySubjectName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr void __cordl_internal_set_lazyVersion(int32_t value);

  /// @brief Method .ctor, addr 0x443cb74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x443cd54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  /// @brief Method .ctor, addr 0x443cd4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x443cd44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* impl);

  /// @brief Method .ctor, addr 0x443cd5c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x443cb7c, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method get_Extensions, addr 0x443cd9c, size 0x3d0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_HasPrivateKey, addr 0x443d3c4, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasPrivateKey();

  /// @brief Method get_Impl, addr 0x443d16c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();

  /// @brief Method get_IssuerName, addr 0x443d550, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();

  /// @brief Method get_NotAfter, addr 0x443d5ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x443d5b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_PrivateKey, addr 0x443d3f8, size 0x158, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();

  /// @brief Method get_PublicKey, addr 0x443d5bc, size 0x148, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();

  /// @brief Method get_RawData, addr 0x443d704, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_SerialNumber, addr 0x443d760, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_SerialNumber();

  /// @brief Method get_SignatureAlgorithm, addr 0x443d770, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::Oid* get_SignatureAlgorithm();

  /// @brief Method get_SubjectName, addr 0x443d7d4, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();

  /// @brief Method get_Thumbprint, addr 0x443d830, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Thumbprint();

  /// @brief Method get_Version, addr 0x443d84c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2(X509Certificate2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2(X509Certificate2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9313 };

  /// @brief Field lazyRawData, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lazyRawData;

  /// @brief Field lazySignatureAlgorithm, offset: 0x68, size: 0x8, def value: None
  ::System::Security::Cryptography::Oid* ___lazySignatureAlgorithm;

  /// @brief Field lazyVersion, offset: 0x70, size: 0x4, def value: None
  int32_t ___lazyVersion;

  /// @brief Field lazySubjectName, offset: 0x78, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* ___lazySubjectName;

  /// @brief Field lazyIssuerName, offset: 0x80, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* ___lazyIssuerName;

  /// @brief Field lazyPublicKey, offset: 0x88, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::PublicKey* ___lazyPublicKey;

  /// @brief Field lazyPrivateKey, offset: 0x90, size: 0x8, def value: None
  ::System::Security::Cryptography::AsymmetricAlgorithm* ___lazyPrivateKey;

  /// @brief Field lazyExtensions, offset: 0x98, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* ___lazyExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyRawData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazySignatureAlgorithm) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyVersion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazySubjectName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyIssuerName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyPublicKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyPrivateKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyExtensions) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2, 0xa0>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2*, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
