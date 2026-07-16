#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/TouchPhaseControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f77c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(::UnityEngine::InputSystem::TouchPhase, void*)>(
    &::UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f78cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), 18 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* UnityEngine::InputSystem::Controls::TouchPhaseControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::TouchPhaseControl::TouchPhaseControl() {}
