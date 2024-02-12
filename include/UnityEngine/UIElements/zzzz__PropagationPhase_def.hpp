#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropagationPhase)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PropagationPhase);
// Type: UnityEngine.UIElements::PropagationPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6515))
// CS Name: ::UnityEngine.UIElements::PropagationPhase
struct CORDL_TYPE PropagationPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PropagationPhase_Unwrapped
  enum struct __PropagationPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TrickleDown = static_cast<int32_t>(0x1),
    __E_AtTarget = static_cast<int32_t>(0x2),
    __E_DefaultActionAtTarget = static_cast<int32_t>(0x5),
    __E_BubbleUp = static_cast<int32_t>(0x3),
    __E_DefaultAction = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropagationPhase_Unwrapped() const noexcept {
    return static_cast<__PropagationPhase_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropagationPhase(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropagationPhase();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::PropagationPhase const None;

  /// @brief Field TrickleDown value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::PropagationPhase const TrickleDown;

  /// @brief Field AtTarget value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::PropagationPhase const AtTarget;

  /// @brief Field DefaultActionAtTarget value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::PropagationPhase const DefaultActionAtTarget;

  /// @brief Field BubbleUp value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::PropagationPhase const BubbleUp;

  /// @brief Field DefaultAction value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::PropagationPhase const DefaultAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPhase, "UnityEngine.UIElements", "PropagationPhase");
