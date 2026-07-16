#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCompilationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&::System::Xml::Schema::XmlSchemaCompilationSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6228700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings.get_EnableUpaCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&::System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>(), { "get_EnableUpaCheck", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_get_enableUpaCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUpaCheck;
}
constexpr bool const& System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_get_enableUpaCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableUpaCheck;
}
constexpr void System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_set_enableUpaCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableUpaCheck = value;
}
inline void System::Xml::Schema::XmlSchemaCompilationSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>(), { "get_EnableUpaCheck", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaCompilationSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaCompilationSettings*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings::XmlSchemaCompilationSettings() {}
