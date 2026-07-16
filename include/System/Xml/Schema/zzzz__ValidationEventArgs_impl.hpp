#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationEventArgs.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ValidationEventArgs::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62196cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ValidationEventArgs::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6219734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Severity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSeverityType (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62197a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { "get_Severity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaException* (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62197a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaException*& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_ex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr ::System::Xml::Schema::XmlSchemaException* const& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_ex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__cordl_internal_set_ex(::System::Xml::Schema::XmlSchemaException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ex = value;
}
constexpr ::System::Xml::Schema::XmlSeverityType& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_severity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr ::System::Xml::Schema::XmlSeverityType const& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_severity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__cordl_internal_set_severity(::System::Xml::Schema::XmlSeverityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___severity = value;
}
inline void System::Xml::Schema::ValidationEventArgs::_ctor(::System::Xml::Schema::XmlSchemaException* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline void System::Xml::Schema::ValidationEventArgs::_ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex, severity);
}
inline ::System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::get_Severity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { "get_Severity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSeverityType>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaException* System::Xml::Schema::ValidationEventArgs::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ValidationEventArgs*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaException*>(this, ___internal_method);
}
inline ::System::Xml::Schema::ValidationEventArgs* System::Xml::Schema::ValidationEventArgs::New_ctor(::System::Xml::Schema::XmlSchemaException* ex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ValidationEventArgs*>(ex));
}
inline ::System::Xml::Schema::ValidationEventArgs* System::Xml::Schema::ValidationEventArgs::New_ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ValidationEventArgs*>(ex, severity));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidationEventArgs::ValidationEventArgs() {}
