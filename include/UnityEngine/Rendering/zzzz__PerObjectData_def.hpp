#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PerObjectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerObjectData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PerObjectData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PerObjectData);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PerObjectData
struct CORDL_TYPE PerObjectData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerObjectData_Unwrapped
  enum struct __PerObjectData_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LightProbe = static_cast<int32_t>(0x1),
    __E_ReflectionProbes = static_cast<int32_t>(0x2),
    __E_LightProbeProxyVolume = static_cast<int32_t>(0x4),
    __E_Lightmaps = static_cast<int32_t>(0x8),
    __E_LightData = static_cast<int32_t>(0x10),
    __E_MotionVectors = static_cast<int32_t>(0x20),
    __E_LightIndices = static_cast<int32_t>(0x40),
    __E_ReflectionProbeData = static_cast<int32_t>(0x80),
    __E_OcclusionProbe = static_cast<int32_t>(0x100),
    __E_OcclusionProbeProxyVolume = static_cast<int32_t>(0x200),
    __E_ShadowMask = static_cast<int32_t>(0x400),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerObjectData_Unwrapped() const noexcept {
    return static_cast<__PerObjectData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerObjectData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerObjectData(int32_t value__) noexcept;

  /// @brief Field LightData value: I32(16)
  static ::UnityEngine::Rendering::PerObjectData const LightData;

  /// @brief Field LightIndices value: I32(64)
  static ::UnityEngine::Rendering::PerObjectData const LightIndices;

  /// @brief Field LightProbe value: I32(1)
  static ::UnityEngine::Rendering::PerObjectData const LightProbe;

  /// @brief Field LightProbeProxyVolume value: I32(4)
  static ::UnityEngine::Rendering::PerObjectData const LightProbeProxyVolume;

  /// @brief Field Lightmaps value: I32(8)
  static ::UnityEngine::Rendering::PerObjectData const Lightmaps;

  /// @brief Field MotionVectors value: I32(32)
  static ::UnityEngine::Rendering::PerObjectData const MotionVectors;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::PerObjectData const None;

  /// @brief Field OcclusionProbe value: I32(256)
  static ::UnityEngine::Rendering::PerObjectData const OcclusionProbe;

  /// @brief Field OcclusionProbeProxyVolume value: I32(512)
  static ::UnityEngine::Rendering::PerObjectData const OcclusionProbeProxyVolume;

  /// @brief Field ReflectionProbeData value: I32(128)
  static ::UnityEngine::Rendering::PerObjectData const ReflectionProbeData;

  /// @brief Field ReflectionProbes value: I32(2)
  static ::UnityEngine::Rendering::PerObjectData const ReflectionProbes;

  /// @brief Field ShadowMask value: I32(1024)
  static ::UnityEngine::Rendering::PerObjectData const ShadowMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PerObjectData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PerObjectData, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PerObjectData, "UnityEngine.Rendering", "PerObjectData");
