#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaNames.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaNames_Token::SchemaNames_Token(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaNames_Token::SchemaNames_Token() {}
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::Empty{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaName{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaType{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaMaxOccurs{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaMinOccurs{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaInfinite{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaModel{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaOpen{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaClosed{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaContent{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaMixed{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaEmpty{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaElementOnly{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaTextOnly{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaOrder{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaSeq{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaOne{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaMany{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaRequired{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaYes{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaNo{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaString{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaId{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaIdref{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaIdrefs{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaEntity{ static_cast<int32_t>(0x19) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaEntities{ static_cast<int32_t>(0x1a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaNmtoken{ static_cast<int32_t>(0x1b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaNmtokens{ static_cast<int32_t>(0x1c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaEnumeration{ static_cast<int32_t>(0x1d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDefault{ static_cast<int32_t>(0x1e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrRoot{ static_cast<int32_t>(0x1f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrElementType{ static_cast<int32_t>(0x20) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrElement{ static_cast<int32_t>(0x21) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrGroup{ static_cast<int32_t>(0x22) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrAttributeType{ static_cast<int32_t>(0x23) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrAttribute{ static_cast<int32_t>(0x24) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrDatatype{ static_cast<int32_t>(0x25) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrDescription{ static_cast<int32_t>(0x26) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XdrExtends{ static_cast<int32_t>(0x27) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaXdrRootAlias{ static_cast<int32_t>(0x28) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtType{ static_cast<int32_t>(0x29) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtValues{ static_cast<int32_t>(0x2a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMaxLength{ static_cast<int32_t>(0x2b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMinLength{ static_cast<int32_t>(0x2c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMax{ static_cast<int32_t>(0x2d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMin{ static_cast<int32_t>(0x2e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMinExclusive{ static_cast<int32_t>(0x2f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDtMaxExclusive{ static_cast<int32_t>(0x30) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaTargetNamespace{ static_cast<int32_t>(0x31) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaVersion{ static_cast<int32_t>(0x32) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaFinalDefault{ static_cast<int32_t>(0x33) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaBlockDefault{ static_cast<int32_t>(0x34) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaFixed{ static_cast<int32_t>(0x35) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaAbstract{ static_cast<int32_t>(0x36) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaBlock{ static_cast<int32_t>(0x37) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaSubstitutionGroup{ static_cast<int32_t>(0x38) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaFinal{ static_cast<int32_t>(0x39) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaNillable{ static_cast<int32_t>(0x3a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaRef{ static_cast<int32_t>(0x3b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaBase{ static_cast<int32_t>(0x3c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaDerivedBy{ static_cast<int32_t>(0x3d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaNamespace{ static_cast<int32_t>(0x3e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaProcessContents{ static_cast<int32_t>(0x3f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaRefer{ static_cast<int32_t>(0x40) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaPublic{ static_cast<int32_t>(0x41) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaSystem{ static_cast<int32_t>(0x42) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaSchemaLocation{ static_cast<int32_t>(0x43) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaValue{ static_cast<int32_t>(0x44) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaSource{ static_cast<int32_t>(0x45) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaAttributeFormDefault{ static_cast<int32_t>(0x46) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaElementFormDefault{ static_cast<int32_t>(0x47) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaUse{ static_cast<int32_t>(0x48) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaForm{ static_cast<int32_t>(0x49) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSchema{ static_cast<int32_t>(0x4a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAnnotation{ static_cast<int32_t>(0x4b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdInclude{ static_cast<int32_t>(0x4c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdImport{ static_cast<int32_t>(0x4d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdElement{ static_cast<int32_t>(0x4e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAttribute{ static_cast<int32_t>(0x4f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::xsdAttributeGroup{ static_cast<int32_t>(0x50) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAnyAttribute{ static_cast<int32_t>(0x51) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdGroup{ static_cast<int32_t>(0x52) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAll{ static_cast<int32_t>(0x53) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdChoice{ static_cast<int32_t>(0x54) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSequence{ static_cast<int32_t>(0x55) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAny{ static_cast<int32_t>(0x56) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdNotation{ static_cast<int32_t>(0x57) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleType{ static_cast<int32_t>(0x58) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdComplexType{ static_cast<int32_t>(0x59) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdUnique{ static_cast<int32_t>(0x5a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdKey{ static_cast<int32_t>(0x5b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdKeyref{ static_cast<int32_t>(0x5c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSelector{ static_cast<int32_t>(0x5d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdField{ static_cast<int32_t>(0x5e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMinExclusive{ static_cast<int32_t>(0x5f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMinInclusive{ static_cast<int32_t>(0x60) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMaxExclusive{ static_cast<int32_t>(0x61) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMaxInclusive{ static_cast<int32_t>(0x62) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdTotalDigits{ static_cast<int32_t>(0x63) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdFractionDigits{ static_cast<int32_t>(0x64) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdLength{ static_cast<int32_t>(0x65) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMinLength{ static_cast<int32_t>(0x66) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdMaxLength{ static_cast<int32_t>(0x67) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdEnumeration{ static_cast<int32_t>(0x68) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdPattern{ static_cast<int32_t>(0x69) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdDocumentation{ static_cast<int32_t>(0x6a) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdAppInfo{ static_cast<int32_t>(0x6b) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdComplexContent{ static_cast<int32_t>(0x6c) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdComplexContentExtension{ static_cast<int32_t>(0x6d) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdComplexContentRestriction{ static_cast<int32_t>(0x6e) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleContent{ static_cast<int32_t>(0x6f) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleContentExtension{ static_cast<int32_t>(0x70) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleContentRestriction{ static_cast<int32_t>(0x71) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleTypeList{ static_cast<int32_t>(0x72) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleTypeRestriction{ static_cast<int32_t>(0x73) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdSimpleTypeUnion{ static_cast<int32_t>(0x74) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdWhitespace{ static_cast<int32_t>(0x75) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XsdRedefine{ static_cast<int32_t>(0x76) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaItemType{ static_cast<int32_t>(0x77) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaMemberTypes{ static_cast<int32_t>(0x78) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::SchemaXPath{ static_cast<int32_t>(0x79) };
constexpr ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::SchemaNames_Token::XmlLang{ static_cast<int32_t>(0x7a) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaNames._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaNames::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::SchemaNames::_ctor)> {
  constexpr static std::size_t size = 0x2cac;
  constexpr static std::size_t addrs = 0x5fea20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNames.CreateTokenToQNameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaNames::*)()>(&::System::Xml::Schema::SchemaNames::CreateTokenToQNameTable)> {
  constexpr static std::size_t size = 0x1968;
  constexpr static std::size_t addrs = 0x5feceb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(),
                                                                               "CreateTokenToQNameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNames.SchemaTypeFromRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaType (::System::Xml::Schema::SchemaNames::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::SchemaNames::SchemaTypeFromRoot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fee820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "SchemaTypeFromRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNames.IsXSDRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaNames::*)(::StringW, ::StringW)>(&::System::Xml::Schema::SchemaNames::IsXSDRoot)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fee880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "IsXSDRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNames.IsXDRRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaNames::*)(::StringW, ::StringW)>(&::System::Xml::Schema::SchemaNames::IsXDRRoot)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fee8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "IsXDRRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::SchemaNames::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataType;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsDataType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsDataType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataTypeAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataTypeAlias;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataTypeAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataTypeAlias;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsDataTypeAlias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsDataTypeAlias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataTypeOld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataTypeOld;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsDataTypeOld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsDataTypeOld;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsDataTypeOld(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsDataTypeOld)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXdr;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXdr;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXdr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXdrAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXdrAlias;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXdrAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXdrAlias;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXdrAlias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXdrAlias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXsi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XsiType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiNil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiNil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XsiNil(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiNil)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XsiSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiSchemaLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiNoNamespaceSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsiNoNamespaceSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiNoNamespaceSchemaLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsdSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XsdSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XsdSchema(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsdSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNames::__cordl_internal_get_XdrSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XdrSchema;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNames::__cordl_internal_get_XdrSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XdrSchema;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_XdrSchema(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XdrSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnPCData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnPCData;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnPCData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnPCData;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnPCData(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnPCData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXml;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXml;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXml(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXmlNs;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXmlNs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXmlNs(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtDt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtDt;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtDt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtDt;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtDt(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtDt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXmlLang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXmlLang;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXmlLang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXmlLang;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXmlLang(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXmlLang)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnName;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMaxOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMaxOccurs;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMaxOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMaxOccurs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnMaxOccurs(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnMaxOccurs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMinOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMinOccurs;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMinOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMinOccurs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnMinOccurs(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnMinOccurs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnInfinite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnInfinite;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnInfinite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnInfinite;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnInfinite(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnInfinite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnModel;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnModel;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnModel(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOpen;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOpen;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnOpen(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnOpen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnClosed;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnClosed;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnClosed(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnClosed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnContent;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnContent;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnContent(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMixed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMixed;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMixed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMixed;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnMixed(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnMixed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEmpty;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEmpty;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnEmpty(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnEmpty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEltOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEltOnly;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEltOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEltOnly;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnEltOnly(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnEltOnly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnTextOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnTextOnly;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnTextOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnTextOnly;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnTextOnly(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnTextOnly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOrder;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOrder;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnOrder(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnOrder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSeq;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSeq;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnSeq(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnSeq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOne() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOne;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnOne() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnOne;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnOne(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnOne)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMany() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMany;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMany() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMany;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnMany(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnMany)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRequired;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRequired;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnRequired(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnRequired)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnYes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnYes;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnYes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnYes;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnYes(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnYes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNo;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNo;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnNo(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnNo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnString;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnString;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnString(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnID;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnID;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnID(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnIDRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnIDRef;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnIDRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnIDRef;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnIDRef(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnIDRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnIDRefs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnIDRefs;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnIDRefs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnIDRefs;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnIDRefs(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnIDRefs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEntity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEntity;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEntity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEntity;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnEntity(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnEntity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEntities;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEntities;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnEntities(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnEntities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNmToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNmToken;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNmToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNmToken;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnNmToken(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnNmToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNmTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNmTokens;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNmTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNmTokens;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnNmTokens(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnNmTokens)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEnumeration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEnumeration;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnEnumeration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnEnumeration;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnEnumeration(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnEnumeration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDefault;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDefault;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDefault(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrSchema;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrSchema;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrSchema(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrElementType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrElementType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrElementType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrElementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrElement;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrElement;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrElement(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrGroup;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrGroup;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrGroup(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAttributeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAttributeType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAttributeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAttributeType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrAttributeType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrAttributeType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAttribute;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAttribute;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrAttribute(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrDataType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrDataType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrDataType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrDataType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrDescription;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrDescription;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrDescription(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrExtends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrExtends;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrExtends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrExtends;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrExtends(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrExtends)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAliasSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAliasSchema;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXdrAliasSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXdrAliasSchema;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXdrAliasSchema(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXdrAliasSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtValues;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtValues;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtValues(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMaxLength;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMaxLength;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMaxLength(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMaxLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMinLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMinLength;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMinLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMinLength;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMinLength(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMinLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMax;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMax;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMax(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMax)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMin;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMin;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMin(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMinExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMinExclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMinExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMinExclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMinExclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMinExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMaxExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMaxExclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDtMaxExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDtMaxExclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDtMaxExclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDtMaxExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnTargetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnTargetNamespace;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnTargetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnTargetNamespace;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnTargetNamespace(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnTargetNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnVersion;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnVersion;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnVersion(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFinalDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFinalDefault;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFinalDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFinalDefault;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnFinalDefault(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnFinalDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBlockDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBlockDefault;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBlockDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBlockDefault;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnBlockDefault(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnBlockDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFixed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFixed;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFixed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFixed;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnFixed(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnFixed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnAbstract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnAbstract;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnAbstract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnAbstract;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnAbstract(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnAbstract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBlock;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBlock;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnBlock(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSubstitutionGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSubstitutionGroup;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSubstitutionGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSubstitutionGroup;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnSubstitutionGroup(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnSubstitutionGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFinal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFinal;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnFinal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnFinal;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnFinal(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnFinal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNillable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNillable;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNillable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNillable;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnNillable(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnNillable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRef;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRef;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnRef(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBase;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnBase;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnBase(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDerivedBy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDerivedBy;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnDerivedBy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnDerivedBy;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnDerivedBy(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnDerivedBy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNamespace;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnNamespace;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnNamespace(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnProcessContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnProcessContents;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnProcessContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnProcessContents;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnProcessContents(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnProcessContents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRefer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRefer;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnRefer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnRefer;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnRefer(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnRefer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnPublic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnPublic;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnPublic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnPublic;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnPublic(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnPublic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSystem;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSystem;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnSystem(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSchemaLocation;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSchemaLocation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnSchemaLocation(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnSchemaLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnValue;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnValue;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnValue(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnUse;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnUse;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnUse(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnUse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnForm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnForm;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnForm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnForm;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnForm(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnForm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnElementFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnElementFormDefault;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnElementFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnElementFormDefault;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnElementFormDefault(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnElementFormDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnAttributeFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnAttributeFormDefault;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnAttributeFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnAttributeFormDefault;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnAttributeFormDefault(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnAttributeFormDefault)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnItemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnItemType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnItemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnItemType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnItemType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnItemType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMemberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMemberTypes;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnMemberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnMemberTypes;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnMemberTypes(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnMemberTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXPath;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXPath;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXPath(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSchema;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSchema;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdSchema(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnnotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnnotation;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnnotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnnotation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAnnotation(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAnnotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdInclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdInclude;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdInclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdInclude;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdInclude(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdInclude)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdImport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdImport;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdImport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdImport;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdImport(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdImport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdElement;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdElement;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdElement(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAttribute;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAttribute;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAttribute(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAttributeGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAttributeGroup;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAttributeGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAttributeGroup;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAttributeGroup(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAttributeGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnyAttribute;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnyAttribute;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAnyAttribute(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAnyAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdGroup;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdGroup;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdGroup(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAll;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAll;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAll(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdChoice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdChoice;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdChoice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdChoice;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdChoice(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdChoice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSequence;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSequence;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdSequence(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdSequence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAny() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAny;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAny() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAny;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAny(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAny)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdNotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdNotation;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdNotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdNotation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdNotation(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdNotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSimpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSimpleType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSimpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSimpleType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdSimpleType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdSimpleType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdComplexType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdComplexType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdComplexType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdComplexType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdComplexType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdComplexType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdUnique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdUnique;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdUnique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdUnique;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdUnique(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdUnique)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdKey;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdKey;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdKey(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdKeyRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdKeyRef;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdKeyRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdKeyRef;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdKeyRef(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdKeyRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSelector;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSelector;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdSelector(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdField;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdField;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdField(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinExclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinExclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMinExclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMinExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinInclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinInclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMinInclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMinInclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxInclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxInclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMaxInclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMaxInclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxExclusive;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxExclusive;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMaxExclusive(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMaxExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdTotalDigits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdTotalDigits;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdTotalDigits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdTotalDigits;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdTotalDigits(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdTotalDigits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdFractionDigits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdFractionDigits;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdFractionDigits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdFractionDigits;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdFractionDigits(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdFractionDigits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdLength;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdLength;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdLength(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinLength;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMinLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMinLength;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMinLength(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMinLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxLength;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdMaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdMaxLength;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdMaxLength(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdMaxLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdEnumeration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdEnumeration;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdEnumeration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdEnumeration;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdEnumeration(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdEnumeration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdPattern;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdPattern;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdPattern(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdPattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdDocumentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdDocumentation;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdDocumentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdDocumentation;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdDocumentation(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdDocumentation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAppinfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAppinfo;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAppinfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAppinfo;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAppinfo(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAppinfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSource;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnSource;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnSource(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdComplexContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdComplexContent;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdComplexContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdComplexContent;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdComplexContent(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdComplexContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSimpleContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSimpleContent;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdSimpleContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdSimpleContent;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdSimpleContent(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdSimpleContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdRestriction;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdRestriction;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdRestriction(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdRestriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdExtension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdExtension;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdExtension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdExtension;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdExtension(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdExtension)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdUnion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdUnion;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdUnion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdUnion;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdUnion(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdUnion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdList;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdList;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdList(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdWhiteSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdWhiteSpace;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdWhiteSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdWhiteSpace;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdWhiteSpace(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdWhiteSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdRedefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdRedefine;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdRedefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdRedefine;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdRedefine(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdRedefine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnyType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNames::__cordl_internal_get_QnXsdAnyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QnXsdAnyType;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_QnXsdAnyType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QnXsdAnyType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>& System::Xml::Schema::SchemaNames::__cordl_internal_get_TokenToQName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenToQName;
}
constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> const& System::Xml::Schema::SchemaNames::__cordl_internal_get_TokenToQName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenToQName;
}
constexpr void System::Xml::Schema::SchemaNames::__cordl_internal_set_TokenToQName(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TokenToQName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::SchemaNames::_ctor(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable);
}
inline void System::Xml::Schema::SchemaNames::CreateTokenToQNameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(),
                                                                             "CreateTokenToQNameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaType System::Xml::Schema::SchemaNames::SchemaTypeFromRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "SchemaTypeFromRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaType, false>(this, ___internal_method, localName, ns);
}
inline bool System::Xml::Schema::SchemaNames::IsXSDRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "IsXSDRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, ns);
}
inline bool System::Xml::Schema::SchemaNames::IsXDRRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNames*>::get(), "IsXDRRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, ns);
}
inline ::System::Xml::Schema::SchemaNames* System::Xml::Schema::SchemaNames::New_ctor(::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SchemaNames*>(nameTable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaNames::SchemaNames() {}
