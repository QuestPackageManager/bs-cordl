#pragma once
// IWYU pragma private; include "System/Action_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> inline void System::Action_2<T1, T2>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Action_2<T1, T2>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1, typename T2> inline void System::Action_2<T1, T2>::Invoke(T1 arg1, T2 arg2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Action_2<T1, T2>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
template <typename T1, typename T2> inline ::System::Action_2<T1, T2>* System::Action_2<T1, T2>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Action_2<T1, T2>*>(object, method));
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::System::Action_2<T1, T2>::Action_2() {}
