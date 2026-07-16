#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/ExpressionVisitorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__ExpressionVisitorUtils_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__IParameterProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionVisitorUtils.VisitBlockExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*> (*)(
    ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::BlockExpression*)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitBlockExpressions)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fc45d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                            { "VisitBlockExpressions", {}, { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(), ::i2c::type_of<::System::Linq::Expressions::BlockExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionVisitorUtils.VisitParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::ParameterExpression*> (*)(
    ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IParameterProvider*, ::StringW)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitParameters)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5fc476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                                                                                           { "VisitParameters",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                                                               ::i2c::type_of<::System::Linq::Expressions::IParameterProvider*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionVisitorUtils.VisitArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*> (*)(
    ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IArgumentProvider*)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitArguments)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5fc4a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                            { "VisitArguments", {}, { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Linq::Expressions::Expression*> System::Dynamic::Utils::ExpressionVisitorUtils::VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* visitor,
                                                                                                                                ::System::Linq::Expressions::BlockExpression* block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                          { "VisitBlockExpressions", {}, { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(), ::i2c::type_of<::System::Linq::Expressions::BlockExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Expression*>>(nullptr, ___internal_method, visitor, block);
}
inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*>
System::Dynamic::Utils::ExpressionVisitorUtils::VisitParameters(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                          { "VisitParameters",
                            {},
                            { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(), ::i2c::type_of<::System::Linq::Expressions::IParameterProvider*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::ParameterExpression*>>(nullptr, ___internal_method, visitor, nodes, callerName);
}
inline ::ArrayW<::System::Linq::Expressions::Expression*> System::Dynamic::Utils::ExpressionVisitorUtils::VisitArguments(::System::Linq::Expressions::ExpressionVisitor* visitor,
                                                                                                                         ::System::Linq::Expressions::IArgumentProvider* nodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionVisitorUtils*>(),
                          { "VisitArguments", {}, { ::i2c::type_of<::System::Linq::Expressions::ExpressionVisitor*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Expression*>>(nullptr, ___internal_method, visitor, nodes);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::ExpressionVisitorUtils::ExpressionVisitorUtils() {}
