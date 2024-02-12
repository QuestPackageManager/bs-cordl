#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IScheduler;
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
class TimerEventScheduler;
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
class Shader;
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
MARK_REF_PTR_T(::UnityEngine::UIElements::Panel);
// Type: UnityEngine.UIElements::Panel
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 337, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6121)), TypeDefinitionIndex(TypeDefinitionIndex(6129)), TypeDefinitionIndex(TypeDefinitionIndex(8695)),
// TypeDefinitionIndex(TypeDefinitionIndex(14609))] Self: TypeDefinitionIndex(TypeDefinitionIndex(6134)) CS Name: ::UnityEngine.UIElements::Panel*
class CORDL_TYPE Panel : public ::UnityEngine::UIElements::BaseVisualElementPanel {
public:
  // Declarations
  /// @brief Field m_RootContainer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootContainer, put = __cordl_internal_set_m_RootContainer))::UnityEngine::UIElements::VisualElement* m_RootContainer;

  /// @brief Field m_VisualTreeUpdater, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeUpdater, put = __cordl_internal_set_m_VisualTreeUpdater))::UnityEngine::UIElements::VisualTreeUpdater* m_VisualTreeUpdater;

  /// @brief Field m_StylePropertyAnimationSystem, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylePropertyAnimationSystem,
                      put = __cordl_internal_set_m_StylePropertyAnimationSystem))::UnityEngine::UIElements::IStylePropertyAnimationSystem* m_StylePropertyAnimationSystem;

  /// @brief Field m_PanelName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelName, put = __cordl_internal_set_m_PanelName))::StringW m_PanelName;

  /// @brief Field m_Version, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) uint32_t m_Version;

  /// @brief Field m_RepaintVersion, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepaintVersion, put = __cordl_internal_set_m_RepaintVersion)) uint32_t m_RepaintVersion;

  /// @brief Field m_HierarchyVersion, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HierarchyVersion, put = __cordl_internal_set_m_HierarchyVersion)) uint32_t m_HierarchyVersion;

  /// @brief Field m_MarkerBeforeUpdate, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerBeforeUpdate, put = __cordl_internal_set_m_MarkerBeforeUpdate))::Unity::Profiling::ProfilerMarker m_MarkerBeforeUpdate;

  /// @brief Field m_MarkerUpdate, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerUpdate, put = __cordl_internal_set_m_MarkerUpdate))::Unity::Profiling::ProfilerMarker m_MarkerUpdate;

  /// @brief Field m_MarkerLayout, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerLayout, put = __cordl_internal_set_m_MarkerLayout))::Unity::Profiling::ProfilerMarker m_MarkerLayout;

  /// @brief Field m_MarkerBindings, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerBindings, put = __cordl_internal_set_m_MarkerBindings))::Unity::Profiling::ProfilerMarker m_MarkerBindings;

  /// @brief Field m_MarkerAnimations, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerAnimations, put = __cordl_internal_set_m_MarkerAnimations))::Unity::Profiling::ProfilerMarker m_MarkerAnimations;

  /// @brief Field <dispatcher>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__dispatcher_k__BackingField,
                      put = __cordl_internal_set__dispatcher_k__BackingField))::UnityEngine::UIElements::EventDispatcher* _dispatcher_k__BackingField;

  /// @brief Field m_Scheduler, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scheduler, put = __cordl_internal_set_m_Scheduler))::UnityEngine::UIElements::TimerEventScheduler* m_Scheduler;

  /// @brief Field <ownerObject>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerObject_k__BackingField,
                      put = __cordl_internal_set__ownerObject_k__BackingField))::UnityW<::UnityEngine::ScriptableObject> _ownerObject_k__BackingField;

  /// @brief Field <contextType>k__BackingField, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__contextType_k__BackingField,
                      put = __cordl_internal_set__contextType_k__BackingField))::UnityEngine::UIElements::ContextType _contextType_k__BackingField;

  /// @brief Field <saveViewData>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__saveViewData_k__BackingField,
                      put = __cordl_internal_set__saveViewData_k__BackingField))::UnityEngine::UIElements::SavePersistentViewData* _saveViewData_k__BackingField;

  /// @brief Field <getViewDataDictionary>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__getViewDataDictionary_k__BackingField,
                      put = __cordl_internal_set__getViewDataDictionary_k__BackingField))::UnityEngine::UIElements::GetViewDataDictionary* _getViewDataDictionary_k__BackingField;

  /// @brief Field <focusController>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__focusController_k__BackingField,
                      put = __cordl_internal_set__focusController_k__BackingField))::UnityEngine::UIElements::FocusController* _focusController_k__BackingField;

  /// @brief Field <IMGUIEventInterests>k__BackingField, offset 0x130, size 0x3
  __declspec(property(get = __cordl_internal_get__IMGUIEventInterests_k__BackingField,
                      put = __cordl_internal_set__IMGUIEventInterests_k__BackingField))::UnityEngine::EventInterests _IMGUIEventInterests_k__BackingField;

  /// @brief Field <IMGUIContainersCount>k__BackingField, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get__IMGUIContainersCount_k__BackingField,
                      put = __cordl_internal_set__IMGUIContainersCount_k__BackingField)) int32_t _IMGUIContainersCount_k__BackingField;

  /// @brief Field <rootIMGUIContainer>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__rootIMGUIContainer_k__BackingField,
                      put = __cordl_internal_set__rootIMGUIContainer_k__BackingField))::UnityEngine::UIElements::IMGUIContainer* _rootIMGUIContainer_k__BackingField;

  /// @brief Field m_StandardShader, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StandardShader, put = __cordl_internal_set_m_StandardShader))::UnityW<::UnityEngine::Shader> m_StandardShader;

  /// @brief Field m_Atlas, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Atlas, put = __cordl_internal_set_m_Atlas))::UnityEngine::UIElements::AtlasBase* m_Atlas;

  /// @brief Field m_ValidatingLayout, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ValidatingLayout, put = __cordl_internal_set_m_ValidatingLayout)) bool m_ValidatingLayout;

  /// @brief Field s_MarkerPickAll, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerPickAll, put = setStaticF_s_MarkerPickAll))::Unity::Profiling::ProfilerMarker s_MarkerPickAll;

  /// @brief Field <loadResourceFunc>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__loadResourceFunc_k__BackingField,
                             put = setStaticF__loadResourceFunc_k__BackingField))::UnityEngine::UIElements::LoadResourceFunction* _loadResourceFunc_k__BackingField;

  /// @brief Field <TimeSinceStartup>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__TimeSinceStartup_k__BackingField,
                             put = setStaticF__TimeSinceStartup_k__BackingField))::UnityEngine::UIElements::TimeMsFunction* _TimeSinceStartup_k__BackingField;

  /// @brief Field beforeAnyRepaint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beforeAnyRepaint, put = setStaticF_beforeAnyRepaint))::System::Action_1<::UnityEngine::UIElements::Panel*>* beforeAnyRepaint;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  __declspec(property(get = get_dispatcher, put = set_dispatcher))::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_timerEventScheduler))::UnityEngine::UIElements::TimerEventScheduler* timerEventScheduler;

  __declspec(property(get = get_scheduler))::UnityEngine::UIElements::IScheduler* scheduler;

  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem))::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  __declspec(property(get = get_ownerObject, put = set_ownerObject))::UnityW<::UnityEngine::ScriptableObject> ownerObject;

  __declspec(property(get = get_contextType, put = set_contextType))::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_saveViewData))::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  __declspec(property(get = get_getViewDataDictionary))::UnityEngine::UIElements::GetViewDataDictionary* getViewDataDictionary;

  __declspec(property(get = get_focusController, put = set_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests))::UnityEngine::EventInterests IMGUIEventInterests;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_rootIMGUIContainer))::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  __declspec(property(get = get_standardShader))::UnityW<::UnityEngine::Shader> standardShader;

  __declspec(property(get = get_atlas, put = set_atlas))::UnityEngine::UIElements::AtlasBase* atlas;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RootContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_RootContainer() const;

  constexpr void __cordl_internal_set_m_RootContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualTreeUpdater*& __cordl_internal_get_m_VisualTreeUpdater();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeUpdater*> const& __cordl_internal_get_m_VisualTreeUpdater() const;

  constexpr void __cordl_internal_set_m_VisualTreeUpdater(::UnityEngine::UIElements::VisualTreeUpdater* value);

  constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem*& __cordl_internal_get_m_StylePropertyAnimationSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePropertyAnimationSystem*> const& __cordl_internal_get_m_StylePropertyAnimationSystem() const;

  constexpr void __cordl_internal_set_m_StylePropertyAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

  constexpr ::StringW& __cordl_internal_get_m_PanelName();

  constexpr ::StringW const& __cordl_internal_get_m_PanelName() const;

  constexpr void __cordl_internal_set_m_PanelName(::StringW value);

  constexpr uint32_t& __cordl_internal_get_m_Version();

  constexpr uint32_t const& __cordl_internal_get_m_Version() const;

  constexpr void __cordl_internal_set_m_Version(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_m_RepaintVersion();

  constexpr uint32_t const& __cordl_internal_get_m_RepaintVersion() const;

  constexpr void __cordl_internal_set_m_RepaintVersion(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_m_HierarchyVersion();

  constexpr uint32_t const& __cordl_internal_get_m_HierarchyVersion() const;

  constexpr void __cordl_internal_set_m_HierarchyVersion(uint32_t value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerBeforeUpdate();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerBeforeUpdate() const;

  constexpr void __cordl_internal_set_m_MarkerBeforeUpdate(::Unity::Profiling::ProfilerMarker value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerUpdate();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerUpdate() const;

  constexpr void __cordl_internal_set_m_MarkerUpdate(::Unity::Profiling::ProfilerMarker value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerLayout();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerLayout() const;

  constexpr void __cordl_internal_set_m_MarkerLayout(::Unity::Profiling::ProfilerMarker value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerBindings();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerBindings() const;

  constexpr void __cordl_internal_set_m_MarkerBindings(::Unity::Profiling::ProfilerMarker value);

  constexpr ::Unity::Profiling::ProfilerMarker& __cordl_internal_get_m_MarkerAnimations();

  constexpr ::Unity::Profiling::ProfilerMarker const& __cordl_internal_get_m_MarkerAnimations() const;

  constexpr void __cordl_internal_set_m_MarkerAnimations(::Unity::Profiling::ProfilerMarker value);

  constexpr ::UnityEngine::UIElements::EventDispatcher*& __cordl_internal_get__dispatcher_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventDispatcher*> const& __cordl_internal_get__dispatcher_k__BackingField() const;

  constexpr void __cordl_internal_set__dispatcher_k__BackingField(::UnityEngine::UIElements::EventDispatcher* value);

  constexpr ::UnityEngine::UIElements::TimerEventScheduler*& __cordl_internal_get_m_Scheduler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TimerEventScheduler*> const& __cordl_internal_get_m_Scheduler() const;

  constexpr void __cordl_internal_set_m_Scheduler(::UnityEngine::UIElements::TimerEventScheduler* value);

  constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get__ownerObject_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get__ownerObject_k__BackingField() const;

  constexpr void __cordl_internal_set__ownerObject_k__BackingField(::UnityW<::UnityEngine::ScriptableObject> value);

  constexpr ::UnityEngine::UIElements::ContextType& __cordl_internal_get__contextType_k__BackingField();

  constexpr ::UnityEngine::UIElements::ContextType const& __cordl_internal_get__contextType_k__BackingField() const;

  constexpr void __cordl_internal_set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value);

  constexpr ::UnityEngine::UIElements::SavePersistentViewData*& __cordl_internal_get__saveViewData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SavePersistentViewData*> const& __cordl_internal_get__saveViewData_k__BackingField() const;

  constexpr void __cordl_internal_set__saveViewData_k__BackingField(::UnityEngine::UIElements::SavePersistentViewData* value);

  constexpr ::UnityEngine::UIElements::GetViewDataDictionary*& __cordl_internal_get__getViewDataDictionary_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::GetViewDataDictionary*> const& __cordl_internal_get__getViewDataDictionary_k__BackingField() const;

  constexpr void __cordl_internal_set__getViewDataDictionary_k__BackingField(::UnityEngine::UIElements::GetViewDataDictionary* value);

  constexpr ::UnityEngine::UIElements::FocusController*& __cordl_internal_get__focusController_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusController*> const& __cordl_internal_get__focusController_k__BackingField() const;

  constexpr void __cordl_internal_set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value);

  constexpr ::UnityEngine::EventInterests& __cordl_internal_get__IMGUIEventInterests_k__BackingField();

  constexpr ::UnityEngine::EventInterests const& __cordl_internal_get__IMGUIEventInterests_k__BackingField() const;

  constexpr void __cordl_internal_set__IMGUIEventInterests_k__BackingField(::UnityEngine::EventInterests value);

  constexpr int32_t& __cordl_internal_get__IMGUIContainersCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__IMGUIContainersCount_k__BackingField() const;

  constexpr void __cordl_internal_set__IMGUIContainersCount_k__BackingField(int32_t value);

  constexpr ::UnityEngine::UIElements::IMGUIContainer*& __cordl_internal_get__rootIMGUIContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IMGUIContainer*> const& __cordl_internal_get__rootIMGUIContainer_k__BackingField() const;

  constexpr void __cordl_internal_set__rootIMGUIContainer_k__BackingField(::UnityEngine::UIElements::IMGUIContainer* value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_StandardShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_StandardShader() const;

  constexpr void __cordl_internal_set_m_StandardShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get_m_Atlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& __cordl_internal_get_m_Atlas() const;

  constexpr void __cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value);

  constexpr bool& __cordl_internal_get_m_ValidatingLayout();

  constexpr bool const& __cordl_internal_get_m_ValidatingLayout() const;

  constexpr void __cordl_internal_set_m_ValidatingLayout(bool value);

  static inline void setStaticF_s_MarkerPickAll(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerPickAll();

  static inline void setStaticF__loadResourceFunc_k__BackingField(::UnityEngine::UIElements::LoadResourceFunction* value);

  static inline ::UnityEngine::UIElements::LoadResourceFunction* getStaticF__loadResourceFunc_k__BackingField();

  static inline void setStaticF__TimeSinceStartup_k__BackingField(::UnityEngine::UIElements::TimeMsFunction* value);

  static inline ::UnityEngine::UIElements::TimeMsFunction* getStaticF__TimeSinceStartup_k__BackingField();

  static inline void setStaticF_beforeAnyRepaint(::System::Action_1<::UnityEngine::UIElements::Panel*>* value);

  static inline ::System::Action_1<::UnityEngine::UIElements::Panel*>* getStaticF_beforeAnyRepaint();

  /// @brief Method get_visualTree, addr 0x2de7f8c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Method get_dispatcher, addr 0x2de7f94, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// @brief Method set_dispatcher, addr 0x2de7f9c, size 0x8, virtual true, abstract: false, final true
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// @brief Method get_timerEventScheduler, addr 0x2de7fa4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimerEventScheduler* get_timerEventScheduler();

  /// @brief Method get_scheduler, addr 0x2de8010, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IScheduler* get_scheduler();

  /// @brief Method get_styleAnimationSystem, addr 0x2de8014, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method set_styleAnimationSystem, addr 0x2de801c, size 0xb4, virtual true, abstract: false, final false
  inline void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

  /// @brief Method get_ownerObject, addr 0x2de80d0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> get_ownerObject();

  /// @brief Method set_ownerObject, addr 0x2de80d8, size 0x8, virtual true, abstract: false, final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// @brief Method get_contextType, addr 0x2de80e0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method set_contextType, addr 0x2de80e8, size 0x8, virtual true, abstract: false, final false
  inline void set_contextType(::UnityEngine::UIElements::ContextType value);

  /// @brief Method get_saveViewData, addr 0x2de80f0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_getViewDataDictionary, addr 0x2de80f8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_focusController, addr 0x2de8100, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method set_focusController, addr 0x2de8108, size 0x8, virtual true, abstract: false, final true
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method get_IMGUIEventInterests, addr 0x2de8110, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// @brief Method set_IMGUIEventInterests, addr 0x2de8120, size 0x10, virtual true, abstract: false, final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method get_loadResourceFunc, addr 0x2de8130, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::LoadResourceFunction* get_loadResourceFunc();

  /// @brief Method LoadResource, addr 0x2de8188, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadResource(::StringW pathName, ::System::Type* type, float_t dpiScaling);

  /// @brief Method Focus, addr 0x2dd371c, size 0x2c, virtual false, abstract: false, final false
  inline void Focus();

  /// @brief Method Blur, addr 0x2dd36f0, size 0x2c, virtual false, abstract: false, final false
  inline void Blur();

  /// @brief Method get_name, addr 0x2de82b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_name, addr 0x2de82bc, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method CreateMarkers, addr 0x2de82c4, size 0x24c, virtual false, abstract: false, final false
  inline void CreateMarkers();

  /// @brief Method get_TimeSinceStartup, addr 0x2de8510, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TimeMsFunction* get_TimeSinceStartup();

  /// @brief Method get_IMGUIContainersCount, addr 0x2de8568, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_IMGUIContainersCount();

  /// @brief Method set_IMGUIContainersCount, addr 0x2de8570, size 0x8, virtual true, abstract: false, final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// @brief Method get_rootIMGUIContainer, addr 0x2de8578, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// @brief Method get_version, addr 0x2de8580, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_version();

  /// @brief Method get_hierarchyVersion, addr 0x2de8588, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_hierarchyVersion();

  /// @brief Method get_standardShader, addr 0x2de8590, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_standardShader();

  /// @brief Method get_atlas, addr 0x2de8598, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method set_atlas, addr 0x2de85a0, size 0x74, virtual true, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  static inline ::UnityEngine::UIElements::Panel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType,
                                                           ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method .ctor, addr 0x2de8614, size 0x38c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method Dispose, addr 0x2de89a0, size 0x68, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method TimeSinceStartupMs, addr 0x2dd5c34, size 0xdc, virtual false, abstract: false, final false
  static inline int64_t TimeSinceStartupMs();

  /// @brief Method DefaultTimeSinceStartupMs, addr 0x2de8a08, size 0x38, virtual false, abstract: false, final false
  static inline int64_t DefaultTimeSinceStartupMs();

  /// @brief Method PickAll, addr 0x2de8a40, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method PerformPick, addr 0x2de8abc, size 0x2e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method PickAll, addr 0x2de8da0, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method Pick, addr 0x2de8e78, size 0x174, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method ValidateLayout, addr 0x2de90e4, size 0x64, virtual true, abstract: false, final false
  inline void ValidateLayout();

  /// @brief Method UpdateAnimations, addr 0x2de9148, size 0x20, virtual true, abstract: false, final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings, addr 0x2de9168, size 0x20, virtual true, abstract: false, final false
  inline void UpdateBindings();

  /// @brief Method ApplyStyles, addr 0x2de9188, size 0x20, virtual true, abstract: false, final false
  inline void ApplyStyles();

  /// @brief Method UpdateForRepaint, addr 0x2de91a8, size 0x74, virtual false, abstract: false, final false
  inline void UpdateForRepaint();

  /// @brief Method Repaint, addr 0x2de921c, size 0x384, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method OnVersionChanged, addr 0x2de95a0, size 0x4c, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method GetUpdater, addr 0x2de95ec, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method <Pick>g__PixelOf|99_0, addr 0x2de8fec, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int _Pick_g__PixelOf_99_0(::UnityEngine::Vector2 p);

  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Panel(Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Panel(Panel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Panel();

public:
  /// @brief Field m_RootContainer, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RootContainer;

  /// @brief Field m_VisualTreeUpdater, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeUpdater* ___m_VisualTreeUpdater;

  /// @brief Field m_StylePropertyAnimationSystem, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IStylePropertyAnimationSystem* ___m_StylePropertyAnimationSystem;

  /// @brief Field m_PanelName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___m_PanelName;

  /// @brief Field m_Version, offset: 0xc0, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_RepaintVersion, offset: 0xc4, size: 0x4, def value: None
  uint32_t ___m_RepaintVersion;

  /// @brief Field m_HierarchyVersion, offset: 0xc8, size: 0x4, def value: None
  uint32_t ___m_HierarchyVersion;

  /// @brief Field m_MarkerBeforeUpdate, offset: 0xd0, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerBeforeUpdate;

  /// @brief Field m_MarkerUpdate, offset: 0xd8, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerUpdate;

  /// @brief Field m_MarkerLayout, offset: 0xe0, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerLayout;

  /// @brief Field m_MarkerBindings, offset: 0xe8, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerBindings;

  /// @brief Field m_MarkerAnimations, offset: 0xf0, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerMarker ___m_MarkerAnimations;

  /// @brief Field <dispatcher>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventDispatcher* ____dispatcher_k__BackingField;

  /// @brief Field m_Scheduler, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::TimerEventScheduler* ___m_Scheduler;

  /// @brief Field <ownerObject>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ScriptableObject> ____ownerObject_k__BackingField;

  /// @brief Field <contextType>k__BackingField, offset: 0x110, size: 0x4, def value: None
  ::UnityEngine::UIElements::ContextType ____contextType_k__BackingField;

  /// @brief Field <saveViewData>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::SavePersistentViewData* ____saveViewData_k__BackingField;

  /// @brief Field <getViewDataDictionary>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::GetViewDataDictionary* ____getViewDataDictionary_k__BackingField;

  /// @brief Field <focusController>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusController* ____focusController_k__BackingField;

  /// @brief Field <IMGUIEventInterests>k__BackingField, offset: 0x130, size: 0x3, def value: None
  ::UnityEngine::EventInterests ____IMGUIEventInterests_k__BackingField;

  /// @brief Field <IMGUIContainersCount>k__BackingField, offset: 0x134, size: 0x4, def value: None
  int32_t ____IMGUIContainersCount_k__BackingField;

  /// @brief Field <rootIMGUIContainer>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::IMGUIContainer* ____rootIMGUIContainer_k__BackingField;

  /// @brief Field m_StandardShader, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_StandardShader;

  /// @brief Field m_Atlas, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ___m_Atlas;

  /// @brief Field m_ValidatingLayout, offset: 0x150, size: 0x1, def value: None
  bool ___m_ValidatingLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Panel, 0x158>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_RootContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_VisualTreeUpdater) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_StylePropertyAnimationSystem) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_PanelName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_Version) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_RepaintVersion) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_HierarchyVersion) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerBeforeUpdate) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerUpdate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerLayout) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerBindings) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_MarkerAnimations) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____dispatcher_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_Scheduler) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____ownerObject_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____contextType_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____saveViewData_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____getViewDataDictionary_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____focusController_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____IMGUIEventInterests_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____IMGUIContainersCount_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ____rootIMGUIContainer_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_StandardShader) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_Atlas) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Panel, ___m_ValidatingLayout) == 0x150, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Panel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Panel*, "UnityEngine.UIElements", "Panel");
