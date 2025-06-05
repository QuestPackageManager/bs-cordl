#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/PointerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
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
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel_ButtonState;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
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
struct PointerModel_ButtonState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::PointerModel);
MARK_VAL_T(::UnityEngine::InputSystem::UI::PointerModel_ButtonState);
// Dependencies UnityEngine.EventSystems.PointerEventData::FramePressState, UnityEngine.EventSystems.RaycastResult, UnityEngine.Vector2
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.PointerModel/ButtonState
struct CORDL_TYPE PointerModel_ButtonState {
public:
  // Declarations
  __declspec(property(get = get_clickedOnSameGameObject, put = set_clickedOnSameGameObject)) bool clickedOnSameGameObject;

  __declspec(property(get = get_ignoreNextClick, put = set_ignoreNextClick)) bool ignoreNextClick;

  __declspec(property(get = get_isPressed, put = set_isPressed)) bool isPressed;

  __declspec(property(get = get_pressTime, put = set_pressTime)) float_t pressTime;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  /// @brief Method CopyPressStateFrom, addr 0x45f117c, size 0x74, virtual false, abstract: false, final false
  inline void CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyPressStateTo, addr 0x45efc00, size 0xac, virtual false, abstract: false, final false
  inline void CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndFrame, addr 0x45f55cc, size 0xc, virtual false, abstract: false, final false
  inline void OnEndFrame();

  /// @brief Method get_clickedOnSameGameObject, addr 0x45f5604, size 0x8, virtual false, abstract: false, final false
  inline bool get_clickedOnSameGameObject();

  /// @brief Method get_ignoreNextClick, addr 0x45f55e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreNextClick();

  /// @brief Method get_isPressed, addr 0x45f55d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_pressTime, addr 0x45f55f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressTime();

  /// @brief Method get_wasPressedThisFrame, addr 0x45f116c, size 0x10, virtual false, abstract: false, final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame, addr 0x45f0ad0, size 0x14, virtual false, abstract: false, final false
  inline bool get_wasReleasedThisFrame();

  /// @brief Method set_clickedOnSameGameObject, addr 0x45f560c, size 0xc, virtual false, abstract: false, final false
  inline void set_clickedOnSameGameObject(bool value);

  /// @brief Method set_ignoreNextClick, addr 0x45f55e8, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreNextClick(bool value);

  /// @brief Method set_isPressed, addr 0x45f4478, size 0x54, virtual false, abstract: false, final false
  inline void set_isPressed(bool value);

  /// @brief Method set_pressTime, addr 0x45f55fc, size 0x8, virtual false, abstract: false, final false
  inline void set_pressTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerModel_ButtonState();

  // Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FramePressState", ty:
  // "::UnityEngine::EventSystems::PointerEventData_FramePressState", modifiers: "", def_value: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "m_PressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers:
  // "", def_value: None }, CppParam { name: "m_RawPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "m_LastPressObject", ty:
  // "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "m_DragObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam {
  // name: "m_PressPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_ClickCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ClickedOnSameGameObject", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: None }]
  constexpr PointerModel_ButtonState(bool m_IsPressed, ::UnityEngine::EventSystems::PointerEventData_FramePressState m_FramePressState, float_t m_PressTime,
                                     ::UnityEngine::EventSystems::RaycastResult m_PressRaycast, ::UnityW<::UnityEngine::GameObject> m_PressObject, ::UnityW<::UnityEngine::GameObject> m_RawPressObject,
                                     ::UnityW<::UnityEngine::GameObject> m_LastPressObject, ::UnityW<::UnityEngine::GameObject> m_DragObject, ::UnityEngine::Vector2 m_PressPosition,
                                     float_t m_ClickTime, int32_t m_ClickCount, bool m_Dragging, bool m_ClickedOnSameGameObject, bool m_IgnoreNextClick) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field m_IsPressed, offset: 0x0, size: 0x1, def value: None
  bool m_IsPressed;

  /// @brief Field m_FramePressState, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_FramePressState m_FramePressState;

  /// @brief Field m_PressTime, offset: 0x8, size: 0x4, def value: None
  float_t m_PressTime;

  /// @brief Field m_PressRaycast, offset: 0x10, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult m_PressRaycast;

  /// @brief Field m_PressObject, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_PressObject;

  /// @brief Field m_RawPressObject, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_RawPressObject;

  /// @brief Field m_LastPressObject, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_LastPressObject;

  /// @brief Field m_DragObject, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> m_DragObject;

  /// @brief Field m_PressPosition, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PressPosition;

  /// @brief Field m_ClickTime, offset: 0x88, size: 0x4, def value: None
  float_t m_ClickTime;

  /// @brief Field m_ClickCount, offset: 0x8c, size: 0x4, def value: None
  int32_t m_ClickCount;

  /// @brief Field m_Dragging, offset: 0x90, size: 0x1, def value: None
  bool m_Dragging;

  /// @brief Field m_ClickedOnSameGameObject, offset: 0x91, size: 0x1, def value: None
  bool m_ClickedOnSameGameObject;

  /// @brief Field m_IgnoreNextClick, offset: 0x92, size: 0x1, def value: None
  bool m_IgnoreNextClick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_IsPressed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_FramePressState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_PressTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_PressRaycast) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_PressObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_RawPressObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_LastPressObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_DragObject) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_PressPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_ClickTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_ClickCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_Dragging) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_ClickedOnSameGameObject) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, m_IgnoreNextClick) == 0x92, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::PointerModel_ButtonState, 0x98>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Dependencies UnityEngine.InputSystem.UI.PointerModel::ButtonState, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.PointerModel
struct CORDL_TYPE PointerModel {
public:
  // Declarations
  using ButtonState = ::UnityEngine::InputSystem::UI::PointerModel_ButtonState;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_pointerType)) ::UnityEngine::InputSystem::UI::UIPointerType pointerType;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_radius, put = set_radius)) ::UnityEngine::Vector2 radius;

  __declspec(property(get = get_screenPosition, put = set_screenPosition)) ::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta)) ::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_worldOrientation, put = set_worldOrientation)) ::UnityEngine::Quaternion worldOrientation;

  __declspec(property(get = get_worldPosition, put = set_worldPosition)) ::UnityEngine::Vector3 worldPosition;

  /// @brief Method CopyTouchOrPenStateFrom, addr 0x45f4bbc, size 0xc8, virtual false, abstract: false, final false
  inline void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x45f4e20, size 0x48, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method .ctor, addr 0x45f3dfc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method get_altitudeAngle, addr 0x45f5530, size 0x8, virtual false, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle, addr 0x45f5508, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_pointerType, addr 0x45efcf8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();

  /// @brief Method get_pressure, addr 0x45f54e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0x45f5580, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_screenPosition, addr 0x45f54a4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_scrollDelta, addr 0x45f54d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method get_twist, addr 0x45f5558, size 0x8, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method get_worldOrientation, addr 0x45f54c0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldOrientation();

  /// @brief Method get_worldPosition, addr 0x45f54b0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldPosition();

  /// @brief Method set_altitudeAngle, addr 0x45f5538, size 0x20, virtual false, abstract: false, final false
  inline void set_altitudeAngle(float_t value);

  /// @brief Method set_azimuthAngle, addr 0x45f5510, size 0x20, virtual false, abstract: false, final false
  inline void set_azimuthAngle(float_t value);

  /// @brief Method set_pressure, addr 0x45f54e8, size 0x20, virtual false, abstract: false, final false
  inline void set_pressure(float_t value);

  /// @brief Method set_radius, addr 0x45f558c, size 0x40, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// @brief Method set_screenPosition, addr 0x45f3dbc, size 0x40, virtual false, abstract: false, final false
  inline void set_screenPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_scrollDelta, addr 0x45f4788, size 0x40, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_twist, addr 0x45f5560, size 0x20, virtual false, abstract: false, final false
  inline void set_twist(float_t value);

  /// @brief Method set_worldOrientation, addr 0x45f48d0, size 0x58, virtual false, abstract: false, final false
  inline void set_worldOrientation(::UnityEngine::Quaternion value);

  /// @brief Method set_worldPosition, addr 0x45f49d0, size 0x54, virtual false, abstract: false, final false
  inline void set_worldPosition(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerModel();

  // Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftButton", ty: "::UnityEngine::InputSystem::UI::PointerModel_ButtonState",
  // modifiers: "", def_value: None }, CppParam { name: "rightButton", ty: "::UnityEngine::InputSystem::UI::PointerModel_ButtonState", modifiers: "", def_value: None }, CppParam { name:
  // "middleButton", ty: "::UnityEngine::InputSystem::UI::PointerModel_ButtonState", modifiers: "", def_value: None }, CppParam { name: "eventData", ty:
  // "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: None }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_WorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None
  // }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr PointerModel(bool changedThisFrame, ::UnityEngine::InputSystem::UI::PointerModel_ButtonState leftButton, ::UnityEngine::InputSystem::UI::PointerModel_ButtonState rightButton,
                         ::UnityEngine::InputSystem::UI::PointerModel_ButtonState middleButton, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                         ::UnityEngine::Vector2 m_ScreenPosition, ::UnityEngine::Vector2 m_ScrollDelta, ::UnityEngine::Vector3 m_WorldPosition, ::UnityEngine::Quaternion m_WorldOrientation,
                         float_t m_Pressure, float_t m_AzimuthAngle, float_t m_AltitudeAngle, float_t m_Twist, ::UnityEngine::Vector2 m_Radius) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6789 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x220 };

  /// @brief Field changedThisFrame, offset: 0x0, size: 0x1, def value: None
  bool changedThisFrame;

  /// @brief Field leftButton, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::InputSystem::UI::PointerModel_ButtonState leftButton;

  /// @brief Field rightButton, offset: 0xa0, size: 0x98, def value: None
  ::UnityEngine::InputSystem::UI::PointerModel_ButtonState rightButton;

  /// @brief Field middleButton, offset: 0x138, size: 0x98, def value: None
  ::UnityEngine::InputSystem::UI::PointerModel_ButtonState middleButton;

  /// @brief Field eventData, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData;

  /// @brief Field m_ScreenPosition, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScreenPosition;

  /// @brief Field m_ScrollDelta, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScrollDelta;

  /// @brief Field m_WorldPosition, offset: 0x1e8, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_WorldPosition;

  /// @brief Field m_WorldOrientation, offset: 0x1f4, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_WorldOrientation;

  /// @brief Field m_Pressure, offset: 0x204, size: 0x4, def value: None
  float_t m_Pressure;

  /// @brief Field m_AzimuthAngle, offset: 0x208, size: 0x4, def value: None
  float_t m_AzimuthAngle;

  /// @brief Field m_AltitudeAngle, offset: 0x20c, size: 0x4, def value: None
  float_t m_AltitudeAngle;

  /// @brief Field m_Twist, offset: 0x210, size: 0x4, def value: None
  float_t m_Twist;

  /// @brief Field m_Radius, offset: 0x214, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, changedThisFrame) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, leftButton) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, rightButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, middleButton) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, eventData) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScreenPosition) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScrollDelta) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldPosition) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldOrientation) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Pressure) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AzimuthAngle) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AltitudeAngle) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Twist) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Radius) == 0x214, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::PointerModel, 0x220>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::PointerModel, "UnityEngine.InputSystem.UI", "PointerModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::PointerModel_ButtonState, "UnityEngine.InputSystem.UI", "PointerModel/ButtonState");
