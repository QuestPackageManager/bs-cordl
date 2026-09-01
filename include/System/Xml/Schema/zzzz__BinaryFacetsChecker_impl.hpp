#pragma once
// IWYU pragma private; include "System\Xml\Schema\BinaryFacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__BinaryFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::BinaryFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::BinaryFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x61d45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BinaryFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::BinaryFacetsChecker::*)(::ArrayW<uint8_t>, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61d464c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BinaryFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BinaryFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61d493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BinaryFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BinaryFacetsChecker::*)(
    ::ArrayW<uint8_t>, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x61d4818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(),
            { "MatchEnumeration", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BinaryFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BinaryFacetsChecker::*)()>(&::System::Xml::Schema::BinaryFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61d49c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets(::ArrayW<uint8_t> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration(::ArrayW<uint8_t> value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(),
          { "MatchEnumeration", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline void System::Xml::Schema::BinaryFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BinaryFacetsChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::BinaryFacetsChecker* System::Xml::Schema::BinaryFacetsChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::BinaryFacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::BinaryFacetsChecker::BinaryFacetsChecker() {}
