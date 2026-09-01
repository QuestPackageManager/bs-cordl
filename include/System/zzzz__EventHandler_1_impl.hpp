#pragma once
// IWYU pragma private; include "System\EventHandler_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TEventArgs> inline void System::EventHandler_1<TEventArgs>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::EventHandler_1<TEventArgs>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TEventArgs> inline void System::EventHandler_1<TEventArgs>::Invoke(::System::Object* sender, TEventArgs e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::EventHandler_1<TEventArgs>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
template <typename TEventArgs> inline ::System::EventHandler_1<TEventArgs>* System::EventHandler_1<TEventArgs>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::EventHandler_1<TEventArgs>*>(object, method));
}
// Ctor Parameters []
template <typename TEventArgs> constexpr ::System::EventHandler_1<TEventArgs>::EventHandler_1() {}
