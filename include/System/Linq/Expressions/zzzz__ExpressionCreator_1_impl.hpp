#pragma once
// IWYU pragma private; include "System\Linq\Expressions\ExpressionCreator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionCreator_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template <typename TDelegate>
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::ExpressionCreator_1<TDelegate>::CreateExpressionFunc(
    ::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionCreator_1<TDelegate>*>(),
                                                           { "CreateExpressionFunc",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*>(nullptr, ___internal_method, body, name, tailCall, parameters);
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::ExpressionCreator_1<TDelegate>::ExpressionCreator_1() {}
