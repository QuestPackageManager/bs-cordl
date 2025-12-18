#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRRepaintUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRRepaintUpdater)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class IPanelRenderer;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRRepaintUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRRepaintUpdater);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIRRepaintUpdater
class CORDL_TYPE UIRRepaintUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field <breakBatches>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__breakBatches_k__BackingField, put = __cordl_internal_set__breakBatches_k__BackingField)) bool _breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__drawStats_k__BackingField, put = __cordl_internal_set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field attachedPanel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attachedPanel, put = __cordl_internal_set_attachedPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* attachedPanel;

  __declspec(property(get = get_breakBatches)) bool breakBatches;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawStats)) bool drawStats;

  __declspec(property(get = get_forceGammaRendering, put = set_forceGammaRendering)) bool forceGammaRendering;

  /// @brief Field m_ForceGammaRendering, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceGammaRendering, put = __cordl_internal_set_m_ForceGammaRendering)) bool m_ForceGammaRendering;

  /// @brief Field m_VertexBudget, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VertexBudget, put = __cordl_internal_set_m_VertexBudget)) uint32_t m_VertexBudget;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field renderChain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_renderChain, put = __cordl_internal_set_renderChain)) ::UnityEngine::UIElements::UIR::RenderChain* renderChain;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_vertexBudget, put = set_vertexBudget)) uint32_t vertexBudget;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanelRenderer"
  constexpr operator ::UnityEngine::UIElements::IPanelRenderer*() noexcept;

  /// @brief Method AttachToPanel, addr 0x6c0c024, size 0x2f8, virtual false, abstract: false, final false
  inline void AttachToPanel();

  /// @brief Method CreateRenderChain, addr 0x6c0b9b4, size 0x64, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChain* CreateRenderChain();

  /// @brief Method DestroyRenderChain, addr 0x6c0b67c, size 0x50, virtual false, abstract: false, final false
  inline void DestroyRenderChain();

  /// @brief Method DetachFromPanel, addr 0x6c0bd58, size 0x2cc, virtual false, abstract: false, final false
  inline void DetachFromPanel();

  /// @brief Method Dispose, addr 0x6c0c3fc, size 0x30, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method InitRenderChain, addr 0x6c0b874, size 0xb4, virtual false, abstract: false, final false
  inline void InitRenderChain();

  static inline ::UnityEngine::UIElements::UIRRepaintUpdater* New_ctor();

  /// @brief Method OnGraphicsResourcesRecreate, addr 0x6c0bb2c, size 0x214, virtual false, abstract: false, final false
  static inline void OnGraphicsResourcesRecreate(bool recreate);

  /// @brief Method OnPanelAtlasChanged, addr 0x6c0c3ac, size 0x4, virtual false, abstract: false, final false
  inline void OnPanelAtlasChanged();

  /// @brief Method OnPanelChanged, addr 0x6c0bd40, size 0x18, virtual false, abstract: false, final false
  inline void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* obj);

  /// @brief Method OnPanelDrawsInCamerasChanged, addr 0x6c0c3b0, size 0x4, virtual false, abstract: false, final false
  inline void OnPanelDrawsInCamerasChanged();

  /// @brief Method OnPanelHierarchyChanged, addr 0x6c0c3b4, size 0x38, virtual false, abstract: false, final false
  inline void OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType,
                                      ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  /// @brief Method OnPanelIsFlatChanged, addr 0x6c0c3a8, size 0x4, virtual false, abstract: false, final false
  inline void OnPanelIsFlatChanged();

  /// @brief Method OnVersionChanged, addr 0x6c0b6fc, size 0x11c, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Render, addr 0x6c0b928, size 0x8c, virtual true, abstract: false, final true
  inline void Render();

  /// @brief Method Reset, addr 0x6c0c31c, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method ResetAllElementsDataRecursive, addr 0x6c0c320, size 0x88, virtual false, abstract: false, final false
  inline void ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update, addr 0x6c0b818, size 0x5c, virtual true, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__breakBatches_k__BackingField() const;

  constexpr bool& __cordl_internal_get__breakBatches_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawStats_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawStats_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_attachedPanel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_attachedPanel();

  constexpr bool const& __cordl_internal_get_m_ForceGammaRendering() const;

  constexpr bool& __cordl_internal_get_m_ForceGammaRendering();

  constexpr uint32_t const& __cordl_internal_get_m_VertexBudget() const;

  constexpr uint32_t& __cordl_internal_get_m_VertexBudget();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& __cordl_internal_get_renderChain() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_renderChain();

  constexpr void __cordl_internal_set__breakBatches_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawStats_k__BackingField(bool value);

  constexpr void __cordl_internal_set_attachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_m_ForceGammaRendering(bool value);

  constexpr void __cordl_internal_set_m_VertexBudget(uint32_t value);

  constexpr void __cordl_internal_set_renderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  /// @brief Method .ctor, addr 0x6c0b578, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_breakBatches, addr 0x6c0b6f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakBatches();

  /// @brief Method get_disposed, addr 0x6c0c3ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawStats, addr 0x6c0b6ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_forceGammaRendering, addr 0x6c0b658, size 0x8, virtual true, abstract: false, final true
  inline bool get_forceGammaRendering();

  /// @brief Method get_profilerMarker, addr 0x6c0b5fc, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_vertexBudget, addr 0x6c0b6cc, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_vertexBudget();

  /// @brief Convert to "::UnityEngine::UIElements::IPanelRenderer"
  constexpr ::UnityEngine::UIElements::IPanelRenderer* i___UnityEngine__UIElements__IPanelRenderer() noexcept;

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_disposed, addr 0x6c0c3f4, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_forceGammaRendering, addr 0x6c0b660, size 0x1c, virtual true, abstract: false, final true
  inline void set_forceGammaRendering(bool value);

  /// @brief Method set_vertexBudget, addr 0x6c0b6d4, size 0x18, virtual true, abstract: false, final true
  inline void set_vertexBudget(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRRepaintUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRRepaintUpdater(UIRRepaintUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRRepaintUpdater(UIRRepaintUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4680 };

  /// @brief Field attachedPanel, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___attachedPanel;

  /// @brief Field renderChain, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___renderChain;

  /// @brief Field m_ForceGammaRendering, offset: 0x38, size: 0x1, def value: None
  bool ___m_ForceGammaRendering;

  /// @brief Field m_VertexBudget, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___m_VertexBudget;

  /// @brief Field <drawStats>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// @brief Field <breakBatches>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x42, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___attachedPanel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___renderChain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___m_ForceGammaRendering) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___m_VertexBudget) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____drawStats_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____breakBatches_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____disposed_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRRepaintUpdater, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRRepaintUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRRepaintUpdater*, "UnityEngine.UIElements", "UIRRepaintUpdater");
