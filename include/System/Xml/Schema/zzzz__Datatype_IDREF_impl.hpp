#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_IDREF.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NCName_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_IDREF_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_IDREF.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_IDREF::*)()>(&::System::Xml::Schema::Datatype_IDREF::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_IDREF.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::Datatype_IDREF::*)()>(&::System::Xml::Schema::Datatype_IDREF::get_TokenizedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c7c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_IDREF._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_IDREF::*)()>(&::System::Xml::Schema::Datatype_IDREF::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61bffb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_IDREF::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::Datatype_IDREF::get_TokenizedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_IDREF::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_IDREF*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_IDREF* System::Xml::Schema::Datatype_IDREF::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_IDREF*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_IDREF::Datatype_IDREF() {}
