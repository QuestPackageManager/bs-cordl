#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate*
class CORDL_TYPE X509Certificate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Impl))::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Impl;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Subject))::StringW Subject;

  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl))::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;

  /// @brief Field lazyCertHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyCertHash, put = __cordl_internal_set_lazyCertHash))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyCertHash;

  /// @brief Field lazyIssuer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyIssuer, put = __cordl_internal_set_lazyIssuer))::StringW lazyIssuer;

  /// @brief Field lazyKeyAlgorithm, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyKeyAlgorithm, put = __cordl_internal_set_lazyKeyAlgorithm))::StringW lazyKeyAlgorithm;

  /// @brief Field lazyKeyAlgorithmParameters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyKeyAlgorithmParameters, put = __cordl_internal_set_lazyKeyAlgorithmParameters))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyKeyAlgorithmParameters;

  /// @brief Field lazyNotAfter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyNotAfter, put = __cordl_internal_set_lazyNotAfter))::System::DateTime lazyNotAfter;

  /// @brief Field lazyNotBefore, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyNotBefore, put = __cordl_internal_set_lazyNotBefore))::System::DateTime lazyNotBefore;

  /// @brief Field lazyPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lazyPublicKey, put = __cordl_internal_set_lazyPublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> lazyPublicKey;

  /// @brief Field lazySerialNumber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lazySerialNumber, put = __cordl_internal_set_lazySerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> lazySerialNumber;

  /// @brief Field lazySubject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lazySubject, put = __cordl_internal_set_lazySubject))::StringW lazySubject;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Dispose, addr 0x27f62ec, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x27f62fc, size 0x14, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Equals, addr 0x27f6310, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x27f63a4, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Security::Cryptography::X509Certificates::X509Certificate* other);

  /// @brief Method FormatDate, addr 0x27f6bc4, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW FormatDate(::System::DateTime date);

  /// @brief Method GetCertHash, addr 0x27f64e0, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method GetCertHashString, addr 0x27f6550, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetCertHashString();

  /// @brief Method GetHashCode, addr 0x27f65a8, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetKeyAlgorithm, addr 0x27f6620, size 0x58, virtual true, abstract: false, final false
  inline ::StringW GetKeyAlgorithm();

  /// @brief Method GetKeyAlgorithmParameters, addr 0x27f6678, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyAlgorithmParameters();

  /// @brief Method GetNotAfter, addr 0x27f6cd4, size 0x9c, virtual false, abstract: false, final false
  inline ::System::DateTime GetNotAfter();

  /// @brief Method GetNotBefore, addr 0x27f6b28, size 0x9c, virtual false, abstract: false, final false
  inline ::System::DateTime GetNotBefore();

  /// @brief Method GetPublicKey, addr 0x27f66d4, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKey();

  /// @brief Method GetRawCertData, addr 0x27f6574, size 0x34, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertData();

  /// @brief Method GetRawCertHash, addr 0x27f6504, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertHash();

  /// @brief Method GetRawSerialNumber, addr 0x27f6490, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawSerialNumber();

  /// @brief Method GetSerialNumber, addr 0x27f6730, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSerialNumber();

  /// @brief Method GetSerialNumberString, addr 0x27f6798, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetSerialNumberString();

  /// @brief Method ImportHandle, addr 0x27f6d70, size 0x30, virtual false, abstract: false, final false
  inline void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW fileName);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW fileName, ::StringW password,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                              ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Reset, addr 0x27f5808, size 0xb4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x27f61fc, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x27f61bc, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ThrowIfInvalid, addr 0x27f6290, size 0x8, virtual false, abstract: false, final false
  inline void ThrowIfInvalid();

  /// @brief Method ToString, addr 0x27f67bc, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x27f67d0, size 0x344, virtual true, abstract: false, final false
  inline ::StringW ToString(bool fVerbose);

  /// @brief Method ValidateKeyStorageFlags, addr 0x27f5e0c, size 0x114, virtual false, abstract: false, final false
  static inline void ValidateKeyStorageFlags(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*& __cordl_internal_get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*> const& __cordl_internal_get_impl() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lazyCertHash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lazyCertHash();

  constexpr ::StringW const& __cordl_internal_get_lazyIssuer() const;

  constexpr ::StringW& __cordl_internal_get_lazyIssuer();

  constexpr ::StringW const& __cordl_internal_get_lazyKeyAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_lazyKeyAlgorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lazyKeyAlgorithmParameters() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lazyKeyAlgorithmParameters();

  constexpr ::System::DateTime const& __cordl_internal_get_lazyNotAfter() const;

  constexpr ::System::DateTime& __cordl_internal_get_lazyNotAfter();

  constexpr ::System::DateTime const& __cordl_internal_get_lazyNotBefore() const;

  constexpr ::System::DateTime& __cordl_internal_get_lazyNotBefore();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lazyPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lazyPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lazySerialNumber() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lazySerialNumber();

  constexpr ::StringW const& __cordl_internal_get_lazySubject() const;

  constexpr ::StringW& __cordl_internal_get_lazySubject();

  constexpr void __cordl_internal_set_impl(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* value);

  constexpr void __cordl_internal_set_lazyCertHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lazyIssuer(::StringW value);

  constexpr void __cordl_internal_set_lazyKeyAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_lazyKeyAlgorithmParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lazyNotAfter(::System::DateTime value);

  constexpr void __cordl_internal_set_lazyNotBefore(::System::DateTime value);

  constexpr void __cordl_internal_set_lazyPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lazySerialNumber(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lazySubject(::StringW value);

  /// @brief Method .ctor, addr 0x27f592c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27f5fe8, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x27f59a0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x27f5ba0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x27f5bac, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method .ctor, addr 0x27f5ae8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method .ctor, addr 0x27f6178, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Impl, addr 0x27f6da0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();

  /// @brief Method get_IsValid, addr 0x27f6da8, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_Issuer, addr 0x27f623c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Subject, addr 0x27f6298, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Subject();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate(X509Certificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate(X509Certificate const&) = delete;

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
