#pragma once
// IWYU pragma private; include "System\Linq\Expressions\ExpressionVisitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__CatchBlock_def.hpp"
#include "System/Linq/Expressions/zzzz__ConditionalExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ConstantExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__DefaultExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__GotoExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__IParameterProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__IndexExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__LoopExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__TryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__TypeBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::ExpressionVisitor::*)()>(&::System::Linq::Expressions::ExpressionVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f81d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.Visit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::Visit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f84350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.Visit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (
    ::System::Linq::Expressions::ExpressionVisitor::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::ExpressionVisitor::Visit)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f84374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                { "Visit", {}, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Expression*> (::System::Linq::Expressions::ExpressionVisitor::*)(
    ::System::Linq::Expressions::IArgumentProvider*)>(&::System::Linq::Expressions::ExpressionVisitor::VisitArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f845b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                                                           { "VisitArguments", {}, { ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::ParameterExpression*> (::System::Linq::Expressions::ExpressionVisitor::*)(
    ::System::Linq::Expressions::IParameterProvider*, ::StringW)>(&::System::Linq::Expressions::ExpressionVisitor::VisitParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f845b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                             { "VisitParameters", {}, { ::i2c::type_of<::System::Linq::Expressions::IParameterProvider*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::BinaryExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitBinary)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f845c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::BlockExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitBlock)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f847fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitConditional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ConditionalExpression*)>(&::System::Linq::Expressions::ExpressionVisitor::VisitConditional)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f848f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ConstantExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::DefaultExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitExtension)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f84994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitGoto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::GotoExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitGoto)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f849b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitInvocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::InvocationExpression*)>(&::System::Linq::Expressions::ExpressionVisitor::VisitInvocation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f84ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitLabelTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LabelTarget* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitLabelTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LabelExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitLabel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f84b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::LoopExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitLoop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f84c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::MemberExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitMember)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f84d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::IndexExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f84e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitMethodCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::MethodCallExpression*)>(&::System::Linq::Expressions::ExpressionVisitor::VisitMethodCall)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f84f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitNewArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::NewArrayExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitNewArray)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f85000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::ParameterExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f851a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitCatchBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::CatchBlock* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::CatchBlock*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitCatchBlock)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f851a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitTry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::TryExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitTry)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f8526c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitTypeBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::TypeBinaryExpression*)>(&::System::Linq::Expressions::ExpressionVisitor::VisitTypeBinary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f85480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.VisitUnary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ExpressionVisitor::*)(::System::Linq::Expressions::UnaryExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::VisitUnary)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f85580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.ValidateUnary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::UnaryExpression* (*)(::System::Linq::Expressions::UnaryExpression*, ::System::Linq::Expressions::UnaryExpression*)>(
    &::System::Linq::Expressions::ExpressionVisitor::ValidateUnary)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f85680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                            { "ValidateUnary", {}, { ::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>(), ::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.ValidateBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::BinaryExpression* (*)(::System::Linq::Expressions::BinaryExpression*, ::System::Linq::Expressions::BinaryExpression*)>(
        &::System::Linq::Expressions::ExpressionVisitor::ValidateBinary)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f846a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                            { "ValidateBinary", {}, { ::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionVisitor.ValidateChildType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::StringW)>(&::System::Linq::Expressions::ExpressionVisitor::ValidateChildType)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f8577c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                             { "ValidateChildType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::ExpressionVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::Visit(::System::Linq::Expressions::Expression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*
System::Linq::Expressions::ExpressionVisitor::Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* nodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                              { "Visit", {}, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method, nodes);
}
inline ::ArrayW<::System::Linq::Expressions::Expression*> System::Linq::Expressions::ExpressionVisitor::VisitArguments(::System::Linq::Expressions::IArgumentProvider* nodes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                                                         { "VisitArguments", {}, { ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Expression*>>(this, ___internal_method, nodes);
}
inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*> System::Linq::Expressions::ExpressionVisitor::VisitParameters(::System::Linq::Expressions::IParameterProvider* nodes,
                                                                                                                                 ::StringW callerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                           { "VisitParameters", {}, { ::i2c::type_of<::System::Linq::Expressions::IParameterProvider*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::ParameterExpression*>>(this, ___internal_method, nodes, callerName);
}
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Linq::Expressions::ExpressionVisitor::Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes,
                                                                                                                        ::System::Func_2<T, T>* elementVisitor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                          { "Visit", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(), ::i2c::type_of<::System::Func_2<T, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(nullptr, ___internal_method, nodes, elementVisitor);
}
template <typename T> inline T System::Linq::Expressions::ExpressionVisitor::VisitAndConvert(T node, ::StringW callerName) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                                                              { "VisitAndConvert", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, node, callerName);
}
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Linq::Expressions::ExpressionVisitor::VisitAndConvert(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes,
                                                                                                                                  ::StringW callerName) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                          { "VisitAndConvert", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(this, ___internal_method, nodes, callerName);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitBinary(::System::Linq::Expressions::BinaryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitBlock(::System::Linq::Expressions::BlockExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitConditional(::System::Linq::Expressions::ConditionalExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitConstant(::System::Linq::Expressions::ConstantExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitDefault(::System::Linq::Expressions::DefaultExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitExtension(::System::Linq::Expressions::Expression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitGoto(::System::Linq::Expressions::GotoExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitInvocation(::System::Linq::Expressions::InvocationExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::LabelTarget* System::Linq::Expressions::ExpressionVisitor::VisitLabelTarget(::System::Linq::Expressions::LabelTarget* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelTarget*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitLabel(::System::Linq::Expressions::LabelExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
template <typename T> inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitLambda(::System::Linq::Expressions::Expression_1<T>* node) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 15 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitLoop(::System::Linq::Expressions::LoopExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitMember(::System::Linq::Expressions::MemberExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitIndex(::System::Linq::Expressions::IndexExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitParameter(::System::Linq::Expressions::ParameterExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::ExpressionVisitor::VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitTry(::System::Linq::Expressions::TryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionVisitor::VisitUnary(::System::Linq::Expressions::UnaryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::UnaryExpression* System::Linq::Expressions::ExpressionVisitor::ValidateUnary(::System::Linq::Expressions::UnaryExpression* before,
                                                                                                                 ::System::Linq::Expressions::UnaryExpression* after) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                       { "ValidateUnary", {}, { ::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>(), ::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::UnaryExpression*>(nullptr, ___internal_method, before, after);
}
inline ::System::Linq::Expressions::BinaryExpression* System::Linq::Expressions::ExpressionVisitor::ValidateBinary(::System::Linq::Expressions::BinaryExpression* before,
                                                                                                                   ::System::Linq::Expressions::BinaryExpression* after) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                          { "ValidateBinary", {}, { ::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BinaryExpression*>(nullptr, ___internal_method, before, after);
}
inline void System::Linq::Expressions::ExpressionVisitor::ValidateChildType(::System::Type* before, ::System::Type* after, ::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ExpressionVisitor*>(),
                                                           { "ValidateChildType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, before, after, methodName);
}
inline ::System::Linq::Expressions::ExpressionVisitor* System::Linq::Expressions::ExpressionVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::ExpressionVisitor*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ExpressionVisitor::ExpressionVisitor() {}
