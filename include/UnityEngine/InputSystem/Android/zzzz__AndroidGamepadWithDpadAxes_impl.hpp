#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepadWithDpadAxes.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepadWithDpadAxes_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a6238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes* UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes::AndroidGamepadWithDpadAxes() {}
