#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PseudoStates)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PseudoStates);
// Type: UnityEngine.UIElements::PseudoStates
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::PseudoStates
struct CORDL_TYPE PseudoStates {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PseudoStates_Unwrapped
  enum struct __PseudoStates_Unwrapped : int32_t {
    __E_Active = static_cast<int32_t>(0x1),
    __E_Hover = static_cast<int32_t>(0x2),
    __E_Checked = static_cast<int32_t>(0x8),
    __E_Disabled = static_cast<int32_t>(0x20),
    __E_Focus = static_cast<int32_t>(0x40),
    __E_Root = static_cast<int32_t>(0x80),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PseudoStates_Unwrapped() const noexcept {
    return static_cast<__PseudoStates_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__PseudoStates_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PseudoStates();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PseudoStates(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Active value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::PseudoStates const Active;

  /// @brief Field Checked value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::PseudoStates const Checked;

  /// @brief Field Disabled value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::PseudoStates const Disabled;

  /// @brief Field Focus value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::PseudoStates const Focus;

  /// @brief Field Hover value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::PseudoStates const Hover;

  /// @brief Field Root value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::PseudoStates const Root;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PseudoStates, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PseudoStates, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PseudoStates, "UnityEngine.UIElements", "PseudoStates");
