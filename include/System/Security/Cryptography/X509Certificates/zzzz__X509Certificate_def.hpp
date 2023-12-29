#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate);
// Type: System.Security.Cryptography.X509Certificates::X509Certificate
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2990))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate*
class CORDL_TYPE X509Certificate : public ::System::Object {
public:
  // Declarations
  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __get_impl, put = __set_impl))::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;

  /// @brief Field lazyCertHash, offset 0x18, size 0x8
  __declspec(property(get = __get_lazyCertHash, put = __set_lazyCertHash))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyCertHash;

  /// @brief Field lazySerialNumber, offset 0x20, size 0x8
  __declspec(property(get = __get_lazySerialNumber, put = __set_lazySerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> lazySerialNumber;

  /// @brief Field lazyIssuer, offset 0x28, size 0x8
  __declspec(property(get = __get_lazyIssuer, put = __set_lazyIssuer))::StringW lazyIssuer;

  /// @brief Field lazySubject, offset 0x30, size 0x8
  __declspec(property(get = __get_lazySubject, put = __set_lazySubject))::StringW lazySubject;

  /// @brief Field lazyKeyAlgorithm, offset 0x38, size 0x8
  __declspec(property(get = __get_lazyKeyAlgorithm, put = __set_lazyKeyAlgorithm))::StringW lazyKeyAlgorithm;

  /// @brief Field lazyKeyAlgorithmParameters, offset 0x40, size 0x8
  __declspec(property(get = __get_lazyKeyAlgorithmParameters, put = __set_lazyKeyAlgorithmParameters))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyKeyAlgorithmParameters;

  /// @brief Field lazyPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __get_lazyPublicKey, put = __set_lazyPublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyPublicKey;

  /// @brief Field lazyNotBefore, offset 0x50, size 0x8
  __declspec(property(get = __get_lazyNotBefore, put = __set_lazyNotBefore))::System::DateTime lazyNotBefore;

  /// @brief Field lazyNotAfter, offset 0x58, size 0x8
  __declspec(property(get = __get_lazyNotAfter, put = __set_lazyNotAfter))::System::DateTime lazyNotAfter;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Subject))::StringW Subject;

  __declspec(property(get = get_Impl))::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Impl;

  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*& __get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*> const& __get_impl() const;

  constexpr void __set_impl(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lazyCertHash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lazyCertHash() const;

  constexpr void __set_lazyCertHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lazySerialNumber();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lazySerialNumber() const;

  constexpr void __set_lazySerialNumber(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_lazyIssuer();

  constexpr ::StringW const& __get_lazyIssuer() const;

  constexpr void __set_lazyIssuer(::StringW value);

  constexpr ::StringW& __get_lazySubject();

  constexpr ::StringW const& __get_lazySubject() const;

  constexpr void __set_lazySubject(::StringW value);

  constexpr ::StringW& __get_lazyKeyAlgorithm();

  constexpr ::StringW const& __get_lazyKeyAlgorithm() const;

  constexpr void __set_lazyKeyAlgorithm(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lazyKeyAlgorithmParameters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lazyKeyAlgorithmParameters() const;

  constexpr void __set_lazyKeyAlgorithmParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lazyPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lazyPublicKey() const;

  constexpr void __set_lazyPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::DateTime& __get_lazyNotBefore();

  constexpr ::System::DateTime const& __get_lazyNotBefore() const;

  constexpr void __set_lazyNotBefore(::System::DateTime value);

  constexpr ::System::DateTime& __get_lazyNotAfter();

  constexpr ::System::DateTime const& __get_lazyNotAfter() const;

  constexpr void __set_lazyNotAfter(::System::DateTime value);

  /// @brief Method Reset addr 0x231bd70 size 0xb8 virtual true final false
  inline void Reset();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor();

  /// @brief Method .ctor addr 0x231be28 size 0x74 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x231be9c size 0xa0 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method .ctor addr 0x231bf3c size 0x94 virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW fileName);

  /// @brief Method .ctor addr 0x231bfd0 size 0xc virtual false final false
  inline void _ctor(::StringW fileName);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW fileName, ::StringW password,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method .ctor addr 0x231bfdc size 0x264 virtual false final false
  inline void _ctor(::StringW fileName, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method .ctor addr 0x231c354 size 0xe4 virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                              ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x231c438 size 0x44 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x231c47c size 0x40 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x231c4bc size 0x40 virtual true final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method get_Issuer addr 0x231c4fc size 0x58 virtual false final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Subject addr 0x231c560 size 0x58 virtual false final false
  inline ::StringW get_Subject();

  /// @brief Method Dispose addr 0x231c5b8 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x231c5c8 size 0x14 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Equals addr 0x231c5dc size 0x94 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x231c670 size 0xec virtual true final false
  inline bool Equals(::System::Security::Cryptography::X509Certificates::X509Certificate* other);

  /// @brief Method Export addr 0x231c7ac size 0x10 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType);

  /// @brief Method Export addr 0x231c7bc size 0x210 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::StringW password);

  /// @brief Method GetCertHash addr 0x231ca2c size 0x28 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method GetCertHashString addr 0x231caa0 size 0x28 virtual true final false
  inline ::StringW GetCertHashString();

  /// @brief Method GetRawCertHash addr 0x231ca54 size 0x4c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertHash();

  /// @brief Method GetRawCertData addr 0x231cac8 size 0x38 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertData();

  /// @brief Method GetHashCode addr 0x231cb00 size 0x78 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetKeyAlgorithm addr 0x231cb78 size 0x5c virtual true final false
  inline ::StringW GetKeyAlgorithm();

  /// @brief Method GetKeyAlgorithmParameters addr 0x231cbd4 size 0x60 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyAlgorithmParameters();

  /// @brief Method GetPublicKey addr 0x231cc34 size 0x60 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKey();

  /// @brief Method GetSerialNumber addr 0x231cc94 size 0x6c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSerialNumber();

  /// @brief Method GetSerialNumberString addr 0x231cd00 size 0x28 virtual true final false
  inline ::StringW GetSerialNumberString();

  /// @brief Method GetRawSerialNumber addr 0x231c75c size 0x50 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawSerialNumber();

  /// @brief Method ToString addr 0x231cd28 size 0x14 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x231cd3c size 0x33c virtual true final false
  inline ::StringW ToString(bool fVerbose);

  /// @brief Method GetNotAfter addr 0x231d228 size 0xa0 virtual false final false
  inline ::System::DateTime GetNotAfter();

  /// @brief Method GetNotBefore addr 0x231d078 size 0xa0 virtual false final false
  inline ::System::DateTime GetNotBefore();

  /// @brief Method FormatDate addr 0x231d118 size 0x110 virtual false final false
  static inline ::StringW FormatDate(::System::DateTime date);

  /// @brief Method ValidateKeyStorageFlags addr 0x231c240 size 0x114 virtual false final false
  static inline void ValidateKeyStorageFlags(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method VerifyContentType addr 0x231c9cc size 0x60 virtual false final false
  inline void VerifyContentType(::System::Security::Cryptography::X509Certificates::X509ContentType contentType);

  /// @brief Method ImportHandle addr 0x231d2c8 size 0x30 virtual false final false
  inline void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method get_Impl addr 0x231d2f8 size 0x8 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();

  /// @brief Method get_IsValid addr 0x231d300 size 0x100c virtual false final false
  inline bool get_IsValid();

  /// @brief Method ThrowIfInvalid addr 0x231c554 size 0xc virtual false final false
  inline void ThrowIfInvalid();

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate(X509Certificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate(X509Certificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate();

public:
  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* ___impl;

  /// @brief Field lazyCertHash, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lazyCertHash;

  /// @brief Field lazySerialNumber, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lazySerialNumber;

  /// @brief Field lazyIssuer, offset: 0x28, size: 0x8, def value: None
  ::StringW ___lazyIssuer;

  /// @brief Field lazySubject, offset: 0x30, size: 0x8, def value: None
  ::StringW ___lazySubject;

  /// @brief Field lazyKeyAlgorithm, offset: 0x38, size: 0x8, def value: None
  ::StringW ___lazyKeyAlgorithm;

  /// @brief Field lazyKeyAlgorithmParameters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lazyKeyAlgorithmParameters;

  /// @brief Field lazyPublicKey, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lazyPublicKey;

  /// @brief Field lazyNotBefore, offset: 0x50, size: 0x8, def value: None
  ::System::DateTime ___lazyNotBefore;

  /// @brief Field lazyNotAfter, offset: 0x58, size: 0x8, def value: None
  ::System::DateTime ___lazyNotAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___impl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyCertHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazySerialNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyIssuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazySubject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyKeyAlgorithm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyKeyAlgorithmParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyPublicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyNotBefore) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyNotAfter) == 0x58, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
