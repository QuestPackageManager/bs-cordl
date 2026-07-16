#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_positiveInteger.hpp"
#include "System/Xml/Schema/zzzz__Datatype_nonNegativeInteger_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_positiveInteger_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_positiveInteger.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_positiveInteger::*)()>(
    &::System::Xml::Schema::Datatype_positiveInteger::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c4d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_positiveInteger.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_positiveInteger::*)()>(
    &::System::Xml::Schema::Datatype_positiveInteger::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c4d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_positiveInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_positiveInteger::*)()>(&::System::Xml::Schema::Datatype_positiveInteger::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61ba9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_positiveInteger::setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_positiveInteger*>(
      std::forward<::System::Xml::Schema::FacetsChecker*>(value));
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_positiveInteger::getStaticF_numeric10FacetsChecker() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_positiveInteger*>();
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_positiveInteger::get_FacetsChecker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_positiveInteger::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_positiveInteger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_positiveInteger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_positiveInteger* System::Xml::Schema::Datatype_positiveInteger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_positiveInteger*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_positiveInteger::Datatype_positiveInteger() {}
