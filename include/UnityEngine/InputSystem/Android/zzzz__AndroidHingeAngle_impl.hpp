#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidHingeAngle.hpp"
#include "UnityEngine/InputSystem/zzzz__HingeAngle_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidHingeAngle_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidHingeAngle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidHingeAngle::*)()>(&::UnityEngine::InputSystem::Android::AndroidHingeAngle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidHingeAngle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidHingeAngle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidHingeAngle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidHingeAngle* UnityEngine::InputSystem::Android::AndroidHingeAngle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidHingeAngle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidHingeAngle::AndroidHingeAngle() {}
