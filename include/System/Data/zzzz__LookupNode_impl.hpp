#pragma once
// IWYU pragma private; include "System\Data\LookupNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__LookupNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::LookupNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::LookupNode::*)(::System::Data::DataTable*, ::StringW, ::StringW)>(&::System::Data::LookupNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6041aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::LookupNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::LookupNode::Bind)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6043584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::Eval)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60437dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::LookupNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::LookupNode::Eval)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6043800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::LookupNode::*)(::ArrayW<int32_t>)>(&::System::Data::LookupNode::Eval)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6043908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::IsConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6043938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6043940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6043948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6043950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::LookupNode::*)(::System::Data::DataColumn*)>(&::System::Data::LookupNode::DependsOn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6043958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LookupNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::LookupNode::*)()>(&::System::Data::LookupNode::Optimize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6043968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(), { ::i2c::class_of<::System::Data::LookupNode*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::LookupNode::__cordl_internal_get__relationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationName;
}
constexpr ::StringW const& System::Data::LookupNode::__cordl_internal_get__relationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationName;
}
constexpr void System::Data::LookupNode::__cordl_internal_set__relationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relationName = value;
}
constexpr ::StringW& System::Data::LookupNode::__cordl_internal_get__columnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr ::StringW const& System::Data::LookupNode::__cordl_internal_get__columnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr void System::Data::LookupNode::__cordl_internal_set__columnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnName = value;
}
constexpr ::System::Data::DataColumn*& System::Data::LookupNode::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::LookupNode::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::LookupNode::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____column = value;
}
constexpr ::System::Data::DataRelation*& System::Data::LookupNode::__cordl_internal_get__relation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr ::System::Data::DataRelation* const& System::Data::LookupNode::__cordl_internal_get__relation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr void System::Data::LookupNode::__cordl_internal_set__relation(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relation = value;
}
inline void System::Data::LookupNode::_ctor(::System::Data::DataTable* table, ::StringW columnName, ::StringW relationName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::LookupNode*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, columnName, relationName);
}
inline void System::Data::LookupNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::LookupNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::LookupNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::LookupNode::Eval(::ArrayW<int32_t> recordNos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNos);
}
inline bool System::Data::LookupNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::LookupNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::LookupNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::LookupNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::LookupNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::LookupNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LookupNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Data::LookupNode* System::Data::LookupNode::New_ctor(::System::Data::DataTable* table, ::StringW columnName, ::StringW relationName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::LookupNode*>(table, columnName, relationName));
}
// Ctor Parameters []
constexpr ::System::Data::LookupNode::LookupNode() {}
