#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualElementPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfig_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualElementPanel)
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
class IDisposable;
}
namespace UnityEngine::UIElements {
class AtlasBase;
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
class IScheduler;
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
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualElementPanel);
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutConfig, UnityEngine.UIElements.PanelClearSettings
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualElementPanel
class CORDL_TYPE BaseVisualElementPanel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests)) ::UnityEngine::EventInterests IMGUIEventInterests;

  /// @brief Field <clearSettings>k__BackingField, offset 0x60, size 0x14
  __declspec(property(get = __cordl_internal_get__clearSettings_k__BackingField,
                      put = __cordl_internal_set__clearSettings_k__BackingField)) ::UnityEngine::UIElements::PanelClearSettings _clearSettings_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__contextualMenuManager_k__BackingField,
                      put = __cordl_internal_set__contextualMenuManager_k__BackingField)) ::UnityEngine::UIElements::ContextualMenuManager* _contextualMenuManager_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorManager_k__BackingField,
                      put = __cordl_internal_set__cursorManager_k__BackingField)) ::UnityEngine::UIElements::ICursorManager* _cursorManager_k__BackingField;

  /// @brief Field <dataBindingManager>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__dataBindingManager_k__BackingField,
                      put = __cordl_internal_set__dataBindingManager_k__BackingField)) ::UnityEngine::UIElements::DataBindingManager* _dataBindingManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__duringLayoutPhase_k__BackingField, put = __cordl_internal_set__duringLayoutPhase_k__BackingField)) bool _duringLayoutPhase_k__BackingField;

  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField,
                      put = __cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField)) float_t _referenceSpritePixelsPerUnit_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__repaintData_k__BackingField,
                      put = __cordl_internal_set__repaintData_k__BackingField)) ::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  /// @brief Field atlasChanged, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_atlasChanged, put = __cordl_internal_set_atlasChanged)) ::System::Action* atlasChanged;

  /// @brief Field beforeUpdate, offset 0xd8, size 0x8
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

  /// @brief Field hierarchyChanged, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_hierarchyChanged, put = __cordl_internal_set_hierarchyChanged)) ::UnityEngine::UIElements::HierarchyEvent* hierarchyChanged;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  __declspec(property(get = get_isFlat, put = set_isFlat)) bool isFlat;

  /// @brief Field isFlatChanged, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_isFlatChanged, put = __cordl_internal_set_isFlatChanged)) ::System::Action* isFlatChanged;

  /// @brief Field layoutConfig, offset 0x28, size 0x30
  __declspec(property(get = __cordl_internal_get_layoutConfig, put = __cordl_internal_set_layoutConfig)) ::UnityEngine::UIElements::Layout::LayoutConfig layoutConfig;

  /// @brief Field m_IsFlat, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFlat, put = __cordl_internal_set_m_IsFlat)) bool m_IsFlat;

  /// @brief Field m_PixelsPerPoint, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerPoint, put = __cordl_internal_set_m_PixelsPerPoint)) float_t m_PixelsPerPoint;

  /// @brief Field m_Scale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_TopElementUnderPointers, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TopElementUnderPointers,
                      put = __cordl_internal_set_m_TopElementUnderPointers)) ::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers;

  /// @brief Field m_UIElementsBridge, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIElementsBridge, put = __cordl_internal_set_m_UIElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* m_UIElementsBridge;

  __declspec(property(get = get_ownerObject, put = set_ownerObject)) ::UnityW<::UnityEngine::ScriptableObject> ownerObject;

  /// @brief Field panelDisposed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panelDisposed, put = __cordl_internal_set_panelDisposed)) ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelDisposed;

  /// @brief Field panelRenderer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_panelRenderer, put = __cordl_internal_set_panelRenderer)) ::UnityEngine::UIElements::IPanelRenderer* panelRenderer;

  __declspec(property(get = get_referenceSpritePixelsPerUnit, put = set_referenceSpritePixelsPerUnit)) float_t referenceSpritePixelsPerUnit;

  __declspec(property(get = get_repaintData, put = set_repaintData)) ::UnityEngine::UIElements::RepaintData* repaintData;

  __declspec(property(get = get_rootIMGUIContainer)) ::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  __declspec(property(get = get_saveViewData)) ::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_scheduler)) ::UnityEngine::UIElements::IScheduler* scheduler;

  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem)) ::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  __declspec(property(get = get_uiElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* uiElementsBridge;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
  constexpr operator ::UnityEngine::UIElements::IPanel*() noexcept;

  /// @brief Method ApplyStyles, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyStyles();

  /// @brief Method ClearCachedElementUnderPointer, addr 0x6bec7a0, size 0x24, virtual false, abstract: false, final false
  inline void ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method CommitElementUnderPointers, addr 0x6bec7c4, size 0x5c, virtual false, abstract: false, final false
  inline void CommitElementUnderPointers();

  /// @brief Method Dispose, addr 0x6bec0d4, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6bec148, size 0x1e8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetTopElementUnderPointer, addr 0x6bec4c4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId);

  /// @brief Method GetUpdater, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method InvokeAtlasChanged, addr 0x6becbe0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAtlasChanged();

  /// @brief Method InvokeBeforeUpdate, addr 0x6becd70, size 0x20, virtual false, abstract: false, final false
  inline void InvokeBeforeUpdate();

  /// @brief Method InvokeHierarchyChanged, addr 0x6becd54, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType,
                                     ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel* New_ctor();

  /// @brief Method OnVersionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag);

  /// @brief Method Pick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method PickAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method RecomputeTopElementUnderPointer, addr 0x6bec4dc, size 0x2c4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method Render, addr 0x6becf90, size 0xa8, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method Repaint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method SendEvent, addr 0x6bec3d0, size 0xe4, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SetSpecializedHierarchyFlagsUpdater, addr 0x6bec980, size 0x108, virtual false, abstract: false, final false
  inline void SetSpecializedHierarchyFlagsUpdater();

  /// @brief Method SetUpdater, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetUpdater(::UnityEngine::UIElements::IVisualTreeUpdater* updater, ::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x6becf88, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x6becf8c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UpdateAnimations, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBindings();

  /// @brief Method UpdateElementUnderPointers, addr 0x6becd90, size 0x1f8, virtual false, abstract: false, final false
  inline void UpdateElementUnderPointers();

  /// @brief Method ValidateFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ValidateFocus();

  /// @brief Method ValidateLayout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ValidateLayout();

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

  constexpr ::UnityEngine::UIElements::ElementUnderPointer* const& __cordl_internal_get_m_TopElementUnderPointers() const;

  constexpr ::UnityEngine::UIElements::ElementUnderPointer*& __cordl_internal_get_m_TopElementUnderPointers();

  constexpr ::UnityEngine::UIElements::UIElementsBridge* const& __cordl_internal_get_m_UIElementsBridge() const;

  constexpr ::UnityEngine::UIElements::UIElementsBridge*& __cordl_internal_get_m_UIElementsBridge();

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* const& __cordl_internal_get_panelDisposed() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& __cordl_internal_get_panelDisposed();

  constexpr ::UnityEngine::UIElements::IPanelRenderer* const& __cordl_internal_get_panelRenderer() const;

  constexpr ::UnityEngine::UIElements::IPanelRenderer*& __cordl_internal_get_panelRenderer();

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

  constexpr void __cordl_internal_set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer* value);

  constexpr void __cordl_internal_set_m_UIElementsBridge(::UnityEngine::UIElements::UIElementsBridge* value);

  constexpr void __cordl_internal_set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  constexpr void __cordl_internal_set_panelRenderer(::UnityEngine::UIElements::IPanelRenderer* value);

  /// @brief Method .ctor, addr 0x6bebf80, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_atlasChanged, addr 0x6beca88, size 0xac, virtual false, abstract: false, final false
  inline void add_atlasChanged(::System::Action* value);

  /// @brief Method add_hierarchyChanged, addr 0x6becbfc, size 0xac, virtual false, abstract: false, final false
  inline void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method add_isFlatChanged, addr 0x6bec820, size 0xac, virtual false, abstract: false, final false
  inline void add_isFlatChanged(::System::Action* value);

  /// @brief Method add_panelDisposed, addr 0x6be57e0, size 0xc0, virtual false, abstract: false, final false
  inline void add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method get_IMGUIContainersCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_IMGUIContainersCount();

  /// @brief Method get_IMGUIEventInterests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// @brief Method get_atlas, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method get_clearSettings, addr 0x6bec358, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelClearSettings get_clearSettings();

  /// @brief Method get_contextType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method get_contextualMenuManager, addr 0x6bec3b0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::ContextualMenuManager* get_contextualMenuManager();

  /// @brief Method get_cursorManager, addr 0x6bec3a0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICursorManager* get_cursorManager();

  /// @brief Method get_dataBindingManager, addr 0x6bec3c0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager* get_dataBindingManager();

  /// @brief Method get_dispatcher, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// @brief Method get_disposed, addr 0x6bec4b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_duringLayoutPhase, addr 0x6bec380, size 0x8, virtual false, abstract: false, final false
  inline bool get_duringLayoutPhase();

  /// @brief Method get_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_getViewDataDictionary, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_hierarchyVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t get_hierarchyVersion();

  /// @brief Method get_isFlat, addr 0x6bec978, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFlat();

  /// @brief Method get_ownerObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> get_ownerObject();

  /// @brief Method get_referenceSpritePixelsPerUnit, addr 0x6bec348, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceSpritePixelsPerUnit();

  /// @brief Method get_repaintData, addr 0x6bec390, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::RepaintData* get_repaintData();

  /// @brief Method get_rootIMGUIContainer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// @brief Method get_saveViewData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_scale, addr 0x6bec330, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_scaledPixelsPerPoint, addr 0x6bec338, size 0x10, virtual true, abstract: false, final true
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_scheduler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IScheduler* get_scheduler();

  /// @brief Method get_styleAnimationSystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method get_uiElementsBridge, addr 0x6bebf28, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIElementsBridge* get_uiElementsBridge();

  /// @brief Method get_version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t get_version();

  /// @brief Method get_visualTree, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IPanel"
  constexpr ::UnityEngine::UIElements::IPanel* i___UnityEngine__UIElements__IPanel() noexcept;

  /// @brief Method remove_atlasChanged, addr 0x6becb34, size 0xac, virtual false, abstract: false, final false
  inline void remove_atlasChanged(::System::Action* value);

  /// @brief Method remove_hierarchyChanged, addr 0x6becca8, size 0xac, virtual false, abstract: false, final false
  inline void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method remove_isFlatChanged, addr 0x6bec8cc, size 0xac, virtual false, abstract: false, final false
  inline void remove_isFlatChanged(::System::Action* value);

  /// @brief Method remove_panelDisposed, addr 0x6be5a44, size 0xc0, virtual false, abstract: false, final false
  inline void remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method set_IMGUIContainersCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// @brief Method set_IMGUIEventInterests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method set_atlas, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method set_clearSettings, addr 0x6bec36c, size 0x14, virtual false, abstract: false, final false
  inline void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value);

  /// @brief Method set_contextualMenuManager, addr 0x6bec3b8, size 0x8, virtual false, abstract: false, final false
  inline void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// @brief Method set_cursorManager, addr 0x6bec3a8, size 0x8, virtual true, abstract: false, final false
  inline void set_cursorManager(::UnityEngine::UIElements::ICursorManager* value);

  /// @brief Method set_dataBindingManager, addr 0x6bec3c8, size 0x8, virtual true, abstract: false, final false
  inline void set_dataBindingManager(::UnityEngine::UIElements::DataBindingManager* value);

  /// @brief Method set_dispatcher, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// @brief Method set_disposed, addr 0x6bec4bc, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_duringLayoutPhase, addr 0x6bec388, size 0x8, virtual false, abstract: false, final false
  inline void set_duringLayoutPhase(bool value);

  /// @brief Method set_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method set_isFlat, addr 0x6be179c, size 0x44, virtual false, abstract: false, final false
  inline void set_isFlat(bool value);

  /// @brief Method set_ownerObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_referenceSpritePixelsPerUnit, addr 0x6bec350, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceSpritePixelsPerUnit(float_t value);

  /// @brief Method set_repaintData, addr 0x6bec398, size 0x8, virtual true, abstract: false, final false
  inline void set_repaintData(::UnityEngine::UIElements::RepaintData* value);

  /// @brief Method set_scale, addr 0x6be162c, size 0x138, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method set_styleAnimationSystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualElementPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualElementPanel(BaseVisualElementPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualElementPanel(BaseVisualElementPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4643 };

  /// @brief Field panelDisposed, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelDisposed;

  /// @brief Field m_UIElementsBridge, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIElementsBridge* ___m_UIElementsBridge;

  /// @brief Field m_Scale, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field layoutConfig, offset: 0x28, size: 0x30, def value: None
  ::UnityEngine::UIElements::Layout::LayoutConfig ___layoutConfig;

  /// @brief Field m_PixelsPerPoint, offset: 0x58, size: 0x4, def value: None
  float_t ___m_PixelsPerPoint;

  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____referenceSpritePixelsPerUnit_k__BackingField;

  /// @brief Field <clearSettings>k__BackingField, offset: 0x60, size: 0x14, def value: None
  ::UnityEngine::UIElements::PanelClearSettings ____clearSettings_k__BackingField;

  /// @brief Field panelRenderer, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanelRenderer* ___panelRenderer;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset: 0x80, size: 0x1, def value: None
  bool ____duringLayoutPhase_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepaintData* ____repaintData_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICursorManager* ____cursorManager_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ____contextualMenuManager_k__BackingField;

  /// @brief Field <dataBindingManager>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBindingManager* ____dataBindingManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field m_TopElementUnderPointers, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ElementUnderPointer* ___m_TopElementUnderPointers;

  /// @brief Field isFlatChanged, offset: 0xb8, size: 0x8, def value: None
  ::System::Action* ___isFlatChanged;

  /// @brief Field m_IsFlat, offset: 0xc0, size: 0x1, def value: None
  bool ___m_IsFlat;

  /// @brief Field atlasChanged, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___atlasChanged;

  /// @brief Field hierarchyChanged, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyEvent* ___hierarchyChanged;

  /// @brief Field beforeUpdate, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::IPanel*>* ___beforeUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___panelDisposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_UIElementsBridge) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_Scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___layoutConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_PixelsPerPoint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____referenceSpritePixelsPerUnit_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____clearSettings_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___panelRenderer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____duringLayoutPhase_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____repaintData_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____cursorManager_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____contextualMenuManager_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____dataBindingManager_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____disposed_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_TopElementUnderPointers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___isFlatChanged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_IsFlat) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___atlasChanged) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___hierarchyChanged) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___beforeUpdate) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualElementPanel, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualElementPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualElementPanel*, "UnityEngine.UIElements", "BaseVisualElementPanel");
