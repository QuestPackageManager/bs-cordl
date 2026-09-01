#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_normalizedString.hpp"
#include "System/Xml/Schema/zzzz__Datatype_string_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_normalizedString_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedString.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_normalizedString::*)()>(
    &::System::Xml::Schema::Datatype_normalizedString::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedString.get_BuiltInWhitespaceFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (::System::Xml::Schema::Datatype_normalizedString::*)()>(
    &::System::Xml::Schema::Datatype_normalizedString::get_BuiltInWhitespaceFacet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedString.get_HasValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Datatype_normalizedString::*)()>(&::System::Xml::Schema::Datatype_normalizedString::get_HasValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_normalizedString::*)()>(&::System::Xml::Schema::Datatype_normalizedString::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61c0180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_normalizedString::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaWhiteSpace System::Xml::Schema::Datatype_normalizedString::get_BuiltInWhitespaceFacet() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaWhiteSpace>(this, ___internal_method);
}
inline bool System::Xml::Schema::Datatype_normalizedString::get_HasValueFacets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_normalizedString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_normalizedString* System::Xml::Schema::Datatype_normalizedString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_normalizedString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_normalizedString::Datatype_normalizedString() {}
