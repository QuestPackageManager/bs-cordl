#pragma once
// IWYU pragma private; include "System\Xml\Schema\Numeric2FacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__Numeric2FacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::Numeric2FacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61d2aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::Numeric2FacetsChecker::*)(double_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x61d2b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::Numeric2FacetsChecker::*)(float_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61d2e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Numeric2FacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::Numeric2FacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61d2e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Numeric2FacetsChecker::*)(double_t, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*)>(
    &::System::Xml::Schema::Numeric2FacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x61d2db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(),
            { "MatchEnumeration", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlValueConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Numeric2FacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Numeric2FacetsChecker::*)()>(&::System::Xml::Schema::Numeric2FacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61bf7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::Numeric2FacetsChecker::CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::Numeric2FacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::Numeric2FacetsChecker::MatchEnumeration(double_t value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(),
                       { "MatchEnumeration", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlValueConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, valueConverter);
}
inline void System::Xml::Schema::Numeric2FacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Numeric2FacetsChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Numeric2FacetsChecker* System::Xml::Schema::Numeric2FacetsChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Numeric2FacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Numeric2FacetsChecker::Numeric2FacetsChecker() {}
