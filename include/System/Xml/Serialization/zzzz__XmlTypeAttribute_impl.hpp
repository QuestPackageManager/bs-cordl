#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_IncludeInSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeAttribute::*)()>(&::System::Xml::Serialization::XmlTypeAttribute::get_IncludeInSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63120e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_IncludeInSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeAttribute::*)()>(&::System::Xml::Serialization::XmlTypeAttribute::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63120e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeAttribute::*)()>(&::System::Xml::Serialization::XmlTypeAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63120f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlTypeAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6312110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_includeInSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr bool const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_includeInSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_includeInSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInSchema = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
inline bool System::Xml::Serialization::XmlTypeAttribute::get_IncludeInSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_IncludeInSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeAttribute::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeAttribute::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeAttribute::XmlTypeAttribute() {}
