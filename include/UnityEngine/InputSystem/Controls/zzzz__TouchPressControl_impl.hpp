#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Controls\TouchPressControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPressControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPressControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPressControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchPressControl::FinishSetup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64fd150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPressControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Controls::TouchPressControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::TouchPressControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x64fd250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPressControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPressControl::*)(float_t, void*)>(
    &::UnityEngine::InputSystem::Controls::TouchPressControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64fd4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPressControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPressControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchPressControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64fd528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::TouchPressControl::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::TouchPressControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchPressControl::WriteValueIntoState(float_t value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchPressControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPressControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* UnityEngine::InputSystem::Controls::TouchPressControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::TouchPressControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::TouchPressControl::TouchPressControl() {}
