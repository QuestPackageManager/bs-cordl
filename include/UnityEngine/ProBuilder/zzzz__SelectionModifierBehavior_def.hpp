#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionModifierBehavior)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SelectionModifierBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::SelectionModifierBehavior);
// Type: UnityEngine.ProBuilder::SelectionModifierBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12182))
// CS Name: ::UnityEngine.ProBuilder::SelectionModifierBehavior
struct CORDL_TYPE SelectionModifierBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectionModifierBehavior_Unwrapped
  enum struct __SelectionModifierBehavior_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Subtract = static_cast<int32_t>(0x1),
    __E_Difference = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectionModifierBehavior_Unwrapped() const noexcept {
    return static_cast<__SelectionModifierBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectionModifierBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionModifierBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::SelectionModifierBehavior const Add;

  /// @brief Field Subtract value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::SelectionModifierBehavior const Subtract;

  /// @brief Field Difference value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::SelectionModifierBehavior const Difference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionModifierBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SelectionModifierBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionModifierBehavior, "UnityEngine.ProBuilder", "SelectionModifierBehavior");
