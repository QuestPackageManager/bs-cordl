#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\StepCounter.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__StepCounter_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.get_stepCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::StepCounter::*)()>(
    &::UnityEngine::InputSystem::StepCounter::get_stepCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6567138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "get_stepCounter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.set_stepCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::StepCounter::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::StepCounter::set_stepCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6567140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(),
                                                                                           { "set_stepCounter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::StepCounter* (*)()>(&::UnityEngine::InputSystem::StepCounter::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6567148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::StepCounter*)>(&::UnityEngine::InputSystem::StepCounter::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6567194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::StepCounter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::StepCounter::*)()>(&::UnityEngine::InputSystem::StepCounter::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65671e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::StepCounter::*)()>(&::UnityEngine::InputSystem::StepCounter::OnRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6567234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::StepCounter::*)()>(&::UnityEngine::InputSystem::StepCounter::FinishSetup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65672c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::StepCounter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::StepCounter::*)()>(&::UnityEngine::InputSystem::StepCounter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::StepCounter::__cordl_internal_get__stepCounter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepCounter_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::StepCounter::__cordl_internal_get__stepCounter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepCounter_k__BackingField;
}
constexpr void UnityEngine::InputSystem::StepCounter::__cordl_internal_set__stepCounter_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepCounter_k__BackingField = value;
}
inline void UnityEngine::InputSystem::StepCounter::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::StepCounter* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::StepCounter*, "<current>k__BackingField", ::UnityEngine::InputSystem::StepCounter*>(
      std::forward<::UnityEngine::InputSystem::StepCounter*>(value));
}
inline ::UnityEngine::InputSystem::StepCounter* UnityEngine::InputSystem::StepCounter::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::StepCounter*, "<current>k__BackingField", ::UnityEngine::InputSystem::StepCounter*>();
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::StepCounter::get_stepCounter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "get_stepCounter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::StepCounter::set_stepCounter(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(),
                                                                                         { "set_stepCounter", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::StepCounter* UnityEngine::InputSystem::StepCounter::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::StepCounter*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::StepCounter::set_current(::UnityEngine::InputSystem::StepCounter* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::StepCounter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::StepCounter::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::StepCounter::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::StepCounter::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::StepCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::StepCounter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::StepCounter* UnityEngine::InputSystem::StepCounter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::StepCounter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::StepCounter::StepCounter() {}
