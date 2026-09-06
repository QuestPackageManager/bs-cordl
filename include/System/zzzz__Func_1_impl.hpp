#pragma once
// IWYU pragma private; include "System/Func_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline void System::Func_1<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Func_1<TResult>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TResult> inline TResult System::Func_1<TResult>::Invoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Func_1<TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template <typename TResult> inline ::System::Func_1<TResult>* System::Func_1<TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Func_1<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Func_1<TResult>::Func_1() {}
