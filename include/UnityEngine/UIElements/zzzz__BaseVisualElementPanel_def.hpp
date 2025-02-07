#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualElementPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualElementPanel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
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
class IMGUIContainer;
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
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine {
struct EventInterests;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
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
// Dependencies System.IDisposable, System.Object, UnityEngine.UIElements.IGroupBox, UnityEngine.UIElements.IPanel, UnityEngine.UIElements.PanelClearSettings
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualElementPanel
class CORDL_TYPE BaseVisualElementPanel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests)) ::UnityEngine::EventInterests IMGUIEventInterests;

  /// @brief Field <clearSettings>k__BackingField, offset 0x38, size 0x14
  __declspec(property(get = __cordl_internal_get__clearSettings_k__BackingField,
                      put = __cordl_internal_set__clearSettings_k__BackingField)) ::UnityEngine::UIElements::PanelClearSettings _clearSettings_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__contextualMenuManager_k__BackingField,
                      put = __cordl_internal_set__contextualMenuManager_k__BackingField)) ::UnityEngine::UIElements::ContextualMenuManager* _contextualMenuManager_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorManager_k__BackingField,
                      put = __cordl_internal_set__cursorManager_k__BackingField)) ::UnityEngine::UIElements::ICursorManager* _cursorManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__duringLayoutPhase_k__BackingField, put = __cordl_internal_set__duringLayoutPhase_k__BackingField)) bool _duringLayoutPhase_k__BackingField;

  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField,
                      put = __cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField)) float_t _referenceSpritePixelsPerUnit_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__repaintData_k__BackingField,
                      put = __cordl_internal_set__repaintData_k__BackingField)) ::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  /// @brief Field atlasChanged, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_atlasChanged, put = __cordl_internal_set_atlasChanged)) ::System::Action* atlasChanged;

  /// @brief Field beforeUpdate, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeUpdate, put = __cordl_internal_set_beforeUpdate)) ::System::Action_1<::UnityEngine::UIElements::IPanel*>* beforeUpdate;

  __declspec(property(get = get_clearSettings, put = set_clearSettings)) ::UnityEngine::UIElements::PanelClearSettings clearSettings;

  __declspec(property(get = get_contextType, put = set_contextType)) ::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_contextualMenuManager, put = set_contextualMenuManager)) ::UnityEngine::UIElements::ContextualMenuManager* contextualMenuManager;

  __declspec(property(get = get_cursorManager, put = set_cursorManager)) ::UnityEngine::UIElements::ICursorManager* cursorManager;

  __declspec(property(get = get_dispatcher, put = set_dispatcher)) ::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_duringLayoutPhase, put = set_duringLayoutPhase)) bool duringLayoutPhase;

  __declspec(property(get = get_focusController, put = set_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_getViewDataDictionary)) ::UnityEngine::UIElements::GetViewDataDictionary* getViewDataDictionary;

  /// @brief Field hierarchyChanged, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_hierarchyChanged, put = __cordl_internal_set_hierarchyChanged)) ::UnityEngine::UIElements::HierarchyEvent* hierarchyChanged;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  /// @brief Field m_PixelsPerPoint, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerPoint, put = __cordl_internal_set_m_PixelsPerPoint)) float_t m_PixelsPerPoint;

  /// @brief Field m_Scale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_TopElementUnderPointers, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TopElementUnderPointers,
                      put = __cordl_internal_set_m_TopElementUnderPointers)) ::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers;

  /// @brief Field m_UIElementsBridge, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIElementsBridge, put = __cordl_internal_set_m_UIElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* m_UIElementsBridge;

  __declspec(property(get = get_ownerObject, put = set_ownerObject)) ::UnityW<::UnityEngine::ScriptableObject> ownerObject;

  /// @brief Field panelDisposed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panelDisposed, put = __cordl_internal_set_panelDisposed)) ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelDisposed;

  __declspec(property(put = set_pixelsPerPoint)) float_t pixelsPerPoint;

  __declspec(property(get = get_referenceSpritePixelsPerUnit, put = set_referenceSpritePixelsPerUnit)) float_t referenceSpritePixelsPerUnit;

  __declspec(property(get = get_repaintData, put = set_repaintData)) ::UnityEngine::UIElements::RepaintData* repaintData;

  __declspec(property(get = get_rootIMGUIContainer)) ::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  __declspec(property(get = get_saveViewData)) ::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_scheduler)) ::UnityEngine::UIElements::IScheduler* scheduler;

  __declspec(property(get = get_standardShader)) ::UnityW<::UnityEngine::Shader> standardShader;

  /// @brief Field standardShaderChanged, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_standardShaderChanged, put = __cordl_internal_set_standardShaderChanged)) ::System::Action* standardShaderChanged;

  __declspec(property(get = get_standardWorldSpaceShader)) ::UnityW<::UnityEngine::Shader> standardWorldSpaceShader;

  /// @brief Field standardWorldSpaceShaderChanged, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_standardWorldSpaceShaderChanged, put = __cordl_internal_set_standardWorldSpaceShaderChanged)) ::System::Action* standardWorldSpaceShaderChanged;

  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem)) ::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  __declspec(property(get = get_uiElementsBridge)) ::UnityEngine::UIElements::UIElementsBridge* uiElementsBridge;

  /// @brief Field updateMaterial, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_updateMaterial, put = __cordl_internal_set_updateMaterial)) ::System::Action_1<::UnityW<::UnityEngine::Material>>* updateMaterial;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Field yogaConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_yogaConfig, put = __cordl_internal_set_yogaConfig)) ::UnityEngine::Yoga::YogaConfig* yogaConfig;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
  constexpr operator ::UnityEngine::UIElements::IPanel*() noexcept;

  /// @brief Method ApplyStyles, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyStyles();

  /// @brief Method ClearCachedElementUnderPointer, addr 0x4a46af0, size 0x28, virtual false, abstract: false, final false
  inline void ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method CommitElementUnderPointers, addr 0x4a46b18, size 0x5c, virtual false, abstract: false, final false
  inline void CommitElementUnderPointers();

  /// @brief Method Dispose, addr 0x4a46468, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x4a464d8, size 0x144, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetTopElementUnderPointer, addr 0x4a469a0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId);

  /// @brief Method GetUpdater, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method InvokeAtlasChanged, addr 0x4a46f24, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeAtlasChanged();

  /// @brief Method InvokeBeforeUpdate, addr 0x4a470b0, size 0x20, virtual false, abstract: false, final false
  inline void InvokeBeforeUpdate();

  /// @brief Method InvokeHierarchyChanged, addr 0x4a47094, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method InvokeUpdateMaterial, addr 0x4a46f40, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeUpdateMaterial(::UnityEngine::Material* mat);

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel* New_ctor();

  /// @brief Method OnVersionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag);

  /// @brief Method Pick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method PickAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method RecomputeTopElementUnderPointer, addr 0x4a469bc, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method Repaint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method SendEvent, addr 0x4a468c8, size 0xc4, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x4a472d0, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x4a472d4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method Update, addr 0x4a3e768, size 0x108, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnimations, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBindings();

  /// @brief Method UpdateElementUnderPointers, addr 0x4a470d0, size 0x200, virtual false, abstract: false, final false
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

  constexpr ::System::Action* const& __cordl_internal_get_standardShaderChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_standardShaderChanged();

  constexpr ::System::Action* const& __cordl_internal_get_standardWorldSpaceShaderChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_standardWorldSpaceShaderChanged();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_updateMaterial() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_updateMaterial();

  constexpr ::UnityEngine::Yoga::YogaConfig* const& __cordl_internal_get_yogaConfig() const;

  constexpr ::UnityEngine::Yoga::YogaConfig*& __cordl_internal_get_yogaConfig();

  constexpr void __cordl_internal_set__clearSettings_k__BackingField(::UnityEngine::UIElements::PanelClearSettings value);

  constexpr void __cordl_internal_set__contextualMenuManager_k__BackingField(::UnityEngine::UIElements::ContextualMenuManager* value);

  constexpr void __cordl_internal_set__cursorManager_k__BackingField(::UnityEngine::UIElements::ICursorManager* value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__duringLayoutPhase_k__BackingField(bool value);

  constexpr void __cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__repaintData_k__BackingField(::UnityEngine::UIElements::RepaintData* value);

  constexpr void __cordl_internal_set_atlasChanged(::System::Action* value);

  constexpr void __cordl_internal_set_beforeUpdate(::System::Action_1<::UnityEngine::UIElements::IPanel*>* value);

  constexpr void __cordl_internal_set_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  constexpr void __cordl_internal_set_m_PixelsPerPoint(float_t value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  constexpr void __cordl_internal_set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer* value);

  constexpr void __cordl_internal_set_m_UIElementsBridge(::UnityEngine::UIElements::UIElementsBridge* value);

  constexpr void __cordl_internal_set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  constexpr void __cordl_internal_set_standardShaderChanged(::System::Action* value);

  constexpr void __cordl_internal_set_standardWorldSpaceShaderChanged(::System::Action* value);

  constexpr void __cordl_internal_set_updateMaterial(::System::Action_1<::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_yogaConfig(::UnityEngine::Yoga::YogaConfig* value);

  /// @brief Method .ctor, addr 0x4a46340, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_atlasChanged, addr 0x4a46dec, size 0x9c, virtual false, abstract: false, final false
  inline void add_atlasChanged(::System::Action* value);

  /// @brief Method add_hierarchyChanged, addr 0x4a46f5c, size 0x9c, virtual false, abstract: false, final false
  inline void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method add_panelDisposed, addr 0x4a40320, size 0xb0, virtual false, abstract: false, final false
  inline void add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method add_standardShaderChanged, addr 0x4a46b7c, size 0x9c, virtual false, abstract: false, final false
  inline void add_standardShaderChanged(::System::Action* value);

  /// @brief Method add_standardWorldSpaceShaderChanged, addr 0x4a46cb4, size 0x9c, virtual false, abstract: false, final false
  inline void add_standardWorldSpaceShaderChanged(::System::Action* value);

  /// @brief Method get_IMGUIContainersCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_IMGUIContainersCount();

  /// @brief Method get_IMGUIEventInterests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// @brief Method get_atlas, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method get_clearSettings, addr 0x4a4685c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelClearSettings get_clearSettings();

  /// @brief Method get_contextType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method get_contextualMenuManager, addr 0x4a468b8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::ContextualMenuManager* get_contextualMenuManager();

  /// @brief Method get_cursorManager, addr 0x4a468a8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICursorManager* get_cursorManager();

  /// @brief Method get_dispatcher, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// @brief Method get_disposed, addr 0x4a4698c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_duringLayoutPhase, addr 0x4a46884, size 0x8, virtual false, abstract: false, final false
  inline bool get_duringLayoutPhase();

  /// @brief Method get_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_getViewDataDictionary, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_hierarchyVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t get_hierarchyVersion();

  /// @brief Method get_ownerObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> get_ownerObject();

  /// @brief Method get_referenceSpritePixelsPerUnit, addr 0x4a4684c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceSpritePixelsPerUnit();

  /// @brief Method get_repaintData, addr 0x4a46898, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::RepaintData* get_repaintData();

  /// @brief Method get_rootIMGUIContainer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// @brief Method get_saveViewData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_scale, addr 0x4a4661c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_scaledPixelsPerPoint, addr 0x4a46730, size 0x10, virtual false, abstract: false, final false
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_scheduler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IScheduler* get_scheduler();

  /// @brief Method get_standardShader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_standardShader();

  /// @brief Method get_standardWorldSpaceShader, addr 0x4a46b74, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_standardWorldSpaceShader();

  /// @brief Method get_styleAnimationSystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method get_uiElementsBridge, addr 0x4a462e4, size 0x5c, virtual false, abstract: false, final false
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

  /// @brief Method remove_atlasChanged, addr 0x4a46e88, size 0x9c, virtual false, abstract: false, final false
  inline void remove_atlasChanged(::System::Action* value);

  /// @brief Method remove_hierarchyChanged, addr 0x4a46ff8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method remove_panelDisposed, addr 0x4a40558, size 0xb0, virtual false, abstract: false, final false
  inline void remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method remove_standardShaderChanged, addr 0x4a46c18, size 0x9c, virtual false, abstract: false, final false
  inline void remove_standardShaderChanged(::System::Action* value);

  /// @brief Method remove_standardWorldSpaceShaderChanged, addr 0x4a46d50, size 0x9c, virtual false, abstract: false, final false
  inline void remove_standardWorldSpaceShaderChanged(::System::Action* value);

  /// @brief Method set_IMGUIContainersCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// @brief Method set_IMGUIEventInterests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method set_atlas, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method set_clearSettings, addr 0x4a46870, size 0x14, virtual false, abstract: false, final false
  inline void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value);

  /// @brief Method set_contextType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_contextType(::UnityEngine::UIElements::ContextType value);

  /// @brief Method set_contextualMenuManager, addr 0x4a468c0, size 0x8, virtual false, abstract: false, final false
  inline void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// @brief Method set_cursorManager, addr 0x4a468b0, size 0x8, virtual true, abstract: false, final false
  inline void set_cursorManager(::UnityEngine::UIElements::ICursorManager* value);

  /// @brief Method set_dispatcher, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// @brief Method set_disposed, addr 0x4a46994, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_duringLayoutPhase, addr 0x4a4688c, size 0xc, virtual false, abstract: false, final false
  inline void set_duringLayoutPhase(bool value);

  /// @brief Method set_focusController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method set_ownerObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_pixelsPerPoint, addr 0x4a46740, size 0x10c, virtual false, abstract: false, final false
  inline void set_pixelsPerPoint(float_t value);

  /// @brief Method set_referenceSpritePixelsPerUnit, addr 0x4a46854, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceSpritePixelsPerUnit(float_t value);

  /// @brief Method set_repaintData, addr 0x4a468a0, size 0x8, virtual true, abstract: false, final false
  inline void set_repaintData(::UnityEngine::UIElements::RepaintData* value);

  /// @brief Method set_scale, addr 0x4a46624, size 0x10c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6010 };

  /// @brief Field panelDisposed, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelDisposed;

  /// @brief Field m_UIElementsBridge, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIElementsBridge* ___m_UIElementsBridge;

  /// @brief Field m_Scale, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field yogaConfig, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaConfig* ___yogaConfig;

  /// @brief Field m_PixelsPerPoint, offset: 0x30, size: 0x4, def value: None
  float_t ___m_PixelsPerPoint;

  /// @brief Field <referenceSpritePixelsPerUnit>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____referenceSpritePixelsPerUnit_k__BackingField;

  /// @brief Field <clearSettings>k__BackingField, offset: 0x38, size: 0x14, def value: None
  ::UnityEngine::UIElements::PanelClearSettings ____clearSettings_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset: 0x4c, size: 0x1, def value: None
  bool ____duringLayoutPhase_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepaintData* ____repaintData_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICursorManager* ____cursorManager_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ____contextualMenuManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field m_TopElementUnderPointers, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::ElementUnderPointer* ___m_TopElementUnderPointers;

  /// @brief Field standardShaderChanged, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___standardShaderChanged;

  /// @brief Field standardWorldSpaceShaderChanged, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___standardWorldSpaceShaderChanged;

  /// @brief Field atlasChanged, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___atlasChanged;

  /// @brief Field updateMaterial, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Material>>* ___updateMaterial;

  /// @brief Field hierarchyChanged, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyEvent* ___hierarchyChanged;

  /// @brief Field beforeUpdate, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::IPanel*>* ___beforeUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___panelDisposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_UIElementsBridge) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_Scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___yogaConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_PixelsPerPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____referenceSpritePixelsPerUnit_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____clearSettings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____duringLayoutPhase_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____repaintData_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____cursorManager_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____contextualMenuManager_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ____disposed_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___m_TopElementUnderPointers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___standardShaderChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___standardWorldSpaceShaderChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___atlasChanged) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___updateMaterial) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___hierarchyChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualElementPanel, ___beforeUpdate) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualElementPanel, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualElementPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualElementPanel*, "UnityEngine.UIElements", "BaseVisualElementPanel");
