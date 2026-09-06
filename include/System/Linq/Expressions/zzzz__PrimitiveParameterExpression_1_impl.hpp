#pragma once
// IWYU pragma private; include "System/Linq/Expressions/PrimitiveParameterExpression_1.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__PrimitiveParameterExpression_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void System::Linq::Expressions::PrimitiveParameterExpression_1<T>::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template <typename T> inline ::System::Type* System::Linq::Expressions::PrimitiveParameterExpression_1<T>::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename T> inline ::System::Linq::Expressions::PrimitiveParameterExpression_1<T>* System::Linq::Expressions::PrimitiveParameterExpression_1<T>::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>(name));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Linq::Expressions::PrimitiveParameterExpression_1<T>::PrimitiveParameterExpression_1() {}
