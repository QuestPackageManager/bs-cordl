#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualElementPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfig_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualElementPanel)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::UIElements {
class AbstractGenericMenu;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel___c;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine::UIElements {
class DataBindingManager;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class ElementUnderPointer;
}
namespace UnityEngine::UIElements {
class EventBase;
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
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
namespace UnityEngine::UIElements {
class ICursorManager;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IPanelRenderer;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
namespace UnityEngine::UIElements {
class RepaintData;
}
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class TimeFunction;
}
namespace UnityEngine::UIElements {
class TimerEventScheduler;
}
namespace UnityEngine::UIElements {
class UIElementsBridge;
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
namespace UnityEngine {
struct EventInterests;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseVisualElementPanel*);
MARK_REF_T(::UnityEngine::UIElements::BaseVisualElementPanel___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseVisualElementPanel*, "UnityEngine.UIElements", "BaseVisualElementPanel");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseVisualElementPanel___c*, "UnityEngine.UIElements", "BaseVisualElementPanel/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualElementPanel/<>c
class CORDL_TYPE BaseVisualElementPanel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::BaseVisualElementPanel___c* __9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0, put = setStaticF___9__28_0)) ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* __9__28_0;

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel___c* New_ctor();

  /// @brief Method <.ctor>b__28_0, addr 0x726c7e0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AbstractGenericMenu* __ctor_b__28_0();

  /// @brief Method .ctor, addr 0x726c7dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* getStaticF___9__28_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::BaseVisualElementPanel___c* value);

  static inline void setStaticF___9__28_0(::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualElementPanel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualElementPanel___c(BaseVisualElementPanel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualElementPanel___c(BaseVisualElementPanel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::BaseVisualElementPanel___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule", "UnityEditor.VectorGraphicsModule" })]
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutConfig, UnityEngine.UIElements.PanelClearSettings, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualElementPanel
class CORDL_TYPE BaseVisualElementPanel : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::BaseVisualElementPanel___c;

  /// @brief Field CreateMenuFunctor, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_CreateMenuFunctor, put = __cordl_internal_set_CreateMenuFunctor)) ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* CreateMenuFunctor;

  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests)) ::UnityEngine::EventInterests IMGUIEventInterests;

  __declspec(property(get = get_TimeSinceStartupFunc)) ::UnityEngine::UIElements::TimeFunction* TimeSinceStartupFunc;

  /// @brief Field <clearSettings>k__BackingField, offset 0x70, size 0x14
  __declspec(property(get = __cordl_internal_get__clearSettings_k__BackingField,
                      put = __cordl_internal_set__clearSettings_k__BackingField)) ::UnityEngine::UIElements::PanelClearSettings _clearSettings_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__contextualMenuManager_k__BackingField,
                      put = __cordl_internal_set__contextualMenuManager_k__BackingField)) ::UnityEngine::UIElements::ContextualMenuManager* _contextualMenuManager_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorManager_k__BackingField,
                      put = __cordl_internal_set__cursorManager_k__BackingField)) ::UnityEngine::UIElements::ICursorManager* _cursorManager_k__BackingField;

  /// @brief Field <dataBindingManager>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__dataBindingManager_k__BackingField,
                      put = __cordl_internal_set__dataBindingManager_k__BackingField)) ::UnityEngine::UIElements::DataBindingManager* _dataBindingManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__duringLayoutPhase_k__BackingField, put = __cordl_internal_set__duringLayoutPhase_k__BackingField)) bool _duringLayoutPhase_k__BackingField;

  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField,
                      put = __cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField)) float_t _referenceSpritePixelsPerUnit_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__repaintData_k__BackingField,
                      put = __cordl_internal_set__repaintData_k__BackingField)) ::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  /// @brief Field atlasChanged, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_atlasChanged, put = __cordl_internal_set_atlasChanged)) ::System::Action* atlasChanged;

  /// @brief Field beforeUpdate, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeUpdate, put = __cordl_internal_set_beforeUpdate)) ::System::Action_1<::UnityEngine::UIElements::IPanel*>* beforeUpdate;

  __declspec(property(get = get_clearSettings, put = set_clearSettings)) ::UnityEngine::UIElements::PanelClearSettings clearSettings;

  __declspec(property(get = get_contextType)) ::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_contextualMenuManager, put = set_contextualMenuManager)) ::UnityEngine::UIElements::ContextualMenuManager* contextualMenuManager;

  __declspec(property(get = get_cursorManager, put = set_cursorManager)) ::UnityEngine::UIElements::ICursorManager* cursorManager;

  __declspec(property(get = get_dataBindingManager, put = set_dataBindingManager)) ::UnityEngine::UIElements::DataBindingManager* dataBindingManager;

  __declspec(property(get = get_dispatcher, put = set_dispatcher)) ::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_duringLayoutPhase, put = set_duringLayoutPhase)) bool duringLayoutPhase;

  __declspec(property(get = get_focusController, put = set_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_getViewDataDictionary)) ::UnityEngine::UIElements::GetViewDataDictionary* getViewDataDictionary;

  /// @brief Field hierarchyChanged, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_hierarchyChanged, put = __cordl_internal_set_hierarchyChanged)) ::UnityEngine::UIElements::HierarchyEvent* hierarchyChanged;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  __declspec(property(get = get_isDirty)) bool isDirty;

  __declspec(property(get = get_isFlat, put = set_isFlat)) bool isFlat;

  /// @brief Field isFlatChanged, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_isFlatChanged, put = __cordl_internal_set_isFlatChanged)) ::System::Action* isFlatChanged;

  /// @brief Field layoutConfig, offset 0x28, size 0x40
  __declspec(property(get = __cordl_internal_get_layoutConfig, put = __cordl_internal_set_layoutConfig)) ::UnityEngine::UIElements::Layout::LayoutConfig layoutConfig;

  /// @brief Field m_IsFlat, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFlat, put = __cordl_internal_set_m_IsFlat)) bool m_IsFlat;

  /// @brief Field m_PixelsPerPoint, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerPoint, put = __cordl_internal_set_m_PixelsPerPoint)) float_t m_PixelsPerPoint;

  /// @brief Field m_Scale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_Scheduler, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scheduler, put = __cordl_internal_set_m_Scheduler)) ::UnityEngine::UIElements::TimerEventScheduler* m_Scheduler;

  /// @brief Field m_TimeSinceStartupFunc, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeSinceStartupFunc, put = __cordl_internal_set_m_TimeSinceStartupFunc)) ::UnityEngine::UIElements::TimeFunction* m_TimeSinceStartupFunc;

  /// @brief Field m_TopElementUnderPointers, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TopElementUnderPointers,
                      put = __cordl_internal_set_m_TopElementUnderPointers)) ::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers;

  /// @brief Field m_UIElementsBridge, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIElementsBridge, put = __cordl_internal_set_m_UIElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* m_UIElementsBridge;

  __declspec(property(get = get_ownerObject, put = set_ownerObject)) ::UnityW<::UnityEngine::ScriptableObject> ownerObject;

  /// @brief Field panelDisposed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panelDisposed, put = __cordl_internal_set_panelDisposed)) ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelDisposed;

  /// @brief Field panelRenderer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_panelRenderer, put = __cordl_internal_set_panelRenderer)) ::UnityEngine::UIElements::IPanelRenderer* panelRenderer;

  __declspec(property(get = get_referenceSpritePixelsPerUnit, put = set_referenceSpritePixelsPerUnit)) float_t referenceSpritePixelsPerUnit;

  __declspec(property(get = get_repaintData, put = set_repaintData)) ::UnityEngine::UIElements::RepaintData* repaintData;

  __declspec(property(get = get_repaintVersion)) uint32_t repaintVersion;

  __declspec(property(get = get_rootIMGUIContainer)) ::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  /// @brief Field s_OutsidePanelCoordinates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_OutsidePanelCoordinates, put = setStaticF_s_OutsidePanelCoordinates)) ::UnityEngine::Vector2 s_OutsidePanelCoordinates;

  __declspec(property(get = get_saveViewData)) ::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_scheduler)) ::UnityEngine::UIElements::TimerEventScheduler* scheduler;

  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem)) ::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  /// @brief Field textElementRegistry, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_textElementRegistry,
                      put = __cordl_internal_set_textElementRegistry)) ::System::Lazy_1<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::TextElement*>*>* textElementRegistry;

  __declspec(property(get = get_uiElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* uiElementsBridge;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
  constexpr operator ::UnityEngine::UIElements::IPanel*() noexcept;

  /// @brief Method ApplyStyles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyStyles();

  /// @brief Method ClearCachedElementUnderPointer, addr 0x726bdf8, size 0x24, virtual false, abstract: false, final false
  inline void ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method CommitElementUnderPointers, addr 0x726be1c, size 0x5c, virtual false, abstract: false, final false
  inline bool CommitElementUnderPointers();

  /// @brief Method CreateMenu, addr 0x726c718, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AbstractGenericMenu* CreateMenu();

  /// @brief Method DefaultTimeSinceStartup, addr 0x726ba10, size 0x28, virtual false, abstract: false, final false
  static inline double_t DefaultTimeSinceStartup();

  /// @brief Method Dispose, addr 0x726b11c, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x726b190, size 0x1b4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetTopElementUnderPointer, addr 0x726bad0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method GetUpdater, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method InvokeAtlasChanged, addr 0x726c27c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAtlasChanged();

  /// @brief Method InvokeBeforeUpdate, addr 0x726c40c, size 0x20, virtual false, abstract: false, final false
  inline void InvokeBeforeUpdate();

  /// @brief Method InvokeHierarchyChanged, addr 0x726c3f0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType,
                                     ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag);

  /// @brief Method Pick, addr 0x726ba38, size 0x88, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method Pick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point, int32_t pointerId);

  /// @brief Method PickAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method RecomputeTopElementUnderPointer, addr 0x726bb48, size 0x2b0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method RemoveElementFromPointerCache, addr 0x726bae8, size 0x18, virtual false, abstract: false, final false
  inline void RemoveElementFromPointerCache(::UnityEngine::UIElements::VisualElement* e);

  /// @brief Method Render, addr 0x726c670, size 0xa8, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method Repaint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method SendEvent, addr 0x726b564, size 0x188, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SetSpecializedHierarchyFlagsUpdater, addr 0x726c01c, size 0x108, virtual false, abstract: false, final false
  inline void SetSpecializedHierarchyFlagsUpdater();

  /// @brief Method SetTopElementUnderPointer, addr 0x726bb24, size 0x24, virtual false, abstract: false, final false
  inline void SetTopElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::Vector2 position);

  /// @brief Method SetTopElementUnderPointer, addr 0x726bb00, size 0x24, virtual false, abstract: false, final false
  inline void SetTopElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method SetUpdater, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetUpdater(::UnityEngine::UIElements::IVisualTreeUpdater* updater, ::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method TickSchedulingUpdaters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TickSchedulingUpdaters();

  /// @brief Method TimeSinceStartupMs, addr 0x726b6ec, size 0x34, virtual false, abstract: false, final false
  inline int64_t TimeSinceStartupMs();

  /// @brief Method TimeSinceStartupSeconds, addr 0x726b880, size 0x190, virtual false, abstract: false, final false
  inline double_t TimeSinceStartupSeconds();

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x726c668, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x726c66c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UpdateAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateBindings();

  /// @brief Method UpdateDataBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateDataBinding();

  /// @brief Method UpdateElementUnderPointers, addr 0x726c42c, size 0x23c, virtual false, abstract: false, final false
  inline bool UpdateElementUnderPointers();

  /// @brief Method UpdateForRepaint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateForRepaint();

  /// @brief Method ValidateLayout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ValidateLayout();

  constexpr ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* const& __cordl_internal_get_CreateMenuFunctor() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>*& __cordl_internal_get_CreateMenuFunctor();

  constexpr ::UnityEngine::UIElements::PanelClearSettings const& __cordl_internal_get__clearSettings_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::PanelClearSettings& __cordl_internal_get__clearSettings_k__BackingField();

  constexpr ::UnityEngine::UIElements::ContextualMenuManager* const& __cordl_internal_get__contextualMenuManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ContextualMenuManager*& __cordl_internal_get__contextualMenuManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::ICursorManager* const& __cordl_internal_get__cursorManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ICursorManager*& __cordl_internal_get__cursorManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::DataBindingManager* const& __cordl_internal_get__dataBindingManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DataBindingManager*& __cordl_internal_get__dataBindingManager_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__duringLayoutPhase_k__BackingField() const;

  constexpr bool& __cordl_internal_get__duringLayoutPhase_k__BackingField();

  constexpr float_t const& __cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField();

  constexpr ::UnityEngine::UIElements::RepaintData* const& __cordl_internal_get__repaintData_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::RepaintData*& __cordl_internal_get__repaintData_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_atlasChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_atlasChanged();

  constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel*>* const& __cordl_internal_get_beforeUpdate() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel*>*& __cordl_internal_get_beforeUpdate();

  constexpr ::UnityEngine::UIElements::HierarchyEvent* const& __cordl_internal_get_hierarchyChanged() const;

  constexpr ::UnityEngine::UIElements::HierarchyEvent*& __cordl_internal_get_hierarchyChanged();

  constexpr ::System::Action* const& __cordl_internal_get_isFlatChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_isFlatChanged();

  constexpr ::UnityEngine::UIElements::Layout::LayoutConfig const& __cordl_internal_get_layoutConfig() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutConfig& __cordl_internal_get_layoutConfig();

  constexpr bool const& __cordl_internal_get_m_IsFlat() const;

  constexpr bool& __cordl_internal_get_m_IsFlat();

  constexpr float_t const& __cordl_internal_get_m_PixelsPerPoint() const;

  constexpr float_t& __cordl_internal_get_m_PixelsPerPoint();

  constexpr float_t const& __cordl_internal_get_m_Scale() const;

  constexpr float_t& __cordl_internal_get_m_Scale();

  constexpr ::UnityEngine::UIElements::TimerEventScheduler* const& __cordl_internal_get_m_Scheduler() const;

  constexpr ::UnityEngine::UIElements::TimerEventScheduler*& __cordl_internal_get_m_Scheduler();

  constexpr ::UnityEngine::UIElements::TimeFunction* const& __cordl_internal_get_m_TimeSinceStartupFunc() const;

  constexpr ::UnityEngine::UIElements::TimeFunction*& __cordl_internal_get_m_TimeSinceStartupFunc();

  constexpr ::UnityEngine::UIElements::ElementUnderPointer* const& __cordl_internal_get_m_TopElementUnderPointers() const;

  constexpr ::UnityEngine::UIElements::ElementUnderPointer*& __cordl_internal_get_m_TopElementUnderPointers();

  constexpr ::UnityEngine::UIElements::UIElementsBridge* const& __cordl_internal_get_m_UIElementsBridge() const;

  constexpr ::UnityEngine::UIElements::UIElementsBridge*& __cordl_internal_get_m_UIElementsBridge();

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* const& __cordl_internal_get_panelDisposed() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& __cordl_internal_get_panelDisposed();

  constexpr ::UnityEngine::UIElements::IPanelRenderer* const& __cordl_internal_get_panelRenderer() const;

  constexpr ::UnityEngine::UIElements::IPanelRenderer*& __cordl_internal_get_panelRenderer();

  constexpr ::System::Lazy_1<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::TextElement*>*>* const& __cordl_internal_get_textElementRegistry() const;

  constexpr ::System::Lazy_1<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::TextElement*>*>*& __cordl_internal_get_textElementRegistry();

  constexpr void __cordl_internal_set_CreateMenuFunctor(::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* value);

  constexpr void __cordl_internal_set__clearSettings_k__BackingField(::UnityEngine::UIElements::PanelClearSettings value);

  constexpr void __cordl_internal_set__contextualMenuManager_k__BackingField(::UnityEngine::UIElements::ContextualMenuManager* value);

  constexpr void __cordl_internal_set__cursorManager_k__BackingField(::UnityEngine::UIElements::ICursorManager* value);

  constexpr void __cordl_internal_set__dataBindingManager_k__BackingField(::UnityEngine::UIElements::DataBindingManager* value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__duringLayoutPhase_k__BackingField(bool value);

  constexpr void __cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__repaintData_k__BackingField(::UnityEngine::UIElements::RepaintData* value);

  constexpr void __cordl_internal_set_atlasChanged(::System::Action* value);

  constexpr void __cordl_internal_set_beforeUpdate(::System::Action_1<::UnityEngine::UIElements::IPanel*>* value);

  constexpr void __cordl_internal_set_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  constexpr void __cordl_internal_set_isFlatChanged(::System::Action* value);

  constexpr void __cordl_internal_set_layoutConfig(::UnityEngine::UIElements::Layout::LayoutConfig value);

  constexpr void __cordl_internal_set_m_IsFlat(bool value);

  constexpr void __cordl_internal_set_m_PixelsPerPoint(float_t value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  constexpr void __cordl_internal_set_m_Scheduler(::UnityEngine::UIElements::TimerEventScheduler* value);

  constexpr void __cordl_internal_set_m_TimeSinceStartupFunc(::UnityEngine::UIElements::TimeFunction* value);

  constexpr void __cordl_internal_set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer* value);

  constexpr void __cordl_internal_set_m_UIElementsBridge(::UnityEngine::UIElements::UIElementsBridge* value);

  constexpr void __cordl_internal_set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  constexpr void __cordl_internal_set_panelRenderer(::UnityEngine::UIElements::IPanelRenderer* value);

  constexpr void __cordl_internal_set_textElementRegistry(::System::Lazy_1<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::TextElement*>*>* value);

  /// @brief Method .ctor, addr 0x726aeac, size 0x270, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_atlasChanged, addr 0x726c124, size 0xac, virtual false, abstract: false, final false
  inline void add_atlasChanged(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_hierarchyChanged, addr 0x726c298, size 0xac, virtual false, abstract: false, final false
  inline void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// [CompilerGenerated]
  /// @brief Method add_isFlatChanged, addr 0x726be78, size 0xac, virtual false, abstract: false, final false
  inline void add_isFlatChanged(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_panelDisposed, addr 0x726acd4, size 0xc0, virtual false, abstract: false, final false
  inline void add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  static inline ::UnityEngine::Vector2 getStaticF_s_OutsidePanelCoordinates();

  /// @brief Method get_IMGUIContainersCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_IMGUIContainersCount();

  /// @brief Method get_IMGUIEventInterests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// @brief Method get_TimeSinceStartupFunc, addr 0x726b878, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeFunction* get_TimeSinceStartupFunc();

  /// @brief Method get_atlas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// [CompilerGenerated]
  /// @brief Method get_clearSettings, addr 0x726b4a4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelClearSettings get_clearSettings();

  /// @brief Method get_contextType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// [CompilerGenerated]
  /// @brief Method get_contextualMenuManager, addr 0x726b544, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::ContextualMenuManager* get_contextualMenuManager();

  /// [CompilerGenerated]
  /// @brief Method get_cursorManager, addr 0x726b534, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICursorManager* get_cursorManager();

  /// [CompilerGenerated]
  /// @brief Method get_dataBindingManager, addr 0x726b554, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager* get_dataBindingManager();

  /// @brief Method get_dispatcher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// [CompilerGenerated]
  /// @brief Method get_disposed, addr 0x726bac0, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// [CompilerGenerated]
  /// @brief Method get_duringLayoutPhase, addr 0x726b4cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_duringLayoutPhase();

  /// @brief Method get_focusController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_getViewDataDictionary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_hierarchyVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_hierarchyVersion();

  /// @brief Method get_isDirty, addr 0x726b4dc, size 0x48, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_isFlat, addr 0x726bfd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFlat();

  /// @brief Method get_ownerObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> get_ownerObject();

  /// [CompilerGenerated]
  /// @brief Method get_referenceSpritePixelsPerUnit, addr 0x726b494, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceSpritePixelsPerUnit();

  /// [CompilerGenerated]
  /// @brief Method get_repaintData, addr 0x726b524, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::RepaintData* get_repaintData();

  /// @brief Method get_repaintVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_repaintVersion();

  /// @brief Method get_rootIMGUIContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// @brief Method get_saveViewData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_scale, addr 0x726b344, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_scaledPixelsPerPoint, addr 0x726b484, size 0x10, virtual true, abstract: false, final true
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_scheduler, addr 0x726b720, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimerEventScheduler* get_scheduler();

  /// @brief Method get_styleAnimationSystem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method get_uiElementsBridge, addr 0x726ae54, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIElementsBridge* get_uiElementsBridge();

  /// @brief Method get_version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_version();

  /// @brief Method get_visualTree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IPanel"
  constexpr ::UnityEngine::UIElements::IPanel* i___UnityEngine__UIElements__IPanel() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_atlasChanged, addr 0x726c1d0, size 0xac, virtual false, abstract: false, final false
  inline void remove_atlasChanged(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_hierarchyChanged, addr 0x726c344, size 0xac, virtual false, abstract: false, final false
  inline void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// [CompilerGenerated]
  /// @brief Method remove_isFlatChanged, addr 0x726bf24, size 0xac, virtual false, abstract: false, final false
  inline void remove_isFlatChanged(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_panelDisposed, addr 0x726ad94, size 0xc0, virtual false, abstract: false, final false
  inline void remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  static inline void setStaticF_s_OutsidePanelCoordinates(::UnityEngine::Vector2 value);

  /// @brief Method set_IMGUIContainersCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// @brief Method set_IMGUIEventInterests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method set_atlas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// [CompilerGenerated]
  /// @brief Method set_clearSettings, addr 0x726b4b8, size 0x14, virtual false, abstract: false, final false
  inline void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value);

  /// [CompilerGenerated]
  /// @brief Method set_contextualMenuManager, addr 0x726b54c, size 0x8, virtual false, abstract: false, final false
  inline void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// [CompilerGenerated]
  /// @brief Method set_cursorManager, addr 0x726b53c, size 0x8, virtual true, abstract: false, final false
  inline void set_cursorManager(::UnityEngine::UIElements::ICursorManager* value);

  /// [CompilerGenerated]
  /// @brief Method set_dataBindingManager, addr 0x726b55c, size 0x8, virtual true, abstract: false, final false
  inline void set_dataBindingManager(::UnityEngine::UIElements::DataBindingManager* value);

  /// @brief Method set_dispatcher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// [CompilerGenerated]
  /// @brief Method set_disposed, addr 0x726bac8, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_duringLayoutPhase, addr 0x726b4d4, size 0x8, virtual false, abstract: false, final false
  inline void set_duringLayoutPhase(bool value);

  /// @brief Method set_focusController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method set_isFlat, addr 0x726bfd8, size 0x44, virtual false, abstract: false, final false
  inline void set_isFlat(bool value);

  /// @brief Method set_ownerObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// [CompilerGenerated]
  /// @brief Method set_referenceSpritePixelsPerUnit, addr 0x726b49c, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceSpritePixelsPerUnit(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_repaintData, addr 0x726b52c, size 0x8, virtual true, abstract: false, final false
  inline void set_repaintData(::UnityEngine::UIElements::RepaintData* value);

  /// @brief Method set_scale, addr 0x726b34c, size 0x138, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method set_styleAnimationSystem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualElementPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualElementPanel(BaseVisualElementPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualElementPanel(BaseVisualElementPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4687 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field panelDisposed, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelDisposed;

  /// @brief Field m_UIElementsBridge, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIElementsBridge* ___m_UIElementsBridge;

  /// @brief Field m_Scale, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field layoutConfig, offset: 0x28, size: 0x40, def value: None
  ::UnityEngine::UIElements::Layout::LayoutConfig ___layoutConfig;

  /// @brief Field m_PixelsPerPoint, offset: 0x68, size: 0x4, def value: None
  float_t ___m_PixelsPerPoint;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset: 0x6c, size: 0x4, def value: None
  float_t ____referenceSpritePixelsPerUnit_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <clearSettings>k__BackingField, offset: 0x70, size: 0x14, def value: None
  ::UnityEngine::UIElements::PanelClearSettings ____clearSettings_k__BackingField;

  /// @brief Field panelRenderer, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanelRenderer* ___panelRenderer;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <duringLayoutPhase>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____duringLayoutPhase_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <repaintData>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepaintData* ____repaintData_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <cursorManager>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICursorManager* ____cursorManager_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <contextualMenuManager>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ____contextualMenuManager_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <dataBindingManager>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager* ____dataBindingManager_k__BackingField;

  /// @brief Field m_Scheduler, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TimerEventScheduler* ___m_Scheduler;

  /// @brief Field m_TimeSinceStartupFunc, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TimeFunction* ___m_TimeSinceStartupFunc;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <disposed>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field m_TopElementUnderPointers, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ElementUnderPointer* ___m_TopElementUnderPointers;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field isFlatChanged, offset: 0xd8, size: 0x8, def value: None
  ::System::Action* ___isFlatChanged;

  /// @brief Field m_IsFlat, offset: 0xe0, size: 0x1, def value: None
  bool ___m_IsFlat;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field atlasChanged, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___atlasChanged;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field hierarchyChanged, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyEvent* ___hierarchyChanged;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field beforeUpdate, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::IPanel*>* ___beforeUpdate;

  /// @brief Field textElementRegistry, offset: 0x100, size: 0x8, def value: None
  ::System::Lazy_1<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::TextElement*>*>* ___textElementRegistry;

  /// @brief Field CreateMenuFunctor, offset: 0x108, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::AbstractGenericMenu*>* ___CreateMenuFunctor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___panelDisposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_UIElementsBridge) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_Scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___layoutConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_PixelsPerPoint) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____referenceSpritePixelsPerUnit_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____clearSettings_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___panelRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____duringLayoutPhase_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____repaintData_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____cursorManager_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____contextualMenuManager_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____dataBindingManager_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_Scheduler) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_TimeSinceStartupFunc) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____disposed_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_TopElementUnderPointers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___isFlatChanged) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_IsFlat) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___atlasChanged) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___hierarchyChanged) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___beforeUpdate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___textElementRegistry) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___CreateMenuFunctor) == 0x108, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseVisualElementPanel) == 0x110, "Size mismatch!");

} // namespace UnityEngine::UIElements
