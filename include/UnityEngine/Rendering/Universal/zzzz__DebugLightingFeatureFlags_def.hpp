#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugLightingFeatureFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugLightingFeatureFlags)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugLightingFeatureFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugLightingFeatureFlags
struct CORDL_TYPE DebugLightingFeatureFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugLightingFeatureFlags_Unwrapped
  enum struct __DebugLightingFeatureFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_GlobalIllumination = static_cast<int32_t>(0x1),
    __E_MainLight = static_cast<int32_t>(0x2),
    __E_AdditionalLights = static_cast<int32_t>(0x4),
    __E_VertexLighting = static_cast<int32_t>(0x8),
    __E_Emission = static_cast<int32_t>(0x10),
    __E_AmbientOcclusion = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugLightingFeatureFlags_Unwrapped() const noexcept {
    return static_cast<__DebugLightingFeatureFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugLightingFeatureFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugLightingFeatureFlags(int32_t value__) noexcept;

  /// @brief Field AdditionalLights value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const AdditionalLights;

  /// @brief Field AmbientOcclusion value: I32(32)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const AmbientOcclusion;

  /// @brief Field Emission value: I32(16)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const Emission;

  /// @brief Field GlobalIllumination value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const GlobalIllumination;

  /// @brief Field MainLight value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const MainLight;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const None;

  /// @brief Field VertexLighting value: I32(8)
  static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const VertexLighting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23095 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags, "UnityEngine.Rendering.Universal", "DebugLightingFeatureFlags");
