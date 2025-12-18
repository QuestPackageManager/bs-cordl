#pragma once
// IWYU pragma private; include "Oculus/Platform/TimeWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeWindow)
// Forward declare root types
namespace Oculus::Platform {
struct TimeWindow;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::TimeWindow);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.TimeWindow
struct CORDL_TYPE TimeWindow {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeWindow_Unwrapped
  enum struct __TimeWindow_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_OneHour = static_cast<int32_t>(0x1),
    __E_OneDay = static_cast<int32_t>(0x2),
    __E_OneWeek = static_cast<int32_t>(0x3),
    __E_ThirtyDays = static_cast<int32_t>(0x4),
    __E_NinetyDays = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeWindow_Unwrapped() const noexcept {
    return static_cast<__TimeWindow_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeWindow();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeWindow(int32_t value__) noexcept;

  /// @brief Field NinetyDays value: I32(5)
  static ::Oculus::Platform::TimeWindow const NinetyDays;

  /// @brief Field OneDay value: I32(2)
  static ::Oculus::Platform::TimeWindow const OneDay;

  /// @brief Field OneHour value: I32(1)
  static ::Oculus::Platform::TimeWindow const OneHour;

  /// @brief Field OneWeek value: I32(3)
  static ::Oculus::Platform::TimeWindow const OneWeek;

  /// @brief Field ThirtyDays value: I32(4)
  static ::Oculus::Platform::TimeWindow const ThirtyDays;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::TimeWindow const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::TimeWindow, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::TimeWindow, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::TimeWindow, "Oculus.Platform", "TimeWindow");
