#pragma once
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
// Type: UnityEngine.UIElements::EasingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7285))
// CS Name: ::UnityEngine.UIElements::EasingMode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EasingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EasingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ease value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::EasingMode const Ease;

  /// @brief Field EaseIn value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::EasingMode const EaseIn;

  /// @brief Field EaseOut value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::EasingMode const EaseOut;

  /// @brief Field EaseInOut value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::EasingMode const EaseInOut;

  /// @brief Field Linear value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::EasingMode const Linear;

  /// @brief Field EaseInSine value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::EasingMode const EaseInSine;

  /// @brief Field EaseOutSine value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::EasingMode const EaseOutSine;

  /// @brief Field EaseInOutSine value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutSine;

  /// @brief Field EaseInCubic value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::EasingMode const EaseInCubic;

  /// @brief Field EaseOutCubic value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UIElements::EasingMode const EaseOutCubic;

  /// @brief Field EaseInOutCubic value: static_cast<int32_t>(0xa)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutCubic;

  /// @brief Field EaseInCirc value: static_cast<int32_t>(0xb)
  static ::UnityEngine::UIElements::EasingMode const EaseInCirc;

  /// @brief Field EaseOutCirc value: static_cast<int32_t>(0xc)
  static ::UnityEngine::UIElements::EasingMode const EaseOutCirc;

  /// @brief Field EaseInOutCirc value: static_cast<int32_t>(0xd)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutCirc;

  /// @brief Field EaseInElastic value: static_cast<int32_t>(0xe)
  static ::UnityEngine::UIElements::EasingMode const EaseInElastic;

  /// @brief Field EaseOutElastic value: static_cast<int32_t>(0xf)
  static ::UnityEngine::UIElements::EasingMode const EaseOutElastic;

  /// @brief Field EaseInOutElastic value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutElastic;

  /// @brief Field EaseInBack value: static_cast<int32_t>(0x11)
  static ::UnityEngine::UIElements::EasingMode const EaseInBack;

  /// @brief Field EaseOutBack value: static_cast<int32_t>(0x12)
  static ::UnityEngine::UIElements::EasingMode const EaseOutBack;

  /// @brief Field EaseInOutBack value: static_cast<int32_t>(0x13)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutBack;

  /// @brief Field EaseInBounce value: static_cast<int32_t>(0x14)
  static ::UnityEngine::UIElements::EasingMode const EaseInBounce;

  /// @brief Field EaseOutBounce value: static_cast<int32_t>(0x15)
  static ::UnityEngine::UIElements::EasingMode const EaseOutBounce;

  /// @brief Field EaseInOutBounce value: static_cast<int32_t>(0x16)
  static ::UnityEngine::UIElements::EasingMode const EaseInOutBounce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EasingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingMode, "UnityEngine.UIElements", "EasingMode");
