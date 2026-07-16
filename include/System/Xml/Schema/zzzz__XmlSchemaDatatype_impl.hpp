#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDatatype.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFacets_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatypeVariety_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_ValueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_TokenizedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::ParseValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_Variety
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatypeVariety (::System::Xml::Schema::XmlSchemaDatatype::*)()>(
    &::System::Xml::Schema::XmlSchemaDatatype::get_Variety)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6229e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6229e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.IsDerivedFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::IsDerivedFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6229e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_HasLexicalFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_HasLexicalFacets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_HasValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_HasValueFacets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_ValueConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (::System::Xml::Schema::XmlSchemaDatatype::*)()>(
    &::System::Xml::Schema::XmlSchemaDatatype::get_ValueConverter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_Restriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::RestrictionFacets* (::System::Xml::Schema::XmlSchemaDatatype::*)()>(
    &::System::Xml::Schema::XmlSchemaDatatype::get_Restriction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::Compare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*,
                                                                                                                       bool)>(&::System::Xml::Schema::XmlSchemaDatatype::ParseValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::XmlSchemaDatatype::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::XmlSchemaDatatype::TryParseValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Object*, ::System::Xml::XmlNameTable*,
                                                                                                                          ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
    &::System::Xml::Schema::XmlSchemaDatatype::TryParseValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_FacetsChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::FacetsChecker* (::System::Xml::Schema::XmlSchemaDatatype::*)()>(
    &::System::Xml::Schema::XmlSchemaDatatype::get_FacetsChecker)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_BuiltInWhitespaceFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaWhiteSpace (::System::Xml::Schema::XmlSchemaDatatype::*)()>(
    &::System::Xml::Schema::XmlSchemaDatatype::get_BuiltInWhitespaceFacet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.DeriveByRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (
    ::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::DeriveByRestriction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.DeriveByList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::DeriveByList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.VerifySchemaValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::VerifySchemaValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.IsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::XmlSchemaDatatype::IsEqual)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.IsComparable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::IsComparable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.get_TypeCodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::get_TypeCodeString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6229e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "get_TypeCodeString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.TypeCodeToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaDatatype::*)(::System::Xml::Schema::XmlTypeCode)>(
    &::System::Xml::Schema::XmlSchemaDatatype::TypeCodeToString)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x6229f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "TypeCodeToString", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.ConcatenatedToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Xml::Schema::XmlSchemaDatatype::ConcatenatedToString)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x622a590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "ConcatenatedToString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.FromXmlTokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::System::Xml::XmlTokenizedType)>(
    &::System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x621d800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXmlTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.FromXmlTokenizedTypeXsd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::System::Xml::XmlTokenizedType)>(
    &::System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedTypeXsd)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x622ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXmlTokenizedTypeXsd", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.FromXdrName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::StringW)>(&::System::Xml::Schema::XmlSchemaDatatype::FromXdrName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x621c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXdrName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.DeriveByUnion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (*)(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>, ::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::DeriveByUnion)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x622ac98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                            { "DeriveByUnion", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype.XdrCanonizeUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*)>(
    &::System::Xml::Schema::XmlSchemaDatatype::XdrCanonizeUri)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6219c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                            { "XdrCanonizeUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaDatatype._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaDatatype::*)()>(&::System::Xml::Schema::XmlSchemaDatatype::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Xml::Schema::XmlSchemaDatatype::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::XmlSchemaDatatype::get_TokenizedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaDatatype::ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s, nameTable, nsmgr);
}
inline ::System::Xml::Schema::XmlSchemaDatatypeVariety System::Xml::Schema::XmlSchemaDatatype::get_Variety() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatypeVariety>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::XmlSchemaDatatype::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaDatatype::IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, datatype);
}
inline bool System::Xml::Schema::XmlSchemaDatatype::get_HasLexicalFacets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaDatatype::get_HasValueFacets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlSchemaDatatype::get_ValueConverter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(this, ___internal_method);
}
inline ::System::Xml::Schema::RestrictionFacets* System::Xml::Schema::XmlSchemaDatatype::get_Restriction() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFacets*>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XmlSchemaDatatype::Compare(::System::Object* value1, ::System::Object* value2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaDatatype::ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s, nameTable, nsmgr, createAtomicValue);
}
inline ::System::Exception* System::Xml::Schema::XmlSchemaDatatype::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                  ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Exception* System::Xml::Schema::XmlSchemaDatatype::TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable,
                                                                                  ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, nameTable, namespaceResolver, typedValue);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::XmlSchemaDatatype::get_FacetsChecker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::FacetsChecker*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaWhiteSpace System::Xml::Schema::XmlSchemaDatatype::get_BuiltInWhitespaceFacet() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaWhiteSpace>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* facets,
                                                                                                             ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaType* schemaType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method, facets, nameTable, schemaType);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::DeriveByList(::System::Xml::Schema::XmlSchemaType* schemaType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method, schemaType);
}
inline void System::Xml::Schema::XmlSchemaDatatype::VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* notations, ::System::Xml::Schema::XmlSchemaObject* caller) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notations, caller);
}
inline bool System::Xml::Schema::XmlSchemaDatatype::IsEqual(::System::Object* o1, ::System::Object* o2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o1, o2);
}
inline bool System::Xml::Schema::XmlSchemaDatatype::IsComparable(::System::Xml::Schema::XmlSchemaDatatype* dtype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dtype);
}
inline ::StringW System::Xml::Schema::XmlSchemaDatatype::get_TypeCodeString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "get_TypeCodeString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaDatatype::TypeCodeToString(::System::Xml::Schema::XmlTypeCode typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "TypeCodeToString", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, typeCode);
}
inline ::StringW System::Xml::Schema::XmlSchemaDatatype::ConcatenatedToString(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "ConcatenatedToString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedType(::System::Xml::XmlTokenizedType token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXmlTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(nullptr, ___internal_method, token);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXmlTokenizedTypeXsd", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(nullptr, ___internal_method, token);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::FromXdrName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { "FromXdrName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(nullptr, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::DeriveByUnion(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types,
                                                                                                       ::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                                       { "DeriveByUnion", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(nullptr, ___internal_method, types, schemaType);
}
inline ::StringW System::Xml::Schema::XmlSchemaDatatype::XdrCanonizeUri(::StringW uri, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                          { "XdrCanonizeUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, uri, nameTable, schemaNames);
}
inline void System::Xml::Schema::XmlSchemaDatatype::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaDatatype*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaDatatype::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaDatatype*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaDatatype::XmlSchemaDatatype() {}
