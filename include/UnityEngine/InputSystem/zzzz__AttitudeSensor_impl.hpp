#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/AttitudeSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__AttitudeSensor_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.get_attitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::InputSystem::AttitudeSensor::*)()>(
    &::UnityEngine::InputSystem::AttitudeSensor::get_attitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6560840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "get_attitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.set_attitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AttitudeSensor::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(
    &::UnityEngine::InputSystem::AttitudeSensor::set_attitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6560848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(),
                                                                                           { "set_attitude", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::AttitudeSensor* (*)()>(&::UnityEngine::InputSystem::AttitudeSensor::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6560850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::AttitudeSensor*)>(&::UnityEngine::InputSystem::AttitudeSensor::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x656089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::AttitudeSensor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AttitudeSensor::*)()>(&::UnityEngine::InputSystem::AttitudeSensor::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65608ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AttitudeSensor::*)()>(&::UnityEngine::InputSystem::AttitudeSensor::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x656093c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AttitudeSensor::*)()>(&::UnityEngine::InputSystem::AttitudeSensor::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65609cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AttitudeSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AttitudeSensor::*)()>(&::UnityEngine::InputSystem::AttitudeSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6560a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::InputSystem::AttitudeSensor::__cordl_internal_get__attitude_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attitude_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::InputSystem::AttitudeSensor::__cordl_internal_get__attitude_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attitude_k__BackingField;
}
constexpr void UnityEngine::InputSystem::AttitudeSensor::__cordl_internal_set__attitude_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attitude_k__BackingField = value;
}
inline void UnityEngine::InputSystem::AttitudeSensor::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::AttitudeSensor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::AttitudeSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::AttitudeSensor*>(
      std::forward<::UnityEngine::InputSystem::AttitudeSensor*>(value));
}
inline ::UnityEngine::InputSystem::AttitudeSensor* UnityEngine::InputSystem::AttitudeSensor::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::AttitudeSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::AttitudeSensor*>();
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::InputSystem::AttitudeSensor::get_attitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "get_attitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AttitudeSensor::set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(),
                                                                                         { "set_attitude", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::AttitudeSensor* UnityEngine::InputSystem::AttitudeSensor::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::AttitudeSensor*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::AttitudeSensor::set_current(::UnityEngine::InputSystem::AttitudeSensor* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::AttitudeSensor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::AttitudeSensor::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AttitudeSensor::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AttitudeSensor::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AttitudeSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AttitudeSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::AttitudeSensor* UnityEngine::InputSystem::AttitudeSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::AttitudeSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::AttitudeSensor::AttitudeSensor() {}
