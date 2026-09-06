#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityAction_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0, typename T1> inline void UnityEngine::Events::UnityAction_2<T0, T1>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityAction_2<T0, T1>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityAction_2<T0, T1>::Invoke(T0 arg0, T1 arg1) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityAction_2<T0, T1>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1);
}
template <typename T0, typename T1> inline ::UnityEngine::Events::UnityAction_2<T0, T1>* UnityEngine::Events::UnityAction_2<T0, T1>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityAction_2<T0, T1>*>(object, method));
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::UnityEngine::Events::UnityAction_2<T0, T1>::UnityAction_2() {}
