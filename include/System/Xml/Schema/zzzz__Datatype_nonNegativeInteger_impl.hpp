#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_nonNegativeInteger.hpp"
#include "System/Xml/Schema/zzzz__Datatype_integer_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_nonNegativeInteger_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_nonNegativeInteger.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::Datatype_nonNegativeInteger::*)()>(
    &::System::Xml::Schema::Datatype_nonNegativeInteger::get_FacetsChecker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c3cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_nonNegativeInteger.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_nonNegativeInteger::*)()>(
    &::System::Xml::Schema::Datatype_nonNegativeInteger::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_nonNegativeInteger.get_HasValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Datatype_nonNegativeInteger::*)()>(&::System::Xml::Schema::Datatype_nonNegativeInteger::get_HasValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c3d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_nonNegativeInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_nonNegativeInteger::*)()>(&::System::Xml::Schema::Datatype_nonNegativeInteger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ba960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_nonNegativeInteger::setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_nonNegativeInteger*>(
      std::forward<::System::Xml::Schema::FacetsChecker*>(value));
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_nonNegativeInteger::getStaticF_numeric10FacetsChecker() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::FacetsChecker*, "numeric10FacetsChecker", ::System::Xml::Schema::Datatype_nonNegativeInteger*>();
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::Datatype_nonNegativeInteger::get_FacetsChecker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_nonNegativeInteger::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline bool System::Xml::Schema::Datatype_nonNegativeInteger::get_HasValueFacets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_nonNegativeInteger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_nonNegativeInteger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_nonNegativeInteger* System::Xml::Schema::Datatype_nonNegativeInteger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_nonNegativeInteger*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_nonNegativeInteger::Datatype_nonNegativeInteger() {}
