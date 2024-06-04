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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Data::FunctionId, ::StringW)>(
    &::System::Data::AggregateNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cde978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Data::FunctionId, ::StringW, bool, ::StringW)>(&::System::Data::AggregateNode::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2cde984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&::System::Data::AggregateNode::Bind)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2cdead4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Data::DataRelation*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::AggregateNode::Bind)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2cdee44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cdf030;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::AggregateNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2cdf044;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::AggregateNode::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Data::AggregateNode::Eval)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cdf358;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.IsConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::IsConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdf41c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdf424;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdf42c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cdf434;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.DependsOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::AggregateNode::*)(::System::Data::DataColumn*)>(&::System::Data::AggregateNode::DependsOn)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cdf444;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::AggregateNode.Optimize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::AggregateNode::*)()>(&::System::Data::AggregateNode::Optimize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cdf4dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 13));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relationName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTable*& System::Data::AggregateNode::__cordl_internal_get__childTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::AggregateNode::__cordl_internal_get__childTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childTable;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__childTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumn*& System::Data::AggregateNode::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& System::Data::AggregateNode::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____column)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRelation*& System::Data::AggregateNode::__cordl_internal_get__relation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& System::Data::AggregateNode::__cordl_internal_get__relation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relation;
}
constexpr void System::Data::AggregateNode::__cordl_internal_set__relation(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::AggregateNode* System::Data::AggregateNode::New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::AggregateNode*>(table, aggregateType, columnName));
}
inline void System::Data::AggregateNode::_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, aggregateType, columnName);
}
inline ::System::Data::AggregateNode* System::Data::AggregateNode::New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local,
                                                                            ::StringW relationName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::AggregateNode*>(table, aggregateType, columnName, local, relationName));
}
inline void System::Data::AggregateNode::_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local, ::StringW relationName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, aggregateType, columnName, local, relationName);
}
inline void System::Data::AggregateNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, list);
}
inline void System::Data::AggregateNode::Bind(::System::Data::DataRelation* relation, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, relation, list);
}
inline ::System::Object* System::Data::AggregateNode::Eval() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::AggregateNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::AggregateNode::Eval(::ArrayW<int32_t, ::Array<int32_t>*> records) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, records);
}
inline bool System::Data::AggregateNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::AggregateNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::AggregateNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::AggregateNode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::AggregateNode::AggregateNode() {}
