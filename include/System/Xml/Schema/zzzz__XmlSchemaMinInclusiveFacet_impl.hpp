#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaMinInclusiveFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaMinInclusiveFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaMinInclusiveFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaMinInclusiveFacet::*)()>(&::System::Xml::Schema::XmlSchemaMinInclusiveFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62316e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMinInclusiveFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaMinInclusiveFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMinInclusiveFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaMinInclusiveFacet* System::Xml::Schema::XmlSchemaMinInclusiveFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaMinInclusiveFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaMinInclusiveFacet::XmlSchemaMinInclusiveFacet() {}
