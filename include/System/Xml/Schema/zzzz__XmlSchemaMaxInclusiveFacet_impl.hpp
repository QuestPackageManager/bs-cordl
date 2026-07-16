#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxInclusiveFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaMaxInclusiveFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaMaxInclusiveFacet::*)()>(&::System::Xml::Schema::XmlSchemaMaxInclusiveFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x622bee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaMaxInclusiveFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet* System::Xml::Schema::XmlSchemaMaxInclusiveFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet::XmlSchemaMaxInclusiveFacet() {}
