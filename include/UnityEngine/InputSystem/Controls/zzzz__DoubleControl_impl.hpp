#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DoubleControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DoubleControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DoubleControl::*)()>(&::UnityEngine::InputSystem::Controls::DoubleControl::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f5be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::Controls::DoubleControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::DoubleControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64f5c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DoubleControl::*)(double_t, void*)>(
    &::UnityEngine::InputSystem::Controls::DoubleControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f5cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), 18 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::DoubleControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Controls::DoubleControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DoubleControl::WriteValueIntoState(double_t value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DoubleControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::DoubleControl* UnityEngine::InputSystem::Controls::DoubleControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::DoubleControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DoubleControl::DoubleControl() {}
