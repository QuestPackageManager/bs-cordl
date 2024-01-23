#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
struct __EventSystem__UIToolkitOverrideConfig;
}
namespace UnityEngine::EventSystems {
class __EventSystem____c__DisplayClass52_0;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class __EventSystem____c__DisplayClass52_0;
}
namespace UnityEngine::EventSystems {
struct __EventSystem__UIToolkitOverrideConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::EventSystem);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0);
MARK_VAL_T(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig);
// Type: ::UIToolkitOverrideConfig
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13189))
// CS Name: ::EventSystem::UIToolkitOverrideConfig
struct CORDL_TYPE __EventSystem__UIToolkitOverrideConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: None }, CppParam { name: "sendEvents", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: None }]
  constexpr __EventSystem__UIToolkitOverrideConfig(::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventSystem__UIToolkitOverrideConfig();

  /// @brief Field activeEventSystem, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem;

  /// @brief Field sendEvents, offset: 0x8, size: 0x1, def value: None
  bool sendEvents;

  /// @brief Field createPanelGameObjectsOnStart, offset: 0x9, size: 0x1, def value: None
  bool createPanelGameObjectsOnStart;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, activeEventSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, sendEvents) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, createPanelGameObjectsOnStart) == 0x9, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::<>c__DisplayClass52_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13190))
// CS Name: ::EventSystem::<>c__DisplayClass52_0*
class CORDL_TYPE __EventSystem____c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field go, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_go, put = __cordl_internal_set_go))::UnityW<::UnityEngine::GameObject> go;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_go();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_go() const;

  constexpr void __cordl_internal_set_go(::UnityW<::UnityEngine::GameObject> value);

  static inline ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0* New_ctor();

  /// @brief Method .ctor, addr 0x2d97a98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateUIToolkitPanelGameObject>b__0, addr 0x2d98654, size 0x5c, virtual false, abstract: false, final false
  inline void _CreateUIToolkitPanelGameObject_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__EventSystem____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventSystem____c__DisplayClass52_0(__EventSystem____c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventSystem____c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventSystem____c__DisplayClass52_0(__EventSystem____c__DisplayClass52_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventSystem____c__DisplayClass52_0();

public:
  /// @brief Field go, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___go;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0, ___go) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::EventSystem
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13189)), TypeDefinitionIndex(TypeDefinitionIndex(13214))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13191))
// CS Name: ::UnityEngine.EventSystems::EventSystem*
class CORDL_TYPE EventSystem : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using __c__DisplayClass52_0 = ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0;

  using UIToolkitOverrideConfig = ::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig;

  /// @brief Field m_SystemInputModules, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SystemInputModules,
                      put = __cordl_internal_set_m_SystemInputModules))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* m_SystemInputModules;

  /// @brief Field m_CurrentInputModule, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentInputModule, put = __cordl_internal_set_m_CurrentInputModule))::UnityW<::UnityEngine::EventSystems::BaseInputModule> m_CurrentInputModule;

  /// @brief Field m_FirstSelected, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstSelected, put = __cordl_internal_set_m_FirstSelected))::UnityW<::UnityEngine::GameObject> m_FirstSelected;

  /// @brief Field m_sendNavigationEvents, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_sendNavigationEvents, put = __cordl_internal_set_m_sendNavigationEvents)) bool m_sendNavigationEvents;

  /// @brief Field m_DragThreshold, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragThreshold, put = __cordl_internal_set_m_DragThreshold)) int32_t m_DragThreshold;

  /// @brief Field m_CurrentSelected, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSelected, put = __cordl_internal_set_m_CurrentSelected))::UnityW<::UnityEngine::GameObject> m_CurrentSelected;

  /// @brief Field m_HasFocus, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasFocus, put = __cordl_internal_set_m_HasFocus)) bool m_HasFocus;

  /// @brief Field m_SelectionGuard, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectionGuard, put = __cordl_internal_set_m_SelectionGuard)) bool m_SelectionGuard;

  /// @brief Field m_DummyData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DummyData, put = __cordl_internal_set_m_DummyData))::UnityEngine::EventSystems::BaseEventData* m_DummyData;

  /// @brief Field m_EventSystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_EventSystems,
                             put = setStaticF_m_EventSystems))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* m_EventSystems;

  /// @brief Field s_RaycastComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RaycastComparer, put = setStaticF_s_RaycastComparer))::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* s_RaycastComparer;

  /// @brief Field s_UIToolkitOverride, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_UIToolkitOverride, put = setStaticF_s_UIToolkitOverride))::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig s_UIToolkitOverride;

  __declspec(property(get = get_sendNavigationEvents, put = set_sendNavigationEvents)) bool sendNavigationEvents;

  __declspec(property(get = get_pixelDragThreshold, put = set_pixelDragThreshold)) int32_t pixelDragThreshold;

  __declspec(property(get = get_currentInputModule))::UnityW<::UnityEngine::EventSystems::BaseInputModule> currentInputModule;

  __declspec(property(get = get_firstSelectedGameObject, put = set_firstSelectedGameObject))::UnityW<::UnityEngine::GameObject> firstSelectedGameObject;

  __declspec(property(get = get_currentSelectedGameObject))::UnityW<::UnityEngine::GameObject> currentSelectedGameObject;

  __declspec(property(get = get_lastSelectedGameObject))::UnityW<::UnityEngine::GameObject> lastSelectedGameObject;

  __declspec(property(get = get_isFocused)) bool isFocused;

  __declspec(property(get = get_alreadySelecting)) bool alreadySelecting;

  __declspec(property(get = get_baseEventDataCache))::UnityEngine::EventSystems::BaseEventData* baseEventDataCache;

  __declspec(property(get = get_isUIToolkitActiveEventSystem)) bool isUIToolkitActiveEventSystem;

  __declspec(property(get = get_sendUIToolkitEvents)) bool sendUIToolkitEvents;

  __declspec(property(get = get_createUIToolkitPanelGameObjectsOnStart)) bool createUIToolkitPanelGameObjectsOnStart;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& __cordl_internal_get_m_SystemInputModules();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*> const&
  __cordl_internal_get_m_SystemInputModules() const;

  constexpr void __cordl_internal_set_m_SystemInputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* value);

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& __cordl_internal_get_m_CurrentInputModule();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& __cordl_internal_get_m_CurrentInputModule() const;

  constexpr void __cordl_internal_set_m_CurrentInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_FirstSelected();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_FirstSelected() const;

  constexpr void __cordl_internal_set_m_FirstSelected(::UnityW<::UnityEngine::GameObject> value);

  constexpr bool& __cordl_internal_get_m_sendNavigationEvents();

  constexpr bool const& __cordl_internal_get_m_sendNavigationEvents() const;

  constexpr void __cordl_internal_set_m_sendNavigationEvents(bool value);

  constexpr int32_t& __cordl_internal_get_m_DragThreshold();

  constexpr int32_t const& __cordl_internal_get_m_DragThreshold() const;

  constexpr void __cordl_internal_set_m_DragThreshold(int32_t value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CurrentSelected();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CurrentSelected() const;

  constexpr void __cordl_internal_set_m_CurrentSelected(::UnityW<::UnityEngine::GameObject> value);

  constexpr bool& __cordl_internal_get_m_HasFocus();

  constexpr bool const& __cordl_internal_get_m_HasFocus() const;

  constexpr void __cordl_internal_set_m_HasFocus(bool value);

  constexpr bool& __cordl_internal_get_m_SelectionGuard();

  constexpr bool const& __cordl_internal_get_m_SelectionGuard() const;

  constexpr void __cordl_internal_set_m_SelectionGuard(bool value);

  constexpr ::UnityEngine::EventSystems::BaseEventData*& __cordl_internal_get_m_DummyData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseEventData*> const& __cordl_internal_get_m_DummyData() const;

  constexpr void __cordl_internal_set_m_DummyData(::UnityEngine::EventSystems::BaseEventData* value);

  static inline void setStaticF_m_EventSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* getStaticF_m_EventSystems();

  static inline void setStaticF_s_RaycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value);

  static inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF_s_RaycastComparer();

  static inline void setStaticF_s_UIToolkitOverride(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig value);

  static inline ::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig getStaticF_s_UIToolkitOverride();

  /// @brief Method get_current, addr 0x2d968dc, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_current();

  /// @brief Method set_current, addr 0x2d969a0, size 0x194, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::EventSystems::EventSystem* value);

  /// @brief Method get_sendNavigationEvents, addr 0x2d96b34, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendNavigationEvents();

  /// @brief Method set_sendNavigationEvents, addr 0x2d96b3c, size 0xc, virtual false, abstract: false, final false
  inline void set_sendNavigationEvents(bool value);

  /// @brief Method get_pixelDragThreshold, addr 0x2d96b48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pixelDragThreshold();

  /// @brief Method set_pixelDragThreshold, addr 0x2d96b50, size 0x8, virtual false, abstract: false, final false
  inline void set_pixelDragThreshold(int32_t value);

  /// @brief Method get_currentInputModule, addr 0x2d96b58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> get_currentInputModule();

  /// @brief Method get_firstSelectedGameObject, addr 0x2d96b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_firstSelectedGameObject();

  /// @brief Method set_firstSelectedGameObject, addr 0x2d96b68, size 0x8, virtual false, abstract: false, final false
  inline void set_firstSelectedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method get_currentSelectedGameObject, addr 0x2d96b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_currentSelectedGameObject();

  /// @brief Method get_lastSelectedGameObject, addr 0x2d96b78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_lastSelectedGameObject();

  /// @brief Method get_isFocused, addr 0x2d96b80, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  static inline ::UnityEngine::EventSystems::EventSystem* New_ctor();

  /// @brief Method .ctor, addr 0x2d96b88, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UpdateModules, addr 0x2d96c18, size 0x140, virtual false, abstract: false, final false
  inline void UpdateModules();

  /// @brief Method get_alreadySelecting, addr 0x2d96d58, size 0x8, virtual false, abstract: false, final false
  inline bool get_alreadySelecting();

  /// @brief Method SetSelectedGameObject, addr 0x2d954a0, size 0x224, virtual false, abstract: false, final false
  inline void SetSelectedGameObject(::UnityEngine::GameObject* selected, ::UnityEngine::EventSystems::BaseEventData* pointer);

  /// @brief Method get_baseEventDataCache, addr 0x2d96d60, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache();

  /// @brief Method SetSelectedGameObject, addr 0x2d929f4, size 0x2c, virtual false, abstract: false, final false
  inline void SetSelectedGameObject(::UnityEngine::GameObject* selected);

  /// @brief Method RaycastComparer, addr 0x2d96dd0, size 0x364, virtual false, abstract: false, final false
  static inline int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);

  /// @brief Method RaycastAll, addr 0x2d971ec, size 0x1f0, virtual false, abstract: false, final false
  inline void RaycastAll(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults);

  /// @brief Method IsPointerOverGameObject, addr 0x2d973dc, size 0x8, virtual false, abstract: false, final false
  inline bool IsPointerOverGameObject();

  /// @brief Method IsPointerOverGameObject, addr 0x2d973e4, size 0xa4, virtual false, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  /// @brief Method get_isUIToolkitActiveEventSystem, addr 0x2d97488, size 0xf0, virtual false, abstract: false, final false
  inline bool get_isUIToolkitActiveEventSystem();

  /// @brief Method get_sendUIToolkitEvents, addr 0x2d97578, size 0x74, virtual false, abstract: false, final false
  inline bool get_sendUIToolkitEvents();

  /// @brief Method get_createUIToolkitPanelGameObjectsOnStart, addr 0x2d975ec, size 0x74, virtual false, abstract: false, final false
  inline bool get_createUIToolkitPanelGameObjectsOnStart();

  /// @brief Method SetUITookitEventSystemOverride, addr 0x2d97660, size 0x19c, virtual false, abstract: false, final false
  static inline void SetUITookitEventSystemOverride(::UnityEngine::EventSystems::EventSystem* activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart);

  /// @brief Method CreateUIToolkitPanelGameObject, addr 0x2d977fc, size 0x29c, virtual false, abstract: false, final false
  inline void CreateUIToolkitPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method Start, addr 0x2d97aa0, size 0x23c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2d97ce0, size 0xa4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x2d97d88, size 0x110, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d97e98, size 0x108, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method TickModules, addr 0x2d97fa0, size 0x100, virtual false, abstract: false, final false
  inline void TickModules();

  /// @brief Method OnApplicationFocus, addr 0x2d980a0, size 0x14, virtual true, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method Update, addr 0x2d980b4, size 0x260, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method ChangeEventModule, addr 0x2d98314, size 0xf8, virtual false, abstract: false, final false
  inline void ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* module);

  /// @brief Method ToString, addr 0x2d9840c, size 0x158, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSystem(EventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSystem(EventSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystem();

public:
  /// @brief Field m_SystemInputModules, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* ___m_SystemInputModules;

  /// @brief Field m_CurrentInputModule, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseInputModule> ___m_CurrentInputModule;

  /// @brief Field m_FirstSelected, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_FirstSelected;

  /// @brief Field m_sendNavigationEvents, offset: 0x30, size: 0x1, def value: None
  bool ___m_sendNavigationEvents;

  /// @brief Field m_DragThreshold, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_DragThreshold;

  /// @brief Field m_CurrentSelected, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CurrentSelected;

  /// @brief Field m_HasFocus, offset: 0x40, size: 0x1, def value: None
  bool ___m_HasFocus;

  /// @brief Field m_SelectionGuard, offset: 0x41, size: 0x1, def value: None
  bool ___m_SelectionGuard;

  /// @brief Field m_DummyData, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseEventData* ___m_DummyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventSystem, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_SystemInputModules) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_CurrentInputModule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_FirstSelected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_sendNavigationEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_DragThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_CurrentSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_HasFocus) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_SelectionGuard) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventSystem, ___m_DummyData) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::EventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventSystem*, "UnityEngine.EventSystems", "EventSystem");
NEED_NO_BOX(::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*, "UnityEngine.EventSystems", "EventSystem/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, "UnityEngine.EventSystems", "EventSystem/UIToolkitOverrideConfig");
