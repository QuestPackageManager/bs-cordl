#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIElementsRuntimeUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class Panel;
}
namespace UnityEngine::UIElements {
class __UIElementsRuntimeUtility__CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class __UIElementsRuntimeUtility____c;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility;
}
namespace UnityEngine::UIElements {
class __UIElementsRuntimeUtility__CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class __UIElementsRuntimeUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtility);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIElementsRuntimeUtility____c);
// Type: ::CreateRuntimePanelDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6933))
// CS Name: ::UIElementsRuntimeUtility::CreateRuntimePanelDelegate*
class CORDL_TYPE __UIElementsRuntimeUtility__CreateRuntimePanelDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e07210, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2e0733c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* Invoke(::UnityEngine::ScriptableObject* ownerObject);

  // Ctor Parameters [CppParam { name: "", ty: "__UIElementsRuntimeUtility__CreateRuntimePanelDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIElementsRuntimeUtility__CreateRuntimePanelDelegate(__UIElementsRuntimeUtility__CreateRuntimePanelDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIElementsRuntimeUtility__CreateRuntimePanelDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIElementsRuntimeUtility__CreateRuntimePanelDelegate(__UIElementsRuntimeUtility__CreateRuntimePanelDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIElementsRuntimeUtility__CreateRuntimePanelDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6934))
// CS Name: ::UIElementsRuntimeUtility::<>c*
class CORDL_TYPE __UIElementsRuntimeUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UIElementsRuntimeUtility____c* __9;

  /// @brief Field <>9__46_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__46_0, put = setStaticF___9__46_0))::System::Comparison_1<::UnityEngine::UIElements::Panel*>* __9__46_0;

  static inline void setStaticF___9(::UnityEngine::UIElements::__UIElementsRuntimeUtility____c* value);

  static inline ::UnityEngine::UIElements::__UIElementsRuntimeUtility____c* getStaticF___9();

  static inline void setStaticF___9__46_0(::System::Comparison_1<::UnityEngine::UIElements::Panel*>* value);

  static inline ::System::Comparison_1<::UnityEngine::UIElements::Panel*>* getStaticF___9__46_0();

  static inline ::UnityEngine::UIElements::__UIElementsRuntimeUtility____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e073b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x2e073bc, size 0x4, virtual false, abstract: false, final false
  inline void __cctor_b__9_0();

  /// @brief Method <.cctor>b__9_1, addr 0x2e073c0, size 0x64, virtual false, abstract: false, final false
  inline void __cctor_b__9_1(int32_t displayIndex, int32_t sortOrder);

  /// @brief Method <SortPanels>b__46_0, addr 0x2e07424, size 0x170, virtual false, abstract: false, final false
  inline int32_t _SortPanels_b__46_0(::UnityEngine::UIElements::Panel* a, ::UnityEngine::UIElements::Panel* b);

  // Ctor Parameters [CppParam { name: "", ty: "__UIElementsRuntimeUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIElementsRuntimeUtility____c(__UIElementsRuntimeUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIElementsRuntimeUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIElementsRuntimeUtility____c(__UIElementsRuntimeUtility____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIElementsRuntimeUtility____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIElementsRuntimeUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIElementsRuntimeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6935))
// CS Name: ::UnityEngine.UIElements::UIElementsRuntimeUtility*
class CORDL_TYPE UIElementsRuntimeUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UIElementsRuntimeUtility____c;

  using CreateRuntimePanelDelegate = ::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate;

  /// @brief Field onCreatePanel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onCreatePanel, put = setStaticF_onCreatePanel))::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* onCreatePanel;

  /// @brief Field s_RegisteredPlayerloopCallback, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_RegisteredPlayerloopCallback, put = setStaticF_s_RegisteredPlayerloopCallback)) bool s_RegisteredPlayerloopCallback;

  /// @brief Field s_SortedRuntimePanels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortedRuntimePanels,
                             put = setStaticF_s_SortedRuntimePanels))::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* s_SortedRuntimePanels;

  /// @brief Field s_PanelOrderingDirty, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_PanelOrderingDirty, put = setStaticF_s_PanelOrderingDirty)) bool s_PanelOrderingDirty;

  /// @brief Field s_RepaintProfilerMarkerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RepaintProfilerMarkerName, put = setStaticF_s_RepaintProfilerMarkerName))::StringW s_RepaintProfilerMarkerName;

  /// @brief Field s_RepaintProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RepaintProfilerMarker, put = setStaticF_s_RepaintProfilerMarker))::Unity::Profiling::ProfilerMarker s_RepaintProfilerMarker;

  /// @brief Field currentOverlayIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_currentOverlayIndex, put = setStaticF_currentOverlayIndex)) int32_t currentOverlayIndex;

  /// @brief Field <activeEventSystem>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__activeEventSystem_k__BackingField, put = setStaticF__activeEventSystem_k__BackingField))::UnityEngine::Object* _activeEventSystem_k__BackingField;

  /// @brief Field s_DefaultEventSystem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultEventSystem, put = setStaticF_s_DefaultEventSystem))::UnityEngine::UIElements::DefaultEventSystem* s_DefaultEventSystem;

  /// @brief Field s_PotentiallyEmptyPanelSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PotentiallyEmptyPanelSettings,
                             put = setStaticF_s_PotentiallyEmptyPanelSettings))::System::Collections::Generic::List_1<::UnityEngine::UIElements::PanelSettings*>* s_PotentiallyEmptyPanelSettings;

  static inline void setStaticF_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  static inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_onCreatePanel();

  static inline void setStaticF_s_RegisteredPlayerloopCallback(bool value);

  static inline bool getStaticF_s_RegisteredPlayerloopCallback();

  static inline void setStaticF_s_SortedRuntimePanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* getStaticF_s_SortedRuntimePanels();

  static inline void setStaticF_s_PanelOrderingDirty(bool value);

  static inline bool getStaticF_s_PanelOrderingDirty();

  static inline void setStaticF_s_RepaintProfilerMarkerName(::StringW value);

  static inline ::StringW getStaticF_s_RepaintProfilerMarkerName();

  static inline void setStaticF_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_RepaintProfilerMarker();

  static inline void setStaticF_currentOverlayIndex(int32_t value);

  static inline int32_t getStaticF_currentOverlayIndex();

  static inline void setStaticF__activeEventSystem_k__BackingField(::UnityEngine::Object* value);

  static inline ::UnityEngine::Object* getStaticF__activeEventSystem_k__BackingField();

  static inline void setStaticF_s_DefaultEventSystem(::UnityEngine::UIElements::DefaultEventSystem* value);

  static inline ::UnityEngine::UIElements::DefaultEventSystem* getStaticF_s_DefaultEventSystem();

  static inline void setStaticF_s_PotentiallyEmptyPanelSettings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::PanelSettings*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PanelSettings*>* getStaticF_s_PotentiallyEmptyPanelSettings();

  /// @brief Method add_onCreatePanel, addr 0x2e0531c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  /// @brief Method remove_onCreatePanel, addr 0x2e0540c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  /// @brief Method CreateEvent, addr 0x2e05830, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* systemEvent);

  /// @brief Method FindOrCreateRuntimePanel, addr 0x2e058a4, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BaseRuntimePanel* FindOrCreateRuntimePanel(::UnityEngine::ScriptableObject* ownerObject,
                                                                                      ::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate* createDelegate);

  /// @brief Method DisposeRuntimePanel, addr 0x2e05c94, size 0xd0, virtual false, abstract: false, final false
  static inline void DisposeRuntimePanel(::UnityEngine::ScriptableObject* ownerObject);

  /// @brief Method RegisterCachedPanelInternal, addr 0x2e05b70, size 0x124, virtual false, abstract: false, final false
  static inline void RegisterCachedPanelInternal(int32_t instanceID, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RemoveCachedPanelInternal, addr 0x2e05a40, size 0x130, virtual false, abstract: false, final false
  static inline void RemoveCachedPanelInternal(int32_t instanceID);

  /// @brief Method RepaintOverlayPanel, addr 0x2e05e50, size 0x1c0, virtual false, abstract: false, final false
  static inline void RepaintOverlayPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method BeginRenderOverlays, addr 0x2e06010, size 0x58, virtual false, abstract: false, final false
  static inline void BeginRenderOverlays(int32_t displayIndex);

  /// @brief Method RenderOverlaysBeforePriority, addr 0x2e06068, size 0x1b0, virtual false, abstract: false, final false
  static inline void RenderOverlaysBeforePriority(int32_t displayIndex, float_t maxPriority);

  /// @brief Method EndRenderOverlays, addr 0x2e062a0, size 0x70, virtual false, abstract: false, final false
  static inline void EndRenderOverlays(int32_t displayIndex);

  /// @brief Method get_activeEventSystem, addr 0x2e06310, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* get_activeEventSystem();

  /// @brief Method set_activeEventSystem, addr 0x2e06368, size 0x5c, virtual false, abstract: false, final false
  static inline void set_activeEventSystem(::UnityEngine::Object* value);

  /// @brief Method get_useDefaultEventSystem, addr 0x2e063c4, size 0xbc, virtual false, abstract: false, final false
  static inline bool get_useDefaultEventSystem();

  /// @brief Method RegisterEventSystem, addr 0x2e06480, size 0x218, virtual false, abstract: false, final false
  static inline void RegisterEventSystem(::UnityEngine::Object* eventSystem);

  /// @brief Method UnregisterEventSystem, addr 0x2e06698, size 0x114, virtual false, abstract: false, final false
  static inline void UnregisterEventSystem(::UnityEngine::Object* eventSystem);

  /// @brief Method get_defaultEventSystem, addr 0x2e067ac, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DefaultEventSystem* get_defaultEventSystem();

  /// @brief Method UpdateRuntimePanels, addr 0x2e06858, size 0x21c, virtual false, abstract: false, final false
  static inline void UpdateRuntimePanels();

  /// @brief Method MarkPotentiallyEmpty, addr 0x2e06c78, size 0x114, virtual false, abstract: false, final false
  static inline void MarkPotentiallyEmpty(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method RemoveUnusedPanels, addr 0x2e06a74, size 0x204, virtual false, abstract: false, final false
  static inline void RemoveUnusedPanels();

  /// @brief Method RegisterPlayerloopCallback, addr 0x2e05d64, size 0x9c, virtual false, abstract: false, final false
  static inline void RegisterPlayerloopCallback();

  /// @brief Method UnregisterPlayerloopCallback, addr 0x2e05e00, size 0x50, virtual false, abstract: false, final false
  static inline void UnregisterPlayerloopCallback();

  /// @brief Method SetPanelOrderingDirty, addr 0x2df8dc0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetPanelOrderingDirty();

  /// @brief Method GetSortedPlayerPanels, addr 0x2e06218, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* GetSortedPlayerPanels();

  /// @brief Method SortPanels, addr 0x2e06d8c, size 0x1c4, virtual false, abstract: false, final false
  static inline void SortPanels();

  /// @brief Method MultiDisplayBottomLeftToPanelPosition, addr 0x2e06f50, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2 position, ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  /// @brief Method MultiDisplayToLocalScreenPosition, addr 0x2e06fd0, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2 position, ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  /// @brief Method ScreenBottomLeftToPanelPosition, addr 0x2e07124, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay);

  /// @brief Method ScreenBottomLeftToPanelDelta, addr 0x2e07208, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2 delta);

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsRuntimeUtility(UIElementsRuntimeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsRuntimeUtility(UIElementsRuntimeUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsRuntimeUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtility*, "UnityEngine.UIElements", "UIElementsRuntimeUtility");
NEED_NO_BOX(::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIElementsRuntimeUtility__CreateRuntimePanelDelegate*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/CreateRuntimePanelDelegate");
NEED_NO_BOX(::UnityEngine::UIElements::__UIElementsRuntimeUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIElementsRuntimeUtility____c*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/<>c");
