#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIToolkitInteroperabilityBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIToolkitInteroperabilityBridge)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class PanelInputConfiguration;
}
namespace UnityEngine::UIElements {
struct UIToolkitInteroperabilityBridge_EventHandlerTypes;
}
namespace UnityEngine::UIElements {
class UIToolkitInteroperabilityBridge___c__DisplayClass37_0;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UIToolkitInteroperabilityBridge_EventHandlerTypes;
}
namespace UnityEngine::UIElements {
class UIToolkitInteroperabilityBridge;
}
namespace UnityEngine::UIElements {
class UIToolkitInteroperabilityBridge___c__DisplayClass37_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes);
MARK_REF_T(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*);
MARK_REF_T(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes, "UnityEngine.UIElements", "UIToolkitInteroperabilityBridge/EventHandlerTypes");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*, "UnityEngine.UIElements", "UIToolkitInteroperabilityBridge");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*, "UnityEngine.UIElements", "UIToolkitInteroperabilityBridge/<>c__DisplayClass37_0");
// [Flags]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIToolkitInteroperabilityBridge/EventHandlerTypes
struct CORDL_TYPE UIToolkitInteroperabilityBridge_EventHandlerTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped
  enum struct __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped : int32_t {
    __E_ScreenOverlay = static_cast<int32_t>(0x1),
    __E_WorldSpace = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped() const noexcept {
    return static_cast<__UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIToolkitInteroperabilityBridge_EventHandlerTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UIToolkitInteroperabilityBridge_EventHandlerTypes(int32_t value__) noexcept;

  /// @brief Field ScreenOverlay value: I32(1)
  static ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const ScreenOverlay;

  /// @brief Field WorldSpace value: I32(2)
  static ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const WorldSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIToolkitInteroperabilityBridge/<>c__DisplayClass37_0
class CORDL_TYPE UIToolkitInteroperabilityBridge___c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* __4__this;

  /// @brief Field panel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::UIElements::BaseRuntimePanel* panel;

  static inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0* New_ctor();

  /// @brief Method <CreatePanelGameObject>b__0, addr 0x72b2870, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePanelGameObject_b__0();

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* value);

  constexpr void __cordl_internal_set_panel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  /// @brief Method .ctor, addr 0x72b1afc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIToolkitInteroperabilityBridge___c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIToolkitInteroperabilityBridge___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIToolkitInteroperabilityBridge___c__DisplayClass37_0(UIToolkitInteroperabilityBridge___c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIToolkitInteroperabilityBridge___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIToolkitInteroperabilityBridge___c__DisplayClass37_0(UIToolkitInteroperabilityBridge___c__DisplayClass37_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18040 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* _____4__this;

  /// @brief Field panel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0, ___panel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.UIElements.PanelInputConfiguration::Settings, UnityEngine.UIElements.UIToolkitInteroperabilityBridge::EventHandlerTypes
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIToolkitInteroperabilityBridge
class CORDL_TYPE UIToolkitInteroperabilityBridge : public ::System::Object {
public:
  // Declarations
  using EventHandlerTypes = ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes;

  using __c__DisplayClass37_0 = ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0;

  __declspec(property(get = get_createDefaultPanelComponents, put = set_createDefaultPanelComponents)) bool createDefaultPanelComponents;

  /// @brief Field destroyedActions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_destroyedActions,
                      put = __cordl_internal_set_destroyedActions)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* destroyedActions;

  __declspec(property(get = get_eventSystem, put = set_eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> eventSystem;

  __declspec(property(get = get_handlerTypes, put = set_handlerTypes)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes handlerTypes;

  /// @brief Field m_CreateDefaultPanelComponents, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateDefaultPanelComponents, put = __cordl_internal_set_m_CreateDefaultPanelComponents)) bool m_CreateDefaultPanelComponents;

  /// @brief Field m_Enabled, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_EventSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSystem, put = __cordl_internal_set_m_EventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> m_EventSystem;

  /// @brief Field m_HandlerTypes, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HandlerTypes,
                      put = __cordl_internal_set_m_HandlerTypes)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes m_HandlerTypes;

  /// @brief Field m_InputSettings, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get_m_InputSettings, put = __cordl_internal_set_m_InputSettings)) ::UnityEngine::UIElements::PanelInputConfiguration_Settings m_InputSettings;

  /// @brief Field m_IsTrackingPanels, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTrackingPanels, put = __cordl_internal_set_m_IsTrackingPanels)) bool m_IsTrackingPanels;

  /// @brief Field m_OldCreateDefaultPanelComponents, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OldCreateDefaultPanelComponents, put = __cordl_internal_set_m_OldCreateDefaultPanelComponents)) bool m_OldCreateDefaultPanelComponents;

  /// @brief Field m_OldDefaultEventCameraIsMainCamera, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OldDefaultEventCameraIsMainCamera, put = __cordl_internal_set_m_OldDefaultEventCameraIsMainCamera)) bool m_OldDefaultEventCameraIsMainCamera;

  /// @brief Field m_OldEventCamerasHash, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldEventCamerasHash, put = __cordl_internal_set_m_OldEventCamerasHash)) int64_t m_OldEventCamerasHash;

  /// @brief Field m_OldHandlerTypes, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldHandlerTypes,
                      put = __cordl_internal_set_m_OldHandlerTypes)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes m_OldHandlerTypes;

  /// @brief Field m_OldOverrideUIToolkitEvents, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OldOverrideUIToolkitEvents, put = __cordl_internal_set_m_OldOverrideUIToolkitEvents)) bool m_OldOverrideUIToolkitEvents;

  /// @brief Field m_OverrideUIToolkitEvents, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideUIToolkitEvents, put = __cordl_internal_set_m_OverrideUIToolkitEvents)) bool m_OverrideUIToolkitEvents;

  /// @brief Field m_PanelsToRemove, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelsToRemove,
                      put = __cordl_internal_set_m_PanelsToRemove)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* m_PanelsToRemove;

  /// @brief Field m_Started, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Started, put = __cordl_internal_set_m_Started)) bool m_Started;

  /// @brief Field m_WorldPickingLayers, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WorldPickingLayers, put = __cordl_internal_set_m_WorldPickingLayers)) ::UnityEngine::LayerMask m_WorldPickingLayers;

  /// @brief Field m_WorldPickingMaxDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WorldPickingMaxDistance, put = __cordl_internal_set_m_WorldPickingMaxDistance)) float_t m_WorldPickingMaxDistance;

  /// @brief Field m_WorldSpaceGo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldSpaceGo, put = __cordl_internal_set_m_WorldSpaceGo)) ::UnityW<::UnityEngine::GameObject> m_WorldSpaceGo;

  __declspec(property(get = get_overrideUIToolkitEvents, put = set_overrideUIToolkitEvents)) bool overrideUIToolkitEvents;

  __declspec(property(get = get_shouldTrackPanels)) bool shouldTrackPanels;

  /// @brief Field trackedPanels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_trackedPanels,
                      put = __cordl_internal_set_trackedPanels)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* trackedPanels;

  __declspec(property(get = get_worldPickingLayers, put = set_worldPickingLayers)) int32_t worldPickingLayers;

  __declspec(property(get = get_worldPickingMaxDistance, put = set_worldPickingMaxDistance)) float_t worldPickingMaxDistance;

  /// @brief Method Apply, addr 0x72b2064, size 0x194, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::PanelInputConfiguration* input);

  /// @brief Method ApplyCameraProperties, addr 0x72b1cd0, size 0x174, virtual false, abstract: false, final false
  inline void ApplyCameraProperties();

  /// @brief Method ApplyOtherProperties, addr 0x72b11a0, size 0x48, virtual false, abstract: false, final false
  inline void ApplyOtherProperties();

  /// @brief Method ApplyOverrideUIToolkitEvents, addr 0x72b10e4, size 0xac, virtual false, abstract: false, final false
  inline void ApplyOverrideUIToolkitEvents();

  /// @brief Method CreatePanelGameObject, addr 0x72b17e0, size 0x31c, virtual false, abstract: false, final false
  inline void CreatePanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method CreateWorldSpacePanelGameObject, addr 0x72b1b00, size 0x1d0, virtual false, abstract: false, final false
  inline void CreateWorldSpacePanelGameObject();

  /// @brief Method DestroyPanelGameObject, addr 0x72b1640, size 0x10c, virtual false, abstract: false, final false
  inline void DestroyPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method DestroyWorldSpacePanelGameObject, addr 0x72b174c, size 0x64, virtual false, abstract: false, final false
  inline void DestroyWorldSpacePanelGameObject();

  static inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* New_ctor();

  /// @brief Method OnDisable, addr 0x72b21f8, size 0x15c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x72b1e50, size 0x214, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x72b1e44, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartTrackingPanel, addr 0x72b140c, size 0x70, virtual false, abstract: false, final false
  inline void StartTrackingPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method StartTrackingUIToolkitPanels, addr 0x72b1248, size 0x1c4, virtual false, abstract: false, final false
  inline void StartTrackingUIToolkitPanels();

  /// @brief Method StopTrackingUIToolkitPanels, addr 0x72b147c, size 0x1c4, virtual false, abstract: false, final false
  inline void StopTrackingUIToolkitPanels();

  /// @brief Method Update, addr 0x72b2354, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePanelGameObject, addr 0x72b17b0, size 0x30, virtual false, abstract: false, final false
  inline void UpdatePanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method UpdatePanelGameObjects, addr 0x72b2358, size 0x314, virtual false, abstract: false, final false
  inline void UpdatePanelGameObjects();

  /// @brief Method UpdatePanelTracking, addr 0x72b266c, size 0x28, virtual false, abstract: false, final false
  inline void UpdatePanelTracking();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* const& __cordl_internal_get_destroyedActions() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>*& __cordl_internal_get_destroyedActions();

  constexpr bool const& __cordl_internal_get_m_CreateDefaultPanelComponents() const;

  constexpr bool& __cordl_internal_get_m_CreateDefaultPanelComponents();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get_m_EventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get_m_EventSystem();

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const& __cordl_internal_get_m_HandlerTypes() const;

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes& __cordl_internal_get_m_HandlerTypes();

  constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings const& __cordl_internal_get_m_InputSettings() const;

  constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings& __cordl_internal_get_m_InputSettings();

  constexpr bool const& __cordl_internal_get_m_IsTrackingPanels() const;

  constexpr bool& __cordl_internal_get_m_IsTrackingPanels();

  constexpr bool const& __cordl_internal_get_m_OldCreateDefaultPanelComponents() const;

  constexpr bool& __cordl_internal_get_m_OldCreateDefaultPanelComponents();

  constexpr bool const& __cordl_internal_get_m_OldDefaultEventCameraIsMainCamera() const;

  constexpr bool& __cordl_internal_get_m_OldDefaultEventCameraIsMainCamera();

  constexpr int64_t const& __cordl_internal_get_m_OldEventCamerasHash() const;

  constexpr int64_t& __cordl_internal_get_m_OldEventCamerasHash();

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const& __cordl_internal_get_m_OldHandlerTypes() const;

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes& __cordl_internal_get_m_OldHandlerTypes();

  constexpr bool const& __cordl_internal_get_m_OldOverrideUIToolkitEvents() const;

  constexpr bool& __cordl_internal_get_m_OldOverrideUIToolkitEvents();

  constexpr bool const& __cordl_internal_get_m_OverrideUIToolkitEvents() const;

  constexpr bool& __cordl_internal_get_m_OverrideUIToolkitEvents();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* const& __cordl_internal_get_m_PanelsToRemove() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*& __cordl_internal_get_m_PanelsToRemove();

  constexpr bool const& __cordl_internal_get_m_Started() const;

  constexpr bool& __cordl_internal_get_m_Started();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_WorldPickingLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_WorldPickingLayers();

  constexpr float_t const& __cordl_internal_get_m_WorldPickingMaxDistance() const;

  constexpr float_t& __cordl_internal_get_m_WorldPickingMaxDistance();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_WorldSpaceGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_WorldSpaceGo();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* const& __cordl_internal_get_trackedPanels() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>*& __cordl_internal_get_trackedPanels();

  constexpr void __cordl_internal_set_destroyedActions(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* value);

  constexpr void __cordl_internal_set_m_CreateDefaultPanelComponents(bool value);

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr void __cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set_m_HandlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value);

  constexpr void __cordl_internal_set_m_InputSettings(::UnityEngine::UIElements::PanelInputConfiguration_Settings value);

  constexpr void __cordl_internal_set_m_IsTrackingPanels(bool value);

  constexpr void __cordl_internal_set_m_OldCreateDefaultPanelComponents(bool value);

  constexpr void __cordl_internal_set_m_OldDefaultEventCameraIsMainCamera(bool value);

  constexpr void __cordl_internal_set_m_OldEventCamerasHash(int64_t value);

  constexpr void __cordl_internal_set_m_OldHandlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value);

  constexpr void __cordl_internal_set_m_OldOverrideUIToolkitEvents(bool value);

  constexpr void __cordl_internal_set_m_OverrideUIToolkitEvents(bool value);

  constexpr void __cordl_internal_set_m_PanelsToRemove(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  constexpr void __cordl_internal_set_m_Started(bool value);

  constexpr void __cordl_internal_set_m_WorldPickingLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_WorldPickingMaxDistance(float_t value);

  constexpr void __cordl_internal_set_m_WorldSpaceGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_trackedPanels(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value);

  /// @brief Method .ctor, addr 0x72b2694, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_createDefaultPanelComponents, addr 0x72b1208, size 0x8, virtual false, abstract: false, final false
  inline bool get_createDefaultPanelComponents();

  /// @brief Method get_eventSystem, addr 0x72b1050, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_eventSystem();

  /// @brief Method get_handlerTypes, addr 0x72b1190, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes get_handlerTypes();

  /// @brief Method get_overrideUIToolkitEvents, addr 0x72b10d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideUIToolkitEvents();

  /// @brief Method get_shouldTrackPanels, addr 0x72b1218, size 0x30, virtual false, abstract: false, final false
  inline bool get_shouldTrackPanels();

  /// @brief Method get_worldPickingLayers, addr 0x72b11e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_worldPickingLayers();

  /// @brief Method get_worldPickingMaxDistance, addr 0x72b11f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_worldPickingMaxDistance();

  /// @brief Method set_createDefaultPanelComponents, addr 0x72b1210, size 0x8, virtual false, abstract: false, final false
  inline void set_createDefaultPanelComponents(bool value);

  /// @brief Method set_eventSystem, addr 0x72b1058, size 0x7c, virtual false, abstract: false, final false
  inline void set_eventSystem(::UnityEngine::EventSystems::EventSystem* value);

  /// @brief Method set_handlerTypes, addr 0x72b1198, size 0x8, virtual false, abstract: false, final false
  inline void set_handlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value);

  /// @brief Method set_overrideUIToolkitEvents, addr 0x72b10dc, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideUIToolkitEvents(bool value);

  /// @brief Method set_worldPickingLayers, addr 0x72b11f0, size 0x8, virtual false, abstract: false, final false
  inline void set_worldPickingLayers(int32_t value);

  /// @brief Method set_worldPickingMaxDistance, addr 0x72b1200, size 0x8, virtual false, abstract: false, final false
  inline void set_worldPickingMaxDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIToolkitInteroperabilityBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIToolkitInteroperabilityBridge", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIToolkitInteroperabilityBridge(UIToolkitInteroperabilityBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIToolkitInteroperabilityBridge", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIToolkitInteroperabilityBridge(UIToolkitInteroperabilityBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18041 };

  /// @brief Field m_EventSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ___m_EventSystem;

  /// @brief Field m_OverrideUIToolkitEvents, offset: 0x18, size: 0x1, def value: None
  bool ___m_OverrideUIToolkitEvents;

  /// @brief Field m_HandlerTypes, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes ___m_HandlerTypes;

  /// @brief Field m_WorldPickingLayers, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_WorldPickingLayers;

  /// @brief Field m_WorldPickingMaxDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___m_WorldPickingMaxDistance;

  /// @brief Field m_CreateDefaultPanelComponents, offset: 0x28, size: 0x1, def value: None
  bool ___m_CreateDefaultPanelComponents;

  /// @brief Field m_Started, offset: 0x29, size: 0x1, def value: None
  bool ___m_Started;

  /// @brief Field m_Enabled, offset: 0x2a, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_IsTrackingPanels, offset: 0x2b, size: 0x1, def value: None
  bool ___m_IsTrackingPanels;

  /// @brief Field m_WorldSpaceGo, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_WorldSpaceGo;

  /// @brief Field trackedPanels, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* ___trackedPanels;

  /// @brief Field destroyedActions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* ___destroyedActions;

  /// @brief Field m_InputSettings, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::UIElements::PanelInputConfiguration_Settings ___m_InputSettings;

  /// @brief Field m_OldOverrideUIToolkitEvents, offset: 0x68, size: 0x1, def value: None
  bool ___m_OldOverrideUIToolkitEvents;

  /// @brief Field m_OldHandlerTypes, offset: 0x6c, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes ___m_OldHandlerTypes;

  /// @brief Field m_OldCreateDefaultPanelComponents, offset: 0x70, size: 0x1, def value: None
  bool ___m_OldCreateDefaultPanelComponents;

  /// @brief Field m_OldDefaultEventCameraIsMainCamera, offset: 0x71, size: 0x1, def value: None
  bool ___m_OldDefaultEventCameraIsMainCamera;

  /// @brief Field m_OldEventCamerasHash, offset: 0x78, size: 0x8, def value: None
  int64_t ___m_OldEventCamerasHash;

  /// @brief Field m_PanelsToRemove, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* ___m_PanelsToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_EventSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OverrideUIToolkitEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_HandlerTypes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_WorldPickingLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_WorldPickingMaxDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_CreateDefaultPanelComponents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_Started) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_Enabled) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_IsTrackingPanels) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_WorldSpaceGo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___trackedPanels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___destroyedActions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_InputSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OldOverrideUIToolkitEvents) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OldHandlerTypes) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OldCreateDefaultPanelComponents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OldDefaultEventCameraIsMainCamera) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_OldEventCamerasHash) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge, ___m_PanelsToRemove) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge) == 0x88, "Size mismatch!");

} // namespace UnityEngine::UIElements
