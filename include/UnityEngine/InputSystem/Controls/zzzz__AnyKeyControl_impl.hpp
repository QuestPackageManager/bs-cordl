#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Controls\AnyKeyControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)()>(&::UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64f9ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64f9de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(), 17 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::AnyKeyControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* UnityEngine::InputSystem::Controls::AnyKeyControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::AnyKeyControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AnyKeyControl::AnyKeyControl() {}
