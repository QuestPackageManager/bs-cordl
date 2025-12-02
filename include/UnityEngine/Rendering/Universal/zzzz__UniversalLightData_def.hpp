#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalLightData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalLightData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalLightData);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.VisibleLight
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalLightData
class CORDL_TYPE UniversalLightData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field additionalLightsCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_additionalLightsCount, put = __cordl_internal_set_additionalLightsCount)) int32_t additionalLightsCount;

  /// @brief Field mainLightIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightIndex, put = __cordl_internal_set_mainLightIndex)) int32_t mainLightIndex;

  /// @brief Field maxPerObjectAdditionalLightsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPerObjectAdditionalLightsCount, put = __cordl_internal_set_maxPerObjectAdditionalLightsCount)) int32_t maxPerObjectAdditionalLightsCount;

  /// @brief Field reflectionProbeBlending, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_reflectionProbeBlending, put = __cordl_internal_set_reflectionProbeBlending)) bool reflectionProbeBlending;

  /// @brief Field reflectionProbeBoxProjection, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_reflectionProbeBoxProjection, put = __cordl_internal_set_reflectionProbeBoxProjection)) bool reflectionProbeBoxProjection;

  /// @brief Field shadeAdditionalLightsPerVertex, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_shadeAdditionalLightsPerVertex, put = __cordl_internal_set_shadeAdditionalLightsPerVertex)) bool shadeAdditionalLightsPerVertex;

  /// @brief Field supportsAdditionalLights, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsAdditionalLights, put = __cordl_internal_set_supportsAdditionalLights)) bool supportsAdditionalLights;

  /// @brief Field supportsLightLayers, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsLightLayers, put = __cordl_internal_set_supportsLightLayers)) bool supportsLightLayers;

  /// @brief Field supportsMixedLighting, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsMixedLighting, put = __cordl_internal_set_supportsMixedLighting)) bool supportsMixedLighting;

  /// @brief Field visibleLights, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_visibleLights, put = __cordl_internal_set_visibleLights)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights;

  static inline ::UnityEngine::Rendering::Universal::UniversalLightData* New_ctor();

  /// @brief Method Reset, addr 0x6656d0c, size 0x18, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_additionalLightsCount() const;

  constexpr int32_t& __cordl_internal_get_additionalLightsCount();

  constexpr int32_t const& __cordl_internal_get_mainLightIndex() const;

  constexpr int32_t& __cordl_internal_get_mainLightIndex();

  constexpr int32_t const& __cordl_internal_get_maxPerObjectAdditionalLightsCount() const;

  constexpr int32_t& __cordl_internal_get_maxPerObjectAdditionalLightsCount();

  constexpr bool const& __cordl_internal_get_reflectionProbeBlending() const;

  constexpr bool& __cordl_internal_get_reflectionProbeBlending();

  constexpr bool const& __cordl_internal_get_reflectionProbeBoxProjection() const;

  constexpr bool& __cordl_internal_get_reflectionProbeBoxProjection();

  constexpr bool const& __cordl_internal_get_shadeAdditionalLightsPerVertex() const;

  constexpr bool& __cordl_internal_get_shadeAdditionalLightsPerVertex();

  constexpr bool const& __cordl_internal_get_supportsAdditionalLights() const;

  constexpr bool& __cordl_internal_get_supportsAdditionalLights();

  constexpr bool const& __cordl_internal_get_supportsLightLayers() const;

  constexpr bool& __cordl_internal_get_supportsLightLayers();

  constexpr bool const& __cordl_internal_get_supportsMixedLighting() const;

  constexpr bool& __cordl_internal_get_supportsMixedLighting();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> const& __cordl_internal_get_visibleLights() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>& __cordl_internal_get_visibleLights();

  constexpr void __cordl_internal_set_additionalLightsCount(int32_t value);

  constexpr void __cordl_internal_set_mainLightIndex(int32_t value);

  constexpr void __cordl_internal_set_maxPerObjectAdditionalLightsCount(int32_t value);

  constexpr void __cordl_internal_set_reflectionProbeBlending(bool value);

  constexpr void __cordl_internal_set_reflectionProbeBoxProjection(bool value);

  constexpr void __cordl_internal_set_shadeAdditionalLightsPerVertex(bool value);

  constexpr void __cordl_internal_set_supportsAdditionalLights(bool value);

  constexpr void __cordl_internal_set_supportsLightLayers(bool value);

  constexpr void __cordl_internal_set_supportsMixedLighting(bool value);

  constexpr void __cordl_internal_set_visibleLights(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> value);

  /// @brief Method .ctor, addr 0x6656d24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalLightData(UniversalLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalLightData(UniversalLightData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12724 };

  /// @brief Field mainLightIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___mainLightIndex;

  /// @brief Field additionalLightsCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___additionalLightsCount;

  /// @brief Field maxPerObjectAdditionalLightsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___maxPerObjectAdditionalLightsCount;

  /// @brief Field visibleLights, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> ___visibleLights;

  /// @brief Field shadeAdditionalLightsPerVertex, offset: 0x30, size: 0x1, def value: None
  bool ___shadeAdditionalLightsPerVertex;

  /// @brief Field supportsMixedLighting, offset: 0x31, size: 0x1, def value: None
  bool ___supportsMixedLighting;

  /// @brief Field reflectionProbeBoxProjection, offset: 0x32, size: 0x1, def value: None
  bool ___reflectionProbeBoxProjection;

  /// @brief Field reflectionProbeBlending, offset: 0x33, size: 0x1, def value: None
  bool ___reflectionProbeBlending;

  /// @brief Field supportsLightLayers, offset: 0x34, size: 0x1, def value: None
  bool ___supportsLightLayers;

  /// @brief Field supportsAdditionalLights, offset: 0x35, size: 0x1, def value: None
  bool ___supportsAdditionalLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___mainLightIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___additionalLightsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___maxPerObjectAdditionalLightsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___visibleLights) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___shadeAdditionalLightsPerVertex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___supportsMixedLighting) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___reflectionProbeBoxProjection) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___reflectionProbeBlending) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___supportsLightLayers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalLightData, ___supportsAdditionalLights) == 0x35, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalLightData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalLightData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalLightData*, "UnityEngine.Rendering.Universal", "UniversalLightData");
