#pragma once
// IWYU pragma private; include "System/Action_14.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_14_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline void System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline void System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>::Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10,
                                                                                                   T11 arg11, T12 arg12, T13 arg13, T14 arg14) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline ::System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>*
System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>*>(object, method));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
constexpr ::System::Action_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>::Action_14() {}
