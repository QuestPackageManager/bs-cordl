#pragma once
// IWYU pragma private; include "System\Func_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename TResult> inline void System::Func_3<T1, T2, TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Func_3<T1, T2, TResult>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename TResult> inline TResult System::Func_3<T1, T2, TResult>::Invoke(T1 arg1, T2 arg2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Func_3<T1, T2, TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, arg1, arg2);
}
template <typename T1, typename T2, typename TResult> inline ::System::Func_3<T1, T2, TResult>* System::Func_3<T1, T2, TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Func_3<T1, T2, TResult>*>(object, method));
}
// Ctor Parameters []
template <typename T1, typename T2, typename TResult> constexpr ::System::Func_3<T1, T2, TResult>::Func_3() {}
