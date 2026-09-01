#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LinearAccelerationSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.get_acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(
    &::UnityEngine::InputSystem::LinearAccelerationSensor::get_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6566274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { "get_acceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.set_acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LinearAccelerationSensor::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::UnityEngine::InputSystem::LinearAccelerationSensor::set_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                           { "set_acceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LinearAccelerationSensor* (*)()>(&::UnityEngine::InputSystem::LinearAccelerationSensor::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6566284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LinearAccelerationSensor*)>(&::UnityEngine::InputSystem::LinearAccelerationSensor::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65662d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&::UnityEngine::InputSystem::LinearAccelerationSensor::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&::UnityEngine::InputSystem::LinearAccelerationSensor::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6566370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&::UnityEngine::InputSystem::LinearAccelerationSensor::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6566400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LinearAccelerationSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LinearAccelerationSensor::*)()>(&::UnityEngine::InputSystem::LinearAccelerationSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6566470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::InputSystem::LinearAccelerationSensor::__cordl_internal_get__acceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::InputSystem::LinearAccelerationSensor::__cordl_internal_get__acceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceleration_k__BackingField;
}
constexpr void UnityEngine::InputSystem::LinearAccelerationSensor::__cordl_internal_set__acceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____acceleration_k__BackingField = value;
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::LinearAccelerationSensor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LinearAccelerationSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::LinearAccelerationSensor*>(
      std::forward<::UnityEngine::InputSystem::LinearAccelerationSensor*>(value));
}
inline ::UnityEngine::InputSystem::LinearAccelerationSensor* UnityEngine::InputSystem::LinearAccelerationSensor::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LinearAccelerationSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::LinearAccelerationSensor*>();
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::InputSystem::LinearAccelerationSensor::get_acceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { "get_acceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                         { "set_acceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LinearAccelerationSensor* UnityEngine::InputSystem::LinearAccelerationSensor::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LinearAccelerationSensor*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LinearAccelerationSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LinearAccelerationSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LinearAccelerationSensor* UnityEngine::InputSystem::LinearAccelerationSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LinearAccelerationSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LinearAccelerationSensor::LinearAccelerationSensor() {}
