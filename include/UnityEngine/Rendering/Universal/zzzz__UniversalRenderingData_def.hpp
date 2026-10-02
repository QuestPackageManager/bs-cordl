#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
CORDL_MODULE_EXPORT(UniversalRenderingData)
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderingData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderingData*, "UnityEngine.Rendering.Universal", "UniversalRenderingData");
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.CullingResults, UnityEngine.Rendering.PerObjectData, UnityEngine.Rendering.Universal.RenderingMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderingData
class CORDL_TYPE UniversalRenderingData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field <opaqueLayerMask>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__opaqueLayerMask_k__BackingField,
                      put = __cordl_internal_set__opaqueLayerMask_k__BackingField)) ::UnityEngine::LayerMask _opaqueLayerMask_k__BackingField;

  /// @brief Field <prepassLayerMask>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__prepassLayerMask_k__BackingField,
                      put = __cordl_internal_set__prepassLayerMask_k__BackingField)) ::UnityEngine::LayerMask _prepassLayerMask_k__BackingField;

  /// @brief Field <renderingMode>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__renderingMode_k__BackingField,
                      put = __cordl_internal_set__renderingMode_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderingMode _renderingMode_k__BackingField;

  /// @brief Field <stencilLodCrossFadeEnabled>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__stencilLodCrossFadeEnabled_k__BackingField,
                      put = __cordl_internal_set__stencilLodCrossFadeEnabled_k__BackingField)) bool _stencilLodCrossFadeEnabled_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__transparentLayerMask_k__BackingField,
                      put = __cordl_internal_set__transparentLayerMask_k__BackingField)) ::UnityEngine::LayerMask _transparentLayerMask_k__BackingField;

  /// @brief Field cullResults, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_cullResults, put = __cordl_internal_set_cullResults)) ::UnityEngine::Rendering::CullingResults cullResults;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask)) ::UnityEngine::LayerMask opaqueLayerMask;

  /// @brief Field perObjectData, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_perObjectData, put = __cordl_internal_set_perObjectData)) ::UnityEngine::Rendering::PerObjectData perObjectData;

  __declspec(property(get = get_prepassLayerMask, put = set_prepassLayerMask)) ::UnityEngine::LayerMask prepassLayerMask;

  __declspec(property(get = get_renderingMode, put = set_renderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  __declspec(property(get = get_stencilLodCrossFadeEnabled, put = set_stencilLodCrossFadeEnabled)) bool stencilLodCrossFadeEnabled;

  /// @brief Field supportsDynamicBatching, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsDynamicBatching, put = __cordl_internal_set_supportsDynamicBatching)) bool supportsDynamicBatching;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask)) ::UnityEngine::LayerMask transparentLayerMask;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* New_ctor();

  /// @brief Method Reset, addr 0x6cb658c, size 0x2c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__opaqueLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__opaqueLayerMask_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__prepassLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__prepassLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get__renderingMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get__renderingMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__stencilLodCrossFadeEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__stencilLodCrossFadeEnabled_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__transparentLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__transparentLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::CullingResults const& __cordl_internal_get_cullResults() const;

  constexpr ::UnityEngine::Rendering::CullingResults& __cordl_internal_get_cullResults();

  constexpr ::UnityEngine::Rendering::PerObjectData const& __cordl_internal_get_perObjectData() const;

  constexpr ::UnityEngine::Rendering::PerObjectData& __cordl_internal_get_perObjectData();

  constexpr bool const& __cordl_internal_get_supportsDynamicBatching() const;

  constexpr bool& __cordl_internal_get_supportsDynamicBatching();

  constexpr void __cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__prepassLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__renderingMode_k__BackingField(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set__stencilLodCrossFadeEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_cullResults(::UnityEngine::Rendering::CullingResults value);

  constexpr void __cordl_internal_set_perObjectData(::UnityEngine::Rendering::PerObjectData value);

  constexpr void __cordl_internal_set_supportsDynamicBatching(bool value);

  /// @brief Method .ctor, addr 0x6cb65b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_opaqueLayerMask, addr 0x6cb655c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// [CompilerGenerated]
  /// @brief Method get_prepassLayerMask, addr 0x6cb654c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_prepassLayerMask();

  /// [CompilerGenerated]
  /// @brief Method get_renderingMode, addr 0x6cb653c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  /// [CompilerGenerated]
  /// @brief Method get_stencilLodCrossFadeEnabled, addr 0x6cb657c, size 0x8, virtual false, abstract: false, final false
  inline bool get_stencilLodCrossFadeEnabled();

  /// [CompilerGenerated]
  /// @brief Method get_transparentLayerMask, addr 0x6cb656c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// [CompilerGenerated]
  /// @brief Method set_opaqueLayerMask, addr 0x6cb6564, size 0x8, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// [CompilerGenerated]
  /// @brief Method set_prepassLayerMask, addr 0x6cb6554, size 0x8, virtual false, abstract: false, final false
  inline void set_prepassLayerMask(::UnityEngine::LayerMask value);

  /// [CompilerGenerated]
  /// @brief Method set_renderingMode, addr 0x6cb6544, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  /// [CompilerGenerated]
  /// @brief Method set_stencilLodCrossFadeEnabled, addr 0x6cb6584, size 0x8, virtual false, abstract: false, final false
  inline void set_stencilLodCrossFadeEnabled(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_transparentLayerMask, addr 0x6cb6574, size 0x8, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderingData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderingData(UniversalRenderingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderingData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderingData(UniversalRenderingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12994 };

  /// @brief Field cullResults, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults ___cullResults;

  /// @brief Field supportsDynamicBatching, offset: 0x20, size: 0x1, def value: None
  bool ___supportsDynamicBatching;

  /// @brief Field perObjectData, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData ___perObjectData;

  /// [CompilerGenerated]
  /// @brief Field <renderingMode>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ____renderingMode_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <prepassLayerMask>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____prepassLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <opaqueLayerMask>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____opaqueLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <transparentLayerMask>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____transparentLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <stencilLodCrossFadeEnabled>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____stencilLodCrossFadeEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___cullResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___supportsDynamicBatching) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___perObjectData) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____renderingMode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____prepassLayerMask_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____opaqueLayerMask_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____transparentLayerMask_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____stencilLodCrossFadeEnabled_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderingData) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
