#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAnyElementAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAnyElementAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&::System::Xml::Serialization::XmlAnyElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f2204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttribute.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&::System::Xml::Serialization::XmlAnyElementAttribute::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62f2210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttribute.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&::System::Xml::Serialization::XmlAnyElementAttribute::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttribute.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlAnyElementAttribute::*)()>(&::System::Xml::Serialization::XmlAnyElementAttribute::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlAnyElementAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62f2240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementName = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr int32_t& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void System::Xml::Serialization::XmlAnyElementAttribute::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
inline void System::Xml::Serialization::XmlAnyElementAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlAnyElementAttribute::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlAnyElementAttribute::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::XmlAnyElementAttribute::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlAnyElementAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::System::Xml::Serialization::XmlAnyElementAttribute* System::Xml::Serialization::XmlAnyElementAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAnyElementAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAnyElementAttribute::XmlAnyElementAttribute() {}
