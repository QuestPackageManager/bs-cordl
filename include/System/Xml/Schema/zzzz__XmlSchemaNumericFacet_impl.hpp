#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaNumericFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaNumericFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaNumericFacet::*)()>(&::System::Xml::Schema::XmlSchemaNumericFacet::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622be84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaNumericFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaNumericFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaNumericFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaNumericFacet* System::Xml::Schema::XmlSchemaNumericFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaNumericFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaNumericFacet::XmlSchemaNumericFacet() {}
