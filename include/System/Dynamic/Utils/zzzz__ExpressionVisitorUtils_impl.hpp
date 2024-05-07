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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> (*)(
    ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::BlockExpression*)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitBlockExpressions)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2c556fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitBlockExpressions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BlockExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionVisitorUtils.VisitParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> (*)(
        ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IParameterProvider*, ::StringW)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitParameters)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2c558a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IParameterProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionVisitorUtils.VisitArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> (*)(
    ::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IArgumentProvider*)>(&::System::Dynamic::Utils::ExpressionVisitorUtils::VisitArguments)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2c55b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitArguments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>
System::Dynamic::Utils::ExpressionVisitorUtils::VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::BlockExpression* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitBlockExpressions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BlockExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>, false>(nullptr, ___internal_method, visitor,
                                                                                                                                                            block);
}
inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*>
System::Dynamic::Utils::ExpressionVisitorUtils::VisitParameters(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IParameterProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*>, false>(
      nullptr, ___internal_method, visitor, nodes, callerName);
}
inline ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>
System::Dynamic::Utils::ExpressionVisitorUtils::VisitArguments(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IArgumentProvider* nodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ExpressionVisitorUtils*>::get(), "VisitArguments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionVisitor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>, false>(nullptr, ___internal_method, visitor,
                                                                                                                                                            nodes);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::ExpressionVisitorUtils::ExpressionVisitorUtils() {}
