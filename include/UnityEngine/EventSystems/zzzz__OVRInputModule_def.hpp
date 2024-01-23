#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInputModule)
namespace GlobalNamespace {
class OVRCursor;
}
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::EventSystems {
class OVRPointerEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct __OVRInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseState;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct __OVRInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::__OVRInputModule__InputMode);
MARK_REF_PTR_T(::UnityEngine::EventSystems::OVRInputModule);
// Type: ::InputMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8738))
// CS Name: ::OVRInputModule::InputMode
struct CORDL_TYPE __OVRInputModule__InputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInputModule__InputMode_Unwrapped
  enum struct ____OVRInputModule__InputMode_Unwrapped : int32_t {
    __E_Mouse = static_cast<int32_t>(0x0),
    __E_Buttons = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInputModule__InputMode_Unwrapped() const noexcept {
    return static_cast<____OVRInputModule__InputMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInputModule__InputMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInputModule__InputMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Mouse value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventSystems::__OVRInputModule__InputMode const Mouse;

  /// @brief Field Buttons value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventSystems::__OVRInputModule__InputMode const Buttons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__OVRInputModule__InputMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__OVRInputModule__InputMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::OVRInputModule
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7587)), TypeDefinitionIndex(TypeDefinitionIndex(10058)), TypeDefinitionIndex(TypeDefinitionIndex(10243)),
// TypeDefinitionIndex(TypeDefinitionIndex(13203))] Self: TypeDefinitionIndex(TypeDefinitionIndex(8739)) CS Name: ::UnityEngine.EventSystems::OVRInputModule*
class CORDL_TYPE OVRInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
  // Declarations
  using InputMode = ::UnityEngine::EventSystems::__OVRInputModule__InputMode;

  /// @brief Field rayTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rayTransform, put = __cordl_internal_set_rayTransform))::UnityW<::UnityEngine::Transform> rayTransform;

  /// @brief Field m_Cursor, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cursor, put = __cordl_internal_set_m_Cursor))::UnityW<::GlobalNamespace::OVRCursor> m_Cursor;

  /// @brief Field joyPadClickButton, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_joyPadClickButton, put = __cordl_internal_set_joyPadClickButton))::GlobalNamespace::__OVRInput__Button joyPadClickButton;

  /// @brief Field gazeClickKey, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_gazeClickKey, put = __cordl_internal_set_gazeClickKey))::UnityEngine::KeyCode gazeClickKey;

  /// @brief Field performSphereCastForGazepointer, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_performSphereCastForGazepointer, put = __cordl_internal_set_performSphereCastForGazepointer)) bool performSphereCastForGazepointer;

  /// @brief Field useRightStickScroll, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_useRightStickScroll, put = __cordl_internal_set_useRightStickScroll)) bool useRightStickScroll;

  /// @brief Field rightStickDeadZone, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_rightStickDeadZone, put = __cordl_internal_set_rightStickDeadZone)) float_t rightStickDeadZone;

  /// @brief Field useSwipeScroll, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_useSwipeScroll, put = __cordl_internal_set_useSwipeScroll)) bool useSwipeScroll;

  /// @brief Field swipeDragThreshold, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_swipeDragThreshold, put = __cordl_internal_set_swipeDragThreshold)) float_t swipeDragThreshold;

  /// @brief Field swipeDragScale, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_swipeDragScale, put = __cordl_internal_set_swipeDragScale)) float_t swipeDragScale;

  /// @brief Field InvertSwipeXAxis, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_InvertSwipeXAxis, put = __cordl_internal_set_InvertSwipeXAxis)) bool InvertSwipeXAxis;

  /// @brief Field activeGraphicRaycaster, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_activeGraphicRaycaster, put = __cordl_internal_set_activeGraphicRaycaster))::UnityW<::GlobalNamespace::OVRRaycaster> activeGraphicRaycaster;

  /// @brief Field angleDragThreshold, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_angleDragThreshold, put = __cordl_internal_set_angleDragThreshold)) float_t angleDragThreshold;

  /// @brief Field m_SpherecastRadius, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SpherecastRadius, put = __cordl_internal_set_m_SpherecastRadius)) float_t m_SpherecastRadius;

  /// @brief Field m_NextAction, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextAction, put = __cordl_internal_set_m_NextAction)) float_t m_NextAction;

  /// @brief Field m_LastMousePosition, offset 0xa4, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMousePosition, put = __cordl_internal_set_m_LastMousePosition))::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_MousePosition, offset 0xac, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MousePosition, put = __cordl_internal_set_m_MousePosition))::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_HorizontalAxis, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalAxis, put = __cordl_internal_set_m_HorizontalAxis))::StringW m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalAxis, put = __cordl_internal_set_m_VerticalAxis))::StringW m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitButton, put = __cordl_internal_set_m_SubmitButton))::StringW m_SubmitButton;

  /// @brief Field m_CancelButton, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelButton, put = __cordl_internal_set_m_CancelButton))::StringW m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputActionsPerSecond, put = __cordl_internal_set_m_InputActionsPerSecond)) float_t m_InputActionsPerSecond;

  /// @brief Field m_AllowActivationOnMobileDevice, offset 0xdc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowActivationOnMobileDevice, put = __cordl_internal_set_m_AllowActivationOnMobileDevice)) bool m_AllowActivationOnMobileDevice;

  /// @brief Field m_VRRayPointerData, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VRRayPointerData,
                      put = __cordl_internal_set_m_VRRayPointerData))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>* m_VRRayPointerData;

  /// @brief Field m_MouseState, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseState, put = __cordl_internal_set_m_MouseState))::UnityEngine::EventSystems::__PointerInputModule__MouseState* m_MouseState;

  __declspec(property(get = get_inputMode))::UnityEngine::EventSystems::__OVRInputModule__InputMode inputMode;

  __declspec(property(get = get_allowActivationOnMobileDevice, put = set_allowActivationOnMobileDevice)) bool allowActivationOnMobileDevice;

  __declspec(property(get = get_inputActionsPerSecond, put = set_inputActionsPerSecond)) float_t inputActionsPerSecond;

  __declspec(property(get = get_horizontalAxis, put = set_horizontalAxis))::StringW horizontalAxis;

  __declspec(property(get = get_verticalAxis, put = set_verticalAxis))::StringW verticalAxis;

  __declspec(property(get = get_submitButton, put = set_submitButton))::StringW submitButton;

  __declspec(property(get = get_cancelButton, put = set_cancelButton))::StringW cancelButton;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rayTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rayTransform() const;

  constexpr void __cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::GlobalNamespace::OVRCursor>& __cordl_internal_get_m_Cursor();

  constexpr ::UnityW<::GlobalNamespace::OVRCursor> const& __cordl_internal_get_m_Cursor() const;

  constexpr void __cordl_internal_set_m_Cursor(::UnityW<::GlobalNamespace::OVRCursor> value);

  constexpr ::GlobalNamespace::__OVRInput__Button& __cordl_internal_get_joyPadClickButton();

  constexpr ::GlobalNamespace::__OVRInput__Button const& __cordl_internal_get_joyPadClickButton() const;

  constexpr void __cordl_internal_set_joyPadClickButton(::GlobalNamespace::__OVRInput__Button value);

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_gazeClickKey();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_gazeClickKey() const;

  constexpr void __cordl_internal_set_gazeClickKey(::UnityEngine::KeyCode value);

  constexpr bool& __cordl_internal_get_performSphereCastForGazepointer();

  constexpr bool const& __cordl_internal_get_performSphereCastForGazepointer() const;

  constexpr void __cordl_internal_set_performSphereCastForGazepointer(bool value);

  constexpr bool& __cordl_internal_get_useRightStickScroll();

  constexpr bool const& __cordl_internal_get_useRightStickScroll() const;

  constexpr void __cordl_internal_set_useRightStickScroll(bool value);

  constexpr float_t& __cordl_internal_get_rightStickDeadZone();

  constexpr float_t const& __cordl_internal_get_rightStickDeadZone() const;

  constexpr void __cordl_internal_set_rightStickDeadZone(float_t value);

  constexpr bool& __cordl_internal_get_useSwipeScroll();

  constexpr bool const& __cordl_internal_get_useSwipeScroll() const;

  constexpr void __cordl_internal_set_useSwipeScroll(bool value);

  constexpr float_t& __cordl_internal_get_swipeDragThreshold();

  constexpr float_t const& __cordl_internal_get_swipeDragThreshold() const;

  constexpr void __cordl_internal_set_swipeDragThreshold(float_t value);

  constexpr float_t& __cordl_internal_get_swipeDragScale();

  constexpr float_t const& __cordl_internal_get_swipeDragScale() const;

  constexpr void __cordl_internal_set_swipeDragScale(float_t value);

  constexpr bool& __cordl_internal_get_InvertSwipeXAxis();

  constexpr bool const& __cordl_internal_get_InvertSwipeXAxis() const;

  constexpr void __cordl_internal_set_InvertSwipeXAxis(bool value);

  constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& __cordl_internal_get_activeGraphicRaycaster();

  constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& __cordl_internal_get_activeGraphicRaycaster() const;

  constexpr void __cordl_internal_set_activeGraphicRaycaster(::UnityW<::GlobalNamespace::OVRRaycaster> value);

  constexpr float_t& __cordl_internal_get_angleDragThreshold();

  constexpr float_t const& __cordl_internal_get_angleDragThreshold() const;

  constexpr void __cordl_internal_set_angleDragThreshold(float_t value);

  constexpr float_t& __cordl_internal_get_m_SpherecastRadius();

  constexpr float_t const& __cordl_internal_get_m_SpherecastRadius() const;

  constexpr void __cordl_internal_set_m_SpherecastRadius(float_t value);

  constexpr float_t& __cordl_internal_get_m_NextAction();

  constexpr float_t const& __cordl_internal_get_m_NextAction() const;

  constexpr void __cordl_internal_set_m_NextAction(float_t value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMousePosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMousePosition() const;

  constexpr void __cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

  constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis();

  constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

  constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_VerticalAxis();

  constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

  constexpr void __cordl_internal_set_m_VerticalAxis(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_SubmitButton();

  constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

  constexpr void __cordl_internal_set_m_SubmitButton(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_CancelButton();

  constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

  constexpr void __cordl_internal_set_m_CancelButton(::StringW value);

  constexpr float_t& __cordl_internal_get_m_InputActionsPerSecond();

  constexpr float_t const& __cordl_internal_get_m_InputActionsPerSecond() const;

  constexpr void __cordl_internal_set_m_InputActionsPerSecond(float_t value);

  constexpr bool& __cordl_internal_get_m_AllowActivationOnMobileDevice();

  constexpr bool const& __cordl_internal_get_m_AllowActivationOnMobileDevice() const;

  constexpr void __cordl_internal_set_m_AllowActivationOnMobileDevice(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>*& __cordl_internal_get_m_VRRayPointerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>*> const&
  __cordl_internal_get_m_VRRayPointerData() const;

  constexpr void __cordl_internal_set_m_VRRayPointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>* value);

  constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState*& __cordl_internal_get_m_MouseState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseState*> const& __cordl_internal_get_m_MouseState() const;

  constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::EventSystems::__PointerInputModule__MouseState* value);

  static inline ::UnityEngine::EventSystems::OVRInputModule* New_ctor();

  /// @brief Method .ctor, addr 0x27f87b8, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_inputMode, addr 0x27f8924, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__OVRInputModule__InputMode get_inputMode();

  /// @brief Method get_allowActivationOnMobileDevice, addr 0x27f892c, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowActivationOnMobileDevice();

  /// @brief Method set_allowActivationOnMobileDevice, addr 0x27f8934, size 0xc, virtual false, abstract: false, final false
  inline void set_allowActivationOnMobileDevice(bool value);

  /// @brief Method get_inputActionsPerSecond, addr 0x27f8940, size 0x8, virtual false, abstract: false, final false
  inline float_t get_inputActionsPerSecond();

  /// @brief Method set_inputActionsPerSecond, addr 0x27f8948, size 0x8, virtual false, abstract: false, final false
  inline void set_inputActionsPerSecond(float_t value);

  /// @brief Method get_horizontalAxis, addr 0x27f8950, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_horizontalAxis();

  /// @brief Method set_horizontalAxis, addr 0x27f8958, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalAxis(::StringW value);

  /// @brief Method get_verticalAxis, addr 0x27f8960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_verticalAxis();

  /// @brief Method set_verticalAxis, addr 0x27f8968, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalAxis(::StringW value);

  /// @brief Method get_submitButton, addr 0x27f8970, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_submitButton();

  /// @brief Method set_submitButton, addr 0x27f8978, size 0x8, virtual false, abstract: false, final false
  inline void set_submitButton(::StringW value);

  /// @brief Method get_cancelButton, addr 0x27f8980, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_cancelButton();

  /// @brief Method set_cancelButton, addr 0x27f8988, size 0x8, virtual false, abstract: false, final false
  inline void set_cancelButton(::StringW value);

  /// @brief Method UpdateModule, addr 0x27f8990, size 0x24, virtual true, abstract: false, final false
  inline void UpdateModule();

  /// @brief Method IsModuleSupported, addr 0x27f89b4, size 0x18, virtual true, abstract: false, final false
  inline bool IsModuleSupported();

  /// @brief Method ShouldActivateModule, addr 0x27f89cc, size 0x188, virtual true, abstract: false, final false
  inline bool ShouldActivateModule();

  /// @brief Method ActivateModule, addr 0x27f8b54, size 0xcc, virtual true, abstract: false, final false
  inline void ActivateModule();

  /// @brief Method DeactivateModule, addr 0x27f8c20, size 0x1c, virtual true, abstract: false, final false
  inline void DeactivateModule();

  /// @brief Method SendSubmitEventToSelectedObject, addr 0x27f8f30, size 0x1e8, virtual false, abstract: false, final false
  inline bool SendSubmitEventToSelectedObject();

  /// @brief Method AllowMoveEventProcessing, addr 0x27f9118, size 0x5c, virtual false, abstract: false, final false
  inline bool AllowMoveEventProcessing(float_t time);

  /// @brief Method GetRawMoveVector, addr 0x27f9174, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  /// @brief Method SendMoveEventToSelectedObject, addr 0x27f9230, size 0x204, virtual false, abstract: false, final false
  inline bool SendMoveEventToSelectedObject();

  /// @brief Method SendUpdateEventToSelectedObject, addr 0x27f9434, size 0x148, virtual false, abstract: false, final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method ProcessMousePress, addr 0x27f957c, size 0x64c, virtual false, abstract: false, final false
  inline void ProcessMousePress(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* data);

  /// @brief Method ProcessMouseEvent, addr 0x27f9ccc, size 0x2c8, virtual false, abstract: false, final false
  inline void ProcessMouseEvent(::UnityEngine::EventSystems::__PointerInputModule__MouseState* mouseData);

  /// @brief Method Process, addr 0x27f9fd4, size 0x64, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method UseMouse, addr 0x27f9f94, size 0x40, virtual false, abstract: false, final false
  static inline bool UseMouse(bool pressed, bool released, ::UnityEngine::EventSystems::PointerEventData* pointerData);

  /// @brief Method CopyFromTo, addr 0x27fa06c, size 0x68, virtual false, abstract: false, final false
  inline void CopyFromTo(::UnityEngine::EventSystems::OVRPointerEventData* from, ::UnityEngine::EventSystems::OVRPointerEventData* to);

  /// @brief Method CopyFromTo, addr 0x27fa0d4, size 0x58, virtual false, abstract: false, final false
  inline void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to);

  /// @brief Method GetPointerData, addr 0x27fa12c, size 0xec, virtual false, abstract: false, final false
  inline bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::OVRPointerEventData*> data, bool create);

  /// @brief Method ClearSelection, addr 0x27f8c3c, size 0x2f4, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method GetRectTransformNormal, addr 0x27fa220, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetRectTransformNormal(::UnityEngine::RectTransform* rectTransform);

  /// @brief Method GetGazePointerData, addr 0x27fa3c4, size 0x674, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetGazePointerData();

  /// @brief Method GetCanvasPointerData, addr 0x27faf54, size 0x3a4, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetCanvasPointerData();

  /// @brief Method ShouldStartDrag, addr 0x27fb2f8, size 0x338, virtual false, abstract: false, final false
  inline bool ShouldStartDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method IsPointerMoving, addr 0x27fa038, size 0x34, virtual false, abstract: false, final false
  static inline bool IsPointerMoving(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method SwipeAdjustedPosition, addr 0x27fb6ac, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 SwipeAdjustedPosition(::UnityEngine::Vector2 originalPosition, ::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessDrag, addr 0x27fb734, size 0x2fc, virtual true, abstract: false, final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method GetGazeButtonState, addr 0x27fba30, size 0x110, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerEventData__FramePressState GetGazeButtonState();

  /// @brief Method GetExtraScrollDelta, addr 0x27faa38, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetExtraScrollDelta();

  // Ctor Parameters [CppParam { name: "", ty: "OVRInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInputModule(OVRInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInputModule(OVRInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInputModule();

public:
  /// @brief Field rayTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rayTransform;

  /// @brief Field m_Cursor, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCursor> ___m_Cursor;

  /// @brief Field joyPadClickButton, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Button ___joyPadClickButton;

  /// @brief Field gazeClickKey, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___gazeClickKey;

  /// @brief Field performSphereCastForGazepointer, offset: 0x78, size: 0x1, def value: None
  bool ___performSphereCastForGazepointer;

  /// @brief Field useRightStickScroll, offset: 0x79, size: 0x1, def value: None
  bool ___useRightStickScroll;

  /// @brief Field rightStickDeadZone, offset: 0x7c, size: 0x4, def value: None
  float_t ___rightStickDeadZone;

  /// @brief Field useSwipeScroll, offset: 0x80, size: 0x1, def value: None
  bool ___useSwipeScroll;

  /// @brief Field swipeDragThreshold, offset: 0x84, size: 0x4, def value: None
  float_t ___swipeDragThreshold;

  /// @brief Field swipeDragScale, offset: 0x88, size: 0x4, def value: None
  float_t ___swipeDragScale;

  /// @brief Field InvertSwipeXAxis, offset: 0x8c, size: 0x1, def value: None
  bool ___InvertSwipeXAxis;

  /// @brief Field activeGraphicRaycaster, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRRaycaster> ___activeGraphicRaycaster;

  /// @brief Field angleDragThreshold, offset: 0x98, size: 0x4, def value: None
  float_t ___angleDragThreshold;

  /// @brief Field m_SpherecastRadius, offset: 0x9c, size: 0x4, def value: None
  float_t ___m_SpherecastRadius;

  /// @brief Field m_NextAction, offset: 0xa0, size: 0x4, def value: None
  float_t ___m_NextAction;

  /// @brief Field m_LastMousePosition, offset: 0xa4, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MousePosition, offset: 0xac, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_HorizontalAxis, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset: 0xd8, size: 0x4, def value: None
  float_t ___m_InputActionsPerSecond;

  /// @brief Field m_AllowActivationOnMobileDevice, offset: 0xdc, size: 0x1, def value: None
  bool ___m_AllowActivationOnMobileDevice;

  /// @brief Field m_VRRayPointerData, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>* ___m_VRRayPointerData;

  /// @brief Field m_MouseState, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__PointerInputModule__MouseState* ___m_MouseState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::OVRInputModule, 0xf0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___rayTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_Cursor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___joyPadClickButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___gazeClickKey) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___performSphereCastForGazepointer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___useRightStickScroll) == 0x79, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___rightStickDeadZone) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___useSwipeScroll) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___swipeDragThreshold) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___swipeDragScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___InvertSwipeXAxis) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___activeGraphicRaycaster) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___angleDragThreshold) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_SpherecastRadius) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_NextAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_LastMousePosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_MousePosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_HorizontalAxis) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_VerticalAxis) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_SubmitButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_CancelButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_InputActionsPerSecond) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_AllowActivationOnMobileDevice) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_VRRayPointerData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRInputModule, ___m_MouseState) == 0xe8, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__OVRInputModule__InputMode, "UnityEngine.EventSystems", "OVRInputModule/InputMode");
NEED_NO_BOX(::UnityEngine::EventSystems::OVRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRInputModule*, "UnityEngine.EventSystems", "OVRInputModule");
