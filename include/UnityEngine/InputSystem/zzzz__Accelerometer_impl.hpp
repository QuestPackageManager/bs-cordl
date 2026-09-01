#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Accelerometer.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Accelerometer_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.get_acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::InputSystem::Accelerometer::*)()>(
    &::UnityEngine::InputSystem::Accelerometer::get_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6565a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "get_acceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.set_acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Accelerometer::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::UnityEngine::InputSystem::Accelerometer::set_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6565a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(),
                                                                                           { "set_acceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Accelerometer* (*)()>(&::UnityEngine::InputSystem::Accelerometer::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6565a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Accelerometer*)>(&::UnityEngine::InputSystem::Accelerometer::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6565a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Accelerometer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Accelerometer::*)()>(&::UnityEngine::InputSystem::Accelerometer::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6565ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Accelerometer::*)()>(&::UnityEngine::InputSystem::Accelerometer::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6565b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Accelerometer::*)()>(&::UnityEngine::InputSystem::Accelerometer::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6565b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Accelerometer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Accelerometer::*)()>(&::UnityEngine::InputSystem::Accelerometer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6565c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::InputSystem::Accelerometer::__cordl_internal_get__acceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::InputSystem::Accelerometer::__cordl_internal_get__acceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceleration_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Accelerometer::__cordl_internal_set__acceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____acceleration_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Accelerometer::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Accelerometer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Accelerometer*, "<current>k__BackingField", ::UnityEngine::InputSystem::Accelerometer*>(
      std::forward<::UnityEngine::InputSystem::Accelerometer*>(value));
}
inline ::UnityEngine::InputSystem::Accelerometer* UnityEngine::InputSystem::Accelerometer::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Accelerometer*, "<current>k__BackingField", ::UnityEngine::InputSystem::Accelerometer*>();
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::InputSystem::Accelerometer::get_acceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "get_acceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Accelerometer::set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(),
                                                                                         { "set_acceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Accelerometer* UnityEngine::InputSystem::Accelerometer::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Accelerometer*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Accelerometer::set_current(::UnityEngine::InputSystem::Accelerometer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Accelerometer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Accelerometer::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Accelerometer::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Accelerometer::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Accelerometer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Accelerometer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Accelerometer* UnityEngine::InputSystem::Accelerometer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Accelerometer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Accelerometer::Accelerometer() {}
