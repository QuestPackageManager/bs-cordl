#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_normalizedStringV1Compat.hpp"
#include "System/Xml/Schema/zzzz__Datatype_string_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_normalizedStringV1Compat_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedStringV1Compat.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_normalizedStringV1Compat::*)()>(
    &::System::Xml::Schema::Datatype_normalizedStringV1Compat::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedStringV1Compat.get_HasValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Datatype_normalizedStringV1Compat::*)()>(
    &::System::Xml::Schema::Datatype_normalizedStringV1Compat::get_HasValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_normalizedStringV1Compat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_normalizedStringV1Compat::*)()>(&::System::Xml::Schema::Datatype_normalizedStringV1Compat::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61c06dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_normalizedStringV1Compat::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline bool System::Xml::Schema::Datatype_normalizedStringV1Compat::get_HasValueFacets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_normalizedStringV1Compat::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_normalizedStringV1Compat* System::Xml::Schema::Datatype_normalizedStringV1Compat::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_normalizedStringV1Compat*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_normalizedStringV1Compat::Datatype_normalizedStringV1Compat() {}
