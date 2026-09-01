#pragma once
// IWYU pragma private; include "System\Xml\Schema\ConstraintStruct.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ConstraintStruct_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__SelectorActiveAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ConstraintStruct.get_TableDim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::ConstraintStruct::*)()>(&::System::Xml::Schema::ConstraintStruct::get_TableDim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631bbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ConstraintStruct*>(), { "get_TableDim", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ConstraintStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ConstraintStruct::*)(::System::Xml::Schema::CompiledIdentityConstraint*)>(
    &::System::Xml::Schema::ConstraintStruct::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x631bbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ConstraintStruct*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::CompiledIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::CompiledIdentityConstraint*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr ::System::Xml::Schema::CompiledIdentityConstraint* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_constraint(::System::Xml::Schema::CompiledIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constraint = value;
}
constexpr ::System::Xml::Schema::SelectorActiveAxis*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisSelector;
}
constexpr ::System::Xml::Schema::SelectorActiveAxis* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisSelector;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_axisSelector(::System::Xml::Schema::SelectorActiveAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axisSelector = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisFields;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisFields;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_axisFields(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axisFields = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_qualifiedTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifiedTable;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_qualifiedTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifiedTable;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_qualifiedTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qualifiedTable = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_keyrefTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyrefTable;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_keyrefTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyrefTable;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_keyrefTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyrefTable = value;
}
constexpr int32_t& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_tableDim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableDim;
}
constexpr int32_t const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_tableDim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableDim;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_tableDim(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tableDim = value;
}
inline int32_t System::Xml::Schema::ConstraintStruct::get_TableDim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ConstraintStruct*>(), { "get_TableDim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::ConstraintStruct::_ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ConstraintStruct*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::CompiledIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline ::System::Xml::Schema::ConstraintStruct* System::Xml::Schema::ConstraintStruct::New_ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ConstraintStruct*>(constraint));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ConstraintStruct::ConstraintStruct() {}
