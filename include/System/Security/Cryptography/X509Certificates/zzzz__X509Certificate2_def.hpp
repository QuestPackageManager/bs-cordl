#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2)
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2);
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2991))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8993))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate2*
class CORDL_TYPE X509Certificate2 : public ::System::Security::Cryptography::X509Certificates::X509Certificate {
public:
  // Declarations
  /// @brief Field lazyRawData, offset 0x60, size 0x8
  __declspec(property(get = __get_lazyRawData, put = __set_lazyRawData))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyRawData;

  /// @brief Field lazySignatureAlgorithm, offset 0x68, size 0x8
  __declspec(property(get = __get_lazySignatureAlgorithm, put = __set_lazySignatureAlgorithm))::System::Security::Cryptography::Oid* lazySignatureAlgorithm;

  /// @brief Field lazyVersion, offset 0x70, size 0x4
  __declspec(property(get = __get_lazyVersion, put = __set_lazyVersion)) int32_t lazyVersion;

  /// @brief Field lazySubjectName, offset 0x78, size 0x8
  __declspec(property(get = __get_lazySubjectName, put = __set_lazySubjectName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* lazySubjectName;

  /// @brief Field lazyIssuerName, offset 0x80, size 0x8
  __declspec(property(get = __get_lazyIssuerName, put = __set_lazyIssuerName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* lazyIssuerName;

  /// @brief Field lazyPublicKey, offset 0x88, size 0x8
  __declspec(property(get = __get_lazyPublicKey, put = __set_lazyPublicKey))::System::Security::Cryptography::X509Certificates::PublicKey* lazyPublicKey;

  /// @brief Field lazyPrivateKey, offset 0x90, size 0x8
  __declspec(property(get = __get_lazyPrivateKey, put = __set_lazyPrivateKey))::System::Security::Cryptography::AsymmetricAlgorithm* lazyPrivateKey;

  /// @brief Field lazyExtensions, offset 0x98, size 0x8
  __declspec(property(get = __get_lazyExtensions, put = __set_lazyExtensions))::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* lazyExtensions;

  __declspec(property(get = get_Extensions))::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* Extensions;

  __declspec(property(get = get_HasPrivateKey)) bool HasPrivateKey;

  __declspec(property(get = get_PrivateKey))::System::Security::Cryptography::AsymmetricAlgorithm* PrivateKey;

  __declspec(property(get = get_IssuerName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* IssuerName;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  __declspec(property(get = get_PublicKey))::System::Security::Cryptography::X509Certificates::PublicKey* PublicKey;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_SerialNumber))::StringW SerialNumber;

  __declspec(property(get = get_SignatureAlgorithm))::System::Security::Cryptography::Oid* SignatureAlgorithm;

  __declspec(property(get = get_SubjectName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* SubjectName;

  __declspec(property(get = get_Thumbprint))::StringW Thumbprint;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_Impl))::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Impl;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lazyRawData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lazyRawData() const;

  constexpr void __set_lazyRawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Security::Cryptography::Oid*& __get_lazySignatureAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Oid*> const& __get_lazySignatureAlgorithm() const;

  constexpr void __set_lazySignatureAlgorithm(::System::Security::Cryptography::Oid* value);

  constexpr int32_t& __get_lazyVersion();

  constexpr int32_t const& __get_lazyVersion() const;

  constexpr void __set_lazyVersion(int32_t value);

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __get_lazySubjectName();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const& __get_lazySubjectName() const;

  constexpr void __set_lazySubjectName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __get_lazyIssuerName();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const& __get_lazyIssuerName() const;

  constexpr void __set_lazyIssuerName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr ::System::Security::Cryptography::X509Certificates::PublicKey*& __get_lazyPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::PublicKey*> const& __get_lazyPublicKey() const;

  constexpr void __set_lazyPublicKey(::System::Security::Cryptography::X509Certificates::PublicKey* value);

  constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& __get_lazyPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::AsymmetricAlgorithm*> const& __get_lazyPrivateKey() const;

  constexpr void __set_lazyPrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*& __get_lazyExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*> const& __get_lazyExtensions() const;

  constexpr void __set_lazyExtensions(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* value);

  /// @brief Method Reset, addr 0x2979738, size 0x58, virtual true, abstract: false, final false
  inline void Reset();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor();

  /// @brief Method .ctor, addr 0x2979790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method .ctor, addr 0x2979798, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* impl);

  /// @brief Method .ctor, addr 0x2979960, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x2979968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  /// @brief Method .ctor, addr 0x2979970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                               ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2979978, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Extensions, addr 0x29799c0, size 0x3c0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();

  /// @brief Method get_HasPrivateKey, addr 0x2979fe8, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasPrivateKey();

  /// @brief Method get_PrivateKey, addr 0x297a01c, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();

  /// @brief Method get_IssuerName, addr 0x297a178, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();

  /// @brief Method get_NotAfter, addr 0x297a1d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x297a1dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_PublicKey, addr 0x297a1e4, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();

  /// @brief Method get_RawData, addr 0x297a340, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_SerialNumber, addr 0x297a39c, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_SerialNumber();

  /// @brief Method get_SignatureAlgorithm, addr 0x297a3ac, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::Oid* get_SignatureAlgorithm();

  /// @brief Method get_SubjectName, addr 0x297a410, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();

  /// @brief Method get_Thumbprint, addr 0x297a46c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Thumbprint();

  /// @brief Method get_Version, addr 0x297a488, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method GetCertContentType, addr 0x297a4e4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method GetNameInfo, addr 0x297a580, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  /// @brief Method ToString, addr 0x297a5bc, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x297a5c8, size 0xe74, virtual true, abstract: false, final false
  inline ::StringW ToString(bool verbose);

  /// @brief Method Verify, addr 0x297b43c, size 0x2c, virtual false, abstract: false, final false
  inline bool Verify();

  /// @brief Method CreateCustomExtensionIfAny, addr 0x2979e0c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Extension* CreateCustomExtensionIfAny(::System::Security::Cryptography::Oid* oid);

  /// @brief Method get_Impl, addr 0x2979d80, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2(X509Certificate2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2(X509Certificate2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyRawData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazySignatureAlgorithm) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyVersion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazySubjectName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyIssuerName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyPublicKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyPrivateKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2, ___lazyExtensions) == 0x98, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2*, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
