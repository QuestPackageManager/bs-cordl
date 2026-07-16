#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_ENTITY.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NCName_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_ENTITY_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_ENTITY.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_ENTITY::*)()>(&::System::Xml::Schema::Datatype_ENTITY::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c247c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_ENTITY.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::Datatype_ENTITY::*)()>(&::System::Xml::Schema::Datatype_ENTITY::get_TokenizedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c2484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_ENTITY._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_ENTITY::*)()>(&::System::Xml::Schema::Datatype_ENTITY::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ba4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_ENTITY::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::Datatype_ENTITY::get_TokenizedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_ENTITY::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_ENTITY*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_ENTITY* System::Xml::Schema::Datatype_ENTITY::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_ENTITY*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_ENTITY::Datatype_ENTITY() {}
