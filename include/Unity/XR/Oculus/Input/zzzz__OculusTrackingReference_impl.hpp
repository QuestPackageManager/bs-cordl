#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusTrackingReference.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusTrackingReference_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference.get_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(
    &::Unity::XR::Oculus::Input::OculusTrackingReference::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cc644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { "get_trackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference.set_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTrackingReference::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::Unity::XR::Oculus::Input::OculusTrackingReference::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cc64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(),
                                                                                           { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference.get_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(
    &::Unity::XR::Oculus::Input::OculusTrackingReference::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cc654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { "get_isTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference.set_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTrackingReference::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTrackingReference::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cc65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(),
                                                                                           { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(&::Unity::XR::Oculus::Input::OculusTrackingReference::FinishSetup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64cc664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(),
                                                                                          { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTrackingReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(&::Unity::XR::Oculus::Input::OculusTrackingReference::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64cc724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_get__trackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_get__trackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_get__isTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_get__isTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTrackingReference::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTracked_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Unity::XR::Oculus::Input::OculusTrackingReference::get_trackingState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { "get_trackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTrackingReference::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(),
                                                                                         { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTrackingReference::get_isTracked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { "get_isTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTrackingReference::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(),
                                                                                         { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::Oculus::Input::OculusTrackingReference::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTrackingReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTrackingReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::Input::OculusTrackingReference* Unity::XR::Oculus::Input::OculusTrackingReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::Oculus::Input::OculusTrackingReference*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Input::OculusTrackingReference::OculusTrackingReference() {}
