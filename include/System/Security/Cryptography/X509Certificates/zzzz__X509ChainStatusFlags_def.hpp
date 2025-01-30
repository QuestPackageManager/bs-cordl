#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509ChainStatusFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct CORDL_TYPE X509ChainStatusFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509ChainStatusFlags_Unwrapped
  enum struct __X509ChainStatusFlags_Unwrapped : int32_t {
    __E_NoError = static_cast<int32_t>(0x0),
    __E_NotTimeValid = static_cast<int32_t>(0x1),
    __E_NotTimeNested = static_cast<int32_t>(0x2),
    __E_Revoked = static_cast<int32_t>(0x4),
    __E_NotSignatureValid = static_cast<int32_t>(0x8),
    __E_NotValidForUsage = static_cast<int32_t>(0x10),
    __E_UntrustedRoot = static_cast<int32_t>(0x20),
    __E_RevocationStatusUnknown = static_cast<int32_t>(0x40),
    __E_Cyclic = static_cast<int32_t>(0x80),
    __E_InvalidExtension = static_cast<int32_t>(0x100),
    __E_InvalidPolicyConstraints = static_cast<int32_t>(0x200),
    __E_InvalidBasicConstraints = static_cast<int32_t>(0x400),
    __E_InvalidNameConstraints = static_cast<int32_t>(0x800),
    __E_HasNotSupportedNameConstraint = static_cast<int32_t>(0x1000),
    __E_HasNotDefinedNameConstraint = static_cast<int32_t>(0x2000),
    __E_HasNotPermittedNameConstraint = static_cast<int32_t>(0x4000),
    __E_HasExcludedNameConstraint = static_cast<int32_t>(0x8000),
    __E_PartialChain = static_cast<int32_t>(0x10000),
    __E_CtlNotTimeValid = static_cast<int32_t>(0x20000),
    __E_CtlNotSignatureValid = static_cast<int32_t>(0x40000),
    __E_CtlNotValidForUsage = static_cast<int32_t>(0x80000),
    __E_OfflineRevocation = static_cast<int32_t>(0x1000000),
    __E_NoIssuanceChainPolicy = static_cast<int32_t>(0x2000000),
    __E_ExplicitDistrust = static_cast<int32_t>(0x4000000),
    __E_HasNotSupportedCriticalExtension = static_cast<int32_t>(0x8000000),
    __E_HasWeakSignature = static_cast<int32_t>(0x100000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509ChainStatusFlags_Unwrapped() const noexcept {
    return static_cast<__X509ChainStatusFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainStatusFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509ChainStatusFlags(int32_t value__) noexcept;

  /// @brief Field CtlNotSignatureValid value: I32(262144)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotSignatureValid;

  /// @brief Field CtlNotTimeValid value: I32(131072)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotTimeValid;

  /// @brief Field CtlNotValidForUsage value: I32(524288)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotValidForUsage;

  /// @brief Field Cyclic value: I32(128)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Cyclic;

  /// @brief Field ExplicitDistrust value: I32(67108864)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const ExplicitDistrust;

  /// @brief Field HasExcludedNameConstraint value: I32(32768)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasExcludedNameConstraint;

  /// @brief Field HasNotDefinedNameConstraint value: I32(8192)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotDefinedNameConstraint;

  /// @brief Field HasNotPermittedNameConstraint value: I32(16384)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotPermittedNameConstraint;

  /// @brief Field HasNotSupportedCriticalExtension value: I32(134217728)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedCriticalExtension;

  /// @brief Field HasNotSupportedNameConstraint value: I32(4096)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedNameConstraint;

  /// @brief Field HasWeakSignature value: I32(1048576)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasWeakSignature;

  /// @brief Field InvalidBasicConstraints value: I32(1024)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidBasicConstraints;

  /// @brief Field InvalidExtension value: I32(256)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidExtension;

  /// @brief Field InvalidNameConstraints value: I32(2048)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidNameConstraints;

  /// @brief Field InvalidPolicyConstraints value: I32(512)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidPolicyConstraints;

  /// @brief Field NoError value: I32(0)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoError;

  /// @brief Field NoIssuanceChainPolicy value: I32(33554432)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoIssuanceChainPolicy;

  /// @brief Field NotSignatureValid value: I32(8)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotSignatureValid;

  /// @brief Field NotTimeNested value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeNested;

  /// @brief Field NotTimeValid value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeValid;

  /// @brief Field NotValidForUsage value: I32(16)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotValidForUsage;

  /// @brief Field OfflineRevocation value: I32(16777216)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const OfflineRevocation;

  /// @brief Field PartialChain value: I32(65536)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const PartialChain;

  /// @brief Field RevocationStatusUnknown value: I32(64)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const RevocationStatusUnknown;

  /// @brief Field Revoked value: I32(4)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Revoked;

  /// @brief Field UntrustedRoot value: I32(32)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const UntrustedRoot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");
