#pragma once
// IWYU pragma private; include "System\Xml\Schema\StringFacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__StringFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.get_LanguagePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Regex* (*)()>(&::System::Xml::Schema::StringFacetsChecker::get_LanguagePattern)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61d3a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { "get_LanguagePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::StringFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::StringFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61d3b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::StringFacetsChecker::*)(::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::StringFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d3b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::StringFacetsChecker::*)(::StringW, ::System::Xml::Schema::XmlSchemaDatatype*, bool)>(
    &::System::Xml::Schema::StringFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x61c73ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
                                                { "CheckValueFacets", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::StringFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::StringFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61d402c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::StringFacetsChecker::*)(::StringW, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::StringFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x61d3e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
            { "MatchEnumeration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker.CheckBuiltInFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::StringFacetsChecker::*)(::StringW, ::System::Xml::Schema::XmlTypeCode, bool)>(
    &::System::Xml::Schema::StringFacetsChecker::CheckBuiltInFacets)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x61d3b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
                                                { "CheckBuiltInFacets", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::StringFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::StringFacetsChecker::*)()>(&::System::Xml::Schema::StringFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61bf7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::StringFacetsChecker::setStaticF_languagePattern(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "languagePattern", ::System::Xml::Schema::StringFacetsChecker*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Xml::Schema::StringFacetsChecker::getStaticF_languagePattern() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "languagePattern", ::System::Xml::Schema::StringFacetsChecker*>();
}
inline ::System::Text::RegularExpressions::Regex* System::Xml::Schema::StringFacetsChecker::get_LanguagePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { "get_LanguagePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Regex*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Xml::Schema::StringFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::StringFacetsChecker::CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::StringFacetsChecker::CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype, bool verifyUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
                                              { "CheckValueFacets", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype, verifyUri);
}
inline bool System::Xml::Schema::StringFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::StringFacetsChecker::MatchEnumeration(::StringW value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
                       { "MatchEnumeration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline ::System::Exception* System::Xml::Schema::StringFacetsChecker::CheckBuiltInFacets(::StringW s, ::System::Xml::Schema::XmlTypeCode typeCode, bool verifyUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(),
                                              { "CheckBuiltInFacets", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, typeCode, verifyUri);
}
inline void System::Xml::Schema::StringFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::StringFacetsChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::StringFacetsChecker* System::Xml::Schema::StringFacetsChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::StringFacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::StringFacetsChecker::StringFacetsChecker() {}
