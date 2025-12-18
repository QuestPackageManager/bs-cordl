#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightData)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightData);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightData
struct CORDL_TYPE LightData {
public:
  // Declarations
  __declspec(property(get = get_additionalLightsCount)) int32_t additionalLightsCount;

  __declspec(property(get = get_mainLightIndex)) int32_t mainLightIndex;

  __declspec(property(get = get_maxPerObjectAdditionalLightsCount)) int32_t maxPerObjectAdditionalLightsCount;

  __declspec(property(get = get_reflectionProbeBlending)) bool reflectionProbeBlending;

  __declspec(property(get = get_reflectionProbeBoxProjection)) bool reflectionProbeBoxProjection;

  __declspec(property(get = get_shadeAdditionalLightsPerVertex)) bool shadeAdditionalLightsPerVertex;

  __declspec(property(get = get_supportsAdditionalLights)) bool supportsAdditionalLights;

  __declspec(property(get = get_supportsLightLayers)) bool supportsLightLayers;

  __declspec(property(get = get_supportsMixedLighting)) bool supportsMixedLighting;

  __declspec(property(get = get_universalLightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* universalLightData;

  __declspec(property(get = get_visibleLights)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights;

  /// @brief Method .ctor, addr 0x672b41c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method get_additionalLightsCount, addr 0x672b4d8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_additionalLightsCount();

  /// @brief Method get_mainLightIndex, addr 0x672b478, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_mainLightIndex();

  /// @brief Method get_maxPerObjectAdditionalLightsCount, addr 0x672b538, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_maxPerObjectAdditionalLightsCount();

  /// @brief Method get_reflectionProbeBlending, addr 0x672b718, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_reflectionProbeBlending();

  /// @brief Method get_reflectionProbeBoxProjection, addr 0x672b6b8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_reflectionProbeBoxProjection();

  /// @brief Method get_shadeAdditionalLightsPerVertex, addr 0x672b5f8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_shadeAdditionalLightsPerVertex();

  /// @brief Method get_supportsAdditionalLights, addr 0x672b7d8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportsAdditionalLights();

  /// @brief Method get_supportsLightLayers, addr 0x672b778, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportsLightLayers();

  /// @brief Method get_supportsMixedLighting, addr 0x672b658, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportsMixedLighting();

  /// @brief Method get_universalLightData, addr 0x672b424, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalLightData* get_universalLightData();

  /// @brief Method get_visibleLights, addr 0x672b598, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> get_visibleLights();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightData();

  // Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: None }]
  constexpr LightData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field frameData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* frameData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, frameData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightData, "UnityEngine.Rendering.Universal", "LightData");
