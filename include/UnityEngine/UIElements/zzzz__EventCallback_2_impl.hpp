#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallback_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::Invoke(TEventType evt, TCallbackArgs userArgs) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, userArgs);
}
template <typename TEventType, typename TCallbackArgs>
inline ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::New_ctor(::System::Object* object,
                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(object, method));
}
// Ctor Parameters []
template <typename TEventType, typename TCallbackArgs> constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::EventCallback_2() {}
