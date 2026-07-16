#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributeEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeEventArgs::*)(::System::Xml::XmlAttribute*, int32_t, int32_t, ::System::Object*, ::StringW)>(
    &::System::Xml::Serialization::XmlAttributeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62e5c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventArgs*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::System::Object* const& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_set_o(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
constexpr ::System::Xml::XmlAttribute*& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_attr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attr;
}
constexpr ::System::Xml::XmlAttribute* const& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_attr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attr;
}
constexpr void System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_set_attr(::System::Xml::XmlAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attr = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_qnames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnames;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_qnames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnames;
}
constexpr void System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_set_qnames(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnames = value;
}
constexpr int32_t& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_linePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr int32_t const& System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_get_linePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr void System::Xml::Serialization::XmlAttributeEventArgs::__cordl_internal_set_linePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePosition = value;
}
inline void System::Xml::Serialization::XmlAttributeEventArgs::_ctor(::System::Xml::XmlAttribute* attr, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventArgs*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attr, lineNumber, linePosition, o, qnames);
}
inline ::System::Xml::Serialization::XmlAttributeEventArgs* System::Xml::Serialization::XmlAttributeEventArgs::New_ctor(::System::Xml::XmlAttribute* attr, int32_t lineNumber, int32_t linePosition,
                                                                                                                        ::System::Object* o, ::StringW qnames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAttributeEventArgs*>(attr, lineNumber, linePosition, o, qnames));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAttributeEventArgs::XmlAttributeEventArgs() {}
