#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaMaxLengthFacet.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaMaxLengthFacet_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaMaxLengthFacet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaMaxLengthFacet::*)()>(&::System::Xml::Schema::XmlSchemaMaxLengthFacet::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62316b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxLengthFacet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaMaxLengthFacet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaMaxLengthFacet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaMaxLengthFacet* System::Xml::Schema::XmlSchemaMaxLengthFacet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaMaxLengthFacet*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaMaxLengthFacet::XmlSchemaMaxLengthFacet() {}
