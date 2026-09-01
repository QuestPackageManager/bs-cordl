#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeConvertorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeConvertorAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeConvertorAttribute.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeConvertorAttribute::*)()>(
    &::System::Xml::Serialization::XmlTypeConvertorAttribute::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ecda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeConvertorAttribute.set_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeConvertorAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ecdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { "set_Method", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeConvertorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeConvertorAttribute::*)(::StringW)>(&::System::Xml::Serialization::XmlTypeConvertorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ecdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlTypeConvertorAttribute::__cordl_internal_get__Method_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeConvertorAttribute::__cordl_internal_get__Method_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr void System::Xml::Serialization::XmlTypeConvertorAttribute::__cordl_internal_set__Method_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Method_k__BackingField = value;
}
inline ::StringW System::Xml::Serialization::XmlTypeConvertorAttribute::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { "set_Method", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeConvertorAttribute::_ctor(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline ::System::Xml::Serialization::XmlTypeConvertorAttribute* System::Xml::Serialization::XmlTypeConvertorAttribute::New_ctor(::StringW method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeConvertorAttribute::XmlTypeConvertorAttribute() {}
