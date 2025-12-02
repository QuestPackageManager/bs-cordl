#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingCriteria.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingCriteria)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SortingCriteria);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SortingCriteria
struct CORDL_TYPE SortingCriteria {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SortingCriteria_Unwrapped
  enum struct __SortingCriteria_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SortingLayer = static_cast<int32_t>(0x1),
    __E_RenderQueue = static_cast<int32_t>(0x2),
    __E_BackToFront = static_cast<int32_t>(0x4),
    __E_QuantizedFrontToBack = static_cast<int32_t>(0x8),
    __E_OptimizeStateChanges = static_cast<int32_t>(0x10),
    __E_CanvasOrder = static_cast<int32_t>(0x20),
    __E_RendererPriority = static_cast<int32_t>(0x40),
    __E_CommonOpaque = static_cast<int32_t>(0x3b),
    __E_CommonTransparent = static_cast<int32_t>(0x17),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SortingCriteria_Unwrapped() const noexcept {
    return static_cast<__SortingCriteria_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingCriteria();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortingCriteria(int32_t value__) noexcept;

  /// @brief Field BackToFront value: I32(4)
  static ::UnityEngine::Rendering::SortingCriteria const BackToFront;

  /// @brief Field CanvasOrder value: I32(32)
  static ::UnityEngine::Rendering::SortingCriteria const CanvasOrder;

  /// @brief Field CommonOpaque value: I32(59)
  static ::UnityEngine::Rendering::SortingCriteria const CommonOpaque;

  /// @brief Field CommonTransparent value: I32(23)
  static ::UnityEngine::Rendering::SortingCriteria const CommonTransparent;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::SortingCriteria const None;

  /// @brief Field OptimizeStateChanges value: I32(16)
  static ::UnityEngine::Rendering::SortingCriteria const OptimizeStateChanges;

  /// @brief Field QuantizedFrontToBack value: I32(8)
  static ::UnityEngine::Rendering::SortingCriteria const QuantizedFrontToBack;

  /// @brief Field RenderQueue value: I32(2)
  static ::UnityEngine::Rendering::SortingCriteria const RenderQueue;

  /// @brief Field RendererPriority value: I32(64)
  static ::UnityEngine::Rendering::SortingCriteria const RendererPriority;

  /// @brief Field SortingLayer value: I32(1)
  static ::UnityEngine::Rendering::SortingCriteria const SortingLayer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10808 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SortingCriteria, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingCriteria, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingCriteria, "UnityEngine.Rendering", "SortingCriteria");
