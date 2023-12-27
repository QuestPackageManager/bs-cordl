#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateImpl)
namespace System::Security::Cryptography {
class DSA;
}
namespace System {
class Object;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509CertificateImpl);
// Type: System.Security.Cryptography.X509Certificates::X509CertificateImpl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2992))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509CertificateImpl*
class CORDL_TYPE X509CertificateImpl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Subject))::StringW Subject;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  __declspec(property(get = get_Thumbprint))::ArrayW<uint8_t, ::Array<uint8_t>*> Thumbprint;

  __declspec(property(get = get_KeyAlgorithm))::StringW KeyAlgorithm;

  __declspec(property(get = get_KeyAlgorithmParameters))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyAlgorithmParameters;

  __declspec(property(get = get_PublicKeyValue))::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKeyValue;

  __declspec(property(get = get_SerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_HasPrivateKey)) bool HasPrivateKey;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsValid();

  /// @brief Method ThrowIfContextInvalid addr 0x2475e00 size 0x3c virtual false final false
  inline void ThrowIfContextInvalid();

  /// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();

  /// @brief Method get_Issuer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Subject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Subject();

  /// @brief Method get_RawData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_NotAfter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_Thumbprint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Thumbprint();

  /// @brief Method GetHashCode addr 0x2475ec4 size 0x90 virtual true final true
  inline int32_t GetHashCode();

  /// @brief Method get_KeyAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_KeyAlgorithm();

  /// @brief Method get_KeyAlgorithmParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyAlgorithmParameters();

  /// @brief Method get_PublicKeyValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKeyValue();

  /// @brief Method get_SerialNumber addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_HasPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_HasPrivateKey();

  /// @brief Method GetRSAPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::RSA* GetRSAPrivateKey();

  /// @brief Method GetDSAPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::DSA* GetDSAPrivateKey();

  /// @brief Method CopyWithPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* CopyWithPrivateKey(::System::Security::Cryptography::RSA* privateKey);

  /// @brief Method Equals addr 0x2475f54 size 0x180 virtual true final true
  inline bool Equals(::System::Object* obj);

  /// @brief Method Dispose addr 0x24760d4 size 0x70 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2476144 size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x2476148 size 0xa4 virtual true final false
  inline void Finalize();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* New_ctor();

  /// @brief Method .ctor addr 0x24761ec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateImpl(X509CertificateImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateImpl(X509CertificateImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateImpl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509CertificateImpl, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateImpl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl");
