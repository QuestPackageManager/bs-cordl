#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
struct EventSystem_UIToolkitOverrideConfigOld;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UIElements {
class UIToolkitInteroperabilityBridge;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
struct EventSystem_UIToolkitOverrideConfigOld;
}
// Write type traits
MARK_REF_T(::UnityEngine::EventSystems::EventSystem*);
MARK_VAL_T(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld);
DEFINE_IL2CPP_CLASS(::UnityEngine::EventSystems::EventSystem*, "UnityEngine.EventSystems", "EventSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld, "UnityEngine.EventSystems", "EventSystem/UIToolkitOverrideConfigOld");
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfigOld
struct CORDL_TYPE EventSystem_UIToolkitOverrideConfigOld {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystem_UIToolkitOverrideConfigOld();

  // Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sendEvents",
  // ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr EventSystem_UIToolkitOverrideConfigOld(::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18069 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field activeEventSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem;

  /// @brief Field sendEvents, offset: 0x8, size: 0x1, def value: None
  bool sendEvents;

  /// @brief Field createPanelGameObjectsOnStart, offset: 0x9, size: 0x1, def value: None
  bool createPanelGameObjectsOnStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld, activeEventSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld, sendEvents) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld, createPanelGameObjectsOnStart) == 0x9, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld) == 0x10, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// [AddComponentMenu("Event/Event System")]
// [DisallowMultipleComponent]
// Dependencies System.Nullable`1<T>, UnityEngine.EventSystems.EventSystem::UIToolkitOverrideConfigOld, UnityEngine.EventSystems.UIBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.EventSystem
class CORDL_TYPE EventSystem : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using UIToolkitOverrideConfigOld = ::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld;

  __declspec(property(get = get_alreadySelecting)) bool alreadySelecting;

  __declspec(property(get = get_baseEventDataCache)) ::UnityEngine::EventSystems::BaseEventData* baseEventDataCache;

  __declspec(property(get = get_currentInputModule)) ::UnityW<::UnityEngine::EventSystems::BaseInputModule> currentInputModule;

  __declspec(property(get = get_currentSelectedGameObject)) ::UnityW<::UnityEngine::GameObject> currentSelectedGameObject;

  __declspec(property(get = get_firstSelectedGameObject, put = set_firstSelectedGameObject)) ::UnityW<::UnityEngine::GameObject> firstSelectedGameObject;

  __declspec(property(get = get_isFocused)) bool isFocused;

  __declspec(property(get = get_isOverridingUIToolkitEvents)) bool isOverridingUIToolkitEvents;

  /// @brief [Obsolete("lastSelectedGameObject is no longer supported")]
  __declspec(property(get = get_lastSelectedGameObject)) ::UnityW<::UnityEngine::GameObject> lastSelectedGameObject;

  /// @brief Field m_CurrentInputModule, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentInputModule, put = __cordl_internal_set_m_CurrentInputModule)) ::UnityW<::UnityEngine::EventSystems::BaseInputModule> m_CurrentInputModule;

  /// @brief Field m_CurrentSelected, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSelected, put = __cordl_internal_set_m_CurrentSelected)) ::UnityW<::UnityEngine::GameObject> m_CurrentSelected;

  /// @brief Field m_DragThreshold, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragThreshold, put = __cordl_internal_set_m_DragThreshold)) int32_t m_DragThreshold;

  /// @brief Field m_DummyData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DummyData, put = __cordl_internal_set_m_DummyData)) ::UnityEngine::EventSystems::BaseEventData* m_DummyData;

  /// @brief Field m_EventSystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_EventSystems, put = setStaticF_m_EventSystems)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* m_EventSystems;

  /// @brief Field m_FirstSelected, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstSelected, put = __cordl_internal_set_m_FirstSelected)) ::UnityW<::UnityEngine::GameObject> m_FirstSelected;

  /// @brief Field m_HasFocus, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasFocus, put = __cordl_internal_set_m_HasFocus)) bool m_HasFocus;

  /// @brief Field m_SelectionGuard, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectionGuard, put = __cordl_internal_set_m_SelectionGuard)) bool m_SelectionGuard;

  /// @brief Field m_SystemInputModules, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SystemInputModules,
                      put = __cordl_internal_set_m_SystemInputModules)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* m_SystemInputModules;

  /// @brief Field m_UIToolkitInterop, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIToolkitInterop, put = __cordl_internal_set_m_UIToolkitInterop)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* m_UIToolkitInterop;

  /// @brief Field m_sendNavigationEvents, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_sendNavigationEvents, put = __cordl_internal_set_m_sendNavigationEvents)) bool m_sendNavigationEvents;

  __declspec(property(get = get_pixelDragThreshold, put = set_pixelDragThreshold)) int32_t pixelDragThreshold;

  /// @brief Field s_RaycastComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RaycastComparer, put = setStaticF_s_RaycastComparer)) ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* s_RaycastComparer;

  /// @brief Field s_UIToolkitOverrideConfigOld, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_UIToolkitOverrideConfigOld,
                      put = setStaticF_s_UIToolkitOverrideConfigOld)) ::System::Nullable_1<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld>
      s_UIToolkitOverrideConfigOld;

  __declspec(property(get = get_sendNavigationEvents, put = set_sendNavigationEvents)) bool sendNavigationEvents;

  __declspec(property(get = get_uiToolkitInterop)) ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* uiToolkitInterop;

  /// @brief Method ChangeEventModule, addr 0x72b5a74, size 0xfc, virtual false, abstract: false, final false
  inline void ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* _cordl_module);

  /// @brief Method IsPointerOverGameObject, addr 0x72b4f68, size 0x8, virtual false, abstract: false, final false
  inline bool IsPointerOverGameObject();

  /// @brief Method IsPointerOverGameObject, addr 0x72b4f70, size 0xa8, virtual false, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::UnityEngine::EventSystems::EventSystem* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x72b57e4, size 0x10, virtual true, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDisable, addr 0x72b55c4, size 0xf0, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x72b5400, size 0x1c4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RaycastAll, addr 0x72b4d4c, size 0x21c, virtual false, abstract: false, final false
  inline void RaycastAll(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults);

  /// @brief Method RaycastComparer, addr 0x72b4834, size 0x458, virtual false, abstract: false, final false
  static inline int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);

  /// @brief Method SetSelectedGameObject, addr 0x72adc78, size 0x2c, virtual false, abstract: false, final false
  inline void SetSelectedGameObject(::UnityEngine::GameObject* selected);

  /// @brief Method SetSelectedGameObject, addr 0x72b30c8, size 0x250, virtual false, abstract: false, final false
  inline void SetSelectedGameObject(::UnityEngine::GameObject* selected, ::UnityEngine::EventSystems::BaseEventData* pointer);

  /// [Obsolete("Use PanelInputConfiguration component instead.")]
  /// @brief Method SetUITookitEventSystemOverride, addr 0x72b5094, size 0x36c, virtual false, abstract: false, final false
  static inline void SetUITookitEventSystemOverride(::UnityEngine::EventSystems::EventSystem* activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart);

  /// @brief Method Start, addr 0x72b56b4, size 0x1c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method TickModules, addr 0x72b56d4, size 0x110, virtual false, abstract: false, final false
  inline void TickModules();

  /// @brief Method ToString, addr 0x72b5b70, size 0x16c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Update, addr 0x72b57f4, size 0x280, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateModules, addr 0x72b4674, size 0x15c, virtual false, abstract: false, final false
  inline void UpdateModules();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& __cordl_internal_get_m_CurrentInputModule() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& __cordl_internal_get_m_CurrentInputModule();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CurrentSelected() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CurrentSelected();

  constexpr int32_t const& __cordl_internal_get_m_DragThreshold() const;

  constexpr int32_t& __cordl_internal_get_m_DragThreshold();

  constexpr ::UnityEngine::EventSystems::BaseEventData* const& __cordl_internal_get_m_DummyData() const;

  constexpr ::UnityEngine::EventSystems::BaseEventData*& __cordl_internal_get_m_DummyData();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_FirstSelected() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_FirstSelected();

  constexpr bool const& __cordl_internal_get_m_HasFocus() const;

  constexpr bool& __cordl_internal_get_m_HasFocus();

  constexpr bool const& __cordl_internal_get_m_SelectionGuard() const;

  constexpr bool& __cordl_internal_get_m_SelectionGuard();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* const& __cordl_internal_get_m_SystemInputModules() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& __cordl_internal_get_m_SystemInputModules();

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* const& __cordl_internal_get_m_UIToolkitInterop() const;

  constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*& __cordl_internal_get_m_UIToolkitInterop();

  constexpr bool const& __cordl_internal_get_m_sendNavigationEvents() const;

  constexpr bool& __cordl_internal_get_m_sendNavigationEvents();

  constexpr void __cordl_internal_set_m_CurrentInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value);

  constexpr void __cordl_internal_set_m_CurrentSelected(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_DragThreshold(int32_t value);

  constexpr void __cordl_internal_set_m_DummyData(::UnityEngine::EventSystems::BaseEventData* value);

  constexpr void __cordl_internal_set_m_FirstSelected(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_HasFocus(bool value);

  constexpr void __cordl_internal_set_m_SelectionGuard(bool value);

  constexpr void __cordl_internal_set_m_SystemInputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* value);

  constexpr void __cordl_internal_set_m_UIToolkitInterop(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* value);

  constexpr void __cordl_internal_set_m_sendNavigationEvents(bool value);

  /// @brief Method .ctor, addr 0x72b45bc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* getStaticF_m_EventSystems();

  static inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF_s_RaycastComparer();

  static inline ::System::Nullable_1<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld> getStaticF_s_UIToolkitOverrideConfigOld();

  /// @brief Method get_alreadySelecting, addr 0x72b47d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_alreadySelecting();

  /// @brief Method get_baseEventDataCache, addr 0x72b47d8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache();

  /// @brief Method get_current, addr 0x72b2d10, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_current();

  /// @brief Method get_currentInputModule, addr 0x72b458c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> get_currentInputModule();

  /// @brief Method get_currentSelectedGameObject, addr 0x72b45a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_currentSelectedGameObject();

  /// @brief Method get_firstSelectedGameObject, addr 0x72b4594, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_firstSelectedGameObject();

  /// @brief Method get_isFocused, addr 0x72b45b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  /// @brief Method get_isOverridingUIToolkitEvents, addr 0x72b5020, size 0x74, virtual false, abstract: false, final false
  inline bool get_isOverridingUIToolkitEvents();

  /// @brief Method get_lastSelectedGameObject, addr 0x72b45ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_lastSelectedGameObject();

  /// @brief Method get_pixelDragThreshold, addr 0x72b457c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pixelDragThreshold();

  /// @brief Method get_sendNavigationEvents, addr 0x72b456c, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendNavigationEvents();

  /// @brief Method get_uiToolkitInterop, addr 0x72b5018, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* get_uiToolkitInterop();

  static inline void setStaticF_m_EventSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value);

  static inline void setStaticF_s_RaycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value);

  static inline void setStaticF_s_UIToolkitOverrideConfigOld(::System::Nullable_1<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfigOld> value);

  /// @brief Method set_current, addr 0x72b43a8, size 0x1c4, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::EventSystems::EventSystem* value);

  /// @brief Method set_firstSelectedGameObject, addr 0x72b459c, size 0x8, virtual false, abstract: false, final false
  inline void set_firstSelectedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_pixelDragThreshold, addr 0x72b4584, size 0x8, virtual false, abstract: false, final false
  inline void set_pixelDragThreshold(int32_t value);

  /// @brief Method set_sendNavigationEvents, addr 0x72b4574, size 0x8, virtual false, abstract: false, final false
  inline void set_sendNavigationEvents(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSystem(EventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSystem(EventSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18070 };

  /// @brief Field m_SystemInputModules, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* ___m_SystemInputModules;

  /// @brief Field m_CurrentInputModule, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseInputModule> ___m_CurrentInputModule;

  /// [SerializeField]
  /// [FormerlySerializedAs("m_Selected")]
  /// @brief Field m_FirstSelected, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_FirstSelected;

  /// [SerializeField]
  /// @brief Field m_sendNavigationEvents, offset: 0x38, size: 0x1, def value: None
  bool ___m_sendNavigationEvents;

  /// [SerializeField]
  /// @brief Field m_DragThreshold, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_DragThreshold;

  /// @brief Field m_CurrentSelected, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CurrentSelected;

  /// @brief Field m_HasFocus, offset: 0x48, size: 0x1, def value: None
  bool ___m_HasFocus;

  /// @brief Field m_SelectionGuard, offset: 0x49, size: 0x1, def value: None
  bool ___m_SelectionGuard;

  /// @brief Field m_DummyData, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseEventData* ___m_DummyData;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_UIToolkitInterop, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* ___m_UIToolkitInterop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_SystemInputModules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_CurrentInputModule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_FirstSelected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_sendNavigationEvents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_DragThreshold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_CurrentSelected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_HasFocus) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_SelectionGuard) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_DummyData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_UIToolkitInterop) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::EventSystems::EventSystem) == 0x60, "Size mismatch!");

} // namespace UnityEngine::EventSystems
