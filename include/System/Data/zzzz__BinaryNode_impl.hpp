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
constexpr ::System::Data::BinaryNode_DataTypePrecedence::BinaryNode_DataTypePrecedence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::BinaryNode_DataTypePrecedence::BinaryNode_DataTypePrecedence() {}
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlDateTime{ static_cast<int32_t>(0x19) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::DateTimeOffset{ static_cast<int32_t>(0x18) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::DateTime{ static_cast<int32_t>(0x17) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::TimeSpan{ static_cast<int32_t>(0x14) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlDouble{ static_cast<int32_t>(0x13) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Double{ static_cast<int32_t>(0x12) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlSingle{ static_cast<int32_t>(0x11) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Single{ static_cast<int32_t>(0x10) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlDecimal{ static_cast<int32_t>(0xf) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Decimal{ static_cast<int32_t>(0xe) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlMoney{ static_cast<int32_t>(0xd) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::UInt64{ static_cast<int32_t>(0xc) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlInt64{ static_cast<int32_t>(0xb) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Int64{ static_cast<int32_t>(0xa) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::UInt32{ static_cast<int32_t>(0x9) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlInt32{ static_cast<int32_t>(0x8) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Int32{ static_cast<int32_t>(0x7) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::UInt16{ static_cast<int32_t>(0x6) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlInt16{ static_cast<int32_t>(0x5) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Int16{ static_cast<int32_t>(0x4) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Byte{ static_cast<int32_t>(0x3) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlByte{ static_cast<int32_t>(0x2) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SByte{ static_cast<int32_t>(0x1) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Error{ static_cast<int32_t>(0x0) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlBoolean{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Boolean{ static_cast<int32_t>(0xfffffffe) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlGuid{ static_cast<int32_t>(0xfffffffd) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlString{ static_cast<int32_t>(0xfffffffc) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::String{ static_cast<int32_t>(0xfffffffb) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlXml{ static_cast<int32_t>(0xfffffffa) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlChars{ static_cast<int32_t>(0xfffffff9) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::Char{ static_cast<int32_t>(0xfffffff8) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlBytes{ static_cast<int32_t>(0xfffffff7) };
constexpr ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode_DataTypePrecedence::SqlBinary{ static_cast<int32_t>(0xfffffff6) };
//  Writing Method size for method: ::System::Data::BinaryNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::BinaryNode::*)(::System::Data::DataTable*, int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*)>(
    &::System::Data::BinaryNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x603130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ".ctor",
                                                                              {},
                                                                              { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(),
                                                                                ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::BinaryNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::BinaryNode::Bind)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x603131c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6031370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::BinaryNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6031384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::BinaryNode::*)(::ArrayW<int32_t>)>(&::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60369e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::IsConstant)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6036a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6036a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6036a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6036ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::DataColumn*)>(&::System::Data::BinaryNode::DependsOn)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6036b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::BinaryNode::*)()>(&::System::Data::BinaryNode::Optimize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6036b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ::i2c::class_of<::System::Data::BinaryNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.SetTypeMismatchError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::BinaryNode::*)(int32_t, ::System::Type*, ::System::Type*)>(&::System::Data::BinaryNode::SetTypeMismatchError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60370d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                             { "SetTypeMismatchError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::ArrayW<int32_t>)>(
    &::System::Data::BinaryNode::Eval)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60371e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "Eval",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                                                                    ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.BinaryCompare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::BinaryNode::*)(::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, int32_t)>(
    &::System::Data::BinaryNode::BinaryCompare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6037218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::BinaryNode*>(),
            { "BinaryCompare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.BinaryCompare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::BinaryNode::*)(::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, int32_t,
                                                                                               ::System::Globalization::CompareInfo*)>(&::System::Data::BinaryNode::BinaryCompare)> {
  constexpr static std::size_t size = 0x1004;
  constexpr static std::size_t addrs = 0x6037220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                             { "BinaryCompare",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.EvalBinaryOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::BinaryNode::*)(int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*,
                                                                                                         ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::ArrayW<int32_t>)>(
    &::System::Data::BinaryNode::EvalBinaryOp)> {
  constexpr static std::size_t size = 0x5644;
  constexpr static std::size_t addrs = 0x60313a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                { "EvalBinaryOp",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>(),
                                                    ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.GetPrecedence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::BinaryNode_DataTypePrecedence (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType)>(
    &::System::Data::BinaryNode::GetPrecedence)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6038d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "GetPrecedence", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.GetPrecedenceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Common::StorageType (*)(::System::Data::BinaryNode_DataTypePrecedence)>(&::System::Data::BinaryNode::GetPrecedenceType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6038d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "GetPrecedenceType", {}, { ::i2c::type_of<::System::Data::BinaryNode_DataTypePrecedence>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType)>(
    &::System::Data::BinaryNode::IsMixed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6038d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                             { "IsMixed", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.IsMixedSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType)>(
    &::System::Data::BinaryNode::IsMixedSql)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6038e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                             { "IsMixedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.ResultType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Common::StorageType (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType,
                                                                                                                           bool, bool, int32_t)>(&::System::Data::BinaryNode::ResultType)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6038884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "ResultType",
                                                                              {},
                                                                              { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.ResultSqlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Common::StorageType (::System::Data::BinaryNode::*)(::System::Data::Common::StorageType, ::System::Data::Common::StorageType,
                                                                                                                           bool, bool, int32_t)>(&::System::Data::BinaryNode::ResultSqlType)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x60384a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "ResultSqlType",
                                                                              {},
                                                                              { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::BinaryNode.SqlResultType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::BinaryNode::*)(int32_t)>(&::System::Data::BinaryNode::SqlResultType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6039000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "SqlResultType", {}, { ::i2c::type_of<int32_t>() } })));
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
constexpr ::System::Data::ExpressionNode* const& System::Data::BinaryNode::__cordl_internal_get__left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____left;
}
constexpr void System::Data::BinaryNode::__cordl_internal_set__left(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____left = value;
}
constexpr ::System::Data::ExpressionNode*& System::Data::BinaryNode::__cordl_internal_get__right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right;
}
constexpr ::System::Data::ExpressionNode* const& System::Data::BinaryNode::__cordl_internal_get__right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right;
}
constexpr void System::Data::BinaryNode::__cordl_internal_set__right(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____right = value;
}
inline void System::Data::BinaryNode::_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, op, left, right);
}
inline void System::Data::BinaryNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::BinaryNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::ArrayW<int32_t> recordNos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNos);
}
inline bool System::Data::BinaryNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::BinaryNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::BinaryNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::BinaryNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline void System::Data::BinaryNode::SetTypeMismatchError(int32_t op, ::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                           { "SetTypeMismatchError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, left, right);
}
inline ::System::Object* System::Data::BinaryNode::Eval(::System::Data::ExpressionNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::ArrayW<int32_t> recordNos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "Eval",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                                                                  ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, expr, row, version, recordNos);
}
inline int32_t System::Data::BinaryNode::BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::BinaryNode*>(),
          { "BinaryCompare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, vLeft, vRight, resultType, op);
}
inline int32_t System::Data::BinaryNode::BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op,
                                                       ::System::Globalization::CompareInfo* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                           { "BinaryCompare",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, vLeft, vRight, resultType, op, comparer);
}
inline ::System::Object* System::Data::BinaryNode::EvalBinaryOp(int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right, ::System::Data::DataRow* row,
                                                                ::System::Data::DataRowVersion version, ::ArrayW<int32_t> recordNos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                           { "EvalBinaryOp",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>(),
                                                               ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, op, left, right, row, version, recordNos);
}
inline ::System::Data::BinaryNode_DataTypePrecedence System::Data::BinaryNode::GetPrecedence(::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "GetPrecedence", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::BinaryNode_DataTypePrecedence>(this, ___internal_method, storageType);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::GetPrecedenceType(::System::Data::BinaryNode_DataTypePrecedence code) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "GetPrecedenceType", {}, { ::i2c::type_of<::System::Data::BinaryNode_DataTypePrecedence>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType>(nullptr, ___internal_method, code);
}
inline bool System::Data::BinaryNode::IsMixed(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                           { "IsMixed", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, left, right);
}
inline bool System::Data::BinaryNode::IsMixedSql(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(),
                                                           { "IsMixedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, left, right);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::ResultType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "ResultType",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType>(this, ___internal_method, left, right, lc, rc, op);
}
inline ::System::Data::Common::StorageType System::Data::BinaryNode::ResultSqlType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "ResultSqlType",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Data::Common::StorageType>(),
                                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType>(this, ___internal_method, left, right, lc, rc, op);
}
inline int32_t System::Data::BinaryNode::SqlResultType(int32_t typeCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::BinaryNode*>(), { "SqlResultType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, typeCode);
}
inline ::System::Data::BinaryNode* System::Data::BinaryNode::New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::BinaryNode*>(table, op, left, right));
}
// Ctor Parameters []
constexpr ::System::Data::BinaryNode::BinaryNode() {}
