#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSimpleType.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleType::*)()>(&::System::Xml::Schema::XmlSchemaSimpleType::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x623bb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleTypeContent* (::System::Xml::Schema::XmlSchemaSimpleType::*)()>(
    &::System::Xml::Schema::XmlSchemaSimpleType::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623bb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), { "get_Content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleType::*)(::System::Xml::Schema::XmlSchemaSimpleTypeContent*)>(
    &::System::Xml::Schema::XmlSchemaSimpleType::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623bb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(),
                                                                                           { "set_Content", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleTypeContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaSimpleType::*)()>(&::System::Xml::Schema::XmlSchemaSimpleType::Clone)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x623bba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent*& System::Xml::Schema::XmlSchemaSimpleType::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent* const& System::Xml::Schema::XmlSchemaSimpleType::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleType::__cordl_internal_set_content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void System::Xml::Schema::XmlSchemaSimpleType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleTypeContent* System::Xml::Schema::XmlSchemaSimpleType::get_Content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), { "get_Content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleTypeContent*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSimpleType::set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(),
                                                                                         { "set_Content", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleTypeContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaSimpleType::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XmlSchemaSimpleType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSimpleType*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSimpleType::XmlSchemaSimpleType() {}
