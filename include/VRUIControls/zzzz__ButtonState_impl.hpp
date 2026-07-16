#pragma once
// IWYU pragma private; include "VRUIControls/ButtonState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "VRUIControls/zzzz__ButtonState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
//  Writing Method size for method: ::VRUIControls::ButtonState.get_eventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VRUIControls::MouseButtonEventData* (::VRUIControls::ButtonState::*)()>(&::VRUIControls::ButtonState::get_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_eventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState.set_eventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::ButtonState::*)(::VRUIControls::MouseButtonEventData*)>(&::VRUIControls::ButtonState::set_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_eventData", {}, { ::i2c::type_of<::VRUIControls::MouseButtonEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_InputButton (::VRUIControls::ButtonState::*)()>(&::VRUIControls::ButtonState::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState.set_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::ButtonState::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(&::VRUIControls::ButtonState::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState.get_pressedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::VRUIControls::ButtonState::*)()>(&::VRUIControls::ButtonState::get_pressedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_pressedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState.set_pressedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::ButtonState::*)(float_t)>(&::VRUIControls::ButtonState::set_pressedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_pressedValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::ButtonState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::ButtonState::*)()>(&::VRUIControls::ButtonState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e37048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton& VRUIControls::ButtonState::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton const& VRUIControls::ButtonState::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void VRUIControls::ButtonState::__cordl_internal_set__button(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button = value;
}
constexpr ::VRUIControls::MouseButtonEventData*& VRUIControls::ButtonState::__cordl_internal_get__eventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventData;
}
constexpr ::VRUIControls::MouseButtonEventData* const& VRUIControls::ButtonState::__cordl_internal_get__eventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventData;
}
constexpr void VRUIControls::ButtonState::__cordl_internal_set__eventData(::VRUIControls::MouseButtonEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventData = value;
}
constexpr float_t& VRUIControls::ButtonState::__cordl_internal_get__pressedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedValue;
}
constexpr float_t const& VRUIControls::ButtonState::__cordl_internal_get__pressedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedValue;
}
constexpr void VRUIControls::ButtonState::__cordl_internal_set__pressedValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedValue = value;
}
inline ::VRUIControls::MouseButtonEventData* VRUIControls::ButtonState::get_eventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_eventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::MouseButtonEventData*>(this, ___internal_method);
}
inline void VRUIControls::ButtonState::set_eventData(::VRUIControls::MouseButtonEventData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_eventData", {}, { ::i2c::type_of<::VRUIControls::MouseButtonEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::PointerEventData_InputButton VRUIControls::ButtonState::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_InputButton>(this, ___internal_method);
}
inline void VRUIControls::ButtonState::set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t VRUIControls::ButtonState::get_pressedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "get_pressedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void VRUIControls::ButtonState::set_pressedValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { "set_pressedValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::ButtonState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::ButtonState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::ButtonState* VRUIControls::ButtonState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::ButtonState*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::ButtonState::ButtonState() {}
