#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_floatXdr.hpp"
#include "System/Xml/Schema/zzzz__Datatype_float_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_floatXdr_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_floatXdr.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::Datatype_floatXdr::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::Datatype_floatXdr::ParseValue)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x61ca814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_floatXdr*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_floatXdr*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_floatXdr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_floatXdr::*)()>(&::System::Xml::Schema::Datatype_floatXdr::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61bff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_floatXdr*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Xml::Schema::Datatype_floatXdr::ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_floatXdr*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s, nameTable, nsmgr);
}
inline void System::Xml::Schema::Datatype_floatXdr::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_floatXdr*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_floatXdr* System::Xml::Schema::Datatype_floatXdr::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_floatXdr*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_floatXdr::Datatype_floatXdr() {}
