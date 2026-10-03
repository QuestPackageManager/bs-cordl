#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/RayTracingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingMode)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct RayTracingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RayTracingMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Rendering::RayTracingMode, "UnityEngine.Experimental.Rendering", "RayTracingMode");
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.RayTracingMode
struct CORDL_TYPE RayTracingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingMode_Unwrapped
  enum struct __RayTracingMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Static = static_cast<int32_t>(0x1),
    __E_DynamicTransform = static_cast<int32_t>(0x2),
    __E_DynamicGeometry = static_cast<int32_t>(0x3),
    __E_DynamicGeometryManualUpdate = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingMode_Unwrapped() const noexcept {
    return static_cast<__RayTracingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingMode(int32_t value__) noexcept;

  /// @brief Field DynamicGeometry value: I32(3)
  static ::UnityEngine::Experimental::Rendering::RayTracingMode const DynamicGeometry;

  /// @brief Field DynamicGeometryManualUpdate value: I32(4)
  static ::UnityEngine::Experimental::Rendering::RayTracingMode const DynamicGeometryManualUpdate;

  /// @brief Field DynamicTransform value: I32(2)
  static ::UnityEngine::Experimental::Rendering::RayTracingMode const DynamicTransform;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Experimental::Rendering::RayTracingMode const Off;

  /// @brief Field Static value: I32(1)
  static ::UnityEngine::Experimental::Rendering::RayTracingMode const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10536 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::RayTracingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Experimental::Rendering::RayTracingMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
