#pragma once
// IWYU pragma private; include "System/Buffers/SpanAction_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T, typename TArg> inline void System::Buffers::SpanAction_2<T, TArg>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Buffers::SpanAction_2<T, TArg>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T, typename TArg> inline void System::Buffers::SpanAction_2<T, TArg>::Invoke(::System::Span_1<T> span, TArg arg) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::SpanAction_2<T, TArg>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, span, arg);
}
template <typename T, typename TArg> inline ::System::Buffers::SpanAction_2<T, TArg>* System::Buffers::SpanAction_2<T, TArg>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::SpanAction_2<T, TArg>*>(object, method));
}
// Ctor Parameters []
template <typename T, typename TArg> constexpr ::System::Buffers::SpanAction_2<T, TArg>::SpanAction_2() {}
