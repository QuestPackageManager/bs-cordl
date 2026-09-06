#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityAction_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0> inline void UnityEngine::Events::UnityAction_1<T0>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityAction_1<T0>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T0> inline void UnityEngine::Events::UnityAction_1<T0>::Invoke(T0 arg0) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityAction_1<T0>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
template <typename T0> inline ::UnityEngine::Events::UnityAction_1<T0>* UnityEngine::Events::UnityAction_1<T0>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityAction_1<T0>*>(object, method));
}
// Ctor Parameters []
template <typename T0> constexpr ::UnityEngine::Events::UnityAction_1<T0>::UnityAction_1() {}
