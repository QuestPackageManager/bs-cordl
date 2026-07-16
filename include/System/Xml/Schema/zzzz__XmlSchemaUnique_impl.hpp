#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaUnique.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaUnique_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaUnique._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaUnique::*)()>(&::System::Xml::Schema::XmlSchemaUnique::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622c1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaUnique*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaUnique::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaUnique*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaUnique* System::Xml::Schema::XmlSchemaUnique::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaUnique*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaUnique::XmlSchemaUnique() {}
