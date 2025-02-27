#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
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
struct IntPtr;
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
class UIElementsRuntimeUtility_CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility___c;
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
class UIElementsRuntimeUtility_CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtility);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtility___c);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate
class CORDL_TYPE UIElementsRuntimeUtility_CreateRuntimePanelDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4aaa888, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* Invoke(::UnityEngine::ScriptableObject* ownerObject);

  static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4aaa788, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsRuntimeUtility_CreateRuntimePanelDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility_CreateRuntimePanelDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsRuntimeUtility_CreateRuntimePanelDelegate(UIElementsRuntimeUtility_CreateRuntimePanelDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility_CreateRuntimePanelDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsRuntimeUtility_CreateRuntimePanelDelegate(UIElementsRuntimeUtility_CreateRuntimePanelDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility/<>c
class CORDL_TYPE UIElementsRuntimeUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* __9;

  /// @brief Field <>9__48_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__48_0, put = setStaticF___9__48_0)) ::System::Comparison_1<::UnityEngine::UIElements::Panel*>* __9__48_0;

  static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* New_ctor();

  /// @brief Method <SortPanels>b__48_0, addr 0x4aaa968, size 0x160, virtual false, abstract: false, final false
  inline int32_t _SortPanels_b__48_0(::UnityEngine::UIElements::Panel* a, ::UnityEngine::UIElements::Panel* b);

  /// @brief Method <.cctor>b__9_0, addr 0x4aaa900, size 0x4, virtual false, abstract: false, final false
  inline void __cctor_b__9_0();

  /// @brief Method <.cctor>b__9_1, addr 0x4aaa904, size 0x64, virtual false, abstract: false, final false
  inline void __cctor_b__9_1(int32_t displayIndex, int32_t sortOrder);

  /// @brief Method .ctor, addr 0x4aaa8f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::UIElements::Panel*>* getStaticF___9__48_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIElementsRuntimeUtility___c* value);

  static inline void setStaticF___9__48_0(::System::Comparison_1<::UnityEngine::UIElements::Panel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsRuntimeUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsRuntimeUtility___c(UIElementsRuntimeUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsRuntimeUtility___c(UIElementsRuntimeUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtility___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility
class CORDL_TYPE UIElementsRuntimeUtility : public ::System::Object {
public:
  // Declarations
  using CreateRuntimePanelDelegate = ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate;

  using __c = ::UnityEngine::UIElements::UIElementsRuntimeUtility___c;

  /// @brief Field <activeEventSystem>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__activeEventSystem_k__BackingField, put = setStaticF__activeEventSystem_k__BackingField)) ::UnityW<::UnityEngine::Object> _activeEventSystem_k__BackingField;

  /// @brief Field currentOverlayIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_currentOverlayIndex, put = setStaticF_currentOverlayIndex)) int32_t currentOverlayIndex;

  /// @brief Field onCreatePanel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onCreatePanel, put = setStaticF_onCreatePanel)) ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* onCreatePanel;

  /// @brief Field s_DefaultEventSystem, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultEventSystem, put = setStaticF_s_DefaultEventSystem)) ::UnityEngine::UIElements::DefaultEventSystem* s_DefaultEventSystem;

  /// @brief Field s_PanelOrderingDirty, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_PanelOrderingDirty, put = setStaticF_s_PanelOrderingDirty)) bool s_PanelOrderingDirty;

  /// @brief Field s_PotentiallyEmptyPanelSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PotentiallyEmptyPanelSettings,
                      put = setStaticF_s_PotentiallyEmptyPanelSettings)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* s_PotentiallyEmptyPanelSettings;

  /// @brief Field s_RegisteredPlayerloopCallback, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_RegisteredPlayerloopCallback, put = setStaticF_s_RegisteredPlayerloopCallback)) bool s_RegisteredPlayerloopCallback;

  /// @brief Field s_RepaintProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RepaintProfilerMarker, put = setStaticF_s_RepaintProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_RepaintProfilerMarker;

  /// @brief Field s_RepaintProfilerMarkerName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RepaintProfilerMarkerName, put = setStaticF_s_RepaintProfilerMarkerName)) ::StringW s_RepaintProfilerMarkerName;

  /// @brief Field s_ResolvedSortingIndexMax, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ResolvedSortingIndexMax, put = setStaticF_s_ResolvedSortingIndexMax)) int32_t s_ResolvedSortingIndexMax;

  /// @brief Field s_SortedRuntimePanels, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SortedRuntimePanels, put = setStaticF_s_SortedRuntimePanels)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* s_SortedRuntimePanels;

  /// @brief Method BeginRenderOverlays, addr 0x4aa94ec, size 0x58, virtual false, abstract: false, final false
  static inline void BeginRenderOverlays(int32_t displayIndex);

  /// @brief Method CreateEvent, addr 0x4aa84cc, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* systemEvent);

  /// @brief Method DisposeRuntimePanel, addr 0x4aa8cb8, size 0xd0, virtual false, abstract: false, final false
  static inline void DisposeRuntimePanel(::UnityEngine::ScriptableObject* ownerObject);

  /// @brief Method EndRenderOverlays, addr 0x4aa96f4, size 0x70, virtual false, abstract: false, final false
  static inline void EndRenderOverlays(int32_t displayIndex);

  /// @brief Method FindOrCreateRuntimePanel, addr 0x4aa8834, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BaseRuntimePanel* FindOrCreateRuntimePanel(::UnityEngine::ScriptableObject* ownerObject,
                                                                                      ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate* createDelegate);

  /// @brief Method GetSortedPlayerPanels, addr 0x4aa92f4, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* GetSortedPlayerPanels();

  /// @brief Method MarkPotentiallyEmpty, addr 0x4aaa0d8, size 0x110, virtual false, abstract: false, final false
  static inline void MarkPotentiallyEmpty(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method MultiDisplayBottomLeftToPanelPosition, addr 0x4aaa4c8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2 position, ::ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  /// @brief Method MultiDisplayToLocalScreenPosition, addr 0x4aaa548, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2 position, ::ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  /// @brief Method RegisterCachedPanelInternal, addr 0x4aa8b94, size 0x124, virtual false, abstract: false, final false
  static inline void RegisterCachedPanelInternal(int32_t instanceID, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RegisterEventSystem, addr 0x4aa98d4, size 0x218, virtual false, abstract: false, final false
  static inline void RegisterEventSystem(::UnityEngine::Object* eventSystem);

  /// @brief Method RegisterPlayerloopCallback, addr 0x4aa8e18, size 0x9c, virtual false, abstract: false, final false
  static inline void RegisterPlayerloopCallback();

  /// @brief Method RemoveCachedPanelInternal, addr 0x4aa8a64, size 0x130, virtual false, abstract: false, final false
  static inline void RemoveCachedPanelInternal(int32_t instanceID);

  /// @brief Method RemoveUnusedPanels, addr 0x4aa9ed4, size 0x204, virtual false, abstract: false, final false
  static inline void RemoveUnusedPanels();

  /// @brief Method RenderOverlaysBeforePriority, addr 0x4aa9544, size 0x1b0, virtual false, abstract: false, final false
  static inline void RenderOverlaysBeforePriority(int32_t displayIndex, float_t maxPriority);

  /// @brief Method RepaintOffscreenPanels, addr 0x4aa90d8, size 0x21c, virtual false, abstract: false, final false
  static inline void RepaintOffscreenPanels();

  /// @brief Method RepaintOverlayPanel, addr 0x4aa937c, size 0x170, virtual false, abstract: false, final false
  static inline void RepaintOverlayPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method ScreenBottomLeftToPanelDelta, addr 0x4aaa780, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2 delta);

  /// @brief Method ScreenBottomLeftToPanelPosition, addr 0x4aaa69c, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay);

  /// @brief Method SetPanelOrderingDirty, addr 0x4aaa1e8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetPanelOrderingDirty();

  /// @brief Method SortPanels, addr 0x4aaa244, size 0x284, virtual false, abstract: false, final false
  static inline void SortPanels();

  /// @brief Method UnregisterEventSystem, addr 0x4aa9aec, size 0x114, virtual false, abstract: false, final false
  static inline void UnregisterEventSystem(::UnityEngine::Object* eventSystem);

  /// @brief Method UnregisterPlayerloopCallback, addr 0x4aa9088, size 0x50, virtual false, abstract: false, final false
  static inline void UnregisterPlayerloopCallback();

  /// @brief Method UpdateRuntimePanels, addr 0x4aa9ca4, size 0x230, virtual false, abstract: false, final false
  static inline void UpdateRuntimePanels();

  /// @brief Method add_onCreatePanel, addr 0x4aa7f84, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  static inline ::UnityW<::UnityEngine::Object> getStaticF__activeEventSystem_k__BackingField();

  static inline int32_t getStaticF_currentOverlayIndex();

  static inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_onCreatePanel();

  static inline ::UnityEngine::UIElements::DefaultEventSystem* getStaticF_s_DefaultEventSystem();

  static inline bool getStaticF_s_PanelOrderingDirty();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* getStaticF_s_PotentiallyEmptyPanelSettings();

  static inline bool getStaticF_s_RegisteredPlayerloopCallback();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_RepaintProfilerMarker();

  static inline ::StringW getStaticF_s_RepaintProfilerMarkerName();

  static inline int32_t getStaticF_s_ResolvedSortingIndexMax();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* getStaticF_s_SortedRuntimePanels();

  /// @brief Method get_activeEventSystem, addr 0x4aa9764, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> get_activeEventSystem();

  /// @brief Method get_defaultEventSystem, addr 0x4aa9c00, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DefaultEventSystem* get_defaultEventSystem();

  /// @brief Method get_useDefaultEventSystem, addr 0x4aa9818, size 0xbc, virtual false, abstract: false, final false
  static inline bool get_useDefaultEventSystem();

  /// @brief Method remove_onCreatePanel, addr 0x4aa8074, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  static inline void setStaticF__activeEventSystem_k__BackingField(::UnityW<::UnityEngine::Object> value);

  static inline void setStaticF_currentOverlayIndex(int32_t value);

  static inline void setStaticF_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  static inline void setStaticF_s_DefaultEventSystem(::UnityEngine::UIElements::DefaultEventSystem* value);

  static inline void setStaticF_s_PanelOrderingDirty(bool value);

  static inline void setStaticF_s_PotentiallyEmptyPanelSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* value);

  static inline void setStaticF_s_RegisteredPlayerloopCallback(bool value);

  static inline void setStaticF_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_RepaintProfilerMarkerName(::StringW value);

  static inline void setStaticF_s_ResolvedSortingIndexMax(int32_t value);

  static inline void setStaticF_s_SortedRuntimePanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value);

  /// @brief Method set_activeEventSystem, addr 0x4aa97bc, size 0x5c, virtual false, abstract: false, final false
  static inline void set_activeEventSystem(::UnityEngine::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsRuntimeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsRuntimeUtility(UIElementsRuntimeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsRuntimeUtility(UIElementsRuntimeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtility*, "UnityEngine.UIElements", "UIElementsRuntimeUtility");
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/CreateRuntimePanelDelegate");
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtility___c*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/<>c");
