#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\PointerModel.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_isPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_isPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.set_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(bool)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_isPressed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65990f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_isPressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_ignoreNextClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_ignoreNextClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_ignoreNextClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.set_ignoreNextClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(bool)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_ignoreNextClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_ignoreNextClick", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_pressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_pressTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.set_pressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_pressTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_clickedOnSameGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_clickedOnSameGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_clickedOnSameGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.set_clickedOnSameGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(bool)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_clickedOnSameGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_clickedOnSameGameObject", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_wasPressedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_wasPressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65959f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_wasPressedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.get_wasReleasedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_wasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659507c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_wasReleasedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.CopyPressStateTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::CopyPressStateTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6594024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(),
                                                                                           { "CopyPressStateTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.CopyPressStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::PointerModel_ButtonState::CopyPressStateFrom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6595a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(),
                                                                                           { "CopyPressStateFrom", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel_ButtonState.OnEndFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel_ButtonState::*)()>(&::UnityEngine::InputSystem::UI::PointerModel_ButtonState::OnEndFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659a52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "OnEndFrame", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_isPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_isPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_isPressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_isPressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_ignoreNextClick() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_ignoreNextClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_ignoreNextClick(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_ignoreNextClick", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_pressTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_pressTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_pressTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_pressTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_clickedOnSameGameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_clickedOnSameGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::set_clickedOnSameGameObject(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "set_clickedOnSameGameObject", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_wasPressedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_wasPressedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::PointerModel_ButtonState::get_wasReleasedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "get_wasReleasedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(),
                                                                                         { "CopyPressStateTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(),
                                                                                         { "CopyPressStateFrom", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::PointerModel_ButtonState::OnEndFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>(), { "OnEndFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FramePressState", ty:
// "::UnityEngine::EventSystems::PointerEventData_FramePressState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressObject", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RawPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_LastPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DragObject", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PressPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClickCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Dragging",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClickedOnSameGameObject", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IgnoreNextClick", ty:
// "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::PointerModel_ButtonState::PointerModel_ButtonState(bool m_IsPressed, ::UnityEngine::EventSystems::PointerEventData_FramePressState m_FramePressState,
                                                                                             float_t m_PressTime, ::UnityEngine::EventSystems::RaycastResult m_PressRaycast,
                                                                                             ::UnityW<::UnityEngine::GameObject> m_PressObject, ::UnityW<::UnityEngine::GameObject> m_RawPressObject,
                                                                                             ::UnityW<::UnityEngine::GameObject> m_LastPressObject, ::UnityW<::UnityEngine::GameObject> m_DragObject,
                                                                                             ::UnityEngine::Vector2 m_PressPosition, float_t m_ClickTime, int32_t m_ClickCount, bool m_Dragging,
                                                                                             bool m_ClickedOnSameGameObject, bool m_IgnoreNextClick) noexcept {
  this->m_IsPressed = m_IsPressed;
  this->m_FramePressState = m_FramePressState;
  this->m_PressTime = m_PressTime;
  this->m_PressRaycast = m_PressRaycast;
  this->m_PressObject = m_PressObject;
  this->m_RawPressObject = m_RawPressObject;
  this->m_LastPressObject = m_LastPressObject;
  this->m_DragObject = m_DragObject;
  this->m_PressPosition = m_PressPosition;
  this->m_ClickTime = m_ClickTime;
  this->m_ClickCount = m_ClickCount;
  this->m_Dragging = m_Dragging;
  this->m_ClickedOnSameGameObject = m_ClickedOnSameGameObject;
  this->m_IgnoreNextClick = m_IgnoreNextClick;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::PointerModel_ButtonState::PointerModel_ButtonState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::UIPointerType (::UnityEngine::InputSystem::UI::PointerModel::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel::get_pointerType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65940fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_pointerType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_screenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_screenPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659a404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_screenPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_screenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::UI::PointerModel::set_screenPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65989e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_screenPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_worldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_worldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x659a410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_worldPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_worldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::InputSystem::UI::PointerModel::set_worldPosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6599784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_worldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_worldOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::UI::PointerModel::*)()>(
    &::UnityEngine::InputSystem::UI::PointerModel::get_worldOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659a420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_worldOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_worldOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::UI::PointerModel::set_worldOrientation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6599638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_worldOrientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_scrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_scrollDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659a434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_scrollDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_scrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::UI::PointerModel::set_scrollDelta)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6599448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_scrollDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_pressure)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x659a448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_azimuthAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x659a470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_altitudeAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x659a498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_twist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_twist)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x659a4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_radius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659a4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputSystem::UI::PointerModel::set_radius)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659a4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(
    &::UnityEngine::InputSystem::UI::PointerModel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6598a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.OnFrameFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6599ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "OnFrameFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.CopyTouchOrPenStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::PointerModel::CopyTouchOrPenStateFrom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6599a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                                                                                           { "CopyTouchOrPenStateFrom", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::UI::UIPointerType UnityEngine::InputSystem::UI::PointerModel::get_pointerType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_pointerType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerType>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_screenPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_screenPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_screenPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_screenPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::PointerModel::get_worldPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_worldPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_worldPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_worldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::UI::PointerModel::get_worldOrientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_worldOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_worldOrientation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_worldOrientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_scrollDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_scrollDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_scrollDelta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_scrollDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_pressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_azimuthAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_azimuthAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_azimuthAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_altitudeAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_altitudeAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_altitudeAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_twist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_twist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_twist(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_radius(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::PointerModel::_ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::PointerModel::OnFrameFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(), { "OnFrameFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                                                                                         { "CopyTouchOrPenStateFrom", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftButton", ty:
// "::UnityEngine::InputSystem::UI::PointerModel_ButtonState", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightButton", ty: "::UnityEngine::InputSystem::UI::PointerModel_ButtonState",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "middleButton", ty: "::UnityEngine::InputSystem::UI::PointerModel_ButtonState", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "eventData", ty: "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WorldPosition", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AltitudeAngle",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::PointerModel::PointerModel(bool changedThisFrame, ::UnityEngine::InputSystem::UI::PointerModel_ButtonState leftButton,
                                                                     ::UnityEngine::InputSystem::UI::PointerModel_ButtonState rightButton,
                                                                     ::UnityEngine::InputSystem::UI::PointerModel_ButtonState middleButton,
                                                                     ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::UnityEngine::Vector2 m_ScreenPosition,
                                                                     ::UnityEngine::Vector2 m_ScrollDelta, ::UnityEngine::Vector3 m_WorldPosition, ::UnityEngine::Quaternion m_WorldOrientation,
                                                                     float_t m_Pressure, float_t m_AzimuthAngle, float_t m_AltitudeAngle, float_t m_Twist, ::UnityEngine::Vector2 m_Radius) noexcept {
  this->changedThisFrame = changedThisFrame;
  this->leftButton = leftButton;
  this->rightButton = rightButton;
  this->middleButton = middleButton;
  this->eventData = eventData;
  this->m_ScreenPosition = m_ScreenPosition;
  this->m_ScrollDelta = m_ScrollDelta;
  this->m_WorldPosition = m_WorldPosition;
  this->m_WorldOrientation = m_WorldOrientation;
  this->m_Pressure = m_Pressure;
  this->m_AzimuthAngle = m_AzimuthAngle;
  this->m_AltitudeAngle = m_AltitudeAngle;
  this->m_Twist = m_Twist;
  this->m_Radius = m_Radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::PointerModel::PointerModel() {}
