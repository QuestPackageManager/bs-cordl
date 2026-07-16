#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNamespaceDeclarationsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlNamespaceDeclarationsAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute::*)()>(
    &::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f0cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlNamespaceDeclarationsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute* System::Xml::Serialization::XmlNamespaceDeclarationsAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute::XmlNamespaceDeclarationsAttribute() {}
