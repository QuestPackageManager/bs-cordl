#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyAttribute.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630dbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::XmlTypeMapMemberAnyAttribute() {}
