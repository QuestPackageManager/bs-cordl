#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdSimpleValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdSimpleValue_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdSimpleValue::*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Object*)>(
    &::System::Xml::Schema::XsdSimpleValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b6c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_XmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b6c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(), { "get_XmlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_TypedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b6c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(), { "get_TypedValue", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XsdSimpleValue::__cordl_internal_get_xmlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& System::Xml::Schema::XsdSimpleValue::__cordl_internal_get_xmlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr void System::Xml::Schema::XsdSimpleValue::__cordl_internal_set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlType = value;
}
constexpr ::System::Object*& System::Xml::Schema::XsdSimpleValue::__cordl_internal_get_typedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr ::System::Object* const& System::Xml::Schema::XsdSimpleValue::__cordl_internal_get_typedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr void System::Xml::Schema::XsdSimpleValue::__cordl_internal_set_typedValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typedValue = value;
}
inline void System::Xml::Schema::XsdSimpleValue::_ctor(::System::Xml::Schema::XmlSchemaSimpleType* st, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, st, value);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XsdSimpleValue::get_XmlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(), { "get_XmlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XsdSimpleValue::get_TypedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdSimpleValue*>(), { "get_TypedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XsdSimpleValue* System::Xml::Schema::XsdSimpleValue::New_ctor(::System::Xml::Schema::XmlSchemaSimpleType* st, ::System::Object* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdSimpleValue*>(st, value));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdSimpleValue::XsdSimpleValue() {}
