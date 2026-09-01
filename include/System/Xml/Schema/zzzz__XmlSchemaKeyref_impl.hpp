#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaKeyref.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaKeyref_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaKeyref.get_Refer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaKeyref::*)()>(&::System::Xml::Schema::XmlSchemaKeyref::get_Refer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62319d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { "get_Refer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaKeyref.set_Refer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaKeyref::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaKeyref::set_Refer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62319d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { "set_Refer", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaKeyref._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaKeyref::*)()>(&::System::Xml::Schema::XmlSchemaKeyref::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6231a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaKeyref::__cordl_internal_get_refer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refer;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaKeyref::__cordl_internal_get_refer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refer;
}
constexpr void System::Xml::Schema::XmlSchemaKeyref::__cordl_internal_set_refer(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refer = value;
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaKeyref::get_Refer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { "get_Refer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaKeyref::set_Refer(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { "set_Refer", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaKeyref::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaKeyref*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaKeyref* System::Xml::Schema::XmlSchemaKeyref::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaKeyref*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaKeyref::XmlSchemaKeyref() {}
