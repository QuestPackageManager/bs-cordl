#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidRelativeHumidity.hpp"
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidRelativeHumidity_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity* UnityEngine::InputSystem::Android::AndroidRelativeHumidity::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::AndroidRelativeHumidity() {}
