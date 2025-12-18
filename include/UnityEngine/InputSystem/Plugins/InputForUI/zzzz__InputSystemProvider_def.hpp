#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Plugins/InputForUI/InputSystemProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemProvider)
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
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
struct Event_Type;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
namespace UnityEngine::InputForUI {
class InputEventPartialProvider;
}
namespace UnityEngine::InputForUI {
class NavigationEventRepeatHelper;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent_Direction;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Button;
}
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
namespace UnityEngine::InputForUI {
struct PointerState;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
struct InputSystemProvider_Configuration;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider___c;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider___c;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
struct InputSystemProvider_Configuration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c);
MARK_VAL_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration);
// Dependencies
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider/Configuration
struct CORDL_TYPE InputSystemProvider_Configuration {
public:
  // Declarations
  /// @brief Method GetDefaultConfiguration, addr 0x632d9ac, size 0x21c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration GetDefaultConfiguration();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemProvider_Configuration();

  // Ctor Parameters [CppParam { name: "ActionAsset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: None }, CppParam { name: "PointAction", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "MoveAction", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "SubmitAction", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "CancelAction", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "LeftClickAction", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "MiddleClickAction", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RightClickAction", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "ScrollWheelAction", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr InputSystemProvider_Configuration(::UnityW<::UnityEngine::InputSystem::InputActionAsset> ActionAsset, ::StringW PointAction, ::StringW MoveAction, ::StringW SubmitAction,
                                              ::StringW CancelAction, ::StringW LeftClickAction, ::StringW MiddleClickAction, ::StringW RightClickAction, ::StringW ScrollWheelAction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field ActionAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ActionAsset;

  /// @brief Field PointAction, offset: 0x8, size: 0x8, def value: None
  ::StringW PointAction;

  /// @brief Field MoveAction, offset: 0x10, size: 0x8, def value: None
  ::StringW MoveAction;

  /// @brief Field SubmitAction, offset: 0x18, size: 0x8, def value: None
  ::StringW SubmitAction;

  /// @brief Field CancelAction, offset: 0x20, size: 0x8, def value: None
  ::StringW CancelAction;

  /// @brief Field LeftClickAction, offset: 0x28, size: 0x8, def value: None
  ::StringW LeftClickAction;

  /// @brief Field MiddleClickAction, offset: 0x30, size: 0x8, def value: None
  ::StringW MiddleClickAction;

  /// @brief Field RightClickAction, offset: 0x38, size: 0x8, def value: None
  ::StringW RightClickAction;

  /// @brief Field ScrollWheelAction, offset: 0x40, size: 0x8, def value: None
  ::StringW ScrollWheelAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, ActionAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, PointAction) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, MoveAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, SubmitAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, CancelAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, LeftClickAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, MiddleClickAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, RightClickAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, ScrollWheelAction) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Plugins::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider/<>c
class CORDL_TYPE InputSystemProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Comparison_1<::UnityEngine::InputForUI::Event>* __9__33_0;

  static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* New_ctor();

  /// @brief Method <Update>b__33_0, addr 0x63318b0, size 0xbc, virtual false, abstract: false, final false
  inline int32_t _Update_b__33_0(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b);

  /// @brief Method .ctor, addr 0x63318ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::InputForUI::Event>* getStaticF___9__33_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* value);

  static inline void setStaticF___9__33_0(::System::Comparison_1<::UnityEngine::InputForUI::Event>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputSystemProvider___c(InputSystemProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputSystemProvider___c(InputSystemProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Plugins::InputForUI
// Dependencies System.Object, UnityEngine.InputForUI.PointerState, UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider::Configuration
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider
class CORDL_TYPE InputSystemProvider : public ::System::Object {
public:
  // Declarations
  using Configuration = ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration;

  using __c = ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c;

  /// @brief Field m_CancelAction, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelAction, put = __cordl_internal_set_m_CancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_CancelAction;

  /// @brief Field m_Cfg, offset 0x10, size 0x48
  __declspec(property(get = __cordl_internal_get_m_Cfg, put = __cordl_internal_set_m_Cfg)) ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration m_Cfg;

  __declspec(property(get = get_m_CurrentTime)) ::Unity::IntegerTime::DiscreteTime m_CurrentTime;

  __declspec(property(get = get_m_EventModifiers)) ::UnityEngine::InputForUI::EventModifiers m_EventModifiers;

  /// @brief Field m_Events, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Events, put = __cordl_internal_set_m_Events)) ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* m_Events;

  /// @brief Field m_InputActionAsset, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputActionAsset, put = __cordl_internal_set_m_InputActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_InputActionAsset;

  /// @brief Field m_InputEventPartialProvider, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputEventPartialProvider,
                      put = __cordl_internal_set_m_InputEventPartialProvider)) ::UnityEngine::InputForUI::InputEventPartialProvider* m_InputEventPartialProvider;

  /// @brief Field m_LeftClickAction, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftClickAction, put = __cordl_internal_set_m_LeftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_LeftClickAction;

  /// @brief Field m_MiddleClickAction, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MiddleClickAction, put = __cordl_internal_set_m_MiddleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MiddleClickAction;

  /// @brief Field m_MouseState, offset 0xb8, size 0x28
  __declspec(property(get = __cordl_internal_get_m_MouseState, put = __cordl_internal_set_m_MouseState)) ::UnityEngine::InputForUI::PointerState m_MouseState;

  /// @brief Field m_MoveAction, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MoveAction, put = __cordl_internal_set_m_MoveAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MoveAction;

  /// @brief Field m_NextPreviousAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextPreviousAction, put = __cordl_internal_set_m_NextPreviousAction)) ::UnityEngine::InputSystem::InputAction* m_NextPreviousAction;

  /// @brief Field m_PenState, offset 0xe0, size 0x28
  __declspec(property(get = __cordl_internal_get_m_PenState, put = __cordl_internal_set_m_PenState)) ::UnityEngine::InputForUI::PointerState m_PenState;

  /// @brief Field m_PointAction, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointAction, put = __cordl_internal_set_m_PointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_PointAction;

  /// @brief Field m_RepeatHelper, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RepeatHelper, put = __cordl_internal_set_m_RepeatHelper)) ::UnityEngine::InputForUI::NavigationEventRepeatHelper* m_RepeatHelper;

  /// @brief Field m_ResetSeenEventsOnUpdate, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResetSeenEventsOnUpdate, put = __cordl_internal_set_m_ResetSeenEventsOnUpdate)) bool m_ResetSeenEventsOnUpdate;

  /// @brief Field m_RightClickAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightClickAction, put = __cordl_internal_set_m_RightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_RightClickAction;

  /// @brief Field m_ScrollWheelAction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollWheelAction, put = __cordl_internal_set_m_ScrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ScrollWheelAction;

  /// @brief Field m_SeenPenEvents, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SeenPenEvents, put = __cordl_internal_set_m_SeenPenEvents)) bool m_SeenPenEvents;

  /// @brief Field m_SeenTouchEvents, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SeenTouchEvents, put = __cordl_internal_set_m_SeenTouchEvents)) bool m_SeenTouchEvents;

  /// @brief Field m_SubmitAction, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitAction, put = __cordl_internal_set_m_SubmitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_SubmitAction;

  /// @brief Field m_TouchState, offset 0x110, size 0x28
  __declspec(property(get = __cordl_internal_get_m_TouchState, put = __cordl_internal_set_m_TouchState)) ::UnityEngine::InputForUI::PointerState m_TouchState;

  __declspec(property(get = get_playerCount)) uint32_t playerCount;

  /// @brief Field s_OnRegisterActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_OnRegisterActions, put = setStaticF_s_OnRegisterActions)) ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* s_OnRegisterActions;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept;

  /// @brief Method ActionAssetIsNotNull, addr 0x632f2ac, size 0x64, virtual false, abstract: false, final false
  inline bool ActionAssetIsNotNull();

  /// @brief Method Bootstrap, addr 0x632d790, size 0x4, virtual false, abstract: false, final false
  static inline void Bootstrap();

  /// @brief Method DirectionNavigation, addr 0x632f09c, size 0x204, virtual false, abstract: false, final false
  inline void DirectionNavigation(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method DispatchFromCallback, addr 0x632ffbc, size 0x124, virtual false, abstract: false, final false
  inline void DispatchFromCallback(::ByRef<::UnityEngine::InputForUI::Event> ev);

  /// @brief Method FindTouchFingerIndex, addr 0x63300e0, size 0x310, virtual false, abstract: false, final false
  static inline int32_t FindTouchFingerIndex(::UnityEngine::InputSystem::Touchscreen* touchscreen, ::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method GetActiveDeviceFromDirection, addr 0x632f524, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* GetActiveDeviceFromDirection(::UnityEngine::InputForUI::NavigationEvent_Direction direction);

  /// @brief Method GetEventSource, addr 0x632ff6c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventSource GetEventSource(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method GetEventSource, addr 0x632f624, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventSource GetEventSource(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method GetPointerStateForSource, addr 0x632ff9c, size 0x20, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputForUI::PointerState> GetPointerStateForSource(::UnityEngine::InputForUI::EventSource eventSource);

  /// @brief Method Initialize, addr 0x632d7c4, size 0x1e8, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider* New_ctor();

  /// @brief Method OnActionsChange, addr 0x632ebf8, size 0x38, virtual false, abstract: false, final false
  inline void OnActionsChange();

  /// @brief Method OnCancelPerformed, addr 0x6330d40, size 0x11c, virtual false, abstract: false, final false
  inline void OnCancelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnClickPerformed, addr 0x6330e5c, size 0x40c, virtual false, abstract: false, final false
  inline void OnClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx, ::UnityEngine::InputForUI::EventSource eventSource, ::UnityEngine::InputForUI::PointerEvent_Button button);

  /// @brief Method OnFocusChanged, addr 0x632f894, size 0x18c, virtual true, abstract: false, final true
  inline void OnFocusChanged(bool focus);

  /// @brief Method OnLeftClickPerformed, addr 0x6331268, size 0x38, virtual false, abstract: false, final false
  inline void OnLeftClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnMiddleClickPerformed, addr 0x63312a0, size 0x38, virtual false, abstract: false, final false
  inline void OnMiddleClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnPointerPerformed, addr 0x63303f0, size 0x834, virtual false, abstract: false, final false
  inline void OnPointerPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnRightClickPerformed, addr 0x63312d8, size 0x38, virtual false, abstract: false, final false
  inline void OnRightClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnScrollWheelPerformed, addr 0x6331310, size 0x3dc, virtual false, abstract: false, final false
  inline void OnScrollWheelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method OnSubmitPerformed, addr 0x6330c24, size 0x11c, virtual false, abstract: false, final false
  inline void OnSubmitPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method ReadCurrentNavigationMoveVector, addr 0x632f310, size 0x104, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::UnityEngine::Vector2, bool> ReadCurrentNavigationMoveVector();

  /// @brief Method ReadNextPreviousDirection, addr 0x632f414, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::NavigationEvent_Direction ReadNextPreviousDirection();

  /// @brief Method RegisterActions, addr 0x632dbc8, size 0x890, virtual false, abstract: false, final false
  inline void RegisterActions();

  /// @brief Method RegisterNextPreviousAction, addr 0x63316ec, size 0xe8, virtual false, abstract: false, final false
  inline void RegisterNextPreviousAction();

  /// @brief Method RequestCurrentState, addr 0x632fa20, size 0x340, virtual true, abstract: false, final true
  inline bool RequestCurrentState(::UnityEngine::InputForUI::Event_Type type);

  /// @brief Method ResetSeenEvents, addr 0x632f2a0, size 0xc, virtual false, abstract: false, final false
  inline void ResetSeenEvents();

  /// @brief Method ScreenBottomLeftToPanelPosition, addr 0x632fe6c, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay);

  /// @brief Method SetOnRegisterActions, addr 0x63317f8, size 0x60, virtual false, abstract: false, final false
  static inline void SetOnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* callback);

  /// @brief Method Shutdown, addr 0x632e458, size 0xf8, virtual true, abstract: false, final true
  inline void Shutdown();

  /// @brief Method SortEvents, addr 0x632f7b4, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t SortEvents(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b);

  /// @brief Method ToPointerStateEvent, addr 0x632fd60, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::PointerEvent ToPointerStateEvent(::Unity::IntegerTime::DiscreteTime currentTime, ::ByRef<::UnityEngine::InputForUI::PointerState> state,
                                                                     ::UnityEngine::InputForUI::EventSource eventSource);

  /// @brief Method UnregisterActions, addr 0x632e550, size 0x6a8, virtual false, abstract: false, final false
  inline void UnregisterActions();

  /// @brief Method UnregisterFixedActions, addr 0x63317d4, size 0x24, virtual false, abstract: false, final false
  inline void UnregisterFixedActions();

  /// @brief Method Update, addr 0x632ec30, size 0x46c, virtual true, abstract: false, final true
  inline void Update();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction();

  constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration const& __cordl_internal_get_m_Cfg() const;

  constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration& __cordl_internal_get_m_Cfg();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* const& __cordl_internal_get_m_Events() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*& __cordl_internal_get_m_Events();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_InputActionAsset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_InputActionAsset();

  constexpr ::UnityEngine::InputForUI::InputEventPartialProvider* const& __cordl_internal_get_m_InputEventPartialProvider() const;

  constexpr ::UnityEngine::InputForUI::InputEventPartialProvider*& __cordl_internal_get_m_InputEventPartialProvider();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_MouseState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_MouseState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MoveAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MoveAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_NextPreviousAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_NextPreviousAction();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_PenState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_PenState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction();

  constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper* const& __cordl_internal_get_m_RepeatHelper() const;

  constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper*& __cordl_internal_get_m_RepeatHelper();

  constexpr bool const& __cordl_internal_get_m_ResetSeenEventsOnUpdate() const;

  constexpr bool& __cordl_internal_get_m_ResetSeenEventsOnUpdate();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction();

  constexpr bool const& __cordl_internal_get_m_SeenPenEvents() const;

  constexpr bool& __cordl_internal_get_m_SeenPenEvents();

  constexpr bool const& __cordl_internal_get_m_SeenTouchEvents() const;

  constexpr bool& __cordl_internal_get_m_SeenTouchEvents();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_TouchState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_TouchState();

  constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Cfg(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration value);

  constexpr void __cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* value);

  constexpr void __cordl_internal_set_m_InputActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_InputEventPartialProvider(::UnityEngine::InputForUI::InputEventPartialProvider* value);

  constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::InputForUI::PointerState value);

  constexpr void __cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_NextPreviousAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_PenState(::UnityEngine::InputForUI::PointerState value);

  constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_RepeatHelper(::UnityEngine::InputForUI::NavigationEventRepeatHelper* value);

  constexpr void __cordl_internal_set_m_ResetSeenEventsOnUpdate(bool value);

  constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SeenPenEvents(bool value);

  constexpr void __cordl_internal_set_m_SeenTouchEvents(bool value);

  constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TouchState(::UnityEngine::InputForUI::PointerState value);

  /// @brief Method .ctor, addr 0x632d6ec, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* getStaticF_s_OnRegisterActions();

  /// @brief Method get_m_CurrentTime, addr 0x632d7ac, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::IntegerTime::DiscreteTime get_m_CurrentTime();

  /// @brief Method get_m_EventModifiers, addr 0x632d794, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventModifiers get_m_EventModifiers();

  /// @brief Method get_playerCount, addr 0x632fe64, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_playerCount();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr ::UnityEngine::InputForUI::IEventProviderImpl* i___UnityEngine__InputForUI__IEventProviderImpl() noexcept;

  static inline void setStaticF_s_OnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputSystemProvider(InputSystemProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputSystemProvider(InputSystemProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22673 };

  /// @brief Field kScrollUGUIScaleFactor offset 0xffffffff size 0x4
  static constexpr float_t kScrollUGUIScaleFactor{ static_cast<float_t>(3.0f) };

  /// @brief Field k_DefaultPlayerId offset 0xffffffff size 0x4
  static constexpr uint32_t k_DefaultPlayerId{ static_cast<uint32_t>(0x0u) };

  /// @brief Field k_SmallestReportedMovementSqrDist offset 0xffffffff size 0x4
  static constexpr float_t k_SmallestReportedMovementSqrDist{ static_cast<float_t>(0.01f) };

  /// @brief Field m_Cfg, offset: 0x10, size: 0x48, def value: None
  ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration ___m_Cfg;

  /// @brief Field m_InputEventPartialProvider, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputForUI::InputEventPartialProvider* ___m_InputEventPartialProvider;

  /// @brief Field m_InputActionAsset, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_InputActionAsset;

  /// @brief Field m_PointAction, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_PointAction;

  /// @brief Field m_MoveAction, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MoveAction;

  /// @brief Field m_SubmitAction, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_SubmitAction;

  /// @brief Field m_CancelAction, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_CancelAction;

  /// @brief Field m_LeftClickAction, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_LeftClickAction;

  /// @brief Field m_MiddleClickAction, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MiddleClickAction;

  /// @brief Field m_RightClickAction, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_RightClickAction;

  /// @brief Field m_ScrollWheelAction, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ScrollWheelAction;

  /// @brief Field m_NextPreviousAction, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_NextPreviousAction;

  /// @brief Field m_Events, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* ___m_Events;

  /// @brief Field m_MouseState, offset: 0xb8, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ___m_MouseState;

  /// @brief Field m_PenState, offset: 0xe0, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ___m_PenState;

  /// @brief Field m_SeenPenEvents, offset: 0x108, size: 0x1, def value: None
  bool ___m_SeenPenEvents;

  /// @brief Field m_TouchState, offset: 0x110, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ___m_TouchState;

  /// @brief Field m_SeenTouchEvents, offset: 0x138, size: 0x1, def value: None
  bool ___m_SeenTouchEvents;

  /// @brief Field m_RepeatHelper, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::InputForUI::NavigationEventRepeatHelper* ___m_RepeatHelper;

  /// @brief Field m_ResetSeenEventsOnUpdate, offset: 0x148, size: 0x1, def value: None
  bool ___m_ResetSeenEventsOnUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_Cfg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_InputEventPartialProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_InputActionAsset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_PointAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MoveAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SubmitAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_CancelAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_LeftClickAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MiddleClickAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_RightClickAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_ScrollWheelAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_NextPreviousAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_Events) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MouseState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_PenState) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SeenPenEvents) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_TouchState) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SeenTouchEvents) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_RepeatHelper) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_ResetSeenEventsOnUpdate) == 0x148, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, 0x150>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Plugins::InputForUI
NEED_NO_BOX(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider");
NEED_NO_BOX(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider/Configuration");
