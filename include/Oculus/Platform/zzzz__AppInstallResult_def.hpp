#pragma once
// IWYU pragma private; include "Oculus/Platform/AppInstallResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInstallResult)
// Forward declare root types
namespace Oculus::Platform {
struct AppInstallResult;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AppInstallResult);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.AppInstallResult
struct CORDL_TYPE AppInstallResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppInstallResult_Unwrapped
  enum struct __AppInstallResult_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_LowStorage = static_cast<int32_t>(0x1),
    __E_NetworkError = static_cast<int32_t>(0x2),
    __E_DuplicateRequest = static_cast<int32_t>(0x3),
    __E_InstallerError = static_cast<int32_t>(0x4),
    __E_UserCancelled = static_cast<int32_t>(0x5),
    __E_AuthorizationError = static_cast<int32_t>(0x6),
    __E_Success = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppInstallResult_Unwrapped() const noexcept {
    return static_cast<__AppInstallResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInstallResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppInstallResult(int32_t value__) noexcept;

  /// @brief Field AuthorizationError value: I32(6)
  static ::Oculus::Platform::AppInstallResult const AuthorizationError;

  /// @brief Field DuplicateRequest value: I32(3)
  static ::Oculus::Platform::AppInstallResult const DuplicateRequest;

  /// @brief Field InstallerError value: I32(4)
  static ::Oculus::Platform::AppInstallResult const InstallerError;

  /// @brief Field LowStorage value: I32(1)
  static ::Oculus::Platform::AppInstallResult const LowStorage;

  /// @brief Field NetworkError value: I32(2)
  static ::Oculus::Platform::AppInstallResult const NetworkError;

  /// @brief Field Success value: I32(7)
  static ::Oculus::Platform::AppInstallResult const Success;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::AppInstallResult const Unknown;

  /// @brief Field UserCancelled value: I32(5)
  static ::Oculus::Platform::AppInstallResult const UserCancelled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17775 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::AppInstallResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AppInstallResult, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AppInstallResult, "Oculus.Platform", "AppInstallResult");
