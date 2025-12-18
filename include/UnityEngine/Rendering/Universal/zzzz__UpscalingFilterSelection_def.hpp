#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UpscalingFilterSelection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpscalingFilterSelection)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UpscalingFilterSelection);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UpscalingFilterSelection
struct CORDL_TYPE UpscalingFilterSelection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UpscalingFilterSelection_Unwrapped
  enum struct __UpscalingFilterSelection_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Linear = static_cast<int32_t>(0x1),
    __E_Point = static_cast<int32_t>(0x2),
    __E_FSR = static_cast<int32_t>(0x3),
    __E_STP = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UpscalingFilterSelection_Unwrapped() const noexcept {
    return static_cast<__UpscalingFilterSelection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UpscalingFilterSelection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UpscalingFilterSelection(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const Auto;

  /// @brief Field FSR value: I32(3)
  static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const FSR;

  /// @brief Field Linear value: I32(1)
  static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const Linear;

  /// @brief Field Point value: I32(2)
  static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const Point;

  /// @brief Field STP value: I32(4)
  static ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const STP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UpscalingFilterSelection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UpscalingFilterSelection, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UpscalingFilterSelection, "UnityEngine.Rendering.Universal", "UpscalingFilterSelection");
