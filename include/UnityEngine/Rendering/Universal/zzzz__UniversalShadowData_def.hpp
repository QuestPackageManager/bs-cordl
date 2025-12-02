#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalShadowData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalShadowData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalShadowData);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout,
// UnityEngine.Rendering.Universal.URPLightShadowCullingInfos, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalShadowData
class CORDL_TYPE UniversalShadowData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field additionalLightShadowsEnabled, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_additionalLightShadowsEnabled, put = __cordl_internal_set_additionalLightShadowsEnabled)) bool additionalLightShadowsEnabled;

  /// @brief Field additionalLightsShadowmapHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_additionalLightsShadowmapHeight, put = __cordl_internal_set_additionalLightsShadowmapHeight)) int32_t additionalLightsShadowmapHeight;

  /// @brief Field additionalLightsShadowmapWidth, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_additionalLightsShadowmapWidth, put = __cordl_internal_set_additionalLightsShadowmapWidth)) int32_t additionalLightsShadowmapWidth;

  /// @brief Field bias, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bias, put = __cordl_internal_set_bias)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias;

  /// @brief Field isKeywordAdditionalLightShadowsEnabled, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeywordAdditionalLightShadowsEnabled,
                      put = __cordl_internal_set_isKeywordAdditionalLightShadowsEnabled)) bool isKeywordAdditionalLightShadowsEnabled;

  /// @brief Field isKeywordSoftShadowsEnabled, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeywordSoftShadowsEnabled, put = __cordl_internal_set_isKeywordSoftShadowsEnabled)) bool isKeywordSoftShadowsEnabled;

  /// @brief Field mainLightRenderTargetHeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightRenderTargetHeight, put = __cordl_internal_set_mainLightRenderTargetHeight)) int32_t mainLightRenderTargetHeight;

  /// @brief Field mainLightRenderTargetWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightRenderTargetWidth, put = __cordl_internal_set_mainLightRenderTargetWidth)) int32_t mainLightRenderTargetWidth;

  /// @brief Field mainLightShadowCascadeBorder, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightShadowCascadeBorder, put = __cordl_internal_set_mainLightShadowCascadeBorder)) float_t mainLightShadowCascadeBorder;

  /// @brief Field mainLightShadowCascadesCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightShadowCascadesCount, put = __cordl_internal_set_mainLightShadowCascadesCount)) int32_t mainLightShadowCascadesCount;

  /// @brief Field mainLightShadowCascadesSplit, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_mainLightShadowCascadesSplit, put = __cordl_internal_set_mainLightShadowCascadesSplit)) ::UnityEngine::Vector3 mainLightShadowCascadesSplit;

  /// @brief Field mainLightShadowResolution, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightShadowResolution, put = __cordl_internal_set_mainLightShadowResolution)) int32_t mainLightShadowResolution;

  /// @brief Field mainLightShadowmapHeight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightShadowmapHeight, put = __cordl_internal_set_mainLightShadowmapHeight)) int32_t mainLightShadowmapHeight;

  /// @brief Field mainLightShadowmapWidth, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_mainLightShadowmapWidth, put = __cordl_internal_set_mainLightShadowmapWidth)) int32_t mainLightShadowmapWidth;

  /// @brief Field mainLightShadowsEnabled, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_mainLightShadowsEnabled, put = __cordl_internal_set_mainLightShadowsEnabled)) bool mainLightShadowsEnabled;

  /// @brief Field resolution, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_resolution, put = __cordl_internal_set_resolution)) ::System::Collections::Generic::List_1<int32_t>* resolution;

  /// @brief Field shadowAtlasLayout, offset 0x78, size 0x38
  __declspec(property(get = __cordl_internal_get_shadowAtlasLayout,
                      put = __cordl_internal_set_shadowAtlasLayout)) ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout shadowAtlasLayout;

  /// @brief Field shadowmapDepthBufferBits, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_shadowmapDepthBufferBits, put = __cordl_internal_set_shadowmapDepthBufferBits)) int32_t shadowmapDepthBufferBits;

  /// @brief Field supportsAdditionalLightShadows, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsAdditionalLightShadows, put = __cordl_internal_set_supportsAdditionalLightShadows)) bool supportsAdditionalLightShadows;

  /// @brief Field supportsMainLightShadows, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsMainLightShadows, put = __cordl_internal_set_supportsMainLightShadows)) bool supportsMainLightShadows;

  /// @brief Field supportsSoftShadows, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsSoftShadows, put = __cordl_internal_set_supportsSoftShadows)) bool supportsSoftShadows;

  /// @brief Field visibleLightsShadowCullingInfos, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_visibleLightsShadowCullingInfos,
                      put = __cordl_internal_set_visibleLightsShadowCullingInfos)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>
      visibleLightsShadowCullingInfos;

  static inline ::UnityEngine::Rendering::Universal::UniversalShadowData* New_ctor();

  /// @brief Method Reset, addr 0x6657dfc, size 0x100, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_additionalLightShadowsEnabled() const;

  constexpr bool& __cordl_internal_get_additionalLightShadowsEnabled();

  constexpr int32_t const& __cordl_internal_get_additionalLightsShadowmapHeight() const;

  constexpr int32_t& __cordl_internal_get_additionalLightsShadowmapHeight();

  constexpr int32_t const& __cordl_internal_get_additionalLightsShadowmapWidth() const;

  constexpr int32_t& __cordl_internal_get_additionalLightsShadowmapWidth();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_bias() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_bias();

  constexpr bool const& __cordl_internal_get_isKeywordAdditionalLightShadowsEnabled() const;

  constexpr bool& __cordl_internal_get_isKeywordAdditionalLightShadowsEnabled();

  constexpr bool const& __cordl_internal_get_isKeywordSoftShadowsEnabled() const;

  constexpr bool& __cordl_internal_get_isKeywordSoftShadowsEnabled();

  constexpr int32_t const& __cordl_internal_get_mainLightRenderTargetHeight() const;

  constexpr int32_t& __cordl_internal_get_mainLightRenderTargetHeight();

  constexpr int32_t const& __cordl_internal_get_mainLightRenderTargetWidth() const;

  constexpr int32_t& __cordl_internal_get_mainLightRenderTargetWidth();

  constexpr float_t const& __cordl_internal_get_mainLightShadowCascadeBorder() const;

  constexpr float_t& __cordl_internal_get_mainLightShadowCascadeBorder();

  constexpr int32_t const& __cordl_internal_get_mainLightShadowCascadesCount() const;

  constexpr int32_t& __cordl_internal_get_mainLightShadowCascadesCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mainLightShadowCascadesSplit() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_mainLightShadowCascadesSplit();

  constexpr int32_t const& __cordl_internal_get_mainLightShadowResolution() const;

  constexpr int32_t& __cordl_internal_get_mainLightShadowResolution();

  constexpr int32_t const& __cordl_internal_get_mainLightShadowmapHeight() const;

  constexpr int32_t& __cordl_internal_get_mainLightShadowmapHeight();

  constexpr int32_t const& __cordl_internal_get_mainLightShadowmapWidth() const;

  constexpr int32_t& __cordl_internal_get_mainLightShadowmapWidth();

  constexpr bool const& __cordl_internal_get_mainLightShadowsEnabled() const;

  constexpr bool& __cordl_internal_get_mainLightShadowsEnabled();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_resolution() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_resolution();

  constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout const& __cordl_internal_get_shadowAtlasLayout() const;

  constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout& __cordl_internal_get_shadowAtlasLayout();

  constexpr int32_t const& __cordl_internal_get_shadowmapDepthBufferBits() const;

  constexpr int32_t& __cordl_internal_get_shadowmapDepthBufferBits();

  constexpr bool const& __cordl_internal_get_supportsAdditionalLightShadows() const;

  constexpr bool& __cordl_internal_get_supportsAdditionalLightShadows();

  constexpr bool const& __cordl_internal_get_supportsMainLightShadows() const;

  constexpr bool& __cordl_internal_get_supportsMainLightShadows();

  constexpr bool const& __cordl_internal_get_supportsSoftShadows() const;

  constexpr bool& __cordl_internal_get_supportsSoftShadows();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> const& __cordl_internal_get_visibleLightsShadowCullingInfos() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>& __cordl_internal_get_visibleLightsShadowCullingInfos();

  constexpr void __cordl_internal_set_additionalLightShadowsEnabled(bool value);

  constexpr void __cordl_internal_set_additionalLightsShadowmapHeight(int32_t value);

  constexpr void __cordl_internal_set_additionalLightsShadowmapWidth(int32_t value);

  constexpr void __cordl_internal_set_bias(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set_isKeywordAdditionalLightShadowsEnabled(bool value);

  constexpr void __cordl_internal_set_isKeywordSoftShadowsEnabled(bool value);

  constexpr void __cordl_internal_set_mainLightRenderTargetHeight(int32_t value);

  constexpr void __cordl_internal_set_mainLightRenderTargetWidth(int32_t value);

  constexpr void __cordl_internal_set_mainLightShadowCascadeBorder(float_t value);

  constexpr void __cordl_internal_set_mainLightShadowCascadesCount(int32_t value);

  constexpr void __cordl_internal_set_mainLightShadowCascadesSplit(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_mainLightShadowResolution(int32_t value);

  constexpr void __cordl_internal_set_mainLightShadowmapHeight(int32_t value);

  constexpr void __cordl_internal_set_mainLightShadowmapWidth(int32_t value);

  constexpr void __cordl_internal_set_mainLightShadowsEnabled(bool value);

  constexpr void __cordl_internal_set_resolution(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_shadowAtlasLayout(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout value);

  constexpr void __cordl_internal_set_shadowmapDepthBufferBits(int32_t value);

  constexpr void __cordl_internal_set_supportsAdditionalLightShadows(bool value);

  constexpr void __cordl_internal_set_supportsMainLightShadows(bool value);

  constexpr void __cordl_internal_set_supportsSoftShadows(bool value);

  constexpr void __cordl_internal_set_visibleLightsShadowCullingInfos(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> value);

  /// @brief Method .ctor, addr 0x6657efc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalShadowData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalShadowData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalShadowData(UniversalShadowData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalShadowData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalShadowData(UniversalShadowData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12730 };

  /// @brief Field supportsMainLightShadows, offset: 0x10, size: 0x1, def value: None
  bool ___supportsMainLightShadows;

  /// @brief Field mainLightShadowsEnabled, offset: 0x11, size: 0x1, def value: None
  bool ___mainLightShadowsEnabled;

  /// @brief Field mainLightShadowmapWidth, offset: 0x14, size: 0x4, def value: None
  int32_t ___mainLightShadowmapWidth;

  /// @brief Field mainLightShadowmapHeight, offset: 0x18, size: 0x4, def value: None
  int32_t ___mainLightShadowmapHeight;

  /// @brief Field mainLightShadowCascadesCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mainLightShadowCascadesCount;

  /// @brief Field mainLightShadowCascadesSplit, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___mainLightShadowCascadesSplit;

  /// @brief Field mainLightShadowCascadeBorder, offset: 0x2c, size: 0x4, def value: None
  float_t ___mainLightShadowCascadeBorder;

  /// @brief Field supportsAdditionalLightShadows, offset: 0x30, size: 0x1, def value: None
  bool ___supportsAdditionalLightShadows;

  /// @brief Field additionalLightShadowsEnabled, offset: 0x31, size: 0x1, def value: None
  bool ___additionalLightShadowsEnabled;

  /// @brief Field additionalLightsShadowmapWidth, offset: 0x34, size: 0x4, def value: None
  int32_t ___additionalLightsShadowmapWidth;

  /// @brief Field additionalLightsShadowmapHeight, offset: 0x38, size: 0x4, def value: None
  int32_t ___additionalLightsShadowmapHeight;

  /// @brief Field supportsSoftShadows, offset: 0x3c, size: 0x1, def value: None
  bool ___supportsSoftShadows;

  /// @brief Field shadowmapDepthBufferBits, offset: 0x40, size: 0x4, def value: None
  int32_t ___shadowmapDepthBufferBits;

  /// @brief Field bias, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ___bias;

  /// @brief Field resolution, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___resolution;

  /// @brief Field isKeywordAdditionalLightShadowsEnabled, offset: 0x58, size: 0x1, def value: None
  bool ___isKeywordAdditionalLightShadowsEnabled;

  /// @brief Field isKeywordSoftShadowsEnabled, offset: 0x59, size: 0x1, def value: None
  bool ___isKeywordSoftShadowsEnabled;

  /// @brief Field mainLightShadowResolution, offset: 0x5c, size: 0x4, def value: None
  int32_t ___mainLightShadowResolution;

  /// @brief Field mainLightRenderTargetWidth, offset: 0x60, size: 0x4, def value: None
  int32_t ___mainLightRenderTargetWidth;

  /// @brief Field mainLightRenderTargetHeight, offset: 0x64, size: 0x4, def value: None
  int32_t ___mainLightRenderTargetHeight;

  /// @brief Field visibleLightsShadowCullingInfos, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> ___visibleLightsShadowCullingInfos;

  /// @brief Field shadowAtlasLayout, offset: 0x78, size: 0x38, def value: None
  ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout ___shadowAtlasLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___supportsMainLightShadows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowsEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowmapWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowmapHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowCascadesCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowCascadesSplit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowCascadeBorder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___supportsAdditionalLightShadows) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___additionalLightShadowsEnabled) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___additionalLightsShadowmapWidth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___additionalLightsShadowmapHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___supportsSoftShadows) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___shadowmapDepthBufferBits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___bias) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___resolution) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___isKeywordAdditionalLightShadowsEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___isKeywordSoftShadowsEnabled) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightShadowResolution) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightRenderTargetWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___mainLightRenderTargetHeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___visibleLightsShadowCullingInfos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalShadowData, ___shadowAtlasLayout) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalShadowData, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalShadowData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalShadowData*, "UnityEngine.Rendering.Universal", "UniversalShadowData");
