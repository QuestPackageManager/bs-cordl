#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidNavigation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidNavigation)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidNavigation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidNavigation);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidNavigation
struct CORDL_TYPE AndroidNavigation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidNavigation_Unwrapped
  enum struct __AndroidNavigation_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_NoNav = static_cast<int32_t>(0x1),
    __E_Dpad = static_cast<int32_t>(0x2),
    __E_TrackBall = static_cast<int32_t>(0x3),
    __E_Wheel = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidNavigation_Unwrapped() const noexcept {
    return static_cast<__AndroidNavigation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidNavigation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidNavigation(int32_t value__) noexcept;

  /// @brief Field Dpad value: I32(2)
  static ::UnityEngine::Android::AndroidNavigation const Dpad;

  /// @brief Field NoNav value: I32(1)
  static ::UnityEngine::Android::AndroidNavigation const NoNav;

  /// @brief Field TrackBall value: I32(3)
  static ::UnityEngine::Android::AndroidNavigation const TrackBall;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::Android::AndroidNavigation const Undefined;

  /// @brief Field Wheel value: I32(4)
  static ::UnityEngine::Android::AndroidNavigation const Wheel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidNavigation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidNavigation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidNavigation, "UnityEngine.Android", "AndroidNavigation");
