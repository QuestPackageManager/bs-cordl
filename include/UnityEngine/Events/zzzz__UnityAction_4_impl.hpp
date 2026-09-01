#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityAction_4.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_4_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0, typename T1, typename T2, typename T3> inline void UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T0, typename T1, typename T2, typename T3> inline void UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1, arg2, arg3);
}
template <typename T0, typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>* UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>(object, method));
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::UnityAction_4() {}
