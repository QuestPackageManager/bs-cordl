#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaDocumentation.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDocumentation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDocumentation.set_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDocumentation::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaDocumentation::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6230520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Source", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDocumentation.set_Language
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDocumentation::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaDocumentation::set_Language)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6230528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Language", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDocumentation.set_Markup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDocumentation::*)(::ArrayW<::System::Xml::XmlNode*>)>(
    &::System::Xml::Schema::XmlSchemaDocumentation::set_Markup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62305ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Markup", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDocumentation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDocumentation::*)()>(&::System::Xml::Schema::XmlSchemaDocumentation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62305f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_set_source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___language = value;
}
constexpr ::ArrayW<::System::Xml::XmlNode*>& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_markup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr ::ArrayW<::System::Xml::XmlNode*> const& System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_get_markup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr void System::Xml::Schema::XmlSchemaDocumentation::__cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___markup = value;
}
inline void System::Xml::Schema::XmlSchemaDocumentation::setStaticF_languageType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaSimpleType*, "languageType", ::System::Xml::Schema::XmlSchemaDocumentation*>(
      std::forward<::System::Xml::Schema::XmlSchemaSimpleType*>(value));
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XmlSchemaDocumentation::getStaticF_languageType() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaSimpleType*, "languageType", ::System::Xml::Schema::XmlSchemaDocumentation*>();
}
inline void System::Xml::Schema::XmlSchemaDocumentation::set_Source(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Source", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaDocumentation::set_Language(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Language", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaDocumentation::set_Markup(::ArrayW<::System::Xml::XmlNode*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { "set_Markup", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaDocumentation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDocumentation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDocumentation* System::Xml::Schema::XmlSchemaDocumentation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaDocumentation*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaDocumentation::XmlSchemaDocumentation() {}
