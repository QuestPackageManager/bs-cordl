#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaInclude.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInclude_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInclude._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInclude::*)()>(&::System::Xml::Schema::XmlSchemaInclude::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6231af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInclude*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInclude.AddAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInclude::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::XmlSchemaInclude::AddAnnotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6231b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInclude*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaInclude*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& System::Xml::Schema::XmlSchemaInclude::__cordl_internal_get_annotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr ::System::Xml::Schema::XmlSchemaAnnotation* const& System::Xml::Schema::XmlSchemaInclude::__cordl_internal_get_annotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr void System::Xml::Schema::XmlSchemaInclude::__cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___annotation = value;
}
inline void System::Xml::Schema::XmlSchemaInclude::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInclude*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaInclude::AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaInclude*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotation);
}
inline ::System::Xml::Schema::XmlSchemaInclude* System::Xml::Schema::XmlSchemaInclude::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaInclude*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaInclude::XmlSchemaInclude() {}
