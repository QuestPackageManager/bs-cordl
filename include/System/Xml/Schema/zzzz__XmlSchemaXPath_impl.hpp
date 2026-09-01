#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaXPath.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaXPath_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath.get_XPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaXPath::*)()>(&::System::Xml::Schema::XmlSchemaXPath::get_XPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62319b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { "get_XPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath.set_XPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaXPath::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaXPath::set_XPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62319bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { "set_XPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaXPath::*)()>(&::System::Xml::Schema::XmlSchemaXPath::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62319c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaXPath::__cordl_internal_get_xpath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaXPath::__cordl_internal_get_xpath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr void System::Xml::Schema::XmlSchemaXPath::__cordl_internal_set_xpath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xpath = value;
}
inline ::StringW System::Xml::Schema::XmlSchemaXPath::get_XPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { "get_XPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaXPath::set_XPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { "set_XPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaXPath::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaXPath*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaXPath* System::Xml::Schema::XmlSchemaXPath::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaXPath*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaXPath::XmlSchemaXPath() {}
