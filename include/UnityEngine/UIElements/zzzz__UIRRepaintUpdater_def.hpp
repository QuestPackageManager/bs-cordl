#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIRRepaintUpdater)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRRepaintUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRRepaintUpdater);
// Type: UnityEngine.UIElements::UIRRepaintUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 51, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754)), TypeDefinitionIndex(TypeDefinitionIndex(9966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7327))
// CS Name: ::UnityEngine.UIElements::UIRRepaintUpdater*
class CORDL_TYPE UIRRepaintUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field attachedPanel, offset 0x20, size 0x8
  __declspec(property(get = __get_attachedPanel, put = __set_attachedPanel))::UnityEngine::UIElements::BaseVisualElementPanel* attachedPanel;

  /// @brief Field renderChain, offset 0x28, size 0x8
  __declspec(property(get = __get_renderChain, put = __set_renderChain))::UnityEngine::UIElements::UIR::RenderChain* renderChain;

  /// @brief Field <drawStats>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__drawStats_k__BackingField, put = __set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field <breakBatches>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __get__breakBatches_k__BackingField, put = __set__breakBatches_k__BackingField)) bool _breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x32, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description))::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker))::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  __declspec(property(get = get_drawStats)) bool drawStats;

  __declspec(property(get = get_breakBatches)) bool breakBatches;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __get_attachedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __get_attachedPanel() const;

  constexpr void __set_attachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __get_renderChain();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChain*> const& __get_renderChain() const;

  constexpr void __set_renderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  constexpr bool& __get__drawStats_k__BackingField();

  constexpr bool const& __get__drawStats_k__BackingField() const;

  constexpr void __set__drawStats_k__BackingField(bool value);

  constexpr bool& __get__breakBatches_k__BackingField();

  constexpr bool const& __get__breakBatches_k__BackingField() const;

  constexpr void __set__breakBatches_k__BackingField(bool value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  static inline void setStaticF_s_Description(::StringW value);

  static inline ::StringW getStaticF_s_Description();

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  static inline ::UnityEngine::UIElements::UIRRepaintUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2e775e8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_profilerMarker, addr 0x2e77678, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_drawStats, addr 0x2e776d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_breakBatches, addr 0x2e776d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakBatches();

  /// @brief Method OnVersionChanged, addr 0x2e776e0, size 0xf8, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x2e777d8, size 0xbc, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method CreateRenderChain, addr 0x2e77950, size 0x78, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChain* CreateRenderChain();

  /// @brief Method OnGraphicsResourcesRecreate, addr 0x2e77ad4, size 0x1d0, virtual false, abstract: false, final false
  static inline void OnGraphicsResourcesRecreate(bool recreate);

  /// @brief Method OnPanelChanged, addr 0x2e77cf4, size 0x18, virtual false, abstract: false, final false
  inline void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* obj);

  /// @brief Method AttachToPanel, addr 0x2e77eb0, size 0x1f4, virtual false, abstract: false, final false
  inline void AttachToPanel();

  /// @brief Method DetachFromPanel, addr 0x2e77d0c, size 0x1a4, virtual false, abstract: false, final false
  inline void DetachFromPanel();

  /// @brief Method InitRenderChain, addr 0x2e77894, size 0xbc, virtual false, abstract: false, final false
  inline void InitRenderChain();

  /// @brief Method DestroyRenderChain, addr 0x2e77ca4, size 0x50, virtual false, abstract: false, final false
  inline void DestroyRenderChain();

  /// @brief Method OnPanelAtlasChanged, addr 0x2e7847c, size 0x4, virtual false, abstract: false, final false
  inline void OnPanelAtlasChanged();

  /// @brief Method OnPanelHierarchyChanged, addr 0x2e78480, size 0x38, virtual false, abstract: false, final false
  inline void OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method OnPanelStandardShaderChanged, addr 0x2e780a4, size 0x1a4, virtual false, abstract: false, final false
  inline void OnPanelStandardShaderChanged();

  /// @brief Method OnPanelStandardWorldSpaceShaderChanged, addr 0x2e78248, size 0x1a4, virtual false, abstract: false, final false
  inline void OnPanelStandardWorldSpaceShaderChanged();

  /// @brief Method ResetAllElementsDataRecursive, addr 0x2e783ec, size 0x90, virtual false, abstract: false, final false
  inline void ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method get_disposed, addr 0x2e784b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x2e784c0, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose, addr 0x2e784cc, size 0x2c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRRepaintUpdater(UIRRepaintUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRRepaintUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRRepaintUpdater(UIRRepaintUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRRepaintUpdater();

public:
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
