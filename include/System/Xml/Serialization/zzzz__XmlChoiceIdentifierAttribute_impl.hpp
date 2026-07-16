#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlChoiceIdentifierAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlChoiceIdentifierAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlChoiceIdentifierAttribute.get_MemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlChoiceIdentifierAttribute::*)()>(
    &::System::Xml::Serialization::XmlChoiceIdentifierAttribute::get_MemberName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ee504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>(), { "get_MemberName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlChoiceIdentifierAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlChoiceIdentifierAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlChoiceIdentifierAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62ee524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_get_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_get_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr void System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_set_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberName = value;
}
inline ::StringW System::Xml::Serialization::XmlChoiceIdentifierAttribute::get_MemberName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>(), { "get_MemberName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlChoiceIdentifierAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlChoiceIdentifierAttribute::XmlChoiceIdentifierAttribute() {}
