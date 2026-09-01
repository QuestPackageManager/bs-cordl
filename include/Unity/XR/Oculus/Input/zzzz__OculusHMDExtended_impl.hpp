#pragma once
// IWYU pragma private; include "Unity\XR\Oculus\Input\OculusHMDExtended.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusHMD_impl.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusHMDExtended_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended.get_back
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusHMDExtended::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMDExtended::get_back)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d208c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { "get_back", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended.set_back
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMDExtended::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusHMDExtended::set_back)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d2094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(),
                                                                                           { "set_back", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended.get_touchpad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::Unity::XR::Oculus::Input::OculusHMDExtended::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMDExtended::get_touchpad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d209c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { "get_touchpad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended.set_touchpad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMDExtended::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMDExtended::set_touchpad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d20a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(),
                                                                                           { "set_touchpad", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMDExtended::*)()>(&::Unity::XR::Oculus::Input::OculusHMDExtended::FinishSetup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x64d20ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMDExtended._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMDExtended::*)()>(&::Unity::XR::Oculus::Input::OculusHMDExtended::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d2168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_get__back_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____back_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_get__back_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____back_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____back_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_get__touchpad_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpad_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_get__touchpad_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpad_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMDExtended::__cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchpad_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusHMDExtended::get_back() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { "get_back", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMDExtended::set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(),
                                                                                         { "set_back", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Unity::XR::Oculus::Input::OculusHMDExtended::get_touchpad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { "get_touchpad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMDExtended::set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(),
                                                                                         { "set_touchpad", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::Oculus::Input::OculusHMDExtended::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMDExtended::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMDExtended*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::Input::OculusHMDExtended* Unity::XR::Oculus::Input::OculusHMDExtended::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::Oculus::Input::OculusHMDExtended*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Input::OculusHMDExtended::OculusHMDExtended() {}
