#pragma once
// IWYU pragma private; include "Oculus/Platform/ShareMediaStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShareMediaStatus)
// Forward declare root types
namespace Oculus::Platform {
struct ShareMediaStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ShareMediaStatus);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.ShareMediaStatus
struct CORDL_TYPE ShareMediaStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShareMediaStatus_Unwrapped
  enum struct __ShareMediaStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Shared = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShareMediaStatus_Unwrapped() const noexcept {
    return static_cast<__ShareMediaStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShareMediaStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShareMediaStatus(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(2)
  static ::Oculus::Platform::ShareMediaStatus const Canceled;

  /// @brief Field Shared value: I32(1)
  static ::Oculus::Platform::ShareMediaStatus const Shared;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::ShareMediaStatus const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::ShareMediaStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ShareMediaStatus, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ShareMediaStatus, "Oculus.Platform", "ShareMediaStatus");
