#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeMapMemberNamespaces.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberNamespaces_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberNamespaces._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberNamespaces::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberNamespaces::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberNamespaces*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlTypeMapMemberNamespaces::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberNamespaces*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* System::Xml::Serialization::XmlTypeMapMemberNamespaces::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMemberNamespaces*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberNamespaces::XmlTypeMapMemberNamespaces() {}
