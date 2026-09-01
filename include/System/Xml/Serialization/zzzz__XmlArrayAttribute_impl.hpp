#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlArrayAttribute.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlArrayAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.get_ElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlArrayAttribute::*)()>(&::System::Xml::Serialization::XmlArrayAttribute::get_ElementName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f2834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_ElementName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.get_Form
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaForm (::System::Xml::Serialization::XmlArrayAttribute::*)()>(
    &::System::Xml::Serialization::XmlArrayAttribute::get_Form)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Form", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.get_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlArrayAttribute::*)()>(&::System::Xml::Serialization::XmlArrayAttribute::get_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f285c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_IsNullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlArrayAttribute::*)()>(&::System::Xml::Serialization::XmlArrayAttribute::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlArrayAttribute::*)()>(&::System::Xml::Serialization::XmlArrayAttribute::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlArrayAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlArrayAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x62f2874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementName = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_form() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_form() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr void System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___form = value;
}
constexpr bool& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_isNullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNullable;
}
constexpr bool const& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_isNullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNullable;
}
constexpr void System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_set_isNullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNullable = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr int32_t& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void System::Xml::Serialization::XmlArrayAttribute::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
inline ::StringW System::Xml::Serialization::XmlArrayAttribute::get_ElementName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_ElementName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaForm System::Xml::Serialization::XmlArrayAttribute::get_Form() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Form", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaForm>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlArrayAttribute::get_IsNullable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_IsNullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlArrayAttribute::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::XmlArrayAttribute::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlArrayAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlArrayAttribute::XmlArrayAttribute() {}
