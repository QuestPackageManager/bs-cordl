#pragma once
// IWYU pragma private; include "System\Xml\Schema\FacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFacets_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaPatternFacet_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::*)(char16_t, ::StringW)>(
    &::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61d2044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::_ctor(char16_t m, ::StringW r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m, r);
}
// Ctor Parameters [CppParam { name: "match", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::FacetsCompiler_FacetsChecker_Map(char16_t match, ::StringW replacement) noexcept {
  this->match = match;
  this->replacement = replacement;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::FacetsCompiler_FacetsChecker_Map() {}
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::RestrictionFacets*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x61cea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileLengthFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileLengthFacet)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x61cec48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinLengthFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinLengthFacet)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x61cef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMinLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxLengthFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x61cf2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMaxLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompilePatternFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaPatternFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompilePatternFacet)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x61cf5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompilePatternFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileEnumerationFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileEnumerationFacet)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x61cf744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                             { "CompileEnumerationFacet",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileWhitespaceFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x61cf89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileWhitespaceFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxInclusiveFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61cffa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMaxInclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxExclusiveFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61d0174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMaxExclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinInclusiveFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61cfc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMinInclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinExclusiveFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61cfddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileMinExclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileTotalDigitsFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x61d0340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileTotalDigitsFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileFractionDigitsFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x61d0658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                           { "CompileFractionDigitsFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.FinishFacetCompile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::FinishFacetCompile)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x61d0908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "FinishFacetCompile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckValue)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x61d13a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                             { "CheckValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileFacetCombinations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFacetCombinations)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x61d0c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "CompileFacetCombinations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CopyFacetsFromBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x61d1a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "CopyFacetsFromBaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.ParseFacetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaFacet*, ::StringW, ::System::Xml::IXmlNamespaceResolver*,
                                                            ::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::ParseFacetValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x61d121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                { "ParseFacetValue",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.Preprocess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::Preprocess)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61d1814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "Preprocess", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckProhibitedFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckProhibitedFlag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61d112c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
            { "CheckProhibitedFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckDupFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags,
                                                                                                                     ::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckDupFlag)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61d11ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
            { "CheckDupFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.SetFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61d133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                { "SetFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.SetFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::RestrictionFlags)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61d1e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "SetFlag", {}, { ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::setStaticF_c_map(::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>, "c_map", ::System::Xml::Schema::FacetsChecker_FacetsCompiler>(
      std::forward<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>>(value));
}
inline ::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map> System::Xml::Schema::FacetsChecker_FacetsCompiler::getStaticF_c_map() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>, "c_map", ::System::Xml::Schema::FacetsChecker_FacetsCompiler>();
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::_ctor(::System::Xml::Schema::DatatypeImplementation* baseDatatype, ::System::Xml::Schema::RestrictionFacets* restriction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::DatatypeImplementation*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, baseDatatype, restriction);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMinLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMaxLengthFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompilePatternFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                       ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                          { "CompileEnumerationFacet",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, nsmgr, nameTable);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileWhitespaceFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMaxInclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMaxExclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMinInclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileMinExclusiveFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileTotalDigitsFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                                                         { "CompileFractionDigitsFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::FinishFacetCompile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "FinishFacetCompile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckValue(::System::Object* value, ::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                                           { "CheckValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFacetCombinations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "CompileFacetCombinations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "CopyFacetsFromBaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::FacetsChecker_FacetsCompiler::ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype* datatype, ::System::Xml::Schema::XmlSchemaFacet* facet,
                                                                                            ::StringW code, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                              { "ParseFacetValue",
                                                {},
                                                { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, datatype, facet, code, nsmgr, nameTable);
}
inline ::StringW System::Xml::Schema::FacetsChecker_FacetsCompiler::Preprocess(::StringW pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "Preprocess", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pattern);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::StringW errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
          { "CheckProhibitedFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag, errorCode);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::StringW errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                       { "CheckDupFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag, errorCode);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(),
                                              { "SetFlag", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaFacet*>(), ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, facet, flag);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::RestrictionFlags flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker_FacetsCompiler>(), { "SetFlag", {}, { ::i2c::type_of<::System::Xml::Schema::RestrictionFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flag);
}
// Ctor Parameters [CppParam { name: "datatype", ty: "::System::Xml::Schema::DatatypeImplementation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "derivedRestriction", ty:
// "::System::Xml::Schema::RestrictionFacets*", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "baseFixedFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "validRestrictionFlags", ty:
// "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "nonNegativeInt", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "builtInType", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: Some("{}") }, CppParam { name: "builtInEnum", ty:
// "::System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstPattern", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "regStr", ty:
// "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pattern_facet", ty: "::System::Xml::Schema::XmlSchemaPatternFacet*", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Xml::Schema::FacetsChecker_FacetsCompiler::FacetsChecker_FacetsCompiler(
    ::System::Xml::Schema::DatatypeImplementation* datatype, ::System::Xml::Schema::RestrictionFacets* derivedRestriction, ::System::Xml::Schema::RestrictionFlags baseFlags,
    ::System::Xml::Schema::RestrictionFlags baseFixedFlags, ::System::Xml::Schema::RestrictionFlags validRestrictionFlags, ::System::Xml::Schema::XmlSchemaDatatype* nonNegativeInt,
    ::System::Xml::Schema::XmlSchemaDatatype* builtInType, ::System::Xml::Schema::XmlTypeCode builtInEnum, bool firstPattern, ::System::Text::StringBuilder* regStr,
    ::System::Xml::Schema::XmlSchemaPatternFacet* pattern_facet) noexcept {
  this->datatype = datatype;
  this->derivedRestriction = derivedRestriction;
  this->baseFlags = baseFlags;
  this->baseFixedFlags = baseFixedFlags;
  this->validRestrictionFlags = validRestrictionFlags;
  this->nonNegativeInt = nonNegativeInt;
  this->builtInType = builtInType;
  this->builtInEnum = builtInEnum;
  this->firstPattern = firstPattern;
  this->regStr = regStr;
  this->pattern_facet = pattern_facet;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::FacetsChecker_FacetsCompiler::FacetsChecker_FacetsCompiler() {}
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckLexicalFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::by_ref<::StringW>, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckLexicalFacets)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61ce2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int64_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int32_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int16_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(double_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(float_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::ArrayW<uint8_t>, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckWhitespaceFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker::*)(::by_ref<::StringW>, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckWhitespaceFacets)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61ce314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(),
                                                             { "CheckWhitespaceFacets", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckPatternFacets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::Xml::Schema::RestrictionFacets*, ::StringW)>(
    &::System::Xml::Schema::FacetsChecker::CheckPatternFacets)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x61ce3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(),
                                                             { "CheckPatternFacets", {}, { ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::FacetsChecker::*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ce5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.ConstructRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::RestrictionFacets* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::FacetsChecker::ConstructRestriction)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x61ce5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.Power
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int32_t, int32_t)>(&::System::Xml::Schema::FacetsChecker::Power)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61d104c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { "Power", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::FacetsChecker::*)()>(&::System::Xml::Schema::FacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61d1128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckLexicalFacets(::by_ref<::StringW> parseString, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, parseString, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::ArrayW<uint8_t> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, value, datatype);
}
inline void System::Xml::Schema::FacetsChecker::CheckWhitespaceFacets(::by_ref<::StringW> s, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(),
                                                           { "CheckWhitespaceFacets", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* restriction, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(),
                                                           { "CheckPatternFacets", {}, { ::i2c::type_of<::System::Xml::Schema::RestrictionFacets*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, restriction, value);
}
inline bool System::Xml::Schema::FacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, enumeration, datatype);
}
inline ::System::Xml::Schema::RestrictionFacets* System::Xml::Schema::FacetsChecker::ConstructRestriction(::System::Xml::Schema::DatatypeImplementation* datatype,
                                                                                                          ::System::Xml::Schema::XmlSchemaObjectCollection* facets,
                                                                                                          ::System::Xml::XmlNameTable* nameTable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFacets*>(this, ___internal_method, datatype, facets, nameTable);
}
inline ::System::Decimal System::Xml::Schema::FacetsChecker::Power(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { "Power", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, x, y);
}
inline void System::Xml::Schema::FacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::FacetsChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::FacetsChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::FacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::FacetsChecker::FacetsChecker() {}
