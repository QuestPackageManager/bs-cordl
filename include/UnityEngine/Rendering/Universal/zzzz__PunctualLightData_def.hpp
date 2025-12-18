#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PunctualLightData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PunctualLightData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PunctualLightData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PunctualLightData);
// Dependencies UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PunctualLightData
struct CORDL_TYPE PunctualLightData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunctualLightData();

  // Ctor Parameters [CppParam { name: "wsPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "spotDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionProbeInfo",
  // ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PunctualLightData(::UnityEngine::Vector3 wsPos, float_t radius, ::UnityEngine::Vector4 color, ::UnityEngine::Vector4 attenuation, ::UnityEngine::Vector3 spotDirection, int32_t flags,
                              ::UnityEngine::Vector4 occlusionProbeInfo, uint32_t layerMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  /// @brief Field wsPos, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 wsPos;

  /// @brief Field radius, offset: 0xc, size: 0x4, def value: None
  float_t radius;

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 color;

  /// @brief Field attenuation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 attenuation;

  /// @brief Field spotDirection, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 spotDirection;

  /// @brief Field flags, offset: 0x3c, size: 0x4, def value: None
  int32_t flags;

  /// @brief Field occlusionProbeInfo, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 occlusionProbeInfo;

  /// @brief Field layerMask, offset: 0x50, size: 0x4, def value: None
  uint32_t layerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, wsPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, attenuation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, spotDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, flags) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, occlusionProbeInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PunctualLightData, layerMask) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PunctualLightData, 0x54>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PunctualLightData, "UnityEngine.Rendering.Universal", "PunctualLightData");
