#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXMouseEventBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXMouseEventBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXMouseEventBinder_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::VFXMouseEventBinder_Activation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::VFXMouseEventBinder_Activation() {}
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseUp{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseEnter{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseExit{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseOver{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation::OnMouseDrag{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.SetEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXMouseEventBinder::SetEventAttribute)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69e06f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::Awake)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x69e08a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.RaycastMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::RaycastMainCamera)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69e0b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RaycastMainCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.RayCastDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::RayCastDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69e0dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RayCastDrag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.RayCastAndTriggerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)(::System::Action*)>(
    &::UnityEngine::VFX::Utility::VFXMouseEventBinder::RayCastAndTriggerEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69e0e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RayCastAndTriggerEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69e0f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69e0f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.GetMousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::GetMousePosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69e0800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "GetMousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseDown)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e0fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseUp)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69e1110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseDrag)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e11c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseDrag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseOver)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e0c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseOver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseEnter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseEnter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder.DoOnMouseExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseExit)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e0d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMouseEventBinder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69e1334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder._Awake_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::VFX::Utility::VFXMouseEventBinder::_Awake_b__12_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69e13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(),
                                                                                           { "<Awake>b__12_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMouseEventBinder._Awake_b__12_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMouseEventBinder::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::VFX::Utility::VFXMouseEventBinder::_Awake_b__12_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69e1464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(),
                                                                                           { "<Awake>b__12_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_activation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_activation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activation = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_position(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_RaycastMousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastMousePosition;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_RaycastMousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastMousePosition;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_RaycastMousePosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RaycastMousePosition = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDown;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDown;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseDown(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseDown = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseUp;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseUp;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseUp(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseUp = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDragStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDragStart;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDragStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDragStart;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseDragStart(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseDragStart = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDragStop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDragStop;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseDragStop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseDragStop;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseDragStop(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseDragStop = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseEnter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseEnter;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseEnter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseEnter;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseEnter(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseEnter = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseOver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseOver;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_mouseOver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseOver;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_mouseOver(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mouseOver = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_drag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drag;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_get_drag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drag;
}
constexpr void UnityEngine::VFX::Utility::VFXMouseEventBinder::__cordl_internal_set_drag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drag = value;
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::SetEventAttribute(::ArrayW<::System::Object*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::RaycastMainCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RaycastMainCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::RayCastDrag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RayCastDrag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::RayCastAndTriggerEvent(::System::Action* trigger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "RayCastAndTriggerEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::VFX::Utility::VFXMouseEventBinder::GetMousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "GetMousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseDrag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseDrag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseOver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseOver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseEnter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseEnter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::DoOnMouseExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { "DoOnMouseExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::_Awake_b__12_0(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(),
                                                                                         { "<Awake>b__12_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::VFX::Utility::VFXMouseEventBinder::_Awake_b__12_1(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>(),
                                                                                         { "<Awake>b__12_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::UnityEngine::VFX::Utility::VFXMouseEventBinder* UnityEngine::VFX::Utility::VFXMouseEventBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXMouseEventBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder::VFXMouseEventBinder() {}
