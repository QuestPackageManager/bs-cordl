#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSubstitutionGroupV1Compat.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroupV1Compat_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat.get_Choice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaChoice* (::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::get_Choice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623c330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>(), { "get_Choice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::*)()>(&::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x623c338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaChoice*& System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_get_choice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr ::System::Xml::Schema::XmlSchemaChoice* const& System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_get_choice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___choice = value;
}
inline ::System::Xml::Schema::XmlSchemaChoice* System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::get_Choice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>(), { "get_Choice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaChoice*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::XmlSchemaSubstitutionGroupV1Compat() {}
