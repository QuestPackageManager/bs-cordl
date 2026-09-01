#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaMinLengthFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaMinLengthFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaMinLengthFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaMinLengthFacet::*)()>(&::System::Xml::Schema::XmlSchemaMinLengthFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62316ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMinLengthFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaMinLengthFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMinLengthFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaMinLengthFacet* System::Xml::Schema::XmlSchemaMinLengthFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaMinLengthFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaMinLengthFacet::XmlSchemaMinLengthFacet() {}
