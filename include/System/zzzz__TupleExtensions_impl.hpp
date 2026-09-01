#pragma once
// IWYU pragma private; include "System\TupleExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TupleExtensions_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template <typename T1, typename T2> inline void System::TupleExtensions::Deconstruct(::System::Tuple_2<T1, T2>* value, ::by_ref<T1> item1, ::by_ref<T2> item2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::TupleExtensions*>(),
          { "Deconstruct", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::System::Tuple_2<T1, T2>*>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, item1, item2);
}
// Ctor Parameters []
constexpr ::System::TupleExtensions::TupleExtensions() {}
