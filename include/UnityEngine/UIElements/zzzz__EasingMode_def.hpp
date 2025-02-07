#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EasingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EasingMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct EasingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EasingMode);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EasingMode
struct CORDL_TYPE EasingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EasingMode_Unwrapped
  enum struct __EasingMode_Unwrapped : int32_t {
    __E_Ease = static_cast<int32_t>(0x0),
    __E_EaseIn = static_cast<int32_t>(0x1),
    __E_EaseOut = static_cast<int32_t>(0x2),
    __E_EaseInOut = static_cast<int32_t>(0x3),
    __E_Linear = static_cast<int32_t>(0x4),
    __E_EaseInSine = static_cast<int32_t>(0x5),
    __E_EaseOutSine = static_cast<int32_t>(0x6),
    __E_EaseInOutSine = static_cast<int32_t>(0x7),
    __E_EaseInCubic = static_cast<int32_t>(0x8),
    __E_EaseOutCubic = static_cast<int32_t>(0x9),
    __E_EaseInOutCubic = static_cast<int32_t>(0xa),
    __E_EaseInCirc = static_cast<int32_t>(0xb),
    __E_EaseOutCirc = static_cast<int32_t>(0xc),
    __E_EaseInOutCirc = static_cast<int32_t>(0xd),
    __E_EaseInElastic = static_cast<int32_t>(0xe),
    __E_EaseOutElastic = static_cast<int32_t>(0xf),
    __E_EaseInOutElastic = static_cast<int32_t>(0x10),
    __E_EaseInBack = static_cast<int32_t>(0x11),
    __E_EaseOutBack = static_cast<int32_t>(0x12),
    __E_EaseInOutBack = static_cast<int32_t>(0x13),
    __E_EaseInBounce = static_cast<int32_t>(0x14),
    __E_EaseOutBounce = static_cast<int32_t>(0x15),
    __E_EaseInOutBounce = static_cast<int32_t>(0x16),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EasingMode_Unwrapped() const noexcept {
    return static_cast<__EasingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EasingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EasingMode(int32_t value__) noexcept;

  /// @brief Field Ease value: I32(0)
  static ::UnityEngine::UIElements::EasingMode const Ease;

  /// @brief Field EaseIn value: I32(1)
  static ::UnityEngine::UIElements::EasingMode const EaseIn;

  /// @brief Field EaseInBack value: I32(17)
  static ::UnityEngine::UIElements::EasingMode const EaseInBack;

  /// @brief Field EaseInBounce value: I32(20)
  static ::UnityEngine::UIElements::EasingMode const EaseInBounce;

  /// @brief Field EaseInCirc value: I32(11)
  static ::UnityEngine::UIElements::EasingMode const EaseInCirc;

  /// @brief Field EaseInCubic value: I32(8)
  static ::UnityEngine::UIElements::EasingMode const EaseInCubic;

  /// @brief Field EaseInElastic value: I32(14)
  static ::UnityEngine::UIElements::EasingMode const EaseInElastic;

  /// @brief Field EaseInOut value: I32(3)
  static ::UnityEngine::UIElements::EasingMode const EaseInOut;

  /// @brief Field EaseInOutBack value: I32(19)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutBack;

  /// @brief Field EaseInOutBounce value: I32(22)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutBounce;

  /// @brief Field EaseInOutCirc value: I32(13)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutCirc;

  /// @brief Field EaseInOutCubic value: I32(10)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutCubic;

  /// @brief Field EaseInOutElastic value: I32(16)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutElastic;

  /// @brief Field EaseInOutSine value: I32(7)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutSine;

  /// @brief Field EaseInSine value: I32(5)
  static ::UnityEngine::UIElements::EasingMode const EaseInSine;

  /// @brief Field EaseOut value: I32(2)
  static ::UnityEngine::UIElements::EasingMode const EaseOut;

  /// @brief Field EaseOutBack value: I32(18)
  static ::UnityEngine::UIElements::EasingMode const EaseOutBack;

  /// @brief Field EaseOutBounce value: I32(21)
  static ::UnityEngine::UIElements::EasingMode const EaseOutBounce;

  /// @brief Field EaseOutCirc value: I32(12)
  static ::UnityEngine::UIElements::EasingMode const EaseOutCirc;

  /// @brief Field EaseOutCubic value: I32(9)
  static ::UnityEngine::UIElements::EasingMode const EaseOutCubic;

  /// @brief Field EaseOutElastic value: I32(15)
  static ::UnityEngine::UIElements::EasingMode const EaseOutElastic;

  /// @brief Field EaseOutSine value: I32(6)
  static ::UnityEngine::UIElements::EasingMode const EaseOutSine;

  /// @brief Field Linear value: I32(4)
  static ::UnityEngine::UIElements::EasingMode const Linear;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EasingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingMode, "UnityEngine.UIElements", "EasingMode");
