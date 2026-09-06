#pragma once
// IWYU pragma private; include "System/Converter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TInput, typename TOutput> inline void System::Converter_2<TInput, TOutput>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Converter_2<TInput, TOutput>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TInput, typename TOutput> inline TOutput System::Converter_2<TInput, TOutput>::Invoke(TInput input) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Converter_2<TInput, TOutput>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TOutput>(this, ___internal_method, input);
}
template <typename TInput, typename TOutput> inline ::System::Converter_2<TInput, TOutput>* System::Converter_2<TInput, TOutput>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Converter_2<TInput, TOutput>*>(object, method));
}
// Ctor Parameters []
template <typename TInput, typename TOutput> constexpr ::System::Converter_2<TInput, TOutput>::Converter_2() {}
