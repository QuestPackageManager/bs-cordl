#pragma once
// IWYU pragma private; include "Oculus/Platform/PermissionGrantStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionGrantStatus)
// Forward declare root types
namespace Oculus::Platform {
struct PermissionGrantStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PermissionGrantStatus);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.PermissionGrantStatus
struct CORDL_TYPE PermissionGrantStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PermissionGrantStatus_Unwrapped
  enum struct __PermissionGrantStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Granted = static_cast<int32_t>(0x1),
    __E_Denied = static_cast<int32_t>(0x2),
    __E_Blocked = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PermissionGrantStatus_Unwrapped() const noexcept {
    return static_cast<__PermissionGrantStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionGrantStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PermissionGrantStatus(int32_t value__) noexcept;

  /// @brief Field Blocked value: I32(3)
  static ::Oculus::Platform::PermissionGrantStatus const Blocked;

  /// @brief Field Denied value: I32(2)
  static ::Oculus::Platform::PermissionGrantStatus const Denied;

  /// @brief Field Granted value: I32(1)
  static ::Oculus::Platform::PermissionGrantStatus const Granted;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::PermissionGrantStatus const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17896 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::PermissionGrantStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PermissionGrantStatus, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PermissionGrantStatus, "Oculus.Platform", "PermissionGrantStatus");
