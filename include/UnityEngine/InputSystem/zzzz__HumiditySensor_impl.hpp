#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\HumiditySensor.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.get_relativeHumidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::InputSystem::HumiditySensor::*)()>(
    &::UnityEngine::InputSystem::HumiditySensor::get_relativeHumidity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6566d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "get_relativeHumidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.set_relativeHumidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HumiditySensor::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::UnityEngine::InputSystem::HumiditySensor::set_relativeHumidity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6566d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(),
                                                                                           { "set_relativeHumidity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::HumiditySensor* (*)()>(&::UnityEngine::InputSystem::HumiditySensor::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6566d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::HumiditySensor*)>(&::UnityEngine::InputSystem::HumiditySensor::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HumiditySensor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HumiditySensor::*)()>(&::UnityEngine::InputSystem::HumiditySensor::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HumiditySensor::*)()>(&::UnityEngine::InputSystem::HumiditySensor::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6566dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HumiditySensor::*)()>(&::UnityEngine::InputSystem::HumiditySensor::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6566e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HumiditySensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HumiditySensor::*)()>(&::UnityEngine::InputSystem::HumiditySensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6566efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::InputSystem::HumiditySensor::__cordl_internal_get__relativeHumidity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeHumidity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::InputSystem::HumiditySensor::__cordl_internal_get__relativeHumidity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeHumidity_k__BackingField;
}
constexpr void UnityEngine::InputSystem::HumiditySensor::__cordl_internal_set__relativeHumidity_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeHumidity_k__BackingField = value;
}
inline void UnityEngine::InputSystem::HumiditySensor::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::HumiditySensor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::HumiditySensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::HumiditySensor*>(
      std::forward<::UnityEngine::InputSystem::HumiditySensor*>(value));
}
inline ::UnityEngine::InputSystem::HumiditySensor* UnityEngine::InputSystem::HumiditySensor::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::HumiditySensor*, "<current>k__BackingField", ::UnityEngine::InputSystem::HumiditySensor*>();
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::HumiditySensor::get_relativeHumidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "get_relativeHumidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::HumiditySensor::set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(),
                                                                                         { "set_relativeHumidity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::HumiditySensor* UnityEngine::InputSystem::HumiditySensor::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::HumiditySensor*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::HumiditySensor::set_current(::UnityEngine::InputSystem::HumiditySensor* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HumiditySensor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::HumiditySensor::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::HumiditySensor::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::HumiditySensor::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::HumiditySensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::HumiditySensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::HumiditySensor* UnityEngine::InputSystem::HumiditySensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::HumiditySensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HumiditySensor::HumiditySensor() {}
