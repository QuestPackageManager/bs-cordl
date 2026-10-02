#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Panel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Panel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
namespace UnityEngine::UIElements {
class IDebugPanelChangeReceiver;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class LoadResourceFunction;
}
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
namespace UnityEngine::UIElements {
class TimeMsFunction;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine {
struct EventInterests;
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
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Panel;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Panel*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Panel*, "UnityEngine.UIElements", "Panel");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.EventInterests, UnityEngine.UIElements.BaseVisualElementPanel, UnityEngine.UIElements.ContextType
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Panel
class CORDL_TYPE Panel : public ::UnityEngine::UIElements::BaseVisualElementPanel {
public:
  // Declarations
  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests)) ::UnityEngine::EventInterests IMGUIEventInterests;

  /// @brief Field <IMGUIContainersCount>k__BackingField, offset 0x1b8, size 0x4
  __declspec(property(get = __cordl_internal_get__IMGUIContainersCount_k__BackingField,
                      put = __cordl_internal_set__IMGUIContainersCount_k__BackingField)) int32_t _IMGUIContainersCount_k__BackingField;

  /// @brief Field <IMGUIEventInterests>k__BackingField, offset 0x1a8, size 0x3
  __declspec(property(get = __cordl_internal_get__IMGUIEventInterests_k__BackingField,
                      put = __cordl_internal_set__IMGUIEventInterests_k__BackingField)) ::UnityEngine::EventInterests _IMGUIEventInterests_k__BackingField;

  /// @brief Field <TimeSinceStartup>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__TimeSinceStartup_k__BackingField,
                      put = setStaticF__TimeSinceStartup_k__BackingField)) ::UnityEngine::UIElements::TimeMsFunction* _TimeSinceStartup_k__BackingField;

  /// @brief Field <contextType>k__BackingField, offset 0x188, size 0x4
  __declspec(property(get = __cordl_internal_get__contextType_k__BackingField,
                      put = __cordl_internal_set__contextType_k__BackingField)) ::UnityEngine::UIElements::ContextType _contextType_k__BackingField;

  /// @brief Field <dispatcher>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__dispatcher_k__BackingField,
                      put = __cordl_internal_set__dispatcher_k__BackingField)) ::UnityEngine::UIElements::EventDispatcher* _dispatcher_k__BackingField;

  /// @brief Field <focusController>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__focusController_k__BackingField,
                      put = __cordl_internal_set__focusController_k__BackingField)) ::UnityEngine::UIElements::FocusController* _focusController_k__BackingField;

  /// @brief Field <getViewDataDictionary>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__getViewDataDictionary_k__BackingField,
                      put = __cordl_internal_set__getViewDataDictionary_k__BackingField)) ::UnityEngine::UIElements::GetViewDataDictionary* _getViewDataDictionary_k__BackingField;

  /// @brief Field <loadResourceFunc>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__loadResourceFunc_k__BackingField,
                      put = setStaticF__loadResourceFunc_k__BackingField)) ::UnityEngine::UIElements::LoadResourceFunction* _loadResourceFunc_k__BackingField;

  /// @brief Field <ownerObject>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerObject_k__BackingField, put = __cordl_internal_set__ownerObject_k__BackingField)) ::UnityW<::UnityEngine::ScriptableObject>
      _ownerObject_k__BackingField;

  /// @brief Field <rootIMGUIContainer>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__rootIMGUIContainer_k__BackingField,
                      put = __cordl_internal_set__rootIMGUIContainer_k__BackingField)) ::UnityEngine::UIElements::IMGUIContainer* _rootIMGUIContainer_k__BackingField;

  /// @brief Field <saveViewData>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__saveViewData_k__BackingField,
                      put = __cordl_internal_set__saveViewData_k__BackingField)) ::UnityEngine::UIElements::SavePersistentViewData* _saveViewData_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  /// @brief Field beforeAnyRepaint, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beforeAnyRepaint, put = setStaticF_beforeAnyRepaint)) ::System::Action_1<::UnityEngine::UIElements::Panel*>* beforeAnyRepaint;

  __declspec(property(get = get_contextType)) ::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_dispatcher, put = set_dispatcher)) ::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_focusController, put = set_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_getViewDataDictionary)) ::UnityEngine::UIElements::GetViewDataDictionary* getViewDataDictionary;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  /// @brief Field m_Atlas, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Atlas, put = __cordl_internal_set_m_Atlas)) ::UnityEngine::UIElements::AtlasBase* m_Atlas;

  /// @brief Field m_HierarchyVersion, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HierarchyVersion, put = __cordl_internal_set_m_HierarchyVersion)) uint32_t m_HierarchyVersion;

  /// @brief Field m_JustReceivedFocus, offset 0x1ab, size 0x1
  __declspec(property(get = __cordl_internal_get_m_JustReceivedFocus, put = __cordl_internal_set_m_JustReceivedFocus)) bool m_JustReceivedFocus;

  /// @brief Field m_LastTickedHierarchyVersion, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastTickedHierarchyVersion, put = __cordl_internal_set_m_LastTickedHierarchyVersion)) uint32_t m_LastTickedHierarchyVersion;

  /// @brief Field m_MarkerPanelChangeReceiver, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerPanelChangeReceiver, put = __cordl_internal_set_m_MarkerPanelChangeReceiver)) ::Unity::Profiling::ProfilerMarker m_MarkerPanelChangeReceiver;

  /// @brief Field m_MarkerPrepareRepaint, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerPrepareRepaint, put = __cordl_internal_set_m_MarkerPrepareRepaint)) ::Unity::Profiling::ProfilerMarker m_MarkerPrepareRepaint;

  /// @brief Field m_MarkerRender, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerRender, put = __cordl_internal_set_m_MarkerRender)) ::Unity::Profiling::ProfilerMarker m_MarkerRender;

  /// @brief Field m_MarkerTickScheduledActions, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerTickScheduledActions,
                      put = __cordl_internal_set_m_MarkerTickScheduledActions)) ::Unity::Profiling::ProfilerMarker m_MarkerTickScheduledActions;

  /// @brief Field m_MarkerTickScheduledActionsPostLayout, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerTickScheduledActionsPostLayout,
                      put = __cordl_internal_set_m_MarkerTickScheduledActionsPostLayout)) ::Unity::Profiling::ProfilerMarker m_MarkerTickScheduledActionsPostLayout;

  /// @brief Field m_MarkerTickScheduledActionsPreLayout, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerTickScheduledActionsPreLayout,
                      put = __cordl_internal_set_m_MarkerTickScheduledActionsPreLayout)) ::Unity::Profiling::ProfilerMarker m_MarkerTickScheduledActionsPreLayout;

  /// @brief Field m_MarkerValidateLayout, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerValidateLayout, put = __cordl_internal_set_m_MarkerValidateLayout)) ::Unity::Profiling::ProfilerMarker m_MarkerValidateLayout;

  /// @brief Field m_PanelChangeReceiver, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelChangeReceiver, put = __cordl_internal_set_m_PanelChangeReceiver)) ::UnityEngine::UIElements::IDebugPanelChangeReceiver* m_PanelChangeReceiver;

  /// @brief Field m_PanelName, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelName, put = __cordl_internal_set_m_PanelName)) ::StringW m_PanelName;

  /// @brief Field m_RepaintVersion, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepaintVersion, put = __cordl_internal_set_m_RepaintVersion)) uint32_t m_RepaintVersion;

  /// @brief Field m_RootContainer, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootContainer, put = __cordl_internal_set_m_RootContainer)) ::UnityEngine::UIElements::VisualElement* m_RootContainer;

  /// @brief Field m_StylePropertyAnimationSystem, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylePropertyAnimationSystem,
                      put = __cordl_internal_set_m_StylePropertyAnimationSystem)) ::UnityEngine::UIElements::IStylePropertyAnimationSystem* m_StylePropertyAnimationSystem;

  /// @brief Field m_ValidatingLayout, offset 0x1d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ValidatingLayout, put = __cordl_internal_set_m_ValidatingLayout)) bool m_ValidatingLayout;

  /// @brief Field m_Version, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) uint32_t m_Version;

  /// @brief Field m_VisualTreeUpdater, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeUpdater, put = __cordl_internal_set_m_VisualTreeUpdater)) ::UnityEngine::UIElements::VisualTreeUpdater* m_VisualTreeUpdater;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_ownerObject, put = set_ownerObject)) ::UnityW<::UnityEngine::ScriptableObject> ownerObject;

  __declspec(property(get = get_panelChangeReceiver, put = set_panelChangeReceiver)) ::UnityEngine::UIElements::IDebugPanelChangeReceiver* panelChangeReceiver;

  __declspec(property(get = get_repaintVersion)) uint32_t repaintVersion;

  __declspec(property(get = get_rootIMGUIContainer)) ::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  /// @brief Field s_MarkerPickAll, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerPickAll, put = setStaticF_s_MarkerPickAll)) ::Unity::Profiling::ProfilerMarker s_MarkerPickAll;

  __declspec(property(get = get_saveViewData)) ::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  /// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem)) ::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Method ApplyStyles, addr 0x726e8d0, size 0x1c, virtual true, abstract: false, final false
  inline void ApplyStyles();

  /// @brief Method Blur, addr 0x726cde0, size 0x2c, virtual false, abstract: false, final false
  inline void Blur();

  /// @brief Method CreateMarkers, addr 0x726ce50, size 0x218, virtual false, abstract: false, final false
  inline void CreateMarkers();

  /// @brief Method Dispose, addr 0x726d9a0, size 0x13c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Focus, addr 0x726cdd4, size 0xc, virtual false, abstract: false, final false
  inline void Focus();

  /// @brief Method GetUpdater, addr 0x726ee84, size 0x20, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method LoadResource, addr 0x726cc94, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadResource(::StringW pathName, ::System::Type* type, float_t dpiScaling);

  static inline ::UnityEngine::UIElements::Panel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType,
                                                           ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method OnVersionChanged, addr 0x726ec98, size 0x1d4, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method PerformPick, addr 0x726db64, size 0x358, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked, bool includeIgnoredElement);

  /// @brief Method Pick, addr 0x726dfac, size 0x150, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point, int32_t pointerId);

  /// @brief Method PickAll, addr 0x726debc, size 0xf0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method PickAll, addr 0x726dadc, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked, bool includeIgnoredElement);

  /// @brief Method Render, addr 0x726ec08, size 0x90, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method Repaint, addr 0x726e9d4, size 0x234, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method SetUpdater, addr 0x726ee6c, size 0x18, virtual true, abstract: false, final false
  inline void SetUpdater(::UnityEngine::UIElements::IVisualTreeUpdater* updater, ::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method TickSchedulingUpdaters, addr 0x726e350, size 0x204, virtual true, abstract: false, final false
  inline void TickSchedulingUpdaters();

  /// @brief Method UpdateAnimations, addr 0x726e2fc, size 0x1c, virtual true, abstract: false, final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings, addr 0x726e318, size 0x1c, virtual true, abstract: false, final false
  inline void UpdateBindings();

  /// @brief Method UpdateDataBinding, addr 0x726e334, size 0x1c, virtual true, abstract: false, final false
  inline void UpdateDataBinding();

  /// @brief Method UpdateForRepaint, addr 0x726e8ec, size 0xe8, virtual true, abstract: false, final false
  inline void UpdateForRepaint();

  /// @brief Method ValidateFocus, addr 0x726ce0c, size 0x34, virtual false, abstract: false, final false
  inline void ValidateFocus();

  /// @brief Method ValidateLayout, addr 0x726e1c8, size 0x134, virtual true, abstract: false, final false
  inline void ValidateLayout();

  /// [CompilerGenerated]
  /// @brief Method <Pick>g__PixelOf|98_0, addr 0x726e0fc, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int _Pick_g__PixelOf_98_0(::UnityEngine::Vector2 p);

  constexpr int32_t const& __cordl_internal_get__IMGUIContainersCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__IMGUIContainersCount_k__BackingField();

  constexpr ::UnityEngine::EventInterests const& __cordl_internal_get__IMGUIEventInterests_k__BackingField() const;

  constexpr ::UnityEngine::EventInterests& __cordl_internal_get__IMGUIEventInterests_k__BackingField();

  constexpr ::UnityEngine::UIElements::ContextType const& __cordl_internal_get__contextType_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ContextType& __cordl_internal_get__contextType_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventDispatcher* const& __cordl_internal_get__dispatcher_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::EventDispatcher*& __cordl_internal_get__dispatcher_k__BackingField();

  constexpr ::UnityEngine::UIElements::FocusController* const& __cordl_internal_get__focusController_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::FocusController*& __cordl_internal_get__focusController_k__BackingField();

  constexpr ::UnityEngine::UIElements::GetViewDataDictionary* const& __cordl_internal_get__getViewDataDictionary_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::GetViewDataDictionary*& __cordl_internal_get__getViewDataDictionary_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get__ownerObject_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get__ownerObject_k__BackingField();

  constexpr ::UnityEngine::UIElements::IMGUIContainer* const& __cordl_internal_get__rootIMGUIContainer_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IMGUIContainer*& __cordl_internal_get__rootIMGUIContainer_k__BackingField();

  constexpr ::UnityEngine::UIElements::SavePersistentViewData* const& __cordl_internal_get__saveViewData_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::SavePersistentViewData*& __cordl_internal_get__saveViewData_k__BackingField();

  constexpr ::UnityEngine::UIElements::AtlasBase* const& __cordl_internal_get_m_Atlas() const;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get_m_Atlas();

  constexpr uint32_t const& __cordl_internal_get_m_HierarchyVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_HierarchyVersion();

  constexpr bool const& __cordl_internal_get_m_JustReceivedFocus() const;

  constexpr bool& __cordl_internal_get_m_JustReceivedFocus();

  constexpr uint32_t const& __cordl_internal_get_m_LastTickedHierarchyVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_LastTickedHierarchyVersion();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerPanelChangeReceiver() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerPanelChangeReceiver();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerPrepareRepaint() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerPrepareRepaint();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerRender() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerRender();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerTickScheduledActions() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerTickScheduledActions();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerTickScheduledActionsPostLayout() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerTickScheduledActionsPostLayout();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerTickScheduledActionsPreLayout() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerTickScheduledActionsPreLayout();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerValidateLayout() const;

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerValidateLayout();

  constexpr ::UnityEngine::UIElements::IDebugPanelChangeReceiver* const& __cordl_internal_get_m_PanelChangeReceiver() const;

  constexpr ::UnityEngine::UIElements::IDebugPanelChangeReceiver*& __cordl_internal_get_m_PanelChangeReceiver();

  constexpr ::StringW const& __cordl_internal_get_m_PanelName() const;

  constexpr ::StringW& __cordl_internal_get_m_PanelName();

  constexpr uint32_t const& __cordl_internal_get_m_RepaintVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_RepaintVersion();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RootContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RootContainer();

  constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* const& __cordl_internal_get_m_StylePropertyAnimationSystem() const;

  constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem*& __cordl_internal_get_m_StylePropertyAnimationSystem();

  constexpr bool const& __cordl_internal_get_m_ValidatingLayout() const;

  constexpr bool& __cordl_internal_get_m_ValidatingLayout();

  constexpr uint32_t const& __cordl_internal_get_m_Version() const;

  constexpr uint32_t& __cordl_internal_get_m_Version();

  constexpr ::UnityEngine::UIElements::VisualTreeUpdater* const& __cordl_internal_get_m_VisualTreeUpdater() const;

  constexpr ::UnityEngine::UIElements::VisualTreeUpdater*& __cordl_internal_get_m_VisualTreeUpdater();

  constexpr void __cordl_internal_set__IMGUIContainersCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__IMGUIEventInterests_k__BackingField(::UnityEngine::EventInterests value);

  constexpr void __cordl_internal_set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value);

  constexpr void __cordl_internal_set__dispatcher_k__BackingField(::UnityEngine::UIElements::EventDispatcher* value);

  constexpr void __cordl_internal_set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value);

  constexpr void __cordl_internal_set__getViewDataDictionary_k__BackingField(::UnityEngine::UIElements::GetViewDataDictionary* value);

  constexpr void __cordl_internal_set__ownerObject_k__BackingField(::UnityW<::UnityEngine::ScriptableObject> value);

  constexpr void __cordl_internal_set__rootIMGUIContainer_k__BackingField(::UnityEngine::UIElements::IMGUIContainer* value);

  constexpr void __cordl_internal_set__saveViewData_k__BackingField(::UnityEngine::UIElements::SavePersistentViewData* value);

  constexpr void __cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set_m_HierarchyVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_JustReceivedFocus(bool value);

  constexpr void __cordl_internal_set_m_LastTickedHierarchyVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_MarkerPanelChangeReceiver(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerPrepareRepaint(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerRender(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerTickScheduledActions(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerTickScheduledActionsPostLayout(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerTickScheduledActionsPreLayout(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_MarkerValidateLayout(::Unity::Profiling::ProfilerMarker value);

  constexpr void __cordl_internal_set_m_PanelChangeReceiver(::UnityEngine::UIElements::IDebugPanelChangeReceiver* value);

  constexpr void __cordl_internal_set_m_PanelName(::StringW value);

  constexpr void __cordl_internal_set_m_RepaintVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_RootContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_StylePropertyAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

  constexpr void __cordl_internal_set_m_ValidatingLayout(bool value);

  constexpr void __cordl_internal_set_m_Version(uint32_t value);

  constexpr void __cordl_internal_set_m_VisualTreeUpdater(::UnityEngine::UIElements::VisualTreeUpdater* value);

  /// @brief Method .ctor, addr 0x726d24c, size 0x420, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  static inline ::UnityEngine::UIElements::TimeMsFunction* getStaticF__TimeSinceStartup_k__BackingField();

  static inline ::UnityEngine::UIElements::LoadResourceFunction* getStaticF__loadResourceFunc_k__BackingField();

  static inline ::System::Action_1<::UnityEngine::UIElements::Panel*>* getStaticF_beforeAnyRepaint();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerPickAll();

  /// [CompilerGenerated]
  /// @brief Method get_IMGUIContainersCount, addr 0x726d198, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_IMGUIContainersCount();

  /// [CompilerGenerated]
  /// @brief Method get_IMGUIEventInterests, addr 0x726cc18, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// [CompilerGenerated]
  /// @brief Method get_TimeSinceStartup, addr 0x726d13c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TimeMsFunction* get_TimeSinceStartup();

  /// @brief Method get_atlas, addr 0x726d1c8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// [CompilerGenerated]
  /// @brief Method get_contextType, addr 0x726cbf0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// [CompilerGenerated]
  /// @brief Method get_dispatcher, addr 0x726cac4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// [CompilerGenerated]
  /// @brief Method get_focusController, addr 0x726cc08, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// [CompilerGenerated]
  /// @brief Method get_getViewDataDictionary, addr 0x726cc00, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_hierarchyVersion, addr 0x726d1c0, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_hierarchyVersion();

  /// [CompilerGenerated]
  /// @brief Method get_loadResourceFunc, addr 0x726cc38, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::LoadResourceFunction* get_loadResourceFunc();

  /// @brief Method get_name, addr 0x726ce40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// [CompilerGenerated]
  /// @brief Method get_ownerObject, addr 0x726cbe0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> get_ownerObject();

  /// @brief Method get_panelChangeReceiver, addr 0x726d068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IDebugPanelChangeReceiver* get_panelChangeReceiver();

  /// @brief Method get_repaintVersion, addr 0x726d1b8, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_repaintVersion();

  /// [CompilerGenerated]
  /// @brief Method get_rootIMGUIContainer, addr 0x726d1a8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// [CompilerGenerated]
  /// @brief Method get_saveViewData, addr 0x726cbf8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_styleAnimationSystem, addr 0x726cad4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method get_version, addr 0x726d1b0, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_version();

  /// @brief Method get_visualTree, addr 0x726cabc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  static inline void setStaticF__TimeSinceStartup_k__BackingField(::UnityEngine::UIElements::TimeMsFunction* value);

  static inline void setStaticF__loadResourceFunc_k__BackingField(::UnityEngine::UIElements::LoadResourceFunction* value);

  static inline void setStaticF_beforeAnyRepaint(::System::Action_1<::UnityEngine::UIElements::Panel*>* value);

  static inline void setStaticF_s_MarkerPickAll(::Unity::Profiling::ProfilerMarker value);

  /// [CompilerGenerated]
  /// @brief Method set_IMGUIContainersCount, addr 0x726d1a0, size 0x8, virtual true, abstract: false, final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_IMGUIEventInterests, addr 0x726cc28, size 0x10, virtual true, abstract: false, final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method set_atlas, addr 0x726d1d0, size 0x7c, virtual true, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// [CompilerGenerated]
  /// @brief Method set_dispatcher, addr 0x726cacc, size 0x8, virtual true, abstract: false, final true
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// [CompilerGenerated]
  /// @brief Method set_focusController, addr 0x726cc10, size 0x8, virtual true, abstract: false, final true
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method set_name, addr 0x726ce48, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method set_ownerObject, addr 0x726cbe8, size 0x8, virtual true, abstract: false, final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_panelChangeReceiver, addr 0x726d070, size 0xcc, virtual false, abstract: false, final false
  inline void set_panelChangeReceiver(::UnityEngine::UIElements::IDebugPanelChangeReceiver* value);

  /// @brief Method set_styleAnimationSystem, addr 0x726cadc, size 0x104, virtual true, abstract: false, final false
  inline void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Panel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Panel(Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Panel(Panel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4693 };

  /// @brief Field k_DefaultPixelsPerUnit offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultPixelsPerUnit{ static_cast<int32_t>(0x64) };

  /// @brief Field m_RootContainer, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RootContainer;

  /// @brief Field m_VisualTreeUpdater, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeUpdater* ___m_VisualTreeUpdater;

  /// @brief Field m_StylePropertyAnimationSystem, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::IStylePropertyAnimationSystem* ___m_StylePropertyAnimationSystem;

  /// @brief Field m_PanelName, offset: 0x128, size: 0x8, def value: None
  ::StringW ___m_PanelName;

  /// @brief Field m_Version, offset: 0x130, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_RepaintVersion, offset: 0x134, size: 0x4, def value: None
  uint32_t ___m_RepaintVersion;

  /// @brief Field m_HierarchyVersion, offset: 0x138, size: 0x4, def value: None
  uint32_t ___m_HierarchyVersion;

  /// @brief Field m_LastTickedHierarchyVersion, offset: 0x13c, size: 0x4, def value: None
  uint32_t ___m_LastTickedHierarchyVersion;

  /// @brief Field m_MarkerPrepareRepaint, offset: 0x140, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerPrepareRepaint;

  /// @brief Field m_MarkerRender, offset: 0x148, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerRender;

  /// @brief Field m_MarkerValidateLayout, offset: 0x150, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerValidateLayout;

  /// @brief Field m_MarkerTickScheduledActions, offset: 0x158, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerTickScheduledActions;

  /// @brief Field m_MarkerTickScheduledActionsPreLayout, offset: 0x160, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerTickScheduledActionsPreLayout;

  /// @brief Field m_MarkerTickScheduledActionsPostLayout, offset: 0x168, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerTickScheduledActionsPostLayout;

  /// @brief Field m_MarkerPanelChangeReceiver, offset: 0x170, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerPanelChangeReceiver;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <dispatcher>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventDispatcher* ____dispatcher_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <ownerObject>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ScriptableObject> ____ownerObject_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <contextType>k__BackingField, offset: 0x188, size: 0x4, def value: None
  ::UnityEngine::UIElements::ContextType ____contextType_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <saveViewData>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::UIElements::SavePersistentViewData* ____saveViewData_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <getViewDataDictionary>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::UIElements::GetViewDataDictionary* ____getViewDataDictionary_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <focusController>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusController* ____focusController_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <IMGUIEventInterests>k__BackingField, offset: 0x1a8, size: 0x3, def value: None
  ::UnityEngine::EventInterests ____IMGUIEventInterests_k__BackingField;

  /// @brief Field m_JustReceivedFocus, offset: 0x1ab, size: 0x1, def value: None
  bool ___m_JustReceivedFocus;

  /// @brief Field m_PanelChangeReceiver, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IDebugPanelChangeReceiver* ___m_PanelChangeReceiver;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IMGUIContainersCount>k__BackingField, offset: 0x1b8, size: 0x4, def value: None
  int32_t ____IMGUIContainersCount_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <rootIMGUIContainer>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IMGUIContainer* ____rootIMGUIContainer_k__BackingField;

  /// @brief Field m_Atlas, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ___m_Atlas;

  /// @brief Field m_ValidatingLayout, offset: 0x1d0, size: 0x1, def value: None
  bool ___m_ValidatingLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_RootContainer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_VisualTreeUpdater) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_StylePropertyAnimationSystem) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_PanelName) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_Version) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_RepaintVersion) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_HierarchyVersion) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_LastTickedHierarchyVersion) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerPrepareRepaint) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerRender) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerValidateLayout) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerTickScheduledActions) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerTickScheduledActionsPreLayout) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerTickScheduledActionsPostLayout) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerPanelChangeReceiver) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____dispatcher_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____ownerObject_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____contextType_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____saveViewData_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____getViewDataDictionary_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____focusController_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____IMGUIEventInterests_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_JustReceivedFocus) == 0x1ab, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_PanelChangeReceiver) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____IMGUIContainersCount_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____rootIMGUIContainer_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_Atlas) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_ValidatingLayout) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Panel) == 0x1d8, "Size mismatch!");

} // namespace UnityEngine::UIElements
