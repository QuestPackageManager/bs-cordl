#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaLengthFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaLengthFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaLengthFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaLengthFacet::*)()>(&::System::Xml::Schema::XmlSchemaLengthFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x622be88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaLengthFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaLengthFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaLengthFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaLengthFacet* System::Xml::Schema::XmlSchemaLengthFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaLengthFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaLengthFacet::XmlSchemaLengthFacet() {}
