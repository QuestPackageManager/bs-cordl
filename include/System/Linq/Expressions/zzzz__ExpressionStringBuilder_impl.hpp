#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionStringBuilder.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionStringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
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
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ExpressionStringBuilder::*)()>(
    &::System::Linq::Expressions::ExpressionStringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x40c306c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::ExpressionStringBuilder::*)()>(
    &::System::Linq::Expressions::ExpressionStringBuilder::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40c30d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.GetLabelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::GetLabelId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40c30f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetLabelId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.GetParamId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::ParameterExpression*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::GetParamId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40c320c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetParamId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Object*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::GetId)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x40c30fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.Out
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ExpressionStringBuilder::*)(::StringW)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::Out)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40c3210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "Out",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.Out
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ExpressionStringBuilder::*)(char16_t)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::Out)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40c322c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "Out",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.ExpressionToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::ExpressionToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40c3248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "ExpressionToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.CatchBlockToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Linq::Expressions::CatchBlock*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::CatchBlockToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40bc0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "CatchBlockToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::CatchBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::BinaryExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitBinary)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x40c32c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitParameter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x40c38e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitConditional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::ConditionalExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitConditional)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x40c39f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::ConstantExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitConstant)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x40c3af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.OutMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ExpressionStringBuilder::*)(
    ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*)>(&::System::Linq::Expressions::ExpressionStringBuilder::OutMember)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x40c3c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "OutMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::MemberExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitMember)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x40c3d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitInvocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::InvocationExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitInvocation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x40c3d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitMethodCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::MethodCallExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitMethodCall)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x40c3e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitNewArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::NewArrayExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitNewArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x40c40a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitTypeBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::TypeBinaryExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitTypeBinary)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x40c41c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitUnary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitUnary)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x40c42d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::BlockExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitBlock)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x40c4724;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::DefaultExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitDefault)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x40c4a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::LabelExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitLabel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40c4b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitGoto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::GotoExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitGoto)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x40c4c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::LoopExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitLoop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x40c4da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitCatchBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::CatchBlock* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::CatchBlock*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitCatchBlock)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x40c4e08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitTry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::TryExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitTry)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x40c4f10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::IndexExpression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitIndex)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x40c4f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.VisitExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::VisitExtension)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x40c5240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.DumpLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ExpressionStringBuilder::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::ExpressionStringBuilder::DumpLabel)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40c4b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "DumpLabel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ExpressionStringBuilder.IsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::ExpressionStringBuilder::IsBool)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x40c37c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "IsBool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::System::Text::StringBuilder* const& System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_set__out(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____out)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>*& System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_get__ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ids;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* const& System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_get__ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ids;
}
constexpr void System::Linq::Expressions::ExpressionStringBuilder::__cordl_internal_set__ids(::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::ExpressionStringBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::ExpressionStringBuilder::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::ExpressionStringBuilder::GetLabelId(::System::Linq::Expressions::LabelTarget* label) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetLabelId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, label);
}
inline int32_t System::Linq::Expressions::ExpressionStringBuilder::GetParamId(::System::Linq::Expressions::ParameterExpression* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetParamId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t System::Linq::Expressions::ExpressionStringBuilder::GetId(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "GetId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, o);
}
inline void System::Linq::Expressions::ExpressionStringBuilder::Out(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "Out", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Linq::Expressions::ExpressionStringBuilder::Out(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "Out", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline ::StringW System::Linq::Expressions::ExpressionStringBuilder::ExpressionToString(::System::Linq::Expressions::Expression* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "ExpressionToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, node);
}
inline ::StringW System::Linq::Expressions::ExpressionStringBuilder::CatchBlockToString(::System::Linq::Expressions::CatchBlock* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "CatchBlockToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::CatchBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, node);
}
template <typename T>
inline void System::Linq::Expressions::ExpressionStringBuilder::VisitExpressions(char16_t open, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* expressions, char16_t close) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "VisitExpressions",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, open, expressions, close);
}
template <typename T>
inline void System::Linq::Expressions::ExpressionStringBuilder::VisitExpressions(char16_t open, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* expressions, char16_t close,
                                                                                 ::StringW seperator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "VisitExpressions",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, open, expressions, close, seperator);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitBinary(::System::Linq::Expressions::BinaryExpression* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitParameter(::System::Linq::Expressions::ParameterExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
template <typename T> inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitLambda(::System::Linq::Expressions::Expression_1<T>* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitConditional(::System::Linq::Expressions::ConditionalExpression* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitConstant(::System::Linq::Expressions::ConstantExpression* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::ExpressionStringBuilder::OutMember(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "OutMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, member);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitMember(::System::Linq::Expressions::MemberExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitInvocation(::System::Linq::Expressions::InvocationExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitUnary(::System::Linq::Expressions::UnaryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitBlock(::System::Linq::Expressions::BlockExpression* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitDefault(::System::Linq::Expressions::DefaultExpression* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitLabel(::System::Linq::Expressions::LabelExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitGoto(::System::Linq::Expressions::GotoExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitLoop(::System::Linq::Expressions::LoopExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::ExpressionStringBuilder::VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitTry(::System::Linq::Expressions::TryExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitIndex(::System::Linq::Expressions::IndexExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ExpressionStringBuilder::VisitExtension(::System::Linq::Expressions::Expression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::ExpressionStringBuilder::DumpLabel(::System::Linq::Expressions::LabelTarget* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "DumpLabel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline bool System::Linq::Expressions::ExpressionStringBuilder::IsBool(::System::Linq::Expressions::Expression* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionStringBuilder*>::get(), "IsBool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
inline ::System::Linq::Expressions::ExpressionStringBuilder* System::Linq::Expressions::ExpressionStringBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::ExpressionStringBuilder*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ExpressionStringBuilder::ExpressionStringBuilder() {}
