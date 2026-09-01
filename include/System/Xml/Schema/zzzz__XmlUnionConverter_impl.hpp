#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlUnionConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlUnionConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlUnionConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlUnionConverter::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6261954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlUnionConverter::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6261ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlUnionConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlUnionConverter::ChangeType)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x6261c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), 61 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*>& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_converters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converters;
}
constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*> const& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_converters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converters;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_converters(::ArrayW<::System::Xml::Schema::XmlValueConverter*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___converters = value;
}
constexpr bool& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasAtomicMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAtomicMember;
}
constexpr bool const& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasAtomicMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAtomicMember;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_hasAtomicMember(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasAtomicMember = value;
}
constexpr bool& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasListMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasListMember;
}
constexpr bool const& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasListMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasListMember;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_hasListMember(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasListMember = value;
}
inline void System::Xml::Schema::XmlUnionConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUnionConverter::Create(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(nullptr, ___internal_method, schemaType);
}
inline ::System::Object* System::Xml::Schema::XmlUnionConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlUnionConverter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Xml::Schema::XmlUnionConverter* System::Xml::Schema::XmlUnionConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlUnionConverter*>(schemaType));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlUnionConverter::XmlUnionConverter() {}
