#pragma once
// IWYU pragma private; include "System\Action_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3> inline void System::Action_3<T1, T2, T3>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Action_3<T1, T2, T3>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3> inline void System::Action_3<T1, T2, T3>::Invoke(T1 arg1, T2 arg2, T3 arg3) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Action_3<T1, T2, T3>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2, arg3);
}
template <typename T1, typename T2, typename T3> inline ::System::Action_3<T1, T2, T3>* System::Action_3<T1, T2, T3>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Action_3<T1, T2, T3>*>(object, method));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::System::Action_3<T1, T2, T3>::Action_3() {}
