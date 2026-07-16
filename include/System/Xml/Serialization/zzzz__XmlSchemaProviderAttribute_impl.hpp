#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSchemaProviderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSchemaProviderAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f77a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute.get_MethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)()>(
    &::System::Xml::Serialization::XmlSchemaProviderAttribute::get_MethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f77ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "get_MethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute.get_IsAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)()>(&::System::Xml::Serialization::XmlSchemaProviderAttribute::get_IsAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f77b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "get_IsAny", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute.set_IsAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)(bool)>(
    &::System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f77bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "set_IsAny", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_get__methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_get__methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_set__methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodName = value;
}
constexpr bool& System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_get__isAny() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAny;
}
constexpr bool const& System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_get__isAny() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAny;
}
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__cordl_internal_set__isAny(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAny = value;
}
inline void System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline ::StringW System::Xml::Serialization::XmlSchemaProviderAttribute::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "get_MethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSchemaProviderAttribute::get_IsAny() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "get_IsAny", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(), { "set_IsAny", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlSchemaProviderAttribute* System::Xml::Serialization::XmlSchemaProviderAttribute::New_ctor(::StringW methodName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(methodName));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSchemaProviderAttribute::XmlSchemaProviderAttribute() {}
