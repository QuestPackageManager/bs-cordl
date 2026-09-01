#pragma once
// IWYU pragma private; include "System\Data\ConstraintTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ConstraintTable_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintTable::*)(::System::Data::DataTable*, ::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Data::ConstraintTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6058bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintTable*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ConstraintTable::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Data::DataTable* const& System::Data::ConstraintTable::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void System::Data::ConstraintTable::__cordl_internal_set_table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& System::Data::ConstraintTable::__cordl_internal_get_constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint* const& System::Data::ConstraintTable::__cordl_internal_get_constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr void System::Data::ConstraintTable::__cordl_internal_set_constraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constraint = value;
}
inline void System::Data::ConstraintTable::_ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintTable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, c);
}
inline ::System::Data::ConstraintTable* System::Data::ConstraintTable::New_ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ConstraintTable*>(t, c));
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintTable::ConstraintTable() {}
