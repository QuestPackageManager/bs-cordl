#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSimpleContent.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentModel_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleContent.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContent* (::System::Xml::Schema::XmlSchemaSimpleContent::*)()>(
    &::System::Xml::Schema::XmlSchemaSimpleContent::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleContent.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleContent::*)(::System::Xml::Schema::XmlSchemaContent*)>(
    &::System::Xml::Schema::XmlSchemaSimpleContent::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleContent::*)()>(&::System::Xml::Schema::XmlSchemaSimpleContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x623b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaContent*& System::Xml::Schema::XmlSchemaSimpleContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::System::Xml::Schema::XmlSchemaContent* const& System::Xml::Schema::XmlSchemaSimpleContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleContent::__cordl_internal_set_content(::System::Xml::Schema::XmlSchemaContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline ::System::Xml::Schema::XmlSchemaContent* System::Xml::Schema::XmlSchemaSimpleContent::get_Content() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContent*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSimpleContent::set_Content(::System::Xml::Schema::XmlSchemaContent* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaSimpleContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleContent* System::Xml::Schema::XmlSchemaSimpleContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSimpleContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSimpleContent::XmlSchemaSimpleContent() {}
