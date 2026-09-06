#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/ITextInputReceiver.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ITextInputReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver.OnTextInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ITextInputReceiver::*)(char16_t)>(
    &::UnityEngine::InputSystem::LowLevel::ITextInputReceiver::OnTextInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver.OnIMECompositionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ITextInputReceiver::*)(::UnityEngine::InputSystem::LowLevel::IMECompositionString)>(
    &::UnityEngine::InputSystem::LowLevel::ITextInputReceiver::OnIMECompositionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::ITextInputReceiver::OnTextInput(char16_t character) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character);
}
inline void UnityEngine::InputSystem::LowLevel::ITextInputReceiver::OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compositionString);
}
