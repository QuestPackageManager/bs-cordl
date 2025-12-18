#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderingData);
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.CullingResults, UnityEngine.Rendering.PerObjectData, UnityEngine.Rendering.Universal.RenderingMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderingData
class CORDL_TYPE UniversalRenderingData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field <opaqueLayerMask>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__opaqueLayerMask_k__BackingField,
                      put = __cordl_internal_set__opaqueLayerMask_k__BackingField)) ::UnityEngine::LayerMask _opaqueLayerMask_k__BackingField;

  /// @brief Field <renderingMode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__renderingMode_k__BackingField,
                      put = __cordl_internal_set__renderingMode_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderingMode _renderingMode_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__transparentLayerMask_k__BackingField,
                      put = __cordl_internal_set__transparentLayerMask_k__BackingField)) ::UnityEngine::LayerMask _transparentLayerMask_k__BackingField;

  __declspec(property(get = get_commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  /// @brief Field cullResults, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_cullResults, put = __cordl_internal_set_cullResults)) ::UnityEngine::Rendering::CullingResults cullResults;

  /// @brief Field m_CommandBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandBuffer, put = __cordl_internal_set_m_CommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask)) ::UnityEngine::LayerMask opaqueLayerMask;

  /// @brief Field perObjectData, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_perObjectData, put = __cordl_internal_set_perObjectData)) ::UnityEngine::Rendering::PerObjectData perObjectData;

  __declspec(property(get = get_renderingMode, put = set_renderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  /// @brief Field supportsDynamicBatching, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsDynamicBatching, put = __cordl_internal_set_supportsDynamicBatching)) bool supportsDynamicBatching;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask)) ::UnityEngine::LayerMask transparentLayerMask;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* New_ctor();

  /// @brief Method Reset, addr 0x66be97c, size 0x1c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__opaqueLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__opaqueLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get__renderingMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get__renderingMode_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__transparentLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__transparentLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::CullingResults const& __cordl_internal_get_cullResults() const;

  constexpr ::UnityEngine::Rendering::CullingResults& __cordl_internal_get_cullResults();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_CommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CommandBuffer();

  constexpr ::UnityEngine::Rendering::PerObjectData const& __cordl_internal_get_perObjectData() const;

  constexpr ::UnityEngine::Rendering::PerObjectData& __cordl_internal_get_perObjectData();

  constexpr bool const& __cordl_internal_get_supportsDynamicBatching() const;

  constexpr bool& __cordl_internal_get_supportsDynamicBatching();

  constexpr void __cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__renderingMode_k__BackingField(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_cullResults(::UnityEngine::Rendering::CullingResults value);

  constexpr void __cordl_internal_set_m_CommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_perObjectData(::UnityEngine::Rendering::PerObjectData value);

  constexpr void __cordl_internal_set_supportsDynamicBatching(bool value);

  /// @brief Method .ctor, addr 0x66be998, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandBuffer, addr 0x66be8c8, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* get_commandBuffer();

  /// @brief Method get_opaqueLayerMask, addr 0x66be95c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// @brief Method get_renderingMode, addr 0x66be94c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  /// @brief Method get_transparentLayerMask, addr 0x66be96c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// @brief Method set_opaqueLayerMask, addr 0x66be964, size 0x8, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_renderingMode, addr 0x66be954, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  /// @brief Method set_transparentLayerMask, addr 0x66be974, size 0x8, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderingData(UniversalRenderingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderingData(UniversalRenderingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12730 };

  /// @brief Field m_CommandBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CommandBuffer;

  /// @brief Field cullResults, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults ___cullResults;

  /// @brief Field supportsDynamicBatching, offset: 0x28, size: 0x1, def value: None
  bool ___supportsDynamicBatching;

  /// @brief Field perObjectData, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData ___perObjectData;

  /// @brief Field <renderingMode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ____renderingMode_k__BackingField;

  /// @brief Field <opaqueLayerMask>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____opaqueLayerMask_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____transparentLayerMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___m_CommandBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___cullResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___supportsDynamicBatching) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ___perObjectData) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____renderingMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____opaqueLayerMask_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderingData, ____transparentLayerMask_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderingData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderingData*, "UnityEngine.Rendering.Universal", "UniversalRenderingData");
