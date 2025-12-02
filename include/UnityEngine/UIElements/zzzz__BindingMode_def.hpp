#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingMode);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingMode
struct CORDL_TYPE BindingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BindingMode_Unwrapped
  enum struct __BindingMode_Unwrapped : int32_t {
    __E_TwoWay = static_cast<int32_t>(0x0),
    __E_ToSource = static_cast<int32_t>(0x1),
    __E_ToTarget = static_cast<int32_t>(0x2),
    __E_ToTargetOnce = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BindingMode_Unwrapped() const noexcept {
    return static_cast<__BindingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BindingMode(int32_t value__) noexcept;

  /// @brief Field ToSource value: I32(1)
  static ::UnityEngine::UIElements::BindingMode const ToSource;

  /// @brief Field ToTarget value: I32(2)
  static ::UnityEngine::UIElements::BindingMode const ToTarget;

  /// @brief Field ToTargetOnce value: I32(3)
  static ::UnityEngine::UIElements::BindingMode const ToTargetOnce;

  /// @brief Field TwoWay value: I32(0)
  static ::UnityEngine::UIElements::BindingMode const TwoWay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingMode, "UnityEngine.UIElements", "BindingMode");
