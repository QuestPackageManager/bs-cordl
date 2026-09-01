#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidStepCounter.hpp"
#include "UnityEngine/InputSystem/zzzz__StepCounter_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidStepCounter_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidStepCounter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidStepCounter::*)()>(&::UnityEngine::InputSystem::Android::AndroidStepCounter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidStepCounter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidStepCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidStepCounter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidStepCounter* UnityEngine::InputSystem::Android::AndroidStepCounter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidStepCounter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidStepCounter::AndroidStepCounter() {}
