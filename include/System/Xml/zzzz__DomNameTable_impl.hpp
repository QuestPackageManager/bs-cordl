#pragma once
// IWYU pragma private; include "System/Xml/DomNameTable.hpp"
#include "System/Xml/zzzz__XmlName_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__DomNameTable_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
//  Writing Method size for method: ::System::Xml::DomNameTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DomNameTable::*)(::System::Xml::XmlDocument*)>(&::System::Xml::DomNameTable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62aff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(
    &::System::Xml::DomNameTable::GetName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x62affd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(),
                            { "GetName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.AddName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(
    &::System::Xml::DomNameTable::AddName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x62b017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(),
                            { "AddName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DomNameTable::*)()>(&::System::Xml::DomNameTable::Grow)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x62b04a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(), { "Grow", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlName*>& System::Xml::DomNameTable::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::ArrayW<::System::Xml::XmlName*> const& System::Xml::DomNameTable::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::DomNameTable::__cordl_internal_set_entries(::ArrayW<::System::Xml::XmlName*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entries = value;
}
constexpr int32_t& System::Xml::DomNameTable::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Xml::DomNameTable::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Xml::DomNameTable::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& System::Xml::DomNameTable::__cordl_internal_get_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr int32_t const& System::Xml::DomNameTable::__cordl_internal_get_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr void System::Xml::DomNameTable::__cordl_internal_set_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mask = value;
}
constexpr ::System::Xml::XmlDocument*& System::Xml::DomNameTable::__cordl_internal_get_ownerDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::DomNameTable::__cordl_internal_get_ownerDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownerDocument;
}
constexpr void System::Xml::DomNameTable::__cordl_internal_set_ownerDocument(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownerDocument = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::DomNameTable::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::DomNameTable::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::DomNameTable::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
inline void System::Xml::DomNameTable::_ctor(::System::Xml::XmlDocument* document) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, document);
}
inline ::System::Xml::XmlName* System::Xml::DomNameTable::GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(),
                          { "GetName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, prefix, localName, ns, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::DomNameTable::AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(),
                          { "AddName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, prefix, localName, ns, schemaInfo);
}
inline void System::Xml::DomNameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DomNameTable*>(), { "Grow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::DomNameTable* System::Xml::DomNameTable::New_ctor(::System::Xml::XmlDocument* document) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DomNameTable*>(document));
}
// Ctor Parameters []
constexpr ::System::Xml::DomNameTable::DomNameTable() {}
