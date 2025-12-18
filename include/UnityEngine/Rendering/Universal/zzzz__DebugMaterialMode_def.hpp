#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMaterialMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugMaterialMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugMaterialMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugMaterialMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugMaterialMode
struct CORDL_TYPE DebugMaterialMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugMaterialMode_Unwrapped
  enum struct __DebugMaterialMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Albedo = static_cast<int32_t>(0x1),
    __E_Specular = static_cast<int32_t>(0x2),
    __E_Alpha = static_cast<int32_t>(0x3),
    __E_Smoothness = static_cast<int32_t>(0x4),
    __E_AmbientOcclusion = static_cast<int32_t>(0x5),
    __E_Emission = static_cast<int32_t>(0x6),
    __E_NormalWorldSpace = static_cast<int32_t>(0x7),
    __E_NormalTangentSpace = static_cast<int32_t>(0x8),
    __E_LightingComplexity = static_cast<int32_t>(0x9),
    __E_Metallic = static_cast<int32_t>(0xa),
    __E_SpriteMask = static_cast<int32_t>(0xb),
    __E_RenderingLayerMasks = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugMaterialMode_Unwrapped() const noexcept {
    return static_cast<__DebugMaterialMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMaterialMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugMaterialMode(int32_t value__) noexcept;

  /// @brief Field Albedo value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Albedo;

  /// @brief Field Alpha value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Alpha;

  /// @brief Field AmbientOcclusion value: I32(5)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const AmbientOcclusion;

  /// @brief Field Emission value: I32(6)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Emission;

  /// @brief Field LightingComplexity value: I32(9)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const LightingComplexity;

  /// @brief Field Metallic value: I32(10)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Metallic;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const None;

  /// @brief Field NormalTangentSpace value: I32(8)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const NormalTangentSpace;

  /// @brief Field NormalWorldSpace value: I32(7)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const NormalWorldSpace;

  /// @brief Field RenderingLayerMasks value: I32(12)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const RenderingLayerMasks;

  /// @brief Field Smoothness value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Smoothness;

  /// @brief Field Specular value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Specular;

  /// @brief Field SpriteMask value: I32(11)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const SpriteMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugMaterialMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugMaterialMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugMaterialMode, "UnityEngine.Rendering.Universal", "DebugMaterialMode");
