#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAttributeAttribute.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeAttribute::*)(::StringW)>(&::System::Xml::Serialization::XmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.get_AttributeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlAttributeAttribute::*)()>(&::System::Xml::Serialization::XmlAttributeAttribute::get_AttributeName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f2e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_AttributeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlAttributeAttribute::*)()>(&::System::Xml::Serialization::XmlAttributeAttribute::get_DataType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f2e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_DataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.set_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeAttribute::*)(::StringW)>(&::System::Xml::Serialization::XmlAttributeAttribute::set_DataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "set_DataType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.get_Form
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaForm (::System::Xml::Serialization::XmlAttributeAttribute::*)()>(
    &::System::Xml::Serialization::XmlAttributeAttribute::get_Form)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_Form", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlAttributeAttribute::*)()>(&::System::Xml::Serialization::XmlAttributeAttribute::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlAttributeAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x62f2e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_attributeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_attributeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_set_attributeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeName = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_set_dataType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataType = value;
}
constexpr ::System::Type*& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_form() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_form() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___form = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
inline void System::Xml::Serialization::XmlAttributeAttribute::_ctor(::StringW attributeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeName);
}
inline ::StringW System::Xml::Serialization::XmlAttributeAttribute::get_AttributeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_AttributeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlAttributeAttribute::get_DataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_DataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlAttributeAttribute::set_DataType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "set_DataType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaForm System::Xml::Serialization::XmlAttributeAttribute::get_Form() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_Form", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaForm>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlAttributeAttribute::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlAttributeAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::System::Xml::Serialization::XmlAttributeAttribute* System::Xml::Serialization::XmlAttributeAttribute::New_ctor(::StringW attributeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAttributeAttribute*>(attributeName));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAttributeAttribute::XmlAttributeAttribute() {}
