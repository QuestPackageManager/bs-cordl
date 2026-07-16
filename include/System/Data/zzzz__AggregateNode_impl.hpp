#pragma once
// IWYU pragma private; include "System/Data/AggregateNode.hpp"
#include "System/Data/zzzz__AggregateType_impl.hpp"
#include "System/Data/zzzz__Aggregate_impl.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__AggregateNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::AggregateNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Data::FunctionId, ::StringW)>(
    &::System::Data::AggregateNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60307fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Data::FunctionId, ::StringW, bool, ::StringW)>(
    &::System::Data::AggregateNode::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6030808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ".ctor",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::FunctionId>(),
                                                                                                       ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::AggregateNode::Bind)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6030908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Data::DataRelation*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::AggregateNode::Bind)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6030c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(),
                                         { "Bind", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6030e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AggregateNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6030e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::AggregateNode::*)(::ArrayW<int32_t>)>(&::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60311b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::IsConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6031284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603128c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6031294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::AggregateNode::*)(::System::Data::DataColumn*)>(&::System::Data::AggregateNode::DependsOn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60312a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::Optimize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6031308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ::i2c::class_of<::System::Data::AggregateNode*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::AggregateType& System::Data::AggregateNode::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Data::AggregateType const& System::Data::AggregateNode::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__type(::System::Data::AggregateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::Data::Aggregate& System::Data::AggregateNode::__cordl_internal_get__aggregate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aggregate;
}
constexpr ::System::Data::Aggregate const& System::Data::AggregateNode::__cordl_internal_get__aggregate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aggregate;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__aggregate(::System::Data::Aggregate value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aggregate = value;
}
constexpr bool& System::Data::AggregateNode::__cordl_internal_get__local() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____local;
}
constexpr bool const& System::Data::AggregateNode::__cordl_internal_get__local() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____local;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__local(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____local = value;
}
constexpr ::StringW& System::Data::AggregateNode::__cordl_internal_get__relationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationName;
}
constexpr ::StringW const& System::Data::AggregateNode::__cordl_internal_get__relationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationName;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__relationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relationName = value;
}
constexpr ::StringW& System::Data::AggregateNode::__cordl_internal_get__columnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr ::StringW const& System::Data::AggregateNode::__cordl_internal_get__columnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__columnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnName = value;
}
constexpr ::System::Data::DataTable*& System::Data::AggregateNode::__cordl_internal_get__childTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childTable;
}
constexpr ::System::Data::DataTable* const& System::Data::AggregateNode::__cordl_internal_get__childTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childTable;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__childTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childTable = value;
}
constexpr ::System::Data::DataColumn*& System::Data::AggregateNode::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::AggregateNode::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____column = value;
}
constexpr ::System::Data::DataRelation*& System::Data::AggregateNode::__cordl_internal_get__relation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr ::System::Data::DataRelation* const& System::Data::AggregateNode::__cordl_internal_get__relation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__relation(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relation = value;
}
inline void System::Data::AggregateNode::_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, aggregateType, columnName);
}
inline void System::Data::AggregateNode::_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local, ::StringW relationName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(), { ".ctor",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::FunctionId>(),
                                                                                                     ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, aggregateType, columnName, local, relationName);
}
inline void System::Data::AggregateNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline void System::Data::AggregateNode::Bind(::System::Data::DataRelation* relation, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::AggregateNode*>(),
                                       { "Bind", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, relation, list);
}
inline ::System::Object* System::Data::AggregateNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::AggregateNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::AggregateNode::Eval(::ArrayW<int32_t> records) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records);
}
inline bool System::Data::AggregateNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::AggregateNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::AggregateNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Data::AggregateNode* System::Data::AggregateNode::New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::AggregateNode*>(table, aggregateType, columnName));
}
inline ::System::Data::AggregateNode* System::Data::AggregateNode::New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local,
                                                                            ::StringW relationName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::AggregateNode*>(table, aggregateType, columnName, local, relationName));
}
// Ctor Parameters []
constexpr ::System::Data::AggregateNode::AggregateNode() {}
