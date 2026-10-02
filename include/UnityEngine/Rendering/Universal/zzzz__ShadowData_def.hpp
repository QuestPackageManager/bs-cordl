#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
namespace UnityEngine::Rendering::Universal {
struct URPLightShadowCullingInfos;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShadowData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ShadowData, "UnityEngine.Rendering.Universal", "ShadowData");
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShadowData
struct CORDL_TYPE ShadowData {
public:
  // Declarations
  __declspec(property(get = get_additionalLightShadowsEnabled)) bool additionalLightShadowsEnabled;

  __declspec(property(get = get_additionalLightsShadowmapHeight)) int32_t additionalLightsShadowmapHeight;

  __declspec(property(get = get_additionalLightsShadowmapWidth)) int32_t additionalLightsShadowmapWidth;

  __declspec(property(get = get_bias)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias;

  __declspec(property(get = get_isKeywordAdditionalLightShadowsEnabled)) bool isKeywordAdditionalLightShadowsEnabled;

  __declspec(property(get = get_isKeywordSoftShadowsEnabled)) bool isKeywordSoftShadowsEnabled;

  __declspec(property(get = get_mainLightRenderTargetHeight)) int32_t mainLightRenderTargetHeight;

  __declspec(property(get = get_mainLightRenderTargetWidth)) int32_t mainLightRenderTargetWidth;

  __declspec(property(get = get_mainLightShadowCascadeBorder)) float_t mainLightShadowCascadeBorder;

  __declspec(property(get = get_mainLightShadowCascadesCount)) int32_t mainLightShadowCascadesCount;

  __declspec(property(get = get_mainLightShadowCascadesSplit)) ::UnityEngine::Vector3 mainLightShadowCascadesSplit;

  __declspec(property(get = get_mainLightShadowResolution)) int32_t mainLightShadowResolution;

  __declspec(property(get = get_mainLightShadowmapHeight)) int32_t mainLightShadowmapHeight;

  __declspec(property(get = get_mainLightShadowmapWidth)) int32_t mainLightShadowmapWidth;

  __declspec(property(get = get_mainLightShadowsEnabled)) bool mainLightShadowsEnabled;

  __declspec(property(get = get_resolution)) ::System::Collections::Generic::List_1<int32_t>* resolution;

  __declspec(property(get = get_shadowAtlasLayout)) ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout shadowAtlasLayout;

  __declspec(property(get = get_shadowmapDepthBufferBits)) int32_t shadowmapDepthBufferBits;

  __declspec(property(get = get_supportsAdditionalLightShadows)) bool supportsAdditionalLightShadows;

  __declspec(property(get = get_supportsMainLightShadows)) bool supportsMainLightShadows;

  __declspec(property(get = get_supportsSoftShadows)) bool supportsSoftShadows;

  __declspec(property(get = get_universalShadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData* universalShadowData;

  __declspec(property(get = get_visibleLightsShadowCullingInfos)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> visibleLightsShadowCullingInfos;

  /// @brief Method .ctor, addr 0x6d0d860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method get_additionalLightShadowsEnabled, addr 0x6d0dbbc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_additionalLightShadowsEnabled();

  /// @brief Method get_additionalLightsShadowmapHeight, addr 0x6d0dc7c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_additionalLightsShadowmapHeight();

  /// @brief Method get_additionalLightsShadowmapWidth, addr 0x6d0dc1c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_additionalLightsShadowmapWidth();

  /// @brief Method get_bias, addr 0x6d0dd9c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> get_bias();

  /// @brief Method get_isKeywordAdditionalLightShadowsEnabled, addr 0x6d0de5c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_isKeywordAdditionalLightShadowsEnabled();

  /// @brief Method get_isKeywordSoftShadowsEnabled, addr 0x6d0debc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_isKeywordSoftShadowsEnabled();

  /// @brief Method get_mainLightRenderTargetHeight, addr 0x6d0dfdc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightRenderTargetHeight();

  /// @brief Method get_mainLightRenderTargetWidth, addr 0x6d0df7c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightRenderTargetWidth();

  /// @brief Method get_mainLightShadowCascadeBorder, addr 0x6d0dafc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<float_t> get_mainLightShadowCascadeBorder();

  /// @brief Method get_mainLightShadowCascadesCount, addr 0x6d0da3c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightShadowCascadesCount();

  /// @brief Method get_mainLightShadowCascadesSplit, addr 0x6d0da9c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Vector3> get_mainLightShadowCascadesSplit();

  /// @brief Method get_mainLightShadowResolution, addr 0x6d0df1c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightShadowResolution();

  /// @brief Method get_mainLightShadowmapHeight, addr 0x6d0d9dc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightShadowmapHeight();

  /// @brief Method get_mainLightShadowmapWidth, addr 0x6d0d97c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_mainLightShadowmapWidth();

  /// @brief Method get_mainLightShadowsEnabled, addr 0x6d0d91c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_mainLightShadowsEnabled();

  /// @brief Method get_resolution, addr 0x6d0ddfc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<::System::Collections::Generic::List_1<int32_t>*> get_resolution();

  /// @brief Method get_shadowAtlasLayout, addr 0x6d0e09c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> get_shadowAtlasLayout();

  /// @brief Method get_shadowmapDepthBufferBits, addr 0x6d0dd3c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<int32_t> get_shadowmapDepthBufferBits();

  /// @brief Method get_supportsAdditionalLightShadows, addr 0x6d0db5c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_supportsAdditionalLightShadows();

  /// @brief Method get_supportsMainLightShadows, addr 0x6d0d8bc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_supportsMainLightShadows();

  /// @brief Method get_supportsSoftShadows, addr 0x6d0dcdc, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<bool> get_supportsSoftShadows();

  /// @brief Method get_universalShadowData, addr 0x6d0d868, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalShadowData* get_universalShadowData();

  /// @brief Method get_visibleLightsShadowCullingInfos, addr 0x6d0e03c, size 0x60, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> get_visibleLightsShadowCullingInfos();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowData();

  // Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: None, comment: None }]
  constexpr ShadowData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13261 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field frameData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* frameData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, frameData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ShadowData) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
