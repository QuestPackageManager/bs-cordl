#pragma once
// IWYU pragma private; include "System/Func_6.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_6_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult>
inline void System::Func_6<T1, T2, T3, T4, T5, TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Func_6<T1, T2, T3, T4, T5, TResult>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult>
inline TResult System::Func_6<T1, T2, T3, T4, T5, TResult>::Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Func_6<T1, T2, T3, T4, T5, TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult>
inline ::System::Func_6<T1, T2, T3, T4, T5, TResult>* System::Func_6<T1, T2, T3, T4, T5, TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Func_6<T1, T2, T3, T4, T5, TResult>*>(object, method));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> constexpr ::System::Func_6<T1, T2, T3, T4, T5, TResult>::Func_6() {}
