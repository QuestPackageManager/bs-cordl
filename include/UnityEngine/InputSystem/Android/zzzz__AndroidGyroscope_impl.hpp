#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidGyroscope.hpp"
#include "UnityEngine/InputSystem/zzzz__Gyroscope_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGyroscope_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidGyroscope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidGyroscope::*)()>(&::UnityEngine::InputSystem::Android::AndroidGyroscope::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGyroscope*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidGyroscope::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGyroscope*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidGyroscope* UnityEngine::InputSystem::Android::AndroidGyroscope::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidGyroscope*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidGyroscope::AndroidGyroscope() {}
