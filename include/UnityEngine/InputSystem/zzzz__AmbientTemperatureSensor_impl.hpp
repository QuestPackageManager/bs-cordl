#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\AmbientTemperatureSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.get_ambientTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)()>(
    &::UnityEngine::InputSystem::AmbientTemperatureSensor::get_ambientTemperature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6566f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { "get_ambientTemperature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.set_ambientTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::UnityEngine::InputSystem::AmbientTemperatureSensor::set_ambientTemperature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6566f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                             { "set_ambientTemperature", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::AmbientTemperatureSensor* (*)()>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6566f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::AmbientTemperatureSensor*)>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)()>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)()>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6567018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)()>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65670a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::AmbientTemperatureSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::AmbientTemperatureSensor::*)()>(&::UnityEngine::InputSystem::AmbientTemperatureSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::InputSystem::AmbientTemperatureSensor::__cordl_internal_get__ambientTemperature_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientTemperature_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::InputSystem::AmbientTemperatureSensor::__cordl_internal_get__ambientTemperature_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientTemperature_k__BackingField;
}
constexpr void UnityEngine::InputSystem::AmbientTemperatureSensor::__cordl_internal_set__ambientTemperature_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ambientTemperature_k__BackingField = value;
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::AmbientTemperatureSensor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::AmbientTemperatureSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::AmbientTemperatureSensor*>(
      std::forward<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(value));
}
inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* UnityEngine::InputSystem::AmbientTemperatureSensor::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::AmbientTemperatureSensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::AmbientTemperatureSensor*>();
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::AmbientTemperatureSensor::get_ambientTemperature() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { "get_ambientTemperature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::set_ambientTemperature(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                         { "set_ambientTemperature", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* UnityEngine::InputSystem::AmbientTemperatureSensor::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::set_current(::UnityEngine::InputSystem::AmbientTemperatureSensor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::AmbientTemperatureSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::AmbientTemperatureSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* UnityEngine::InputSystem::AmbientTemperatureSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::AmbientTemperatureSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::AmbientTemperatureSensor::AmbientTemperatureSensor() {}
