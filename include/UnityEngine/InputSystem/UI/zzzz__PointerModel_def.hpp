#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerModel)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem::UI {
struct __PointerModel__ButtonState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::UI {
struct __PointerModel__ButtonState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::PointerModel);
MARK_VAL_T(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState);
// Type: ::ButtonState
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 155, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: ::PointerModel::ButtonState
struct CORDL_TYPE __PointerModel__ButtonState {
public:
  // Declarations
  __declspec(property(get = get_clickedOnSameGameObject, put = set_clickedOnSameGameObject)) bool clickedOnSameGameObject;

  __declspec(property(get = get_ignoreNextClick, put = set_ignoreNextClick)) bool ignoreNextClick;

  __declspec(property(get = get_isPressed, put = set_isPressed)) bool isPressed;

  __declspec(property(get = get_pressTime, put = set_pressTime)) float_t pressTime;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  /// @brief Method CopyPressStateFrom, addr 0x30000ac, size 0x68, virtual false, abstract: false, final false
  inline void CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyPressStateTo, addr 0x2ffeb6c, size 0xa0, virtual false, abstract: false, final false
  inline void CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndFrame, addr 0x30041a8, size 0xc, virtual false, abstract: false, final false
  inline void OnEndFrame();

  /// @brief Method get_clickedOnSameGameObject, addr 0x30041e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_clickedOnSameGameObject();

  /// @brief Method get_ignoreNextClick, addr 0x30041bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreNextClick();

  /// @brief Method get_isPressed, addr 0x30041b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_pressTime, addr 0x30041d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressTime();

  /// @brief Method get_wasPressedThisFrame, addr 0x300009c, size 0x10, virtual false, abstract: false, final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame, addr 0x2fff9f4, size 0x14, virtual false, abstract: false, final false
  inline bool get_wasReleasedThisFrame();

  /// @brief Method set_clickedOnSameGameObject, addr 0x30041e8, size 0xc, virtual false, abstract: false, final false
  inline void set_clickedOnSameGameObject(bool value);

  /// @brief Method set_ignoreNextClick, addr 0x30041c4, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreNextClick(bool value);

  /// @brief Method set_isPressed, addr 0x3003318, size 0x54, virtual false, abstract: false, final false
  inline void set_isPressed(bool value);

  /// @brief Method set_pressTime, addr 0x30041d8, size 0x8, virtual false, abstract: false, final false
  inline void set_pressTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerModel__ButtonState();

  // Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FramePressState", ty:
  // "::UnityEngine::EventSystems::__PointerEventData__FramePressState", modifiers: "", def_value: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "m_PressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers:
  // "", def_value: None }, CppParam { name: "m_RawPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "m_LastPressObject", ty:
  // "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "m_DragObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam {
  // name: "m_PressPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_ClickCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ClickedOnSameGameObject", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PointerModel__ButtonState(bool m_IsPressed, ::UnityEngine::EventSystems::__PointerEventData__FramePressState m_FramePressState, float_t m_PressTime,
                                        ::UnityEngine::EventSystems::RaycastResult m_PressRaycast, ::UnityW<::UnityEngine::GameObject> m_PressObject,
                                        ::UnityW<::UnityEngine::GameObject> m_RawPressObject, ::UnityW<::UnityEngine::GameObject> m_LastPressObject, ::UnityW<::UnityEngine::GameObject> m_DragObject,
                                        ::UnityEngine::Vector2 m_PressPosition, float_t m_ClickTime, int32_t m_ClickCount, bool m_Dragging, bool m_ClickedOnSameGameObject,
                                        bool m_IgnoreNextClick) noexcept;

  /// @brief Field m_IsPressed, offset: 0x0, size: 0x1, def value: None
  bool m_IsPressed;

  /// @brief Field m_FramePressState, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__FramePressState m_FramePressState;

  /// @brief Field m_PressTime, offset: 0x8, size: 0x4, def value: None
  float_t m_PressTime;

  /// @brief Field m_PressRaycast, offset: 0x10, size: 0x48, def value: None
  ::UnityEngine::EventSystems::RaycastResult m_PressRaycast;

  /// @brief Field m_PressObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_PressObject;

  /// @brief Field m_RawPressObject, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_RawPressObject;

  /// @brief Field m_LastPressObject, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_LastPressObject;

  /// @brief Field m_DragObject, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_DragObject;

  /// @brief Field m_PressPosition, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PressPosition;

  /// @brief Field m_ClickTime, offset: 0x80, size: 0x4, def value: None
  float_t m_ClickTime;

  /// @brief Field m_ClickCount, offset: 0x84, size: 0x4, def value: None
  int32_t m_ClickCount;

  /// @brief Field m_Dragging, offset: 0x88, size: 0x1, def value: None
  bool m_Dragging;

  /// @brief Field m_ClickedOnSameGameObject, offset: 0x89, size: 0x1, def value: None
  bool m_ClickedOnSameGameObject;

  /// @brief Field m_IgnoreNextClick, offset: 0x8a, size: 0x1, def value: None
  bool m_IgnoreNextClick;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_IsPressed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_FramePressState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_PressTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_PressRaycast) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_PressObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_RawPressObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_LastPressObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_DragObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_PressPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_ClickTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_ClickCount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_Dragging) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_ClickedOnSameGameObject) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, m_IgnoreNextClick) == 0x8a, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::PointerModel
// SizeInfo { instance_size: 520, native_size: -1, calculated_instance_size: 520, calculated_native_size: 532, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.UI::PointerModel
struct CORDL_TYPE PointerModel {
public:
  // Declarations
  using ButtonState = ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_pointerType))::UnityEngine::InputSystem::UI::UIPointerType pointerType;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::Vector2 radius;

  __declspec(property(get = get_screenPosition, put = set_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta))::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_worldOrientation, put = set_worldOrientation))::UnityEngine::Quaternion worldOrientation;

  __declspec(property(get = get_worldPosition, put = set_worldPosition))::UnityEngine::Vector3 worldPosition;

  /// @brief Method CopyTouchOrPenStateFrom, addr 0x3003988, size 0xc8, virtual false, abstract: false, final false
  inline void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x3003940, size 0x48, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method .ctor, addr 0x3002d20, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method get_altitudeAngle, addr 0x3004114, size 0x8, virtual false, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle, addr 0x30040f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_pointerType, addr 0x2ffec58, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();

  /// @brief Method get_pressure, addr 0x30040cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0x300415c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_screenPosition, addr 0x3004090, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_scrollDelta, addr 0x30040c0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method get_twist, addr 0x3004138, size 0x8, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method get_worldOrientation, addr 0x30040ac, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldOrientation();

  /// @brief Method get_worldPosition, addr 0x300409c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldPosition();

  /// @brief Method set_altitudeAngle, addr 0x300411c, size 0x1c, virtual false, abstract: false, final false
  inline void set_altitudeAngle(float_t value);

  /// @brief Method set_azimuthAngle, addr 0x30040f8, size 0x1c, virtual false, abstract: false, final false
  inline void set_azimuthAngle(float_t value);

  /// @brief Method set_pressure, addr 0x30040d4, size 0x1c, virtual false, abstract: false, final false
  inline void set_pressure(float_t value);

  /// @brief Method set_radius, addr 0x3004168, size 0x40, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// @brief Method set_screenPosition, addr 0x3002ce0, size 0x40, virtual false, abstract: false, final false
  inline void set_screenPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_scrollDelta, addr 0x3003534, size 0x40, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_twist, addr 0x3004140, size 0x1c, virtual false, abstract: false, final false
  inline void set_twist(float_t value);

  /// @brief Method set_worldOrientation, addr 0x3003658, size 0x58, virtual false, abstract: false, final false
  inline void set_worldOrientation(::UnityEngine::Quaternion value);

  /// @brief Method set_worldPosition, addr 0x3003734, size 0x54, virtual false, abstract: false, final false
  inline void set_worldPosition(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerModel();

  // Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftButton", ty:
  // "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name: "rightButton", ty: "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState",
  // modifiers: "", def_value: None }, CppParam { name: "middleButton", ty: "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name:
  // "eventData", ty: "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: None }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_WorldPosition", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr PointerModel(bool changedThisFrame, ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState leftButton, ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState rightButton,
                         ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState middleButton, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                         ::UnityEngine::Vector2 m_ScreenPosition, ::UnityEngine::Vector2 m_ScrollDelta, ::UnityEngine::Vector3 m_WorldPosition, ::UnityEngine::Quaternion m_WorldOrientation,
                         float_t m_Pressure, float_t m_AzimuthAngle, float_t m_AltitudeAngle, float_t m_Twist, ::UnityEngine::Vector2 m_Radius) noexcept;

  /// @brief Field changedThisFrame, offset: 0x0, size: 0x1, def value: None
  bool changedThisFrame;

  /// @brief Field leftButton, offset: 0x8, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState leftButton;

  /// @brief Field rightButton, offset: 0x98, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState rightButton;

  /// @brief Field middleButton, offset: 0x128, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState middleButton;

  /// @brief Field eventData, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData;

  /// @brief Field m_ScreenPosition, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScreenPosition;

  /// @brief Field m_ScrollDelta, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScrollDelta;

  /// @brief Field m_WorldPosition, offset: 0x1d0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_WorldPosition;

  /// @brief Field m_WorldOrientation, offset: 0x1dc, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_WorldOrientation;

  /// @brief Field m_Pressure, offset: 0x1ec, size: 0x4, def value: None
  float_t m_Pressure;

  /// @brief Field m_AzimuthAngle, offset: 0x1f0, size: 0x4, def value: None
  float_t m_AzimuthAngle;

  /// @brief Field m_AltitudeAngle, offset: 0x1f4, size: 0x4, def value: None
  float_t m_AltitudeAngle;

  /// @brief Field m_Twist, offset: 0x1f8, size: 0x4, def value: None
  float_t m_Twist;

  /// @brief Field m_Radius, offset: 0x1fc, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::PointerModel, 0x208>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, changedThisFrame) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, leftButton) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, rightButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, middleButton) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, eventData) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScreenPosition) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScrollDelta) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldOrientation) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Pressure) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AzimuthAngle) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AltitudeAngle) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Twist) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Radius) == 0x1fc, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::PointerModel, "UnityEngine.InputSystem.UI", "PointerModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, "UnityEngine.InputSystem.UI", "PointerModel/ButtonState");
