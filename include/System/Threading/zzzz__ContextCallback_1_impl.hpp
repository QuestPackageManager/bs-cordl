#pragma once
// IWYU pragma private; include "System\Threading\ContextCallback_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Threading/zzzz__ContextCallback_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TState> inline void System::Threading::ContextCallback_1<TState>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ContextCallback_1<TState>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TState> inline void System::Threading::ContextCallback_1<TState>::Invoke(::by_ref<TState> state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ContextCallback_1<TState>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template <typename TState> inline ::System::Threading::ContextCallback_1<TState>* System::Threading::ContextCallback_1<TState>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ContextCallback_1<TState>*>(object, method));
}
// Ctor Parameters []
template <typename TState> constexpr ::System::Threading::ContextCallback_1<TState>::ContextCallback_1() {}
