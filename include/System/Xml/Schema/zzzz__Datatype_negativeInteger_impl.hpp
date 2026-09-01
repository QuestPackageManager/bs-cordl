#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_negativeInteger.hpp"
#include "System/Xml/Schema/zzzz__Datatype_nonPositiveInteger_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_negativeInteger_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_negativeInteger.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_negativeInteger::*)()>(
    &::System::Xml::Schema::Datatype_negativeInteger::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c8570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_negativeInteger.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_negativeInteger::*)()>(
    &::System::Xml::Schema::Datatype_negativeInteger::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c85cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_negativeInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_negativeInteger::*)()>(&::System::Xml::Schema::Datatype_negativeInteger::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61c0124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_negativeInteger::setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_negativeInteger*>(
      std::forward<::System::Xml::Schema::FacetsChecker*>(value));
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_negativeInteger::getStaticF_numeric10FacetsChecker() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_negativeInteger*>();
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_negativeInteger::get_FacetsChecker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_negativeInteger::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_negativeInteger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_negativeInteger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_negativeInteger* System::Xml::Schema::Datatype_negativeInteger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_negativeInteger*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_negativeInteger::Datatype_negativeInteger() {}
