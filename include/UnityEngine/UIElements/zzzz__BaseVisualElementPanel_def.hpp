#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualElementPanel)
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class RepaintData;
}
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace UnityEngine {
struct EventInterests;
}
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class ICursorManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::UIElements {
class ElementUnderPointer;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualElementPanel);
// Type: UnityEngine.UIElements::BaseVisualElementPanel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6866))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6870))
// CS Name: ::UnityEngine.UIElements::BaseVisualElementPanel*
class CORDL_TYPE BaseVisualElementPanel : public ::System::Object {
public:
  // Declarations
  /// @brief Field panelDisposed, offset 0x10, size 0x8
  __declspec(property(get = __get_panelDisposed, put = __set_panelDisposed))::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelDisposed;

  /// @brief Field m_Scale, offset 0x18, size 0x4
  __declspec(property(get = __get_m_Scale, put = __set_m_Scale)) float_t m_Scale;

  /// @brief Field yogaConfig, offset 0x20, size 0x8
  __declspec(property(get = __get_yogaConfig, put = __set_yogaConfig))::UnityEngine::Yoga::YogaConfig* yogaConfig;

  /// @brief Field m_PixelsPerPoint, offset 0x28, size 0x4
  __declspec(property(get = __get_m_PixelsPerPoint, put = __set_m_PixelsPerPoint)) float_t m_PixelsPerPoint;

  /// @brief Field <clearSettings>k__BackingField, offset 0x2c, size 0x14
  __declspec(property(get = __get__clearSettings_k__BackingField, put = __set__clearSettings_k__BackingField))::UnityEngine::UIElements::PanelClearSettings _clearSettings_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __get__duringLayoutPhase_k__BackingField, put = __set__duringLayoutPhase_k__BackingField)) bool _duringLayoutPhase_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__repaintData_k__BackingField, put = __set__repaintData_k__BackingField))::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__cursorManager_k__BackingField, put = __set__cursorManager_k__BackingField))::UnityEngine::UIElements::ICursorManager* _cursorManager_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__contextualMenuManager_k__BackingField,
                      put = __set__contextualMenuManager_k__BackingField))::UnityEngine::UIElements::ContextualMenuManager* _contextualMenuManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field m_TopElementUnderPointers, offset 0x68, size 0x8
  __declspec(property(get = __get_m_TopElementUnderPointers, put = __set_m_TopElementUnderPointers))::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers;

  /// @brief Field standardShaderChanged, offset 0x70, size 0x8
  __declspec(property(get = __get_standardShaderChanged, put = __set_standardShaderChanged))::System::Action* standardShaderChanged;

  /// @brief Field standardWorldSpaceShaderChanged, offset 0x78, size 0x8
  __declspec(property(get = __get_standardWorldSpaceShaderChanged, put = __set_standardWorldSpaceShaderChanged))::System::Action* standardWorldSpaceShaderChanged;

  /// @brief Field atlasChanged, offset 0x80, size 0x8
  __declspec(property(get = __get_atlasChanged, put = __set_atlasChanged))::System::Action* atlasChanged;

  /// @brief Field updateMaterial, offset 0x88, size 0x8
  __declspec(property(get = __get_updateMaterial, put = __set_updateMaterial))::System::Action_1<::UnityEngine::Material*>* updateMaterial;

  /// @brief Field hierarchyChanged, offset 0x90, size 0x8
  __declspec(property(get = __get_hierarchyChanged, put = __set_hierarchyChanged))::UnityEngine::UIElements::HierarchyEvent* hierarchyChanged;

  /// @brief Field beforeUpdate, offset 0x98, size 0x8
  __declspec(property(get = __get_beforeUpdate, put = __set_beforeUpdate))::System::Action_1<::UnityEngine::UIElements::IPanel*>* beforeUpdate;

  __declspec(property(get = get_IMGUIEventInterests, put = set_IMGUIEventInterests))::UnityEngine::EventInterests IMGUIEventInterests;

  __declspec(property(get = get_ownerObject, put = set_ownerObject))::UnityEngine::ScriptableObject* ownerObject;

  __declspec(property(get = get_saveViewData))::UnityEngine::UIElements::SavePersistentViewData* saveViewData;

  __declspec(property(get = get_getViewDataDictionary))::UnityEngine::UIElements::GetViewDataDictionary* getViewDataDictionary;

  __declspec(property(get = get_IMGUIContainersCount, put = set_IMGUIContainersCount)) int32_t IMGUIContainersCount;

  __declspec(property(get = get_focusController, put = set_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_rootIMGUIContainer))::UnityEngine::UIElements::IMGUIContainer* rootIMGUIContainer;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(put = set_pixelsPerPoint)) float_t pixelsPerPoint;

  __declspec(property(get = get_scaledPixelsPerPoint)) float_t scaledPixelsPerPoint;

  __declspec(property(get = get_clearSettings, put = set_clearSettings))::UnityEngine::UIElements::PanelClearSettings clearSettings;

  __declspec(property(get = get_duringLayoutPhase, put = set_duringLayoutPhase)) bool duringLayoutPhase;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_hierarchyVersion)) uint32_t hierarchyVersion;

  __declspec(property(get = get_repaintData, put = set_repaintData))::UnityEngine::UIElements::RepaintData* repaintData;

  __declspec(property(get = get_cursorManager, put = set_cursorManager))::UnityEngine::UIElements::ICursorManager* cursorManager;

  __declspec(property(get = get_contextualMenuManager, put = set_contextualMenuManager))::UnityEngine::UIElements::ContextualMenuManager* contextualMenuManager;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  __declspec(property(get = get_dispatcher, put = set_dispatcher))::UnityEngine::UIElements::EventDispatcher* dispatcher;

  __declspec(property(get = get_scheduler))::UnityEngine::UIElements::IScheduler* scheduler;

  __declspec(property(get = get_styleAnimationSystem, put = set_styleAnimationSystem))::UnityEngine::UIElements::IStylePropertyAnimationSystem* styleAnimationSystem;

  __declspec(property(get = get_contextType, put = set_contextType))::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_standardShader))::UnityEngine::Shader* standardShader;

  __declspec(property(get = get_standardWorldSpaceShader))::UnityEngine::Shader* standardWorldSpaceShader;

  __declspec(property(get = get_atlas, put = set_atlas))::UnityEngine::UIElements::AtlasBase* atlas;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
  constexpr operator ::UnityEngine::UIElements::IPanel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& __get_panelDisposed();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*> const& __get_panelDisposed() const;

  constexpr void __set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  constexpr float_t& __get_m_Scale();

  constexpr float_t const& __get_m_Scale() const;

  constexpr void __set_m_Scale(float_t value);

  constexpr ::UnityEngine::Yoga::YogaConfig*& __get_yogaConfig();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::YogaConfig*> const& __get_yogaConfig() const;

  constexpr void __set_yogaConfig(::UnityEngine::Yoga::YogaConfig* value);

  constexpr float_t& __get_m_PixelsPerPoint();

  constexpr float_t const& __get_m_PixelsPerPoint() const;

  constexpr void __set_m_PixelsPerPoint(float_t value);

  constexpr ::UnityEngine::UIElements::PanelClearSettings& __get__clearSettings_k__BackingField();

  constexpr ::UnityEngine::UIElements::PanelClearSettings const& __get__clearSettings_k__BackingField() const;

  constexpr void __set__clearSettings_k__BackingField(::UnityEngine::UIElements::PanelClearSettings value);

  constexpr bool& __get__duringLayoutPhase_k__BackingField();

  constexpr bool const& __get__duringLayoutPhase_k__BackingField() const;

  constexpr void __set__duringLayoutPhase_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::RepaintData*& __get__repaintData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::RepaintData*> const& __get__repaintData_k__BackingField() const;

  constexpr void __set__repaintData_k__BackingField(::UnityEngine::UIElements::RepaintData* value);

  constexpr ::UnityEngine::UIElements::ICursorManager*& __get__cursorManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ICursorManager*> const& __get__cursorManager_k__BackingField() const;

  constexpr void __set__cursorManager_k__BackingField(::UnityEngine::UIElements::ICursorManager* value);

  constexpr ::UnityEngine::UIElements::ContextualMenuManager*& __get__contextualMenuManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ContextualMenuManager*> const& __get__contextualMenuManager_k__BackingField() const;

  constexpr void __set__contextualMenuManager_k__BackingField(::UnityEngine::UIElements::ContextualMenuManager* value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::ElementUnderPointer*& __get_m_TopElementUnderPointers();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ElementUnderPointer*> const& __get_m_TopElementUnderPointers() const;

  constexpr void __set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer* value);

  constexpr ::System::Action*& __get_standardShaderChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_standardShaderChanged() const;

  constexpr void __set_standardShaderChanged(::System::Action* value);

  constexpr ::System::Action*& __get_standardWorldSpaceShaderChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_standardWorldSpaceShaderChanged() const;

  constexpr void __set_standardWorldSpaceShaderChanged(::System::Action* value);

  constexpr ::System::Action*& __get_atlasChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_atlasChanged() const;

  constexpr void __set_atlasChanged(::System::Action* value);

  constexpr ::System::Action_1<::UnityEngine::Material*>*& __get_updateMaterial();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Material*>*> const& __get_updateMaterial() const;

  constexpr void __set_updateMaterial(::System::Action_1<::UnityEngine::Material*>* value);

  constexpr ::UnityEngine::UIElements::HierarchyEvent*& __get_hierarchyChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::HierarchyEvent*> const& __get_hierarchyChanged() const;

  constexpr void __set_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel*>*& __get_beforeUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::IPanel*>*> const& __get_beforeUpdate() const;

  constexpr void __set_beforeUpdate(::System::Action_1<::UnityEngine::UIElements::IPanel*>* value);

  /// @brief Method get_IMGUIEventInterests addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::EventInterests get_IMGUIEventInterests();

  /// @brief Method set_IMGUIEventInterests addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_IMGUIEventInterests(::UnityEngine::EventInterests value);

  /// @brief Method get_ownerObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ScriptableObject* get_ownerObject();

  /// @brief Method set_ownerObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_ownerObject(::UnityEngine::ScriptableObject* value);

  /// @brief Method get_saveViewData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData();

  /// @brief Method get_getViewDataDictionary addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary();

  /// @brief Method get_IMGUIContainersCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_IMGUIContainersCount();

  /// @brief Method set_IMGUIContainersCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_IMGUIContainersCount(int32_t value);

  /// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method set_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method get_rootIMGUIContainer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer();

  /// @brief Method add_panelDisposed addr 0x2dc88e8 size 0xb0 virtual false final false
  inline void add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method remove_panelDisposed addr 0x2dc8998 size 0xb0 virtual false final false
  inline void remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  static inline ::UnityEngine::UIElements::BaseVisualElementPanel* New_ctor();

  /// @brief Method .ctor addr 0x2dc8a48 size 0xe8 virtual false final false
  inline void _ctor();

  /// @brief Method Dispose addr 0x2dc8b30 size 0x70 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2dc8ba0 size 0x13c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Repaint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method ValidateLayout addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ValidateLayout();

  /// @brief Method UpdateAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateAnimations();

  /// @brief Method UpdateBindings addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateBindings();

  /// @brief Method ApplyStyles addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ApplyStyles();

  /// @brief Method get_scale addr 0x2dc8cdc size 0x8 virtual false final false
  inline float_t get_scale();

  /// @brief Method set_scale addr 0x2dc8ce4 size 0x10c virtual false final false
  inline void set_scale(float_t value);

  /// @brief Method set_pixelsPerPoint addr 0x2dc8df0 size 0x10c virtual false final false
  inline void set_pixelsPerPoint(float_t value);

  /// @brief Method get_scaledPixelsPerPoint addr 0x2dc1834 size 0x10 virtual false final false
  inline float_t get_scaledPixelsPerPoint();

  /// @brief Method get_clearSettings addr 0x2dc8efc size 0x14 virtual false final false
  inline ::UnityEngine::UIElements::PanelClearSettings get_clearSettings();

  /// @brief Method set_clearSettings addr 0x2dc8f10 size 0x14 virtual false final false
  inline void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value);

  /// @brief Method get_duringLayoutPhase addr 0x2dc8f24 size 0x8 virtual false final false
  inline bool get_duringLayoutPhase();

  /// @brief Method set_duringLayoutPhase addr 0x2dc8f2c size 0xc virtual false final false
  inline void set_duringLayoutPhase(bool value);

  /// @brief Method get_version addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint32_t get_version();

  /// @brief Method get_hierarchyVersion addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint32_t get_hierarchyVersion();

  /// @brief Method OnVersionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag);

  /// @brief Method get_repaintData addr 0x2dc8f38 size 0x8 virtual true final false
  inline ::UnityEngine::UIElements::RepaintData* get_repaintData();

  /// @brief Method set_repaintData addr 0x2dc8f40 size 0x8 virtual true final false
  inline void set_repaintData(::UnityEngine::UIElements::RepaintData* value);

  /// @brief Method get_cursorManager addr 0x2dc8f48 size 0x8 virtual true final false
  inline ::UnityEngine::UIElements::ICursorManager* get_cursorManager();

  /// @brief Method set_cursorManager addr 0x2dc8f50 size 0x8 virtual true final false
  inline void set_cursorManager(::UnityEngine::UIElements::ICursorManager* value);

  /// @brief Method get_contextualMenuManager addr 0x2dc8f58 size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::ContextualMenuManager* get_contextualMenuManager();

  /// @brief Method set_contextualMenuManager addr 0x2dc8f60 size 0x8 virtual false final false
  inline void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// @brief Method get_visualTree addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Method get_dispatcher addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();

  /// @brief Method set_dispatcher addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value);

  /// @brief Method SendEvent addr 0x2dc8f68 size 0xc4 virtual false final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method get_scheduler addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IScheduler* get_scheduler();

  /// @brief Method get_styleAnimationSystem addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem();

  /// @brief Method set_styleAnimationSystem addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value);

  /// @brief Method get_contextType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method set_contextType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_contextType(::UnityEngine::UIElements::ContextType value);

  /// @brief Method Pick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);

  /// @brief Method PickAll addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method get_disposed addr 0x2dc902c size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2dc9034 size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method GetUpdater addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method GetTopElementUnderPointer addr 0x2dbe758 size 0x1c virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId);

  /// @brief Method RecomputeTopElementUnderPointer addr 0x2dc9040 size 0x134 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method ClearCachedElementUnderPointer addr 0x2dc9174 size 0x28 virtual false final false
  inline void ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method CommitElementUnderPointers addr 0x2dc919c size 0x5c virtual false final false
  inline void CommitElementUnderPointers();

  /// @brief Method get_standardShader addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Shader* get_standardShader();

  /// @brief Method get_standardWorldSpaceShader addr 0x2dc91f8 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_standardWorldSpaceShader();

  /// @brief Method add_standardShaderChanged addr 0x2dc9200 size 0x9c virtual false final false
  inline void add_standardShaderChanged(::System::Action* value);

  /// @brief Method remove_standardShaderChanged addr 0x2dc929c size 0x9c virtual false final false
  inline void remove_standardShaderChanged(::System::Action* value);

  /// @brief Method add_standardWorldSpaceShaderChanged addr 0x2dc9338 size 0x9c virtual false final false
  inline void add_standardWorldSpaceShaderChanged(::System::Action* value);

  /// @brief Method remove_standardWorldSpaceShaderChanged addr 0x2dc93d4 size 0x9c virtual false final false
  inline void remove_standardWorldSpaceShaderChanged(::System::Action* value);

  /// @brief Method add_atlasChanged addr 0x2dc9470 size 0x9c virtual false final false
  inline void add_atlasChanged(::System::Action* value);

  /// @brief Method remove_atlasChanged addr 0x2dc950c size 0x9c virtual false final false
  inline void remove_atlasChanged(::System::Action* value);

  /// @brief Method InvokeAtlasChanged addr 0x2dc95a8 size 0x1c virtual false final false
  inline void InvokeAtlasChanged();

  /// @brief Method get_atlas addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method set_atlas addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method InvokeUpdateMaterial addr 0x2dc95c4 size 0x1c virtual false final false
  inline void InvokeUpdateMaterial(::UnityEngine::Material* mat);

  /// @brief Method add_hierarchyChanged addr 0x2dc95e0 size 0x9c virtual false final false
  inline void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method remove_hierarchyChanged addr 0x2dc967c size 0x9c virtual false final false
  inline void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value);

  /// @brief Method InvokeHierarchyChanged addr 0x2dc9718 size 0x1c virtual false final false
  inline void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  /// @brief Method InvokeBeforeUpdate addr 0x2dc9734 size 0x20 virtual false final false
  inline void InvokeBeforeUpdate();

  /// @brief Method UpdateElementUnderPointers addr 0x2dba424 size 0x200 virtual false final false
  inline void UpdateElementUnderPointers();

  /// @brief Method Update addr 0x2dc9754 size 0xf4 virtual true final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualElementPanel(BaseVisualElementPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualElementPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualElementPanel(BaseVisualElementPanel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualElementPanel();

public:
  /// @brief Field panelDisposed, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelDisposed;

  /// @brief Field m_Scale, offset: 0x18, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field yogaConfig, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Yoga::YogaConfig* ___yogaConfig;

  /// @brief Field m_PixelsPerPoint, offset: 0x28, size: 0x4, def value: None
  float_t ___m_PixelsPerPoint;

  /// @brief Field <clearSettings>k__BackingField, offset: 0x2c, size: 0x14, def value: None
  ::UnityEngine::UIElements::PanelClearSettings ____clearSettings_k__BackingField;

  /// @brief Field <duringLayoutPhase>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____duringLayoutPhase_k__BackingField;

  /// @brief Field <repaintData>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepaintData* ____repaintData_k__BackingField;

  /// @brief Field <cursorManager>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICursorManager* ____cursorManager_k__BackingField;

  /// @brief Field <contextualMenuManager>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ____contextualMenuManager_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field m_TopElementUnderPointers, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::ElementUnderPointer* ___m_TopElementUnderPointers;

  /// @brief Field standardShaderChanged, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___standardShaderChanged;

  /// @brief Field standardWorldSpaceShaderChanged, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___standardWorldSpaceShaderChanged;

  /// @brief Field atlasChanged, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___atlasChanged;

  /// @brief Field updateMaterial, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Material*>* ___updateMaterial;

  /// @brief Field hierarchyChanged, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::HierarchyEvent* ___hierarchyChanged;

  /// @brief Field beforeUpdate, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::IPanel*>* ___beforeUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualElementPanel, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualElementPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualElementPanel*, "UnityEngine.UIElements", "BaseVisualElementPanel");
