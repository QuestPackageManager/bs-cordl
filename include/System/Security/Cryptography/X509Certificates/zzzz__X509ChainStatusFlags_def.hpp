#pragma once
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
// Type: System.Security.Cryptography.X509Certificates::X509ChainStatusFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8982))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainStatusFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509ChainStatusFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainStatusFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoError value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoError;

  /// @brief Field NotTimeValid value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeValid;

  /// @brief Field NotTimeNested value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeNested;

  /// @brief Field Revoked value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Revoked;

  /// @brief Field NotSignatureValid value: static_cast<int32_t>(0x8)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotSignatureValid;

  /// @brief Field NotValidForUsage value: static_cast<int32_t>(0x10)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotValidForUsage;

  /// @brief Field UntrustedRoot value: static_cast<int32_t>(0x20)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const UntrustedRoot;

  /// @brief Field RevocationStatusUnknown value: static_cast<int32_t>(0x40)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const RevocationStatusUnknown;

  /// @brief Field Cyclic value: static_cast<int32_t>(0x80)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Cyclic;

  /// @brief Field InvalidExtension value: static_cast<int32_t>(0x100)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidExtension;

  /// @brief Field InvalidPolicyConstraints value: static_cast<int32_t>(0x200)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidPolicyConstraints;

  /// @brief Field InvalidBasicConstraints value: static_cast<int32_t>(0x400)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidBasicConstraints;

  /// @brief Field InvalidNameConstraints value: static_cast<int32_t>(0x800)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidNameConstraints;

  /// @brief Field HasNotSupportedNameConstraint value: static_cast<int32_t>(0x1000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedNameConstraint;

  /// @brief Field HasNotDefinedNameConstraint value: static_cast<int32_t>(0x2000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotDefinedNameConstraint;

  /// @brief Field HasNotPermittedNameConstraint value: static_cast<int32_t>(0x4000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotPermittedNameConstraint;

  /// @brief Field HasExcludedNameConstraint value: static_cast<int32_t>(0x8000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasExcludedNameConstraint;

  /// @brief Field PartialChain value: static_cast<int32_t>(0x10000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const PartialChain;

  /// @brief Field CtlNotTimeValid value: static_cast<int32_t>(0x20000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotTimeValid;

  /// @brief Field CtlNotSignatureValid value: static_cast<int32_t>(0x40000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotSignatureValid;

  /// @brief Field CtlNotValidForUsage value: static_cast<int32_t>(0x80000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotValidForUsage;

  /// @brief Field OfflineRevocation value: static_cast<int32_t>(0x1000000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const OfflineRevocation;

  /// @brief Field NoIssuanceChainPolicy value: static_cast<int32_t>(0x2000000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoIssuanceChainPolicy;

  /// @brief Field ExplicitDistrust value: static_cast<int32_t>(0x4000000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const ExplicitDistrust;

  /// @brief Field HasNotSupportedCriticalExtension value: static_cast<int32_t>(0x8000000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedCriticalExtension;

  /// @brief Field HasWeakSignature value: static_cast<int32_t>(0x100000)
  static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasWeakSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");
