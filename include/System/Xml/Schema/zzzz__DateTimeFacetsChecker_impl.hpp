#pragma once
// IWYU pragma private; include "System\Xml\Schema\DateTimeFacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__DateTimeFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DateTimeFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::DateTimeFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::DateTimeFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61d3498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DateTimeFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::DateTimeFacetsChecker::*)(::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::DateTimeFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x61d34fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DateTimeFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DateTimeFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::DateTimeFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61d3a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DateTimeFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DateTimeFacetsChecker::*)(
    ::System::DateTime, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::DateTimeFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61d38c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(),
            { "MatchEnumeration", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DateTimeFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DateTimeFacetsChecker::*)()>(&::System::Xml::Schema::DateTimeFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61bf7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::DateTimeFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::DateTimeFacetsChecker::CheckValueFacets(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::DateTimeFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::DateTimeFacetsChecker::MatchEnumeration(::System::DateTime value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(),
          { "MatchEnumeration", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline void System::Xml::Schema::DateTimeFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DateTimeFacetsChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::DateTimeFacetsChecker* System::Xml::Schema::DateTimeFacetsChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::DateTimeFacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DateTimeFacetsChecker::DateTimeFacetsChecker() {}
