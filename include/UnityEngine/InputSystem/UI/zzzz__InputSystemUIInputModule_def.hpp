#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/InputSystemUIInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemUIInputModule)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct InputSystemUIInputModule_CursorLockBehavior;
}
namespace UnityEngine::InputSystem::UI {
struct InputSystemUIInputModule_InputActionReferenceState;
}
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel_ButtonState;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerBehavior;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions;
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
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct InputSystemUIInputModule_CursorLockBehavior;
}
namespace UnityEngine::InputSystem::UI {
class InputSystemUIInputModule;
}
namespace UnityEngine::InputSystem::UI {
struct InputSystemUIInputModule_InputActionReferenceState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior);
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::InputSystemUIInputModule);
MARK_VAL_T(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState);
// Dependencies
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule/InputActionReferenceState
struct CORDL_TYPE InputSystemUIInputModule_InputActionReferenceState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemUIInputModule_InputActionReferenceState();

  // Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputSystemUIInputModule_InputActionReferenceState(int32_t refCount, bool enabledByInputModule) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field refCount, offset: 0x0, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field enabledByInputModule, offset: 0x4, size: 0x1, def value: None
  bool enabledByInputModule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState, refCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState, enabledByInputModule) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Dependencies
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule/CursorLockBehavior
struct CORDL_TYPE InputSystemUIInputModule_CursorLockBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSystemUIInputModule_CursorLockBehavior_Unwrapped
  enum struct __InputSystemUIInputModule_CursorLockBehavior_Unwrapped : int32_t {
    __E_OutsideScreen = static_cast<int32_t>(0x0),
    __E_ScreenCenter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSystemUIInputModule_CursorLockBehavior_Unwrapped() const noexcept {
    return static_cast<__InputSystemUIInputModule_CursorLockBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemUIInputModule_CursorLockBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSystemUIInputModule_CursorLockBehavior(int32_t value__) noexcept;

  /// @brief Field OutsideScreen value: I32(0)
  static ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior const OutsideScreen;

  /// @brief Field ScreenCenter value: I32(1)
  static ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior const ScreenCenter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8844 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Dependencies UnityEngine.EventSystems.BaseInputModule, UnityEngine.InputSystem.UI.InputSystemUIInputModule::CursorLockBehavior, UnityEngine.InputSystem.UI.NavigationModel,
// UnityEngine.InputSystem.UI.PointerModel, UnityEngine.InputSystem.UI.UIPointerBehavior, UnityEngine.InputSystem.UI.UIPointerType, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule
class CORDL_TYPE InputSystemUIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  using CursorLockBehavior = ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior;

  using InputActionReferenceState = ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState;

  __declspec(property(get = get_actionsAsset, put = set_actionsAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> actionsAsset;

  __declspec(property(get = get_cancel, put = set_cancel)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> cancel;

  __declspec(property(get = get_cursorLockBehavior, put = set_cursorLockBehavior)) ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior cursorLockBehavior;

  /// @brief Field defaultActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultActions, put = setStaticF_defaultActions)) ::UnityEngine::InputSystem::DefaultInputActions* defaultActions;

  __declspec(property(get = get_deselectOnBackgroundClick, put = set_deselectOnBackgroundClick)) bool deselectOnBackgroundClick;

  __declspec(property(get = get_explictlyIgnoreFocus)) bool explictlyIgnoreFocus;

  __declspec(property(get = get_leftClick, put = set_leftClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> leftClick;

  __declspec(property(get = get_localMultiPlayerRoot, put = set_localMultiPlayerRoot)) ::UnityW<::UnityEngine::GameObject> localMultiPlayerRoot;

  /// @brief Field m_ActionsAsset, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionsAsset, put = __cordl_internal_set_m_ActionsAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_ActionsAsset;

  /// @brief Field m_ActionsHooked, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ActionsHooked, put = __cordl_internal_set_m_ActionsHooked)) bool m_ActionsHooked;

  /// @brief Field m_CancelAction, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelAction, put = __cordl_internal_set_m_CancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_CancelAction;

  /// @brief Field m_CurrentPointerId, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerId, put = __cordl_internal_set_m_CurrentPointerId)) int32_t m_CurrentPointerId;

  /// @brief Field m_CurrentPointerIndex, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerIndex, put = __cordl_internal_set_m_CurrentPointerIndex)) int32_t m_CurrentPointerIndex;

  /// @brief Field m_CurrentPointerType, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerType, put = __cordl_internal_set_m_CurrentPointerType)) ::UnityEngine::InputSystem::UI::UIPointerType m_CurrentPointerType;

  /// @brief Field m_CursorLockBehavior, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorLockBehavior,
                      put = __cordl_internal_set_m_CursorLockBehavior)) ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior m_CursorLockBehavior;

  /// @brief Field m_DeselectOnBackgroundClick, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DeselectOnBackgroundClick, put = __cordl_internal_set_m_DeselectOnBackgroundClick)) bool m_DeselectOnBackgroundClick;

  /// @brief Field m_LeftClickAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftClickAction, put = __cordl_internal_set_m_LeftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_LeftClickAction;

  /// @brief Field m_LocalMultiPlayerRoot, offset 0x398, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalMultiPlayerRoot, put = __cordl_internal_set_m_LocalMultiPlayerRoot)) ::UnityW<::UnityEngine::GameObject> m_LocalMultiPlayerRoot;

  /// @brief Field m_MiddleClickAction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MiddleClickAction, put = __cordl_internal_set_m_MiddleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MiddleClickAction;

  /// @brief Field m_MoveAction, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MoveAction, put = __cordl_internal_set_m_MoveAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MoveAction;

  /// @brief Field m_MoveRepeatDelay, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveRepeatDelay, put = __cordl_internal_set_m_MoveRepeatDelay)) float_t m_MoveRepeatDelay;

  /// @brief Field m_MoveRepeatRate, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveRepeatRate, put = __cordl_internal_set_m_MoveRepeatRate)) float_t m_MoveRepeatRate;

  /// @brief Field m_NavigationState, offset 0x378, size 0x20
  __declspec(property(get = __cordl_internal_get_m_NavigationState, put = __cordl_internal_set_m_NavigationState)) ::UnityEngine::InputSystem::UI::NavigationModel m_NavigationState;

  /// @brief Field m_NeedToPurgeStalePointers, offset 0xd9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedToPurgeStalePointers, put = __cordl_internal_set_m_NeedToPurgeStalePointers)) bool m_NeedToPurgeStalePointers;

  /// @brief Field m_OnControlsChangedDelegate, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnControlsChangedDelegate,
                      put = __cordl_internal_set_m_OnControlsChangedDelegate)) ::System::Action_1<::System::Object*>* m_OnControlsChangedDelegate;

  /// @brief Field m_OnLeftClickDelegate, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnLeftClickDelegate,
                      put = __cordl_internal_set_m_OnLeftClickDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnLeftClickDelegate;

  /// @brief Field m_OnMiddleClickDelegate, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnMiddleClickDelegate,
                      put = __cordl_internal_set_m_OnMiddleClickDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnMiddleClickDelegate;

  /// @brief Field m_OnMoveDelegate, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnMoveDelegate,
                      put = __cordl_internal_set_m_OnMoveDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnMoveDelegate;

  /// @brief Field m_OnPointDelegate, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnPointDelegate,
                      put = __cordl_internal_set_m_OnPointDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnPointDelegate;

  /// @brief Field m_OnRightClickDelegate, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnRightClickDelegate,
                      put = __cordl_internal_set_m_OnRightClickDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnRightClickDelegate;

  /// @brief Field m_OnScrollWheelDelegate, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnScrollWheelDelegate,
                      put = __cordl_internal_set_m_OnScrollWheelDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnScrollWheelDelegate;

  /// @brief Field m_OnTrackedDeviceOrientationDelegate, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTrackedDeviceOrientationDelegate,
                      put =
                          __cordl_internal_set_m_OnTrackedDeviceOrientationDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnTrackedDeviceOrientationDelegate;

  /// @brief Field m_OnTrackedDevicePositionDelegate, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTrackedDevicePositionDelegate,
                      put = __cordl_internal_set_m_OnTrackedDevicePositionDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_OnTrackedDevicePositionDelegate;

  /// @brief Field m_PointAction, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointAction, put = __cordl_internal_set_m_PointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_PointAction;

  /// @brief Field m_PointerBehavior, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointerBehavior, put = __cordl_internal_set_m_PointerBehavior)) ::UnityEngine::InputSystem::UI::UIPointerBehavior m_PointerBehavior;

  /// @brief Field m_PointerIds, offset 0x138, size 0x10
  __declspec(property(get = __cordl_internal_get_m_PointerIds, put = __cordl_internal_set_m_PointerIds)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> m_PointerIds;

  /// @brief Field m_PointerStates, offset 0x148, size 0x230
  __declspec(property(get = __cordl_internal_get_m_PointerStates,
                      put = __cordl_internal_set_m_PointerStates)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>
      m_PointerStates;

  /// @brief Field m_RightClickAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightClickAction, put = __cordl_internal_set_m_RightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_RightClickAction;

  /// @brief Field m_ScrollDeltaPerTick, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollDeltaPerTick, put = __cordl_internal_set_m_ScrollDeltaPerTick)) float_t m_ScrollDeltaPerTick;

  /// @brief Field m_ScrollWheelAction, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollWheelAction, put = __cordl_internal_set_m_ScrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ScrollWheelAction;

  /// @brief Field m_SubmitAction, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitAction, put = __cordl_internal_set_m_SubmitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_SubmitAction;

  /// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier,
                      put = __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier)) float_t m_TrackedDeviceDragThresholdMultiplier;

  /// @brief Field m_TrackedDeviceOrientationAction, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedDeviceOrientationAction,
                      put = __cordl_internal_set_m_TrackedDeviceOrientationAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      m_TrackedDeviceOrientationAction;

  /// @brief Field m_TrackedDevicePositionAction, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedDevicePositionAction, put = __cordl_internal_set_m_TrackedDevicePositionAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      m_TrackedDevicePositionAction;

  /// @brief Field m_XRTrackingOrigin, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRTrackingOrigin, put = __cordl_internal_set_m_XRTrackingOrigin)) ::UnityW<::UnityEngine::Transform> m_XRTrackingOrigin;

  __declspec(property(get = get_middleClick, put = set_middleClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> middleClick;

  __declspec(property(get = get_move, put = set_move)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> move;

  __declspec(property(get = get_moveRepeatDelay, put = set_moveRepeatDelay)) float_t moveRepeatDelay;

  __declspec(property(get = get_moveRepeatRate, put = set_moveRepeatRate)) float_t moveRepeatRate;

  __declspec(property(get = get_point, put = set_point)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> point;

  __declspec(property(get = get_pointerBehavior, put = set_pointerBehavior)) ::UnityEngine::InputSystem::UI::UIPointerBehavior pointerBehavior;

  __declspec(property(get = get_repeatDelay, put = set_repeatDelay)) float_t repeatDelay;

  __declspec(property(get = get_repeatRate, put = set_repeatRate)) float_t repeatRate;

  __declspec(property(get = get_rightClick, put = set_rightClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> rightClick;

  /// @brief Field s_InputActionReferenceCounts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InputActionReferenceCounts, put = setStaticF_s_InputActionReferenceCounts)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>* s_InputActionReferenceCounts;

  __declspec(property(get = get_scrollDeltaPerTick, put = set_scrollDeltaPerTick)) float_t scrollDeltaPerTick;

  __declspec(property(get = get_scrollWheel, put = set_scrollWheel)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> scrollWheel;

  __declspec(property(get = get_sendPointerHoverToParent, put = set_sendPointerHoverToParent)) bool sendPointerHoverToParent;

  __declspec(property(get = get_shouldIgnoreFocus)) bool shouldIgnoreFocus;

  __declspec(property(get = get_submit, put = set_submit)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> submit;

  __declspec(property(get = get_trackedDeviceDragThresholdMultiplier, put = set_trackedDeviceDragThresholdMultiplier)) float_t trackedDeviceDragThresholdMultiplier;

  __declspec(property(get = get_trackedDeviceOrientation, put = set_trackedDeviceOrientation)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> trackedDeviceOrientation;

  __declspec(property(get = get_trackedDevicePosition, put = set_trackedDevicePosition)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> trackedDevicePosition;

  __declspec(property(get = get_trackedDeviceSelect, put = set_trackedDeviceSelect)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> trackedDeviceSelect;

  __declspec(property(get = get_xrTrackingOrigin, put = set_xrTrackingOrigin)) ::UnityW<::UnityEngine::Transform> xrTrackingOrigin;

  /// @brief Method ActivateModule, addr 0x63dc89c, size 0xac, virtual true, abstract: false, final false
  inline void ActivateModule();

  /// @brief Method AllocatePointer, addr 0x63e2044, size 0x1e8, virtual false, abstract: false, final false
  inline int32_t AllocatePointer(int32_t pointerId, int32_t displayIndex, int32_t touchId, ::UnityEngine::InputSystem::UI::UIPointerType pointerType, ::UnityEngine::InputSystem::InputControl* control,
                                 ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputControl* touchControl);

  /// @brief Method AssignDefaultActions, addr 0x63e05dc, size 0x2e0, virtual false, abstract: false, final false
  inline void AssignDefaultActions();

  /// @brief Method Awake, addr 0x63e0ce4, size 0x54, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckForRemovedDevice, addr 0x63e1894, size 0x6c, virtual false, abstract: false, final false
  inline bool CheckForRemovedDevice(::ByRef<::UnityEngine::InputSystem::InputAction_CallbackContext> context);

  /// @brief Method ConvertPointerEventScrollDeltaToTicks, addr 0x63e35bc, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ConvertPointerEventScrollDeltaToTicks(::UnityEngine::Vector2 scrollDelta);

  /// @brief Method ConvertUIToolkitPointerId, addr 0x63e34d8, size 0xe4, virtual true, abstract: false, final false
  inline int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData);

  /// @brief Method DisableAllActions, addr 0x63e15a0, size 0xa8, virtual false, abstract: false, final false
  inline void DisableAllActions();

  /// @brief Method EnableAllActions, addr 0x63e1490, size 0x5c, virtual false, abstract: false, final false
  inline void EnableAllActions();

  /// @brief Method EnableInputAction, addr 0x63e02dc, size 0x1e8, virtual false, abstract: false, final false
  inline void EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference);

  /// @brief Method FilterPointerStatesByType, addr 0x63e2fdc, size 0x260, virtual false, abstract: false, final false
  inline void FilterPointerStatesByType();

  /// @brief Method GetDisplayIndexFor, addr 0x63e175c, size 0xc0, virtual false, abstract: false, final false
  inline int32_t GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetLastRaycastResult, addr 0x63dcc04, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult GetLastRaycastResult(int32_t pointerOrTouchId);

  /// @brief Method GetPointerStateForIndex, addr 0x63e1718, size 0x44, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::UI::PointerModel> GetPointerStateForIndex(int32_t index);

  /// @brief Method GetPointerStateIndexFor, addr 0x63e181c, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetPointerStateIndexFor(::ByRef<::UnityEngine::InputSystem::InputAction_CallbackContext> context);

  /// @brief Method GetPointerStateIndexFor, addr 0x63e1900, size 0x670, virtual false, abstract: false, final false
  inline int32_t GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl* control, bool createIfNotExists);

  /// @brief Method GetPointerStateIndexFor, addr 0x63dcacc, size 0x138, virtual false, abstract: false, final false
  inline int32_t GetPointerStateIndexFor(int32_t pointerOrTouchId);

  /// @brief Method HasNoActions, addr 0x63e0ec8, size 0x134, virtual false, abstract: false, final false
  inline bool HasNoActions();

  /// @brief Method HaveControlForDevice, addr 0x63e1f70, size 0xd4, virtual false, abstract: false, final false
  static inline bool HaveControlForDevice(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputActionReference* actionReference);

  /// @brief Method HookActions, addr 0x63e1054, size 0x43c, virtual false, abstract: false, final false
  inline void HookActions();

  /// @brief Method IgnoreNextClick, addr 0x63e2714, size 0x140, virtual false, abstract: false, final false
  inline bool IgnoreNextClick(::ByRef<::UnityEngine::InputSystem::InputAction_CallbackContext> context, bool wasPressed);

  /// @brief Method IsMoveAllowed, addr 0x63dfa5c, size 0x208, virtual false, abstract: false, final false
  inline bool IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method IsPointerOverGameObject, addr 0x63dc948, size 0x184, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerOrTouchId);

  static inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule* New_ctor();

  /// @brief Method OnControlsChanged, addr 0x63e2fd0, size 0xc, virtual false, abstract: false, final false
  inline void OnControlsChanged(::System::Object* obj);

  /// @brief Method OnDestroy, addr 0x63e0d8c, size 0x14, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x63e14ec, size 0xb4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x63e0db4, size 0x114, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnLeftClickCallback, addr 0x63e2854, size 0xe8, virtual false, abstract: false, final false
  inline void OnLeftClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnMiddleClickCallback, addr 0x63e2a78, size 0xe8, virtual false, abstract: false, final false
  inline void OnMiddleClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnMoveCallback, addr 0x63e2cd4, size 0x64, virtual false, abstract: false, final false
  inline void OnMoveCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnPointCallback, addr 0x63e25f0, size 0x124, virtual false, abstract: false, final false
  inline void OnPointCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnRightClickCallback, addr 0x63e2990, size 0xe8, virtual false, abstract: false, final false
  inline void OnRightClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnScrollCallback, addr 0x63e2b60, size 0x134, virtual false, abstract: false, final false
  inline void OnScrollCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackedDeviceOrientationCallback, addr 0x63e2d38, size 0xf8, virtual false, abstract: false, final false
  inline void OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackedDevicePositionCallback, addr 0x63e2e88, size 0xf4, virtual false, abstract: false, final false
  inline void OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method PerformRaycast, addr 0x63dccd0, size 0x280, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method PointerShouldIgnoreTransform, addr 0x63de8dc, size 0xfc, virtual false, abstract: false, final false
  inline bool PointerShouldIgnoreTransform(::UnityEngine::Transform* t);

  /// @brief Method Process, addr 0x63e3300, size 0x198, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessNavigation, addr 0x63df3d4, size 0x688, virtual false, abstract: false, final false
  inline void ProcessNavigation(::ByRef<::UnityEngine::InputSystem::UI::NavigationModel> navigationState);

  /// @brief Method ProcessPointer, addr 0x63dd564, size 0x41c, virtual false, abstract: false, final false
  inline void ProcessPointer(::ByRef<::UnityEngine::InputSystem::UI::PointerModel> state);

  /// @brief Method ProcessPointerButton, addr 0x63dda70, size 0x940, virtual false, abstract: false, final false
  inline void ProcessPointerButton(::ByRef<::UnityEngine::InputSystem::UI::PointerModel_ButtonState> button, ::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ProcessPointerButtonDrag, addr 0x63de3b0, size 0x380, virtual false, abstract: false, final false
  inline void ProcessPointerButtonDrag(::ByRef<::UnityEngine::InputSystem::UI::PointerModel_ButtonState> button, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method ProcessPointerMovement, addr 0x63de9ec, size 0x95c, virtual false, abstract: false, final false
  inline void ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::UnityEngine::GameObject* currentPointerTarget);

  /// @brief Method ProcessPointerMovement, addr 0x63dda10, size 0x48, virtual false, abstract: false, final false
  inline void ProcessPointerMovement(::ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method ProcessPointerScroll, addr 0x63de730, size 0x1ac, virtual false, abstract: false, final false
  static inline void ProcessPointerScroll(::ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer, ::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method PurgeStalePointers, addr 0x63e24d4, size 0x11c, virtual false, abstract: false, final false
  inline void PurgeStalePointers();

  /// @brief Method RemovePointerAtIndex, addr 0x63e22dc, size 0x1f8, virtual false, abstract: false, final false
  inline bool RemovePointerAtIndex(int32_t index);

  /// @brief Method ResetPointers, addr 0x63e0ffc, size 0x58, virtual false, abstract: false, final false
  inline void ResetPointers();

  /// @brief Method SendPointerExitEventsAndRemovePointer, addr 0x63e1648, size 0xd0, virtual false, abstract: false, final false
  inline bool SendPointerExitEventsAndRemovePointer(int32_t index);

  /// @brief Method SetActionCallback, addr 0x63e3718, size 0xe8, virtual false, abstract: false, final false
  static inline void SetActionCallback(::UnityEngine::InputSystem::InputActionReference* actionReference, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback,
                                       bool install);

  /// @brief Method SetActionCallbacks, addr 0x63e362c, size 0xec, virtual false, abstract: false, final false
  inline void SetActionCallbacks(bool install);

  /// @brief Method SwapAction, addr 0x63dfe0c, size 0x314, virtual false, abstract: false, final false
  inline void SwapAction(::ByRef<::UnityEngine::InputSystem::InputActionReference*> property, ::UnityEngine::InputSystem::InputActionReference* newValue, bool actionsHooked,
                         ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* actionCallback);

  /// @brief Method TryDisableInputAction, addr 0x63e0120, size 0x1bc, virtual false, abstract: false, final false
  inline void TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference, bool isComponentDisabling);

  /// @brief Method UnassignActions, addr 0x63e0af0, size 0x184, virtual false, abstract: false, final false
  inline void UnassignActions();

  /// @brief Method UnhookActions, addr 0x63e0da0, size 0x14, virtual false, abstract: false, final false
  inline void UnhookActions();

  /// @brief Method UpdateReferenceForNewAsset, addr 0x63e3800, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference* actionReference);

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_ActionsAsset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_ActionsAsset();

  constexpr bool const& __cordl_internal_get_m_ActionsHooked() const;

  constexpr bool& __cordl_internal_get_m_ActionsHooked();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPointerId() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPointerId();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPointerIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPointerIndex();

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& __cordl_internal_get_m_CurrentPointerType() const;

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType& __cordl_internal_get_m_CurrentPointerType();

  constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior const& __cordl_internal_get_m_CursorLockBehavior() const;

  constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior& __cordl_internal_get_m_CursorLockBehavior();

  constexpr bool const& __cordl_internal_get_m_DeselectOnBackgroundClick() const;

  constexpr bool& __cordl_internal_get_m_DeselectOnBackgroundClick();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_LocalMultiPlayerRoot() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_LocalMultiPlayerRoot();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MoveAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MoveAction();

  constexpr float_t const& __cordl_internal_get_m_MoveRepeatDelay() const;

  constexpr float_t& __cordl_internal_get_m_MoveRepeatDelay();

  constexpr float_t const& __cordl_internal_get_m_MoveRepeatRate() const;

  constexpr float_t& __cordl_internal_get_m_MoveRepeatRate();

  constexpr ::UnityEngine::InputSystem::UI::NavigationModel const& __cordl_internal_get_m_NavigationState() const;

  constexpr ::UnityEngine::InputSystem::UI::NavigationModel& __cordl_internal_get_m_NavigationState();

  constexpr bool const& __cordl_internal_get_m_NeedToPurgeStalePointers() const;

  constexpr bool& __cordl_internal_get_m_NeedToPurgeStalePointers();

  constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_m_OnControlsChangedDelegate() const;

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_m_OnControlsChangedDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnLeftClickDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnLeftClickDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnMiddleClickDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnMiddleClickDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnMoveDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnMoveDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnPointDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnPointDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnRightClickDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnRightClickDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnScrollWheelDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnScrollWheelDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnTrackedDeviceOrientationDelegate();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnTrackedDevicePositionDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_OnTrackedDevicePositionDelegate();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction();

  constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior const& __cordl_internal_get_m_PointerBehavior() const;

  constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior& __cordl_internal_get_m_PointerBehavior();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> const& __cordl_internal_get_m_PointerIds() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>& __cordl_internal_get_m_PointerIds();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> const& __cordl_internal_get_m_PointerStates() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>& __cordl_internal_get_m_PointerStates();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction();

  constexpr float_t const& __cordl_internal_get_m_ScrollDeltaPerTick() const;

  constexpr float_t& __cordl_internal_get_m_ScrollDeltaPerTick();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction();

  constexpr float_t const& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TrackedDeviceOrientationAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TrackedDeviceOrientationAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TrackedDevicePositionAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TrackedDevicePositionAction();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_XRTrackingOrigin() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_XRTrackingOrigin();

  constexpr void __cordl_internal_set_m_ActionsAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_ActionsHooked(bool value);

  constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_CurrentPointerId(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPointerIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPointerType(::UnityEngine::InputSystem::UI::UIPointerType value);

  constexpr void __cordl_internal_set_m_CursorLockBehavior(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior value);

  constexpr void __cordl_internal_set_m_DeselectOnBackgroundClick(bool value);

  constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_LocalMultiPlayerRoot(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MoveRepeatDelay(float_t value);

  constexpr void __cordl_internal_set_m_MoveRepeatRate(float_t value);

  constexpr void __cordl_internal_set_m_NavigationState(::UnityEngine::InputSystem::UI::NavigationModel value);

  constexpr void __cordl_internal_set_m_NeedToPurgeStalePointers(bool value);

  constexpr void __cordl_internal_set_m_OnControlsChangedDelegate(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_m_OnLeftClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnMiddleClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnMoveDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnPointDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnRightClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnScrollWheelDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnTrackedDeviceOrientationDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_PointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value);

  constexpr void __cordl_internal_set_m_PointerIds(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_PointerStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> value);

  constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ScrollDeltaPerTick(float_t value);

  constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_TrackedDeviceOrientationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TrackedDevicePositionAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_XRTrackingOrigin(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x63e38a0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::DefaultInputActions* getStaticF_defaultActions();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>*
  getStaticF_s_InputActionReferenceCounts();

  /// @brief Method get_actionsAsset, addr 0x63e3890, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actionsAsset();

  /// @brief Method get_cancel, addr 0x63e0588, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cancel();

  /// @brief Method get_cursorLockBehavior, addr 0x63dc86c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior get_cursorLockBehavior();

  /// @brief Method get_deselectOnBackgroundClick, addr 0x63dc84c, size 0x8, virtual false, abstract: false, final false
  inline bool get_deselectOnBackgroundClick();

  /// @brief Method get_explictlyIgnoreFocus, addr 0x63dfc84, size 0x6c, virtual false, abstract: false, final false
  inline bool get_explictlyIgnoreFocus();

  /// @brief Method get_leftClick, addr 0x63e04fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_leftClick();

  /// @brief Method get_localMultiPlayerRoot, addr 0x63dc87c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_localMultiPlayerRoot();

  /// @brief Method get_middleClick, addr 0x63e0518, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_middleClick();

  /// @brief Method get_move, addr 0x63e0550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_move();

  /// @brief Method get_moveRepeatDelay, addr 0x63dfc64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveRepeatDelay();

  /// @brief Method get_moveRepeatRate, addr 0x63dfc74, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveRepeatRate();

  /// @brief Method get_point, addr 0x63e04c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_point();

  /// @brief Method get_pointerBehavior, addr 0x63dc85c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::UIPointerBehavior get_pointerBehavior();

  /// @brief Method get_repeatDelay, addr 0x63dfddc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_repeatDelay();

  /// @brief Method get_repeatRate, addr 0x63dfdcc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_repeatRate();

  /// @brief Method get_rightClick, addr 0x63e0534, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rightClick();

  /// @brief Method get_scrollDeltaPerTick, addr 0x63dc88c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollDeltaPerTick();

  /// @brief Method get_scrollWheel, addr 0x63e04e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_scrollWheel();

  /// @brief Method get_sendPointerHoverToParent, addr 0x63df348, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendPointerHoverToParent();

  /// @brief Method get_shouldIgnoreFocus, addr 0x63dfcf0, size 0xdc, virtual false, abstract: false, final false
  inline bool get_shouldIgnoreFocus();

  /// @brief Method get_submit, addr 0x63e056c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_submit();

  /// @brief Method get_trackedDeviceDragThresholdMultiplier, addr 0x63dfdfc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_trackedDeviceDragThresholdMultiplier();

  /// @brief Method get_trackedDeviceOrientation, addr 0x63e05a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDeviceOrientation();

  /// @brief Method get_trackedDevicePosition, addr 0x63e05c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDevicePosition();

  /// @brief Method get_trackedDeviceSelect, addr 0x63e0c74, size 0x38, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDeviceSelect();

  /// @brief Method get_xrTrackingOrigin, addr 0x63dfdec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_xrTrackingOrigin();

  static inline void setStaticF_defaultActions(::UnityEngine::InputSystem::DefaultInputActions* value);

  static inline void setStaticF_s_InputActionReferenceCounts(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>* value);

  /// @brief Method set_actionsAsset, addr 0x63e08bc, size 0x234, virtual false, abstract: false, final false
  inline void set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset* value);

  /// @brief Method set_cancel, addr 0x63e0590, size 0x14, virtual false, abstract: false, final false
  inline void set_cancel(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_cursorLockBehavior, addr 0x63dc874, size 0x8, virtual false, abstract: false, final false
  inline void set_cursorLockBehavior(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior value);

  /// @brief Method set_deselectOnBackgroundClick, addr 0x63dc854, size 0x8, virtual false, abstract: false, final false
  inline void set_deselectOnBackgroundClick(bool value);

  /// @brief Method set_leftClick, addr 0x63e0504, size 0x14, virtual false, abstract: false, final false
  inline void set_leftClick(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_localMultiPlayerRoot, addr 0x63dc884, size 0x8, virtual false, abstract: false, final false
  inline void set_localMultiPlayerRoot(::UnityEngine::GameObject* value);

  /// @brief Method set_middleClick, addr 0x63e0520, size 0x14, virtual false, abstract: false, final false
  inline void set_middleClick(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_move, addr 0x63e0558, size 0x14, virtual false, abstract: false, final false
  inline void set_move(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_moveRepeatDelay, addr 0x63dfc6c, size 0x8, virtual false, abstract: false, final false
  inline void set_moveRepeatDelay(float_t value);

  /// @brief Method set_moveRepeatRate, addr 0x63dfc7c, size 0x8, virtual false, abstract: false, final false
  inline void set_moveRepeatRate(float_t value);

  /// @brief Method set_point, addr 0x63e04cc, size 0x14, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_pointerBehavior, addr 0x63dc864, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value);

  /// @brief Method set_repeatDelay, addr 0x63dfde4, size 0x8, virtual false, abstract: false, final false
  inline void set_repeatDelay(float_t value);

  /// @brief Method set_repeatRate, addr 0x63dfdd4, size 0x8, virtual false, abstract: false, final false
  inline void set_repeatRate(float_t value);

  /// @brief Method set_rightClick, addr 0x63e053c, size 0x14, virtual false, abstract: false, final false
  inline void set_rightClick(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_scrollDeltaPerTick, addr 0x63dc894, size 0x8, virtual false, abstract: false, final false
  inline void set_scrollDeltaPerTick(float_t value);

  /// @brief Method set_scrollWheel, addr 0x63e04e8, size 0x14, virtual false, abstract: false, final false
  inline void set_scrollWheel(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_sendPointerHoverToParent, addr 0x63e3898, size 0x8, virtual false, abstract: false, final false
  inline void set_sendPointerHoverToParent(bool value);

  /// @brief Method set_submit, addr 0x63e0574, size 0x14, virtual false, abstract: false, final false
  inline void set_submit(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_trackedDeviceDragThresholdMultiplier, addr 0x63dfe04, size 0x8, virtual false, abstract: false, final false
  inline void set_trackedDeviceDragThresholdMultiplier(float_t value);

  /// @brief Method set_trackedDeviceOrientation, addr 0x63e05ac, size 0x14, virtual false, abstract: false, final false
  inline void set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_trackedDevicePosition, addr 0x63e05c8, size 0x14, virtual false, abstract: false, final false
  inline void set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_trackedDeviceSelect, addr 0x63e0cac, size 0x38, virtual false, abstract: false, final false
  inline void set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_xrTrackingOrigin, addr 0x63dfdf4, size 0x8, virtual false, abstract: false, final false
  inline void set_xrTrackingOrigin(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSystemUIInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputSystemUIInputModule(InputSystemUIInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputSystemUIInputModule(InputSystemUIInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8845 };

  /// @brief Field kClickSpeed offset 0xffffffff size 0x4
  static constexpr float_t kClickSpeed{ static_cast<float_t>(0.3f) };

  /// @brief Field kSmallestScrollDeltaPerTick offset 0xffffffff size 0x4
  static constexpr float_t kSmallestScrollDeltaPerTick{ static_cast<float_t>(1e-5f) };

  /// @brief Field m_MoveRepeatDelay, offset: 0x58, size: 0x4, def value: None
  float_t ___m_MoveRepeatDelay;

  /// @brief Field m_MoveRepeatRate, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_MoveRepeatRate;

  /// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset: 0x60, size: 0x4, def value: None
  float_t ___m_TrackedDeviceDragThresholdMultiplier;

  /// @brief Field m_XRTrackingOrigin, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_XRTrackingOrigin;

  /// @brief Field m_ActionsAsset, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_ActionsAsset;

  /// @brief Field m_PointAction, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_PointAction;

  /// @brief Field m_MoveAction, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MoveAction;

  /// @brief Field m_SubmitAction, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_SubmitAction;

  /// @brief Field m_CancelAction, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_CancelAction;

  /// @brief Field m_LeftClickAction, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_LeftClickAction;

  /// @brief Field m_MiddleClickAction, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MiddleClickAction;

  /// @brief Field m_RightClickAction, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_RightClickAction;

  /// @brief Field m_ScrollWheelAction, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ScrollWheelAction;

  /// @brief Field m_TrackedDevicePositionAction, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_TrackedDevicePositionAction;

  /// @brief Field m_TrackedDeviceOrientationAction, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_TrackedDeviceOrientationAction;

  /// @brief Field m_DeselectOnBackgroundClick, offset: 0xc8, size: 0x1, def value: None
  bool ___m_DeselectOnBackgroundClick;

  /// @brief Field m_PointerBehavior, offset: 0xcc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::UIPointerBehavior ___m_PointerBehavior;

  /// @brief Field m_CursorLockBehavior, offset: 0xd0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior ___m_CursorLockBehavior;

  /// @brief Field m_ScrollDeltaPerTick, offset: 0xd4, size: 0x4, def value: None
  float_t ___m_ScrollDeltaPerTick;

  /// @brief Field m_ActionsHooked, offset: 0xd8, size: 0x1, def value: None
  bool ___m_ActionsHooked;

  /// @brief Field m_NeedToPurgeStalePointers, offset: 0xd9, size: 0x1, def value: None
  bool ___m_NeedToPurgeStalePointers;

  /// @brief Field m_OnPointDelegate, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnPointDelegate;

  /// @brief Field m_OnMoveDelegate, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnMoveDelegate;

  /// @brief Field m_OnLeftClickDelegate, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnLeftClickDelegate;

  /// @brief Field m_OnRightClickDelegate, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnRightClickDelegate;

  /// @brief Field m_OnMiddleClickDelegate, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnMiddleClickDelegate;

  /// @brief Field m_OnScrollWheelDelegate, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnScrollWheelDelegate;

  /// @brief Field m_OnTrackedDevicePositionDelegate, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnTrackedDevicePositionDelegate;

  /// @brief Field m_OnTrackedDeviceOrientationDelegate, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_OnTrackedDeviceOrientationDelegate;

  /// @brief Field m_OnControlsChangedDelegate, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ___m_OnControlsChangedDelegate;

  /// @brief Field m_CurrentPointerId, offset: 0x128, size: 0x4, def value: None
  int32_t ___m_CurrentPointerId;

  /// @brief Field m_CurrentPointerIndex, offset: 0x12c, size: 0x4, def value: None
  int32_t ___m_CurrentPointerIndex;

  /// @brief Field m_CurrentPointerType, offset: 0x130, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::UIPointerType ___m_CurrentPointerType;

  /// @brief Field m_PointerIds, offset: 0x138, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> ___m_PointerIds;

  /// @brief Field m_PointerStates, offset: 0x148, size: 0x230, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> ___m_PointerStates;

  /// @brief Field m_NavigationState, offset: 0x378, size: 0x20, def value: None
  ::UnityEngine::InputSystem::UI::NavigationModel ___m_NavigationState;

  /// @brief Field m_LocalMultiPlayerRoot, offset: 0x398, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_LocalMultiPlayerRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveRepeatDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveRepeatRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDeviceDragThresholdMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_XRTrackingOrigin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ActionsAsset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_SubmitAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CancelAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_LeftClickAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MiddleClickAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_RightClickAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ScrollWheelAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDevicePositionAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDeviceOrientationAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_DeselectOnBackgroundClick) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerBehavior) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CursorLockBehavior) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ScrollDeltaPerTick) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ActionsHooked) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_NeedToPurgeStalePointers) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnPointDelegate) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnMoveDelegate) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnLeftClickDelegate) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnRightClickDelegate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnMiddleClickDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnScrollWheelDelegate) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnTrackedDevicePositionDelegate) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnTrackedDeviceOrientationDelegate) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnControlsChangedDelegate) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerId) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerIndex) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerType) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerIds) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerStates) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_NavigationState) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_LocalMultiPlayerRoot) == 0x398, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::InputSystemUIInputModule, 0x3a0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/CursorLockBehavior");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::InputSystemUIInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::InputSystemUIInputModule*, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/InputActionReferenceState");
