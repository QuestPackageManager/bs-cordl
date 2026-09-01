#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlMembersMapping.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlMemberMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlMembersMapping_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlMembersMapping.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlMembersMapping::*)()>(&::System::Xml::Serialization::XmlMembersMapping::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62f64d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMembersMapping*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMembersMapping.get_HasWrapperElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlMembersMapping::*)()>(&::System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMembersMapping*>(), { "get_HasWrapperElement", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__hasWrapperElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasWrapperElement;
}
constexpr bool const& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__hasWrapperElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasWrapperElement;
}
constexpr void System::Xml::Serialization::XmlMembersMapping::__cordl_internal_set__hasWrapperElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasWrapperElement = value;
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*>& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__mapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*> const& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__mapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr void System::Xml::Serialization::XmlMembersMapping::__cordl_internal_set__mapping(::ArrayW<::System::Xml::Serialization::XmlMemberMapping*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mapping = value;
}
inline int32_t System::Xml::Serialization::XmlMembersMapping::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMembersMapping*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMembersMapping*>(), { "get_HasWrapperElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlMembersMapping::XmlMembersMapping() {}
