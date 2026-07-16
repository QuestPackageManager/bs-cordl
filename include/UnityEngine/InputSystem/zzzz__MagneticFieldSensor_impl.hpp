#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/MagneticFieldSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__MagneticFieldSensor_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.get_magneticField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::InputSystem::MagneticFieldSensor::*)()>(
    &::UnityEngine::InputSystem::MagneticFieldSensor::get_magneticField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6560c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { "get_magneticField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.set_magneticField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::MagneticFieldSensor::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::UnityEngine::InputSystem::MagneticFieldSensor::set_magneticField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6560c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(),
                                                                                           { "set_magneticField", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::MagneticFieldSensor* (*)()>(&::UnityEngine::InputSystem::MagneticFieldSensor::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6560c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::MagneticFieldSensor*)>(&::UnityEngine::InputSystem::MagneticFieldSensor::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6560cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::MagneticFieldSensor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::MagneticFieldSensor::*)()>(&::UnityEngine::InputSystem::MagneticFieldSensor::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6560d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::MagneticFieldSensor::*)()>(&::UnityEngine::InputSystem::MagneticFieldSensor::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6560d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::MagneticFieldSensor::*)()>(&::UnityEngine::InputSystem::MagneticFieldSensor::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6560e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::MagneticFieldSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::MagneticFieldSensor::*)()>(&::UnityEngine::InputSystem::MagneticFieldSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6560e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::InputSystem::MagneticFieldSensor::__cordl_internal_get__magneticField_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____magneticField_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::InputSystem::MagneticFieldSensor::__cordl_internal_get__magneticField_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____magneticField_k__BackingField;
}
constexpr void UnityEngine::InputSystem::MagneticFieldSensor::__cordl_internal_set__magneticField_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____magneticField_k__BackingField = value;
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::MagneticFieldSensor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::MagneticFieldSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::MagneticFieldSensor*>(
      std::forward<::UnityEngine::InputSystem::MagneticFieldSensor*>(value));
}
inline ::UnityEngine::InputSystem::MagneticFieldSensor* UnityEngine::InputSystem::MagneticFieldSensor::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::MagneticFieldSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::MagneticFieldSensor*>();
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::InputSystem::MagneticFieldSensor::get_magneticField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { "get_magneticField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(),
                                                                                         { "set_magneticField", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::MagneticFieldSensor* UnityEngine::InputSystem::MagneticFieldSensor::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::MagneticFieldSensor*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::set_current(::UnityEngine::InputSystem::MagneticFieldSensor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::MagneticFieldSensor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::MagneticFieldSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::MagneticFieldSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::MagneticFieldSensor* UnityEngine::InputSystem::MagneticFieldSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::MagneticFieldSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::MagneticFieldSensor::MagneticFieldSensor() {}
