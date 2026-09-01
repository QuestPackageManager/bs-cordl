#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaComplexContent.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentModel_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent.get_IsMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaComplexContent::*)()>(&::System::Xml::Schema::XmlSchemaComplexContent::get_IsMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622df2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "get_IsMixed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent.set_IsMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaComplexContent::*)(bool)>(&::System::Xml::Schema::XmlSchemaComplexContent::set_IsMixed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x622df34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "set_IsMixed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContent* (::System::Xml::Schema::XmlSchemaComplexContent::*)()>(
    &::System::Xml::Schema::XmlSchemaComplexContent::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622df44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaComplexContent::*)(::System::Xml::Schema::XmlSchemaContent*)>(
    &::System::Xml::Schema::XmlSchemaComplexContent::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622df4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent.get_HasMixedAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaComplexContent::*)()>(&::System::Xml::Schema::XmlSchemaComplexContent::get_HasMixedAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622df54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "get_HasMixedAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaComplexContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaComplexContent::*)()>(&::System::Xml::Schema::XmlSchemaComplexContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622df5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaContent*& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::System::Xml::Schema::XmlSchemaContent* const& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_set_content(::System::Xml::Schema::XmlSchemaContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_isMixed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMixed;
}
constexpr bool const& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_isMixed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMixed;
}
constexpr void System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_set_isMixed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMixed = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_hasMixedAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMixedAttribute;
}
constexpr bool const& System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_get_hasMixedAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasMixedAttribute;
}
constexpr void System::Xml::Schema::XmlSchemaComplexContent::__cordl_internal_set_hasMixedAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasMixedAttribute = value;
}
inline bool System::Xml::Schema::XmlSchemaComplexContent::get_IsMixed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "get_IsMixed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaComplexContent::set_IsMixed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "set_IsMixed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaContent* System::Xml::Schema::XmlSchemaComplexContent::get_Content() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContent*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaComplexContent::set_Content(::System::Xml::Schema::XmlSchemaContent* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchemaComplexContent::get_HasMixedAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { "get_HasMixedAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaComplexContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaComplexContent* System::Xml::Schema::XmlSchemaComplexContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaComplexContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaComplexContent::XmlSchemaComplexContent() {}
