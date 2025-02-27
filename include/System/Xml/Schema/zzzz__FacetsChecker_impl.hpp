#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::*)(char16_t, ::StringW)>(
    &::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c5848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::FacetsCompiler_FacetsChecker_Map::_ctor(char16_t m, ::StringW r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m, r);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::RestrictionFacets*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x43c21d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DatatypeImplementation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFacets*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileLengthFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileLengthFacet)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x43c23d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileLengthFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinLengthFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinLengthFacet)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x43c2734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinLengthFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxLengthFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x43c2a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxLengthFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompilePatternFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaPatternFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompilePatternFacet)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x43c2d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompilePatternFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaPatternFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileEnumerationFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileEnumerationFacet)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x43c2ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileEnumerationFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileWhitespaceFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x43c3028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileWhitespaceFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxInclusiveFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x43c3718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxInclusiveFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMaxExclusiveFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x43c38dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxExclusiveFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinInclusiveFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x43c3390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinInclusiveFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileMinExclusiveFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x43c3554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinExclusiveFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileTotalDigitsFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x43c3aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileTotalDigitsFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileFractionDigitsFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaFacet*)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x43c3dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileFractionDigitsFacet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.FinishFacetCompile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::FinishFacetCompile)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x43c4070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                               "FinishFacetCompile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Object*, ::System::Xml::Schema::XmlSchemaFacet*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckValue)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x43c4b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CompileFacetCombinations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFacetCombinations)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x43c43d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                               "CompileFacetCombinations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CopyFacetsFromBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)()>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x43c527c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                               "CopyFacetsFromBaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.ParseFacetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaFacet*, ::StringW, ::System::Xml::IXmlNamespaceResolver*,
                                                            ::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::ParseFacetValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x43c49e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "ParseFacetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.Preprocess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::Preprocess)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x43c5020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "Preprocess",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckProhibitedFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckProhibitedFlag)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x43c48e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckProhibitedFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.CheckDupFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::StringW)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckDupFlag)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x43c4970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckDupFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.SetFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(
    ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags)>(&::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x43c4b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "SetFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker_FacetsCompiler.SetFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker_FacetsCompiler::*)(::System::Xml::Schema::RestrictionFlags)>(
    &::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x43c5658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "SetFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::setStaticF_c_map(
    ::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map, ::Array<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map, ::Array<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>*>, "c_map",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map, ::Array<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map, ::Array<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>*>
System::Xml::Schema::FacetsChecker_FacetsCompiler::getStaticF_c_map() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map, ::Array<::System::Xml::Schema::FacetsCompiler_FacetsChecker_Map>*>, "c_map",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get>();
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::_ctor(::System::Xml::Schema::DatatypeImplementation* baseDatatype, ::System::Xml::Schema::RestrictionFacets* restriction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DatatypeImplementation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFacets*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDatatype, restriction);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileLengthFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinLengthFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxLengthFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompilePatternFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaPatternFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                       ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileEnumerationFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet, nsmgr, nameTable);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileWhitespaceFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxInclusiveFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMaxExclusiveFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinInclusiveFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileMinExclusiveFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileTotalDigitsFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CompileFractionDigitsFacet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::FinishFacetCompile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                             "FinishFacetCompile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckValue(::System::Object* value, ::System::Xml::Schema::XmlSchemaFacet* facet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, facet);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFacetCombinations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                             "CompileFacetCombinations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(),
                                                                             "CopyFacetsFromBaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::FacetsChecker_FacetsCompiler::ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype* datatype, ::System::Xml::Schema::XmlSchemaFacet* facet,
                                                                                            ::StringW code, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "ParseFacetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, datatype, facet, code, nsmgr, nameTable);
}
inline ::StringW System::Xml::Schema::FacetsChecker_FacetsCompiler::Preprocess(::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "Preprocess",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pattern);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::StringW errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckProhibitedFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet, flag, errorCode);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::StringW errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "CheckDupFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet, flag, errorCode);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "SetFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaFacet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facet, flag);
}
inline void System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(::System::Xml::Schema::RestrictionFlags flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker_FacetsCompiler>::get(), "SetFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flag);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::ByRef<::StringW>, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckLexicalFacets)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x43c1ac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int64_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int32_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(int16_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(double_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(float_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1d9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckWhitespaceFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker::*)(::ByRef<::StringW>, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::FacetsChecker::CheckWhitespaceFacets)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x43c1b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "CheckWhitespaceFacets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.CheckPatternFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Schema::FacetsChecker::*)(::System::Xml::Schema::RestrictionFacets*, ::StringW)>(
    &::System::Xml::Schema::FacetsChecker::CheckPatternFacets)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x43c1bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "CheckPatternFacets", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFacets*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::FacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::FacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.ConstructRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::RestrictionFacets* (
    ::System::Xml::Schema::FacetsChecker::*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::FacetsChecker::ConstructRestriction)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x43c1db4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker.Power
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int32_t, int32_t)>(&::System::Xml::Schema::FacetsChecker::Power)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x43c47b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "Power", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::FacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::FacetsChecker::*)()>(&::System::Xml::Schema::FacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c48dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckLexicalFacets(::ByRef<::StringW> parseString, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, parseString, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline void System::Xml::Schema::FacetsChecker::CheckWhitespaceFacets(::ByRef<::StringW> s, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "CheckWhitespaceFacets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, datatype);
}
inline ::System::Exception* System::Xml::Schema::FacetsChecker::CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* restriction, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "CheckPatternFacets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RestrictionFacets*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, restriction, value);
}
inline bool System::Xml::Schema::FacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration, datatype);
}
inline ::System::Xml::Schema::RestrictionFacets* System::Xml::Schema::FacetsChecker::ConstructRestriction(::System::Xml::Schema::DatatypeImplementation* datatype,
                                                                                                          ::System::Xml::Schema::XmlSchemaObjectCollection* facets,
                                                                                                          ::System::Xml::XmlNameTable* nameTable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::RestrictionFacets*, false>(this, ___internal_method, datatype, facets, nameTable);
}
inline ::System::Decimal System::Xml::Schema::FacetsChecker::Power(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), "Power", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, x, y);
}
inline void System::Xml::Schema::FacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::FacetsChecker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::FacetsChecker* System::Xml::Schema::FacetsChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::FacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::FacetsChecker::FacetsChecker() {}
