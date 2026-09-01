#pragma once
// IWYU pragma private; include "System\Linq\Expressions\ExpressionN_1.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionN_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template <typename TDelegate>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*& System::Linq::Expressions::ExpressionN_1<TDelegate>::__cordl_internal_get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
template <typename TDelegate>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* const&
System::Linq::Expressions::ExpressionN_1<TDelegate>::__cordl_internal_get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
template <typename TDelegate>
constexpr void
System::Linq::Expressions::ExpressionN_1<TDelegate>::__cordl_internal_set__parameters(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameters = value;
}
template <typename TDelegate>
inline void System::Linq::Expressions::ExpressionN_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionN_1<TDelegate>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body, parameters);
}
template <typename TDelegate> inline int32_t System::Linq::Expressions::ExpressionN_1<TDelegate>::get_ParameterCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionN_1<TDelegate>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TDelegate> inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::ExpressionN_1<TDelegate>::GetParameter(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionN_1<TDelegate>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*>(this, ___internal_method, index);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression_1<TDelegate>* System::Linq::Expressions::ExpressionN_1<TDelegate>::Rewrite(::System::Linq::Expressions::Expression* body,
                                                                                                                          ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionN_1<TDelegate>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression_1<TDelegate>*>(this, ___internal_method, body, parameters);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::ExpressionN_1<TDelegate>*
System::Linq::Expressions::ExpressionN_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::ExpressionN_1<TDelegate>*>(body, parameters));
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::ExpressionN_1<TDelegate>::ExpressionN_1() {}
