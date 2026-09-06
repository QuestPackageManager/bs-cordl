#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression_1.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TDelegate> inline void System::Linq::Expressions::Expression_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
template <typename TDelegate> inline ::System::Type* System::Linq::Expressions::Expression_1<TDelegate>::get_TypeCore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), { "get_TypeCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TDelegate> inline ::System::Type* System::Linq::Expressions::Expression_1<TDelegate>::get_PublicType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TDelegate> inline TDelegate System::Linq::Expressions::Expression_1<TDelegate>::Compile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), { "Compile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TDelegate>(this, ___internal_method);
}
template <typename TDelegate> inline TDelegate System::Linq::Expressions::Expression_1<TDelegate>::Compile(bool preferInterpretation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), { "Compile", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<TDelegate>(this, ___internal_method, preferInterpretation);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression_1<TDelegate>* System::Linq::Expressions::Expression_1<TDelegate>::Rewrite(::System::Linq::Expressions::Expression* body,
                                                                                                                         ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression_1<TDelegate>*>(this, ___internal_method, body, parameters);
}
template <typename TDelegate> inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Expression_1<TDelegate>::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression_1<TDelegate>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
template <typename TDelegate> inline ::System::Linq::Expressions::Expression_1<TDelegate>* System::Linq::Expressions::Expression_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Expression_1<TDelegate>*>(body));
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::Expression_1<TDelegate>::Expression_1() {}
