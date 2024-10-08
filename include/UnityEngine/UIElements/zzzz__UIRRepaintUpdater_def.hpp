#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRRepaintUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIRRepaintUpdater)
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
// Type: UnityEngine.UIElements::UIRRepaintUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 51, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIRRepaintUpdater*
class CORDL_TYPE UIRRepaintUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field <breakBatches>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__breakBatches_k__BackingField, put = __cordl_internal_set__breakBatches_k__BackingField)) bool _breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__drawStats_k__BackingField, put = __cordl_internal_set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field attachedPanel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attachedPanel, put = __cordl_internal_set_attachedPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* attachedPanel;

  __declspec(property(get = get_breakBatches)) bool breakBatches;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawStats)) bool drawStats;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field renderChain, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_renderChain, put = __cordl_internal_set_renderChain)) ::UnityEngine::UIElements::UIR::RenderChain* renderChain;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method AttachToPanel, addr 0x49eb168, size 0x1e4, virtual false, abstract: false, final false
  inline void AttachToPanel();

  /// @brief Method CreateRenderChain, addr 0x49eac20, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChain* CreateRenderChain();

  /// @brief Method DestroyRenderChain, addr 0x49eaf6c, size 0x50, virtual false, abstract: false, final false
  inline void DestroyRenderChain();

  /// @brief Method DetachFromPanel, addr 0x49eafd4, size 0x194, virtual false, abstract: false, final false
  inline void DetachFromPanel();

  /// @brief Method Dispose, addr 0x49eb758, size 0x2c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method InitRenderChain, addr 0x49eab64, size 0xbc, virtual false, abstract: false, final false
  inline void InitRenderChain();

  static inline ::UnityEngine::UIElements::UIRRepaintUpdater* New_ctor();

  /// @brief Method OnGraphicsResourcesRecreate, addr 0x49ead9c, size 0x1d0, virtual false, abstract: false, final false
  static inline void OnGraphicsResourcesRecreate(bool recreate);

  /// @brief Method OnPanelAtlasChanged, addr 0x49eb708, size 0x4, virtual false, abstract: false, final false
  inline void OnPanelAtlasChanged();

  /// @brief Method OnPanelChanged, addr 0x49eafbc, size 0x18, virtual false, abstract: false, final false
  inline void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* obj);

  /// @brief Method OnPanelHierarchyChanged, addr 0x49eb70c, size 0x38, virtual false, abstract: false, final false
  inline void OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method OnPanelStandardShaderChanged, addr 0x49eb34c, size 0x198, virtual false, abstract: false, final false
  inline void OnPanelStandardShaderChanged();

  /// @brief Method OnPanelStandardWorldSpaceShaderChanged, addr 0x49eb4e4, size 0x198, virtual false, abstract: false, final false
  inline void OnPanelStandardWorldSpaceShaderChanged();

  /// @brief Method OnVersionChanged, addr 0x49ea9b0, size 0xf8, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method ResetAllElementsDataRecursive, addr 0x49eb67c, size 0x8c, virtual false, abstract: false, final false
  inline void ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update, addr 0x49eaaa8, size 0xbc, virtual true, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__breakBatches_k__BackingField() const;

  constexpr bool& __cordl_internal_get__breakBatches_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawStats_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawStats_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_attachedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __cordl_internal_get_attachedPanel() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_renderChain();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChain*> const& __cordl_internal_get_renderChain() const;

  constexpr void __cordl_internal_set__breakBatches_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawStats_k__BackingField(bool value);

  constexpr void __cordl_internal_set_attachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_renderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  /// @brief Method .ctor, addr 0x49ea8b8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_breakBatches, addr 0x49ea9a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakBatches();

  /// @brief Method get_disposed, addr 0x49eb744, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawStats, addr 0x49ea9a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_profilerMarker, addr 0x49ea948, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_disposed, addr 0x49eb74c, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

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

  /// @brief Field attachedPanel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___attachedPanel;

  /// @brief Field renderChain, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___renderChain;

  /// @brief Field <drawStats>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// @brief Field <breakBatches>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x32, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6006 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRRepaintUpdater, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___attachedPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ___renderChain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____drawStats_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____breakBatches_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRRepaintUpdater, ____disposed_k__BackingField) == 0x32, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRRepaintUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRRepaintUpdater*, "UnityEngine.UIElements", "UIRRepaintUpdater");
