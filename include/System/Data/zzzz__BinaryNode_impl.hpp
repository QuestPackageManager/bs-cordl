#pragma once
// IWYU pragma private; include "System/Data/BinaryNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__BinaryNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__BinaryNode_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::__BinaryNode__DataTypePrecedence::__BinaryNode__DataTypePrecedence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::__BinaryNode__DataTypePrecedence::__BinaryNode__DataTypePrecedence() {}
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlDateTime{ static_cast<int32_t>(0x19) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::DateTimeOffset{ static_cast<int32_t>(0x18) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::DateTime{ static_cast<int32_t>(0x17) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::TimeSpan{ static_cast<int32_t>(0x14) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlDouble{ static_cast<int32_t>(0x13) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Double{ static_cast<int32_t>(0x12) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlSingle{ static_cast<int32_t>(0x11) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Single{ static_cast<int32_t>(0x10) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlDecimal{ static_cast<int32_t>(0xf) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Decimal{ static_cast<int32_t>(0xe) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlMoney{ static_cast<int32_t>(0xd) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::UInt64{ static_cast<int32_t>(0xc) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlInt64{ static_cast<int32_t>(0xb) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Int64{ static_cast<int32_t>(0xa) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::UInt32{ static_cast<int32_t>(0x9) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlInt32{ static_cast<int32_t>(0x8) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Int32{ static_cast<int32_t>(0x7) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::UInt16{ static_cast<int32_t>(0x6) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlInt16{ static_cast<int32_t>(0x5) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Int16{ static_cast<int32_t>(0x4) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Byte{ static_cast<int32_t>(0x3) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlByte{ static_cast<int32_t>(0x2) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SByte{ static_cast<int32_t>(0x1) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Error{ static_cast<int32_t>(0x0) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlBoolean{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Boolean{ static_cast<int32_t>(0xfffffffe) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlGuid{ static_cast<int32_t>(0xfffffffd) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlString{ static_cast<int32_t>(0xfffffffc) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::String{ static_cast<int32_t>(0xfffffffb) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlXml{ static_cast<int32_t>(0xfffffffa) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlChars{ static_cast<int32_t>(0xfffffff9) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::Char{ static_cast<int32_t>(0xfffffff8) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlBytes{ static_cast<int32_t>(0xfffffff7) };
constexpr ::System::Data::__BinaryNode__DataTypePrecedence System::Data::__BinaryNode__DataTypePrecedence::SqlBinary{ static_cast<int32_t>(0xfffffff6) };
//  Writing Method size for method: ::System::Data::BinaryNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::BinaryNode::*)(::System::Data::DataTable*, int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*)>(&::System::Data::BinaryNode::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbedf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::BinaryNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&::System::Data::BinaryNode::Bind)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbee34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cbee88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::BinaryNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cbee9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::BinaryNode::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cc4774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::IsConstant)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc4790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc47d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc4820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc4868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.DependsOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::DataColumn*)>(&::System::Data::BinaryNode::DependsOn)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cc48b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Optimize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::Optimize)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2cc4914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.SetTypeMismatchError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::BinaryNode::*)(int32_t, ::System::Type*, ::System::Type*)>(
    &::System::Data::BinaryNode::SetTypeMismatchError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cc4e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "SetTypeMismatchError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion,
                                                                                                        ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cc4f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "Eval", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.BinaryCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Data::BinaryNode::*)(::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, int32_t)>(&::System::Data::BinaryNode::BinaryCompare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc4f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "BinaryCompare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.BinaryCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::BinaryNode::*)(
    ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, int32_t, ::System::Globalization::CompareInfo*)>(&::System::Data::BinaryNode::BinaryCompare)> {
  constexpr static std::size_t size = 0xdd0;
  constexpr static std::size_t addrs = 0x2cc4f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "BinaryCompare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.EvalBinaryOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Data::BinaryNode::*)(int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion,
                                                                  ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Data::BinaryNode::EvalBinaryOp)> {
  constexpr static std::size_t size = 0x58bc;
  constexpr static std::size_t addrs = 0x2cbeeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "EvalBinaryOp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.GetPrecedence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::__BinaryNode__DataTypePrecedence (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType)>(&::System::Data::BinaryNode::GetPrecedence)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cc6968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "GetPrecedence", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.GetPrecedenceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::StorageType (*)(::System::Data::__BinaryNode__DataTypePrecedence)>(
    &::System::Data::BinaryNode::GetPrecedenceType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cc698c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "GetPrecedenceType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__BinaryNode__DataTypePrecedence>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsMixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType)>(
    &::System::Data::BinaryNode::IsMixed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cc69b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "IsMixed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsMixedSql
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType)>(
    &::System::Data::BinaryNode::IsMixedSql)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cc6ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "IsMixedSql", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.ResultType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::StorageType (::System::Data::BinaryNode::*)(
    ::System::Data::Common::StorageType, ::System::Data::Common::StorageType, bool, bool, int32_t)>(&::System::Data::BinaryNode::ResultType)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2cc6420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "ResultType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.ResultSqlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::StorageType (::System::Data::BinaryNode::*)(
    ::System::Data::Common::StorageType, ::System::Data::Common::StorageType, bool, bool, int32_t)>(&::System::Data::BinaryNode::ResultSqlType)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2cc6044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "ResultSqlType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.SqlResultType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::BinaryNode::*)(int32_t)>(&::System::Data::BinaryNode::SqlResultType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cc6cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "SqlResultType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Data::BinaryNode::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::BinaryNode::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::BinaryNode::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
constexpr ::System::Data::ExpressionNode*& System::Data::BinaryNode::__cordl_internal_get__left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____left;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& System::Data::BinaryNode::__cordl_internal_get__left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____left;
}
constexpr void System::Data::BinaryNode::__cordl_internal_set__left(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____left)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::ExpressionNode*& System::Data::BinaryNode::__cordl_internal_get__right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& System::Data::BinaryNode::__cordl_internal_get__right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right;
}
constexpr void System::Data::BinaryNode::__cordl_internal_set__right(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____right)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::BinaryNode* System::Data::BinaryNode::New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::BinaryNode*>(table, op, left, right));
}
inline void System::Data::BinaryNode::_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, op, left, right);
}
inline void System::Data::BinaryNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::BinaryNode::Eval() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNos);
}
inline bool System::Data::BinaryNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::BinaryNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
inline void System::Data::BinaryNode::SetTypeMismatchError(int32_t op, ::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "SetTypeMismatchError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, left, right);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::System::Data::ExpressionNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version,
                                                        ::ArrayW<int32_t, ::Array<int32_t>*> recordNos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "Eval", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, expr, row, version, recordNos);
}
inline int32_t System::Data::BinaryNode::BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "BinaryCompare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, vLeft, vRight, resultType, op);
}
inline int32_t System::Data::BinaryNode::BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op,
                                                       ::System::Globalization::CompareInfo* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "BinaryCompare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, vLeft, vRight, resultType, op, comparer);
}
inline ::System::Object* System::Data::BinaryNode::EvalBinaryOp(int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right, ::System::Data::DataRow* row,
                                                                ::System::Data::DataRowVersion version, ::ArrayW<int32_t, ::Array<int32_t>*> recordNos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "EvalBinaryOp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, op, left, right, row, version, recordNos);
}
inline ::System::Data::__BinaryNode__DataTypePrecedence System::Data::BinaryNode::GetPrecedence(::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "GetPrecedence", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__BinaryNode__DataTypePrecedence, false>(this, ___internal_method, storageType);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::GetPrecedenceType(::System::Data::__BinaryNode__DataTypePrecedence code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "GetPrecedenceType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__BinaryNode__DataTypePrecedence>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType, false>(nullptr, ___internal_method, code);
}
inline bool System::Data::BinaryNode::IsMixed(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "IsMixed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, left, right);
}
inline bool System::Data::BinaryNode::IsMixedSql(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "IsMixedSql", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, left, right);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::ResultType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "ResultType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType, false>(this, ___internal_method, left, right, lc, rc, op);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::ResultSqlType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "ResultSqlType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType, false>(this, ___internal_method, left, right, lc, rc, op);
}
inline int32_t System::Data::BinaryNode::SqlResultType(int32_t typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::BinaryNode*>::get(), "SqlResultType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, typeCode);
}
// Ctor Parameters []
constexpr ::System::Data::BinaryNode::BinaryNode() {}
