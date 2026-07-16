#pragma once
// IWYU pragma private; include "System/Xml/AttributePSVIInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__AttributePSVIInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::AttributePSVIInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::AttributePSVIInfo::*)()>(&::System::Xml::AttributePSVIInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62a7398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::AttributePSVIInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::AttributePSVIInfo.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::AttributePSVIInfo::*)()>(&::System::Xml::AttributePSVIInfo::Reset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62a7400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::AttributePSVIInfo*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::AttributePSVIInfo::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Xml::AttributePSVIInfo::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::AttributePSVIInfo::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localName = value;
}
constexpr ::StringW& System::Xml::AttributePSVIInfo::__cordl_internal_get_namespaceUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceUri;
}
constexpr ::StringW const& System::Xml::AttributePSVIInfo::__cordl_internal_get_namespaceUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceUri;
}
constexpr void System::Xml::AttributePSVIInfo::__cordl_internal_set_namespaceUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceUri = value;
}
constexpr ::System::Object*& System::Xml::AttributePSVIInfo::__cordl_internal_get_typedAttributeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedAttributeValue;
}
constexpr ::System::Object* const& System::Xml::AttributePSVIInfo::__cordl_internal_get_typedAttributeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedAttributeValue;
}
constexpr void System::Xml::AttributePSVIInfo::__cordl_internal_set_typedAttributeValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typedAttributeValue = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInfo*& System::Xml::AttributePSVIInfo::__cordl_internal_get_attributeSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeSchemaInfo;
}
constexpr ::System::Xml::Schema::XmlSchemaInfo* const& System::Xml::AttributePSVIInfo::__cordl_internal_get_attributeSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeSchemaInfo;
}
constexpr void System::Xml::AttributePSVIInfo::__cordl_internal_set_attributeSchemaInfo(::System::Xml::Schema::XmlSchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeSchemaInfo = value;
}
inline void System::Xml::AttributePSVIInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::AttributePSVIInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::AttributePSVIInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::AttributePSVIInfo*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::AttributePSVIInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::AttributePSVIInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::AttributePSVIInfo::AttributePSVIInfo() {}
