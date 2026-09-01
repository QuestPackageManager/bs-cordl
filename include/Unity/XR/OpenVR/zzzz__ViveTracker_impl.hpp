#pragma once
// IWYU pragma private; include "Unity\XR\OpenVR\ViveTracker.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveTracker_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker.get_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::ViveTracker::*)()>(
    &::Unity::XR::OpenVR::ViveTracker::get_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "get_deviceVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker.set_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::ViveTracker::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::ViveTracker::set_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(),
                                                                                           { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker.get_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::ViveTracker::*)()>(
    &::Unity::XR::OpenVR::ViveTracker::get_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "get_deviceAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker.set_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::ViveTracker::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::ViveTracker::set_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::ViveTracker::*)()>(&::Unity::XR::OpenVR::ViveTracker::FinishSetup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64d1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { ::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::ViveTracker::*)()>(&::Unity::XR::OpenVR::ViveTracker::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d10f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::ViveTracker::__cordl_internal_get__deviceVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::ViveTracker::__cordl_internal_get__deviceVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::ViveTracker::__cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::ViveTracker::__cordl_internal_get__deviceAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::ViveTracker::__cordl_internal_get__deviceAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::ViveTracker::__cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularVelocity_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::ViveTracker::get_deviceVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "get_deviceVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::ViveTracker::set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(),
                                                                                         { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::ViveTracker::get_deviceAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "get_deviceAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::ViveTracker::set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::OpenVR::ViveTracker::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::ViveTracker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveTracker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::OpenVR::ViveTracker* Unity::XR::OpenVR::ViveTracker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::OpenVR::ViveTracker*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::ViveTracker::ViveTracker() {}
