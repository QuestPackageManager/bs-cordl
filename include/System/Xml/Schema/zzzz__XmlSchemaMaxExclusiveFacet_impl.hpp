#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxExclusiveFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaMaxExclusiveFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaMaxExclusiveFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaMaxExclusiveFacet::*)()>(&::System::Xml::Schema::XmlSchemaMaxExclusiveFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x622bedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxExclusiveFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaMaxExclusiveFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxExclusiveFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaMaxExclusiveFacet* System::Xml::Schema::XmlSchemaMaxExclusiveFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaMaxExclusiveFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaMaxExclusiveFacet::XmlSchemaMaxExclusiveFacet() {}
