#pragma once
// IWYU pragma private; include "System/Xml/Schema/RedefineEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__RedefineEntry_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaRedefine_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::RedefineEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::RedefineEntry::*)(::System::Xml::Schema::XmlSchemaRedefine*, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::RedefineEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61db630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RedefineEntry*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaRedefine*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaRedefine*& System::Xml::Schema::RedefineEntry::__cordl_internal_get_redefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr ::System::Xml::Schema::XmlSchemaRedefine* const& System::Xml::Schema::RedefineEntry::__cordl_internal_get_redefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr void System::Xml::Schema::RedefineEntry::__cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefine = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::RedefineEntry::__cordl_internal_get_schemaToUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaToUpdate;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::RedefineEntry::__cordl_internal_get_schemaToUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaToUpdate;
}
constexpr void System::Xml::Schema::RedefineEntry::__cordl_internal_set_schemaToUpdate(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaToUpdate = value;
}
inline void System::Xml::Schema::RedefineEntry::_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RedefineEntry*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaRedefine*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, external, schema);
}
inline ::System::Xml::Schema::RedefineEntry* System::Xml::Schema::RedefineEntry::New_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::RedefineEntry*>(external, schema));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RedefineEntry::RedefineEntry() {}
