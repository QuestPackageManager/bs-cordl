#pragma once
// IWYU pragma private; include "System/Xml/DtdParser.hpp"
#include "System/Xml/zzzz__IDtdParser_impl.hpp"
#include "System/Xml/zzzz__LineInfo_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IDtdParser_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::DtdParser_Token::DtdParser_Token(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser_Token::DtdParser_Token() {}
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::CDATA{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::_cordl_ID{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::IDREF{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::IDREFS{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::ENTITY{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::ENTITIES{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::NMTOKEN{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::NMTOKENS{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::NOTATION{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::None{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::PERef{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::AttlistDecl{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::ElementDecl{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::EntityDecl{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::NotationDecl{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Comment{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::PI{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::CondSectionStart{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::CondSectionEnd{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Eof{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::REQUIRED{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::IMPLIED{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::FIXED{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::QName{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Name{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Nmtoken{ static_cast<int32_t>(0x19) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Quote{ static_cast<int32_t>(0x1a) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::LeftParen{ static_cast<int32_t>(0x1b) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::RightParen{ static_cast<int32_t>(0x1c) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::GreaterThan{ static_cast<int32_t>(0x1d) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Or{ static_cast<int32_t>(0x1e) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::LeftBracket{ static_cast<int32_t>(0x1f) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::RightBracket{ static_cast<int32_t>(0x20) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::PUBLIC{ static_cast<int32_t>(0x21) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::SYSTEM{ static_cast<int32_t>(0x22) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Literal{ static_cast<int32_t>(0x23) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::DOCTYPE{ static_cast<int32_t>(0x24) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::NData{ static_cast<int32_t>(0x25) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Percent{ static_cast<int32_t>(0x26) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Star{ static_cast<int32_t>(0x27) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::QMark{ static_cast<int32_t>(0x28) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Plus{ static_cast<int32_t>(0x29) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::PCDATA{ static_cast<int32_t>(0x2a) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::Comma{ static_cast<int32_t>(0x2b) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::ANY{ static_cast<int32_t>(0x2c) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::EMPTY{ static_cast<int32_t>(0x2d) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::IGNORE{ static_cast<int32_t>(0x2e) };
constexpr ::System::Xml::DtdParser_Token System::Xml::DtdParser_Token::INCLUDE{ static_cast<int32_t>(0x2f) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::DtdParser_ScanningFunction::DtdParser_ScanningFunction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser_ScanningFunction::DtdParser_ScanningFunction() {}
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::SubsetContent{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Name{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::QName{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Nmtoken{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Doctype1{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Doctype2{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element1{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element2{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element3{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element4{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element5{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element6{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Element7{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist1{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist2{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist3{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist4{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist5{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist6{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Attlist7{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Entity1{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Entity2{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Entity3{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Notation1{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::CondSection1{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::CondSection2{ static_cast<int32_t>(0x19) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::CondSection3{ static_cast<int32_t>(0x1a) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::Literal{ static_cast<int32_t>(0x1b) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::SystemId{ static_cast<int32_t>(0x1c) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::PublicId1{ static_cast<int32_t>(0x1d) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::PublicId2{ static_cast<int32_t>(0x1e) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::ClosingTag{ static_cast<int32_t>(0x1f) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::ParamEntitySpace{ static_cast<int32_t>(0x20) };
constexpr ::System::Xml::DtdParser_ScanningFunction System::Xml::DtdParser_ScanningFunction::None{ static_cast<int32_t>(0x21) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::DtdParser_LiteralType::DtdParser_LiteralType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser_LiteralType::DtdParser_LiteralType() {}
constexpr ::System::Xml::DtdParser_LiteralType System::Xml::DtdParser_LiteralType::AttributeValue{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::DtdParser_LiteralType System::Xml::DtdParser_LiteralType::EntityReplText{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::DtdParser_LiteralType System::Xml::DtdParser_LiteralType::SystemOrPublicID{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::DtdParser_UndeclaredNotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser_UndeclaredNotation::*)(::StringW, int32_t, int32_t)>(
    &::System::Xml::DtdParser_UndeclaredNotation::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4362b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser_UndeclaredNotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_lineNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNo;
}
constexpr int32_t const& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_lineNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNo;
}
constexpr void System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_set_lineNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNo = value;
}
constexpr int32_t& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_linePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr int32_t const& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_linePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePos;
}
constexpr void System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_set_linePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePos = value;
}
constexpr ::System::Xml::DtdParser_UndeclaredNotation*& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::DtdParser_UndeclaredNotation* const& System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::DtdParser_UndeclaredNotation::__cordl_internal_set_next(::System::Xml::DtdParser_UndeclaredNotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::DtdParser_UndeclaredNotation::_ctor(::StringW name, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser_UndeclaredNotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, lineNo, linePos);
}
inline ::System::Xml::DtdParser_UndeclaredNotation* System::Xml::DtdParser_UndeclaredNotation::New_ctor(::StringW name, int32_t lineNo, int32_t linePos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::DtdParser_UndeclaredNotation*>(name, lineNo, linePos));
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser_UndeclaredNotation::DtdParser_UndeclaredNotation() {}
//  Writing Method size for method: ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::*)(int32_t)>(
    &::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4362b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_get_startParenEntityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startParenEntityId;
}
constexpr int32_t const& System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_get_startParenEntityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startParenEntityId;
}
constexpr void System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_set_startParenEntityId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startParenEntityId = value;
}
constexpr ::System::Xml::DtdParser_Token& System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_get_parsingSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingSchema;
}
constexpr ::System::Xml::DtdParser_Token const& System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_get_parsingSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingSchema;
}
constexpr void System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::__cordl_internal_set_parsingSchema(::System::Xml::DtdParser_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parsingSchema = value;
}
inline void System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::_ctor(int32_t startParentEntityIdParam) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startParentEntityIdParam);
}
inline ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame* System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::New_ctor(int32_t startParentEntityIdParam) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*>(startParentEntityIdParam));
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame::DtdParser_ParseElementOnlyContent_LocalFrame() {}
//  Writing Method size for method: ::System::Xml::DtdParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4358d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdParser* (*)()>(&::System::Xml::DtdParser::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4358dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::Initialize)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x4358e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.InitializeFreeFloatingDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::InitializeFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x4359218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "InitializeFreeFloatingDtd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.System_Xml_IDtdParser_ParseInternalDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::DtdParser::*)(::System::Xml::IDtdParserAdapter*, bool)>(
    &::System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x435965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "System.Xml.IDtdParser.ParseInternalDtd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.System_Xml_IDtdParser_ParseFreeFloatingDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (
    ::System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Xml::IDtdParserAdapter*)>(&::System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43598c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "System.Xml.IDtdParser.ParseFreeFloatingDtd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_ParsingInternalSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_ParsingInternalSubset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43598ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_ParsingInternalSubset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_IgnoreEntityReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_IgnoreEntityReferences)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43598fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_IgnoreEntityReferences",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_SaveInternalSubsetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_SaveInternalSubsetValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x435990c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_SaveInternalSubsetValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_ParsingTopLevelMarkup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_ParsingTopLevelMarkup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x43599cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_ParsingTopLevelMarkup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_SupportNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_SupportNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43599fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_SupportNamespaces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_Normalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_Normalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4359a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_Normalize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::Parse)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x435968c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseInDocumentDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::ParseInDocumentDtd)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x4359a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseInDocumentDtd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseFreeFloatingDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4359a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseFreeFloatingDtd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseInternalSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseInternalSubset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x435ae74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseInternalSubset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseExternalSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseExternalSubset)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x435ae78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseExternalSubset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseSubset)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x435b01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseSubset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseAttlistDecl)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x435b35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistDecl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaElementDecl*, bool)>(&::System::Xml::DtdParser::ParseAttlistType)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x435cd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaElementDecl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseAttlistDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::SchemaAttDef*, bool)>(
    &::System::Xml::DtdParser::ParseAttlistDefault)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x435d308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistDefault", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseElementDecl)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x435b918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementDecl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementOnlyContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*, int32_t)>(
    &::System::Xml::DtdParser::ParseElementOnlyContent)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x435da6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementOnlyContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseHowMany
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*)>(
    &::System::Xml::DtdParser::ParseHowMany)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x435ddb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseHowMany", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseElementMixedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::ParticleContentValidator*, int32_t)>(
    &::System::Xml::DtdParser::ParseElementMixedContent)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x435d7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementMixedContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseEntityDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseEntityDecl)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x435bcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseEntityDecl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseNotationDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseNotationDecl)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x435c010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseNotationDecl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.AddUndeclaredNotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::StringW)>(&::System::Xml::DtdParser::AddUndeclaredNotation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x435d5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "AddUndeclaredNotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseComment)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x435c200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParsePI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParsePI)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x435c44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParsePI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseCondSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ParseCondSection)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x435c618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseCondSection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseExternalId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::DtdParser_Token, ::System::Xml::DtdParser_Token, ::ByRef<::StringW>,
                                                                                                                     ::ByRef<::StringW>)>(&::System::Xml::DtdParser::ParseExternalId)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x435a988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseExternalId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::GetToken)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x4359f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetToken", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanSubsetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanSubsetContent)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x435e4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanSubsetContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNameExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x435e494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNameExpected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQNameExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanQNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x435e4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQNameExpected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNmtokenExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNmtokenExpected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x435e4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNmtokenExpected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanDoctype1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanDoctype1)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x435ec00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanDoctype1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanDoctype2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanDoctype2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x435ed2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanDoctype2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanClosingTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanClosingTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4360f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanClosingTag",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement1)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x435edd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement2)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x435efa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x435f148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement4)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x435f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement4",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement5)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x435f294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement5",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement6)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x435f380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement6",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanElement7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanElement7)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435f450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement7",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist1)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x435f4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist2)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x435f574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x435fbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x435fc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist4",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist5)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x435fd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist5",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist6)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x435fe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist6",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanAttlist7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanAttlist7)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x43601a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist7",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)(::System::Xml::DtdParser_LiteralType)>(
    &::System::Xml::DtdParser::ScanLiteral)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x43615a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanLiteral", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_LiteralType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntityName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntityName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4362028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntityName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNotation1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNotation1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4360264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNotation1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanSystemId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanSystemId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4360364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanSystemId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4360534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity2)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x43605a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanEntity3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanEntity3)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43606dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanPublicId1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanPublicId1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4360418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanPublicId1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanPublicId2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanPublicId2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x43604cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanPublicId2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection1)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x43607f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4360a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanCondSection3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::DtdParser_Token (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanCondSection3)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x4360b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4361270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4361278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x43623b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ReadDataInName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ReadDataInName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4362630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ReadDataInName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ScanNmtoken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ScanNmtoken)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4361280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNmtoken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.EatPublicKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::EatPublicKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x43613e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "EatPublicKeyword",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.EatSystemKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::EatSystemKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x43614c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "EatSystemKeyword",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNameQualified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::GetNameQualified)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x435a814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNameQualified", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNameString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetNameString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x435d588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNameString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetNmtokenString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetNmtokenString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x435d700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNmtokenString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x435d77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.GetValueWithStrippedSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::GetValueWithStrippedSpaces)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435d71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetValueWithStrippedSpaces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::ReadData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4361004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ReadData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.LoadParsingBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::LoadParsingBuffer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x4359e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "LoadParsingBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SaveParsingBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x435ae6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SaveParsingBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SaveParsingBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t)>(&::System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x435c928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SaveParsingBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(bool, bool, bool)>(&::System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x435e388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(::System::Xml::XmlQualifiedName*, bool, bool, bool)>(
    &::System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x4362898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.HandleEntityEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(bool)>(&::System::Xml::DtdParser::HandleEntityEnd)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x43610c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityEnd", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.VerifyEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::SchemaEntity* (::System::Xml::DtdParser::*)(::System::Xml::XmlQualifiedName*, bool, bool, bool)>(&::System::Xml::DtdParser::VerifyEntityReference)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x4362188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "VerifyEntityReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(
    &::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x435c854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(
    &::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x435d4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::DtdParser::*)(::System::Xml::Schema::XmlSeverityType, ::System::Xml::Schema::XmlSchemaException*)>(&::System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4359cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.IsAttributeValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::DtdParser::*)(::System::Xml::DtdParser_Token)>(
    &::System::Xml::DtdParser::IsAttributeValueType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x435d4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "IsAttributeValueType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_LineNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_LineNo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x435ca7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_LineNo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_LinePos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_LinePos)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x435cb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_LinePos",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.get_BaseUriStr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::get_BaseUriStr)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4359bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_BaseUriStr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.OnUnexpectedError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)()>(&::System::Xml::DtdParser::OnUnexpectedError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x435a7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "OnUnexpectedError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x435c5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x435de24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x435e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::StringW, ::StringW, int32_t, int32_t)>(&::System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x435cbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowInvalidChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, int32_t)>(&::System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43595e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowInvalidChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x435e308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW)>(&::System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x435ca74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&::System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x435e008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.ParseUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::DtdParser::*)(int32_t)>(&::System::Xml::DtdParser::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x435e3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DtdParser.StripSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::DtdParser::StripSpaces)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x4362674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IDtdParserAdapter*& System::Xml::DtdParser::__cordl_internal_get_readerAdapter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAdapter;
}
constexpr ::System::Xml::IDtdParserAdapter* const& System::Xml::DtdParser::__cordl_internal_get_readerAdapter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAdapter;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_readerAdapter(::System::Xml::IDtdParserAdapter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerAdapter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::IDtdParserAdapterWithValidation*& System::Xml::DtdParser::__cordl_internal_get_readerAdapterWithValidation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAdapterWithValidation;
}
constexpr ::System::Xml::IDtdParserAdapterWithValidation* const& System::Xml::DtdParser::__cordl_internal_get_readerAdapterWithValidation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerAdapterWithValidation;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_readerAdapterWithValidation(::System::Xml::IDtdParserAdapterWithValidation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerAdapterWithValidation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::DtdParser::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::DtdParser::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::DtdParser::__cordl_internal_get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::DtdParser::__cordl_internal_get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlCharType& System::Xml::DtdParser::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::DtdParser::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::StringW& System::Xml::DtdParser::__cordl_internal_get_systemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr ::StringW const& System::Xml::DtdParser::__cordl_internal_get_systemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemId;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_systemId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___systemId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::DtdParser::__cordl_internal_get_publicId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr ::StringW const& System::Xml::DtdParser::__cordl_internal_get_publicId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicId;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_publicId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_normalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_normalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_normalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalize = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_validate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_validate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_validate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validate = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_supportNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportNamespaces;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_supportNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportNamespaces;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_supportNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportNamespaces = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_v1Compat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v1Compat;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_v1Compat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v1Compat;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_v1Compat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v1Compat = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::DtdParser::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::DtdParser::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_charsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsUsed;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_charsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsUsed;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_charsUsed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charsUsed = value;
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_curPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPos;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_curPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPos;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_curPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curPos = value;
}
constexpr ::System::Xml::DtdParser_ScanningFunction& System::Xml::DtdParser::__cordl_internal_get_scanningFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scanningFunction;
}
constexpr ::System::Xml::DtdParser_ScanningFunction const& System::Xml::DtdParser::__cordl_internal_get_scanningFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scanningFunction;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_scanningFunction(::System::Xml::DtdParser_ScanningFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scanningFunction = value;
}
constexpr ::System::Xml::DtdParser_ScanningFunction& System::Xml::DtdParser::__cordl_internal_get_nextScaningFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScaningFunction;
}
constexpr ::System::Xml::DtdParser_ScanningFunction const& System::Xml::DtdParser::__cordl_internal_get_nextScaningFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScaningFunction;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_nextScaningFunction(::System::Xml::DtdParser_ScanningFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextScaningFunction = value;
}
constexpr ::System::Xml::DtdParser_ScanningFunction& System::Xml::DtdParser::__cordl_internal_get_savedScanningFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedScanningFunction;
}
constexpr ::System::Xml::DtdParser_ScanningFunction const& System::Xml::DtdParser::__cordl_internal_get_savedScanningFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedScanningFunction;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_savedScanningFunction(::System::Xml::DtdParser_ScanningFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___savedScanningFunction = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_whitespaceSeen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceSeen;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_whitespaceSeen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceSeen;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_whitespaceSeen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___whitespaceSeen = value;
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_tokenStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenStartPos;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_tokenStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenStartPos;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_tokenStartPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokenStartPos = value;
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_colonPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colonPos;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_colonPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colonPos;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_colonPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colonPos = value;
}
constexpr ::System::Text::StringBuilder*& System::Xml::DtdParser::__cordl_internal_get_internalSubsetValueSb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSubsetValueSb;
}
constexpr ::System::Text::StringBuilder* const& System::Xml::DtdParser::__cordl_internal_get_internalSubsetValueSb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSubsetValueSb;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_internalSubsetValueSb(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalSubsetValueSb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_externalEntitiesDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalEntitiesDepth;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_externalEntitiesDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalEntitiesDepth;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_externalEntitiesDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalEntitiesDepth = value;
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_currentEntityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntityId;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_currentEntityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntityId;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_currentEntityId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentEntityId = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_freeFloatingDtd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeFloatingDtd;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_freeFloatingDtd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeFloatingDtd;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_freeFloatingDtd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___freeFloatingDtd = value;
}
constexpr bool& System::Xml::DtdParser::__cordl_internal_get_hasFreeFloatingInternalSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFreeFloatingInternalSubset;
}
constexpr bool const& System::Xml::DtdParser::__cordl_internal_get_hasFreeFloatingInternalSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFreeFloatingInternalSubset;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_hasFreeFloatingInternalSubset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasFreeFloatingInternalSubset = value;
}
constexpr ::System::Text::StringBuilder*& System::Xml::DtdParser::__cordl_internal_get_stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& System::Xml::DtdParser::__cordl_internal_get_stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::DtdParser::__cordl_internal_get_condSectionDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condSectionDepth;
}
constexpr int32_t const& System::Xml::DtdParser::__cordl_internal_get_condSectionDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condSectionDepth;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_condSectionDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___condSectionDepth = value;
}
constexpr ::System::Xml::LineInfo& System::Xml::DtdParser::__cordl_internal_get_literalLineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___literalLineInfo;
}
constexpr ::System::Xml::LineInfo const& System::Xml::DtdParser::__cordl_internal_get_literalLineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___literalLineInfo;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_literalLineInfo(::System::Xml::LineInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___literalLineInfo = value;
}
constexpr char16_t& System::Xml::DtdParser::__cordl_internal_get_literalQuoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___literalQuoteChar;
}
constexpr char16_t const& System::Xml::DtdParser::__cordl_internal_get_literalQuoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___literalQuoteChar;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_literalQuoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___literalQuoteChar = value;
}
constexpr ::StringW& System::Xml::DtdParser::__cordl_internal_get_documentBaseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentBaseUri;
}
constexpr ::StringW const& System::Xml::DtdParser::__cordl_internal_get_documentBaseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentBaseUri;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_documentBaseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___documentBaseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::DtdParser::__cordl_internal_get_externalDtdBaseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalDtdBaseUri;
}
constexpr ::StringW const& System::Xml::DtdParser::__cordl_internal_get_externalDtdBaseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalDtdBaseUri;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_externalDtdBaseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___externalDtdBaseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>*& System::Xml::DtdParser::__cordl_internal_get_undeclaredNotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredNotations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* const& System::Xml::DtdParser::__cordl_internal_get_undeclaredNotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredNotations;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_undeclaredNotations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___undeclaredNotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Xml::DtdParser::__cordl_internal_get_condSectionEntityIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condSectionEntityIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Xml::DtdParser::__cordl_internal_get_condSectionEntityIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condSectionEntityIds;
}
constexpr void System::Xml::DtdParser::__cordl_internal_set_condSectionEntityIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___condSectionEntityIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::DtdParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::IDtdParser* System::Xml::DtdParser::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdParser*, false>(nullptr, ___internal_method);
}
inline void System::Xml::DtdParser::Initialize(::System::Xml::IDtdParserAdapter* readerAdapter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readerAdapter);
}
inline void System::Xml::DtdParser::InitializeFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset,
                                                              ::System::Xml::IDtdParserAdapter* adapter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "InitializeFreeFloatingDtd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
inline ::System::Xml::IDtdInfo* System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "System.Xml.IDtdParser.ParseInternalDtd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method, adapter, saveInternalSubset);
}
inline ::System::Xml::IDtdInfo* System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId,
                                                                                                   ::StringW internalSubset, ::System::Xml::IDtdParserAdapter* adapter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "System.Xml.IDtdParser.ParseFreeFloatingDtd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
inline bool System::Xml::DtdParser::get_ParsingInternalSubset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_ParsingInternalSubset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_IgnoreEntityReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_IgnoreEntityReferences",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_SaveInternalSubsetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_SaveInternalSubsetValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_ParsingTopLevelMarkup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_ParsingTopLevelMarkup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_SupportNamespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_SupportNamespaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::get_Normalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_Normalize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::Parse(bool saveInternalSubset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveInternalSubset);
}
inline void System::Xml::DtdParser::ParseInDocumentDtd(bool saveInternalSubset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseInDocumentDtd", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveInternalSubset);
}
inline void System::Xml::DtdParser::ParseFreeFloatingDtd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseFreeFloatingDtd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseInternalSubset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseInternalSubset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseExternalSubset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseExternalSubset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseSubset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseSubset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseAttlistDecl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistDecl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseAttlistType(::System::Xml::Schema::SchemaAttDef* attrDef, ::System::Xml::Schema::SchemaElementDecl* elementDecl, bool ignoreErrors) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaElementDecl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrDef, elementDecl, ignoreErrors);
}
inline void System::Xml::DtdParser::ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef* attrDef, bool ignoreErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseAttlistDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrDef, ignoreErrors);
}
inline void System::Xml::DtdParser::ParseElementDecl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementDecl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementOnlyContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pcv, startParenEntityId);
}
inline void System::Xml::DtdParser::ParseHowMany(::System::Xml::Schema::ParticleContentValidator* pcv) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseHowMany", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pcv);
}
inline void System::Xml::DtdParser::ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseElementMixedContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pcv, startParenEntityId);
}
inline void System::Xml::DtdParser::ParseEntityDecl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseEntityDecl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseNotationDecl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseNotationDecl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::AddUndeclaredNotation(::StringW notationName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "AddUndeclaredNotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notationName);
}
inline void System::Xml::DtdParser::ParseComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParsePI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParsePI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseCondSection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseCondSection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ParseExternalId(::System::Xml::DtdParser_Token idTokenType, ::System::Xml::DtdParser_Token declType, ::ByRef<::StringW> publicId, ::ByRef<::StringW> systemId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseExternalId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idTokenType, declType, publicId, systemId);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::GetToken(bool needWhiteSpace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetToken", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method, needWhiteSpace);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanSubsetContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanSubsetContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanNameExpected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNameExpected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanQNameExpected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQNameExpected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanNmtokenExpected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNmtokenExpected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanDoctype1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanDoctype1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanDoctype2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanDoctype2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanClosingTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanClosingTag",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement5",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement6",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanElement7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanElement7",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist5",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist6",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanAttlist7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanAttlist7",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanLiteral(::System::Xml::DtdParser_LiteralType literalType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanLiteral", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_LiteralType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method, literalType);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::DtdParser::ScanEntityName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntityName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanNotation1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNotation1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanSystemId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanSystemId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanEntity1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanEntity2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanEntity3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanEntity3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanPublicId1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanPublicId1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanPublicId2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanPublicId2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanCondSection1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanCondSection2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline ::System::Xml::DtdParser_Token System::Xml::DtdParser::ScanCondSection3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanCondSection3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::DtdParser_Token, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanQName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanQName(bool isQName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanQName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isQName);
}
inline bool System::Xml::DtdParser::ReadDataInName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ReadDataInName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::ScanNmtoken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ScanNmtoken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::EatPublicKeyword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "EatPublicKeyword",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::DtdParser::EatSystemKeyword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "EatSystemKeyword",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::DtdParser::GetNameQualified(bool canHavePrefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNameQualified", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, canHavePrefix);
}
inline ::StringW System::Xml::DtdParser::GetNameString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNameString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetNmtokenString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetNmtokenString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::GetValueWithStrippedSpaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "GetValueWithStrippedSpaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::DtdParser::ReadData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ReadData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::LoadParsingBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "LoadParsingBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::SaveParsingBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SaveParsingBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::SaveParsingBuffer(int32_t internalSubsetValueEndPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SaveParsingBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, internalSubsetValueEndPos);
}
inline bool System::Xml::DtdParser::HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, paramEntity, inLiteral, inAttribute);
}
inline bool System::Xml::DtdParser::HandleEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool inLiteral, bool inAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entityName, paramEntity, inLiteral, inAttribute);
}
inline bool System::Xml::DtdParser::HandleEntityEnd(bool inLiteral) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "HandleEntityEnd", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inLiteral);
}
inline ::System::Xml::Schema::SchemaEntity* System::Xml::DtdParser::VerifyEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "VerifyEntityReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaEntity*, false>(this, ___internal_method, entityName, paramEntity, mustBeDeclared, inAttribute);
}
inline void System::Xml::DtdParser::SendValidationEvent(int32_t pos, ::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, severity, code, arg);
}
inline void System::Xml::DtdParser::SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, severity, code, arg);
}
inline void System::Xml::DtdParser::SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, severity, e);
}
inline bool System::Xml::DtdParser::IsAttributeValueType(::System::Xml::DtdParser_Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "IsAttributeValueType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::DtdParser_Token>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
inline int32_t System::Xml::DtdParser::get_LineNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_LineNo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::DtdParser::get_LinePos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_LinePos",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::DtdParser::get_BaseUriStr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "get_BaseUriStr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::OnUnexpectedError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "OnUnexpectedError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curPos, res);
}
inline void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curPos, res, arg);
}
inline void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curPos, res, args);
}
inline void System::Xml::DtdParser::Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, arg, lineNo, linePos);
}
inline void System::Xml::DtdParser::ThrowInvalidChar(int32_t pos, ::StringW data, int32_t invCharPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, data, invCharPos);
}
inline void System::Xml::DtdParser::ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length, invCharPos);
}
inline void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, expectedToken);
}
inline void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, expectedToken1, expectedToken2);
}
inline ::StringW System::Xml::DtdParser::ParseUnexpectedToken(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "ParseUnexpectedToken",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, startPos);
}
inline ::StringW System::Xml::DtdParser::StripSpaces(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DtdParser*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::System::Xml::DtdParser* System::Xml::DtdParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::DtdParser*>());
}
/// @brief Convert operator to "::System::Xml::IDtdParser"
constexpr System::Xml::DtdParser::operator ::System::Xml::IDtdParser*() noexcept {
  return static_cast<::System::Xml::IDtdParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParser"
constexpr ::System::Xml::IDtdParser* System::Xml::DtdParser::i___System__Xml__IDtdParser() noexcept {
  return static_cast<::System::Xml::IDtdParser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::DtdParser::DtdParser() {}
