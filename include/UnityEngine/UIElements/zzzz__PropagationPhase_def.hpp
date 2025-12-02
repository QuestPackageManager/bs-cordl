#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropagationPhase.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PropagationPhase
struct CORDL_TYPE PropagationPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PropagationPhase_Unwrapped
  enum struct __PropagationPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TrickleDown = static_cast<int32_t>(0x1),
    __E_BubbleUp = static_cast<int32_t>(0x3),
    __E_AtTarget = static_cast<int32_t>(0x2),
    __E_DefaultAction = static_cast<int32_t>(0x4),
    __E_DefaultActionAtTarget = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropagationPhase_Unwrapped() const noexcept {
    return static_cast<__PropagationPhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropagationPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropagationPhase(int32_t value__) noexcept;

  /// @brief Field AtTarget value: I32(2)
  static ::UnityEngine::UIElements::PropagationPhase const AtTarget;

  /// @brief Field BubbleUp value: I32(3)
  static ::UnityEngine::UIElements::PropagationPhase const BubbleUp;

  /// @brief Field DefaultAction value: I32(4)
  static ::UnityEngine::UIElements::PropagationPhase const DefaultAction;

  /// @brief Field DefaultActionAtTarget value: I32(5)
  static ::UnityEngine::UIElements::PropagationPhase const DefaultActionAtTarget;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::PropagationPhase const None;

  /// @brief Field TrickleDown value: I32(1)
  static ::UnityEngine::UIElements::PropagationPhase const TrickleDown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropagationPhase, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPhase, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPhase, "UnityEngine.UIElements", "PropagationPhase");
