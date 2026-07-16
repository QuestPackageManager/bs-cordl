#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyElement.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyElement_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement.IsElementDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlTypeMapMemberAnyElement::IsElementDefined)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x630abd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(),
                                                                                           { "IsElementDefined", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement.get_IsDefaultAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberAnyElement::get_IsDefaultAny)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x630d924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(), { "get_IsDefaultAny", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberAnyElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630dbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Xml::Serialization::XmlTypeMapMemberAnyElement::IsElementDefined(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(),
                                                                                         { "IsElementDefined", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns);
}
inline bool System::Xml::Serialization::XmlTypeMapMemberAnyElement::get_IsDefaultAny() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(), { "get_IsDefaultAny", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberAnyElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* System::Xml::Serialization::XmlTypeMapMemberAnyElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyElement::XmlTypeMapMemberAnyElement() {}
