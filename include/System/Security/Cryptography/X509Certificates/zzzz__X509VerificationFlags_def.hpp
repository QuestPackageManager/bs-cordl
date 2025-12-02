#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509VerificationFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509VerificationFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509VerificationFlags);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct CORDL_TYPE X509VerificationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509VerificationFlags_Unwrapped
  enum struct __X509VerificationFlags_Unwrapped : int32_t {
    __E_NoFlag = static_cast<int32_t>(0x0),
    __E_IgnoreNotTimeValid = static_cast<int32_t>(0x1),
    __E_IgnoreCtlNotTimeValid = static_cast<int32_t>(0x2),
    __E_IgnoreNotTimeNested = static_cast<int32_t>(0x4),
    __E_IgnoreInvalidBasicConstraints = static_cast<int32_t>(0x8),
    __E_AllowUnknownCertificateAuthority = static_cast<int32_t>(0x10),
    __E_IgnoreWrongUsage = static_cast<int32_t>(0x20),
    __E_IgnoreInvalidName = static_cast<int32_t>(0x40),
    __E_IgnoreInvalidPolicy = static_cast<int32_t>(0x80),
    __E_IgnoreEndRevocationUnknown = static_cast<int32_t>(0x100),
    __E_IgnoreCtlSignerRevocationUnknown = static_cast<int32_t>(0x200),
    __E_IgnoreCertificateAuthorityRevocationUnknown = static_cast<int32_t>(0x400),
    __E_IgnoreRootRevocationUnknown = static_cast<int32_t>(0x800),
    __E_AllFlags = static_cast<int32_t>(0xfff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509VerificationFlags_Unwrapped() const noexcept {
    return static_cast<__X509VerificationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509VerificationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509VerificationFlags(int32_t value__) noexcept;

  /// @brief Field AllFlags value: I32(4095)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllFlags;

  /// @brief Field AllowUnknownCertificateAuthority value: I32(16)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllowUnknownCertificateAuthority;

  /// @brief Field IgnoreCertificateAuthorityRevocationUnknown value: I32(1024)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCertificateAuthorityRevocationUnknown;

  /// @brief Field IgnoreCtlNotTimeValid value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlNotTimeValid;

  /// @brief Field IgnoreCtlSignerRevocationUnknown value: I32(512)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlSignerRevocationUnknown;

  /// @brief Field IgnoreEndRevocationUnknown value: I32(256)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreEndRevocationUnknown;

  /// @brief Field IgnoreInvalidBasicConstraints value: I32(8)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidBasicConstraints;

  /// @brief Field IgnoreInvalidName value: I32(64)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidName;

  /// @brief Field IgnoreInvalidPolicy value: I32(128)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidPolicy;

  /// @brief Field IgnoreNotTimeNested value: I32(4)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeNested;

  /// @brief Field IgnoreNotTimeValid value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeValid;

  /// @brief Field IgnoreRootRevocationUnknown value: I32(2048)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreRootRevocationUnknown;

  /// @brief Field IgnoreWrongUsage value: I32(32)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreWrongUsage;

  /// @brief Field NoFlag value: I32(0)
  static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const NoFlag;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11158 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509VerificationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509VerificationFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509VerificationFlags, "System.Security.Cryptography.X509Certificates", "X509VerificationFlags");
