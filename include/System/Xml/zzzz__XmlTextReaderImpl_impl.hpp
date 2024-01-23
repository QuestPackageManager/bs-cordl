#pragma once
#include "System/Xml/zzzz__DtdProcessing_impl.hpp"
#include "System/Xml/zzzz__EntityHandling_impl.hpp"
#include "System/Xml/zzzz__LineInfo_impl.hpp"
#include "System/Xml/zzzz__ReadState_impl.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterV1_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction::__XmlTextReaderImpl__ParsingFunction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction::__XmlTextReaderImpl__ParsingFunction() {}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::ElementContent{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::NoData{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::OpenUrl{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::SwitchToInteractive{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::SwitchToInteractiveXmlDecl{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::DocumentContent{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::MoveToElementContent{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::PopElementContext{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::PopEmptyElementContext{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::ResetAttributesRootLevel{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::Error{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::Eof{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::ReaderClosed{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::EntityReference{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::InIncrementalRead{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::FragmentAttribute{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::ReportEndEntity{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::AfterResolveEntityInContent{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::AfterResolveEmptyEntityInContent{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::XmlDeclarationFragment{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::GoToEof{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::PartialTextValue{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::InReadAttributeValue{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::InReadValueChunk{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::InReadContentAsBinary{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction System::Xml::__XmlTextReaderImpl__ParsingFunction::InReadElementContentAsBinary{ static_cast<int32_t>(0x19) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode::__XmlTextReaderImpl__ParsingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode::__XmlTextReaderImpl__ParsingMode() {}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode System::Xml::__XmlTextReaderImpl__ParsingMode::Full{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode System::Xml::__XmlTextReaderImpl__ParsingMode::SkipNode{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode System::Xml::__XmlTextReaderImpl__ParsingMode::SkipContent{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType::__XmlTextReaderImpl__EntityType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType::__XmlTextReaderImpl__EntityType() {}
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::CharacterDec{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::CharacterHex{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::CharacterNamed{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::Expanded{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::Skipped{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::FakeExpanded{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::Unexpanded{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::__XmlTextReaderImpl__EntityType::ExpandedInAttribute{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__EntityExpandType::__XmlTextReaderImpl__EntityExpandType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__EntityExpandType::__XmlTextReaderImpl__EntityExpandType() {}
constexpr ::System::Xml::__XmlTextReaderImpl__EntityExpandType System::Xml::__XmlTextReaderImpl__EntityExpandType::All{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityExpandType System::Xml::__XmlTextReaderImpl__EntityExpandType::OnlyGeneral{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__EntityExpandType System::Xml::__XmlTextReaderImpl__EntityExpandType::OnlyCharacter{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState::__XmlTextReaderImpl__IncrementalReadState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState::__XmlTextReaderImpl__IncrementalReadState() {}
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::Text{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::StartTag{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::PI{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::CDATA{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::Comment{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::Attributes{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::AttributeValue{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadData{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::EndElement{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::End{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadValueChunk_OnCachedValue{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadValueChunk_OnPartialValue{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_OnCachedValue{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_OnPartialValue{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState System::Xml::__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_End{ static_cast<int32_t>(0xe) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType::__XmlTextReaderImpl__InitInputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType::__XmlTextReaderImpl__InitInputType() {}
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType System::Xml::__XmlTextReaderImpl__InitInputType::UriString{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType System::Xml::__XmlTextReaderImpl__InitInputType::Stream{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType System::Xml::__XmlTextReaderImpl__InitInputType::TextReader{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType System::Xml::__XmlTextReaderImpl__InitInputType::Invalid{ static_cast<int32_t>(0x3) };
constexpr bool& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_useAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr bool const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_useAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAsync;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_useAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAsync = value;
}
constexpr ::System::IO::Stream*& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStream;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputBytes;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputByteCount;
}
constexpr int32_t const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputByteCount;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputByteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputByteCount = value;
}
constexpr ::System::Uri*& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputbaseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputbaseUri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputbaseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputbaseUri;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputbaseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputbaseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputUriStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputUriStr;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputUriStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputUriStr;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputUriStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputUriStr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlResolver*& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputUriResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputUriResolver;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputUriResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputUriResolver;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputUriResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputUriResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlParserContext*& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputContext;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputContext(::System::Xml::XmlParserContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::TextReader*& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputTextReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTextReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_inputTextReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTextReader;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_inputTextReader(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputTextReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_initType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initType;
}
constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType const& System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_get_initType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initType;
}
constexpr void System::Xml::__XmlTextReaderImpl__LaterInitParam::__cordl_internal_set_initType(::System::Xml::__XmlTextReaderImpl__InitInputType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initType = value;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__LaterInitParam::__XmlTextReaderImpl__LaterInitParam() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__ParsingState.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__ParsingState::*)()>(
    &::System::Xml::__XmlTextReaderImpl__ParsingState::Clear)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28741e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__ParsingState.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__ParsingState::*)(bool)>(
    &::System::Xml::__XmlTextReaderImpl__ParsingState::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2874264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(), "Close",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__ParsingState.get_LineNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__ParsingState::*)()>(
    &::System::Xml::__XmlTextReaderImpl__ParsingState::get_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287429c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(),
                                                                               "get_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__ParsingState.get_LinePos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__ParsingState::*)()>(
    &::System::Xml::__XmlTextReaderImpl__ParsingState::get_LinePos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28742a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(),
                                                                               "get_LinePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::__XmlTextReaderImpl__ParsingState::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__ParsingState::Close(bool closeInput) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(), "Close",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, closeInput);
}
inline int32_t System::Xml::__XmlTextReaderImpl__ParsingState::get_LineNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(),
                                                                             "get_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__ParsingState::get_LinePos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__ParsingState>::get(),
                                                                             "get_LinePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "charPos", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "appendMode", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "decoder", ty: "::System::Text::Decoder*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bytePos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "textReader", ty: "::System::IO::TextReader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "baseUri", ty: "::System::Uri*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isEof", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "entity", ty: "::System::Xml::IDtdEntityInfo*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "entityResolvedManually", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState::__XmlTextReaderImpl__ParsingState(
    ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charPos, int32_t charsUsed, ::System::Text::Encoding* encoding, bool appendMode, ::System::IO::Stream* stream,
    ::System::Text::Decoder* decoder, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t bytePos, int32_t bytesUsed, ::System::IO::TextReader* textReader, int32_t lineNo, int32_t lineStartPos,
    ::StringW baseUriStr, ::System::Uri* baseUri, bool isEof, bool isStreamEof, ::System::Xml::IDtdEntityInfo* entity, int32_t entityId, bool eolNormalized, bool entityResolvedManually) noexcept {
  this->chars = chars;
  this->charPos = charPos;
  this->charsUsed = charsUsed;
  this->encoding = encoding;
  this->appendMode = appendMode;
  this->stream = stream;
  this->decoder = decoder;
  this->bytes = bytes;
  this->bytePos = bytePos;
  this->bytesUsed = bytesUsed;
  this->textReader = textReader;
  this->lineNo = lineNo;
  this->lineStartPos = lineStartPos;
  this->baseUriStr = baseUriStr;
  this->baseUri = baseUri;
  this->isEof = isEof;
  this->isStreamEof = isStreamEof;
  this->entity = entity;
  this->entityId = entityId;
  this->eolNormalized = eolNormalized;
  this->entityResolvedManually = entityResolvedManually;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState::__XmlTextReaderImpl__ParsingState() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__XmlContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__XmlContext::*)()>(&::System::Xml::__XmlTextReaderImpl__XmlContext::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28742b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__XmlContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__XmlContext::*)(::System::Xml::__XmlTextReaderImpl__XmlContext*)>(
    &::System::Xml::__XmlTextReaderImpl__XmlContext::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2874318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlSpace& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_xmlSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpace;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_xmlSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpace;
}
constexpr void System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_set_xmlSpace(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlSpace = value;
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_xmlLang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlLang;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_xmlLang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlLang;
}
constexpr void System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_set_xmlLang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlLang)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_defaultNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultNamespace;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_defaultNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultNamespace;
}
constexpr void System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_set_defaultNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_previousContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_get_previousContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousContext;
}
constexpr void System::Xml::__XmlTextReaderImpl__XmlContext::__cordl_internal_set_previousContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::__XmlTextReaderImpl__XmlContext* System::Xml::__XmlTextReaderImpl__XmlContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__XmlContext*>());
}
inline void System::Xml::__XmlTextReaderImpl__XmlContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::__XmlTextReaderImpl__XmlContext* System::Xml::__XmlTextReaderImpl__XmlContext::New_ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__XmlContext*>(previousContext));
}
inline void System::Xml::__XmlTextReaderImpl__XmlContext::_ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__XmlContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousContext);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext::__XmlTextReaderImpl__XmlContext() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2874358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.get_DefaultNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::get_DefaultNamespace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2874360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.PushScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::PushScope)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28743a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.PopScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::PopScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28743ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28743b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.RemoveNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::RemoveNamespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28743b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28743bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28743c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287440c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 15));
    return ___internal_method;
  }
};
inline ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager* System::Xml::__XmlTextReaderImpl__NoNamespaceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>());
}
inline void System::Xml::__XmlTextReaderImpl__NoNamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NoNamespaceManager::get_DefaultNamespace() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NoNamespaceManager::PushScope() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__NoNamespaceManager::PopScope() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NoNamespaceManager::AddNamespace(::StringW prefix, ::StringW uri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri);
}
inline void System::Xml::__XmlTextReaderImpl__NoNamespaceManager::RemoveNamespace(::StringW prefix, ::StringW uri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri);
}
inline ::System::Collections::IEnumerator* System::Xml::__XmlTextReaderImpl__NoNamespaceManager::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NoNamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NoNamespaceManager::LookupPrefix(::StringW uri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager::__XmlTextReaderImpl__NoNamespaceManager() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Xml::XmlTextReaderImpl*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2874414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextReaderImpl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287443c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_NameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_NamespaceResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IXmlNamespaceResolver* (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_NamespaceResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_BaseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_BaseUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_IsEof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_IsEof", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_ParsingBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28744ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_ParsingBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_ParsingBufferLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28744c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_ParsingBufferLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_CurrentPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28744e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_CurrentPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_set_CurrentPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(int32_t)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                                               "System.Xml.IDtdParserAdapter.set_CurrentPosition", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_EntityStackLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287451c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_EntityStackLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(int32_t)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.OnNewLine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_LineNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_LineStartPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287458c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.get_LineStartPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28745a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.ReadData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseNumericCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28745c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParseNumericCharRef",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseNamedCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(bool, ::System::Text::StringBuilder*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28745e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParsePI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParsePI",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287461c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParseComment",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Xml::IDtdEntityInfo*, ByRef<int32_t>)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.PushEntity", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PopEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(ByRef<::System::Xml::IDtdEntityInfo*>, ByRef<int32_t>)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.PopEntity", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::IDtdEntityInfo*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushExternalSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.PushExternalSubset",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushInternalDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287468c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.PushInternalDtd",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(::System::Exception*)>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_Throw)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28746a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.Throw",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnSystemId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(
    ::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(&::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28746c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.OnSystemId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnPublicId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)(
    ::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(&::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28746e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapter.OnPublicId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28746fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IValidationEventHandling* (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                    "System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_Normalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapterV1.get_Normalization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_Namespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapterV1.get_Namespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__DtdParserProxy::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x287476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                 "System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IDtdParserAdapterV1"
constexpr System::Xml::__XmlTextReaderImpl__DtdParserProxy::operator ::System::Xml::IDtdParserAdapterV1*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterV1*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapterV1"
constexpr ::System::Xml::IDtdParserAdapterV1* System::Xml::__XmlTextReaderImpl__DtdParserProxy::i___System__Xml__IDtdParserAdapterV1() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterV1*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr System::Xml::__XmlTextReaderImpl__DtdParserProxy::operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr ::System::Xml::IDtdParserAdapterWithValidation* System::Xml::__XmlTextReaderImpl__DtdParserProxy::i___System__Xml__IDtdParserAdapterWithValidation() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
constexpr System::Xml::__XmlTextReaderImpl__DtdParserProxy::operator ::System::Xml::IDtdParserAdapter*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapter"
constexpr ::System::Xml::IDtdParserAdapter* System::Xml::__XmlTextReaderImpl__DtdParserProxy::i___System__Xml__IDtdParserAdapter() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlTextReaderImpl*& System::Xml::__XmlTextReaderImpl__DtdParserProxy::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& System::Xml::__XmlTextReaderImpl__DtdParserProxy::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::__XmlTextReaderImpl__DtdParserProxy::__cordl_internal_set_reader(::System::Xml::XmlTextReaderImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::__XmlTextReaderImpl__DtdParserProxy* System::Xml::__XmlTextReaderImpl__DtdParserProxy::New_ctor(::System::Xml::XmlTextReaderImpl* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>(reader));
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::_ctor(::System::Xml::XmlTextReaderImpl* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextReaderImpl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlNameTable* System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_NameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::System::Xml::IXmlNamespaceResolver* System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_NamespaceResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlNamespaceResolver*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_BaseUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_IsEof", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_ParsingBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_ParsingBufferLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_CurrentPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                                                             "System.Xml.IDtdParserAdapter.set_CurrentPosition", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_EntityStackLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.OnNewLine",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.get_LineStartPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.ReadData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParseNumericCharRef",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, internalSubsetBuilder);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, expand, internalSubsetBuilder);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParsePI",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.ParseComment",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.PushEntity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entity, entityId);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.PopEntity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::IDtdEntityInfo*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, oldEntity, newEntityId);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.PushExternalSubset",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, systemId, publicId);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.PushInternalDtd",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, internalDtd);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_Throw(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(), "System.Xml.IDtdParserAdapter.Throw",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo,
                                                                                                      ::System::Xml::LineInfo systemLiteralLineInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.OnSystemId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, systemId, keywordLineInfo, systemLiteralLineInfo);
}
inline void System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo,
                                                                                                      ::System::Xml::LineInfo publicLiteralLineInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapter.OnPublicId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicId, keywordLineInfo, publicLiteralLineInfo);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::IValidationEventHandling* System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                  "System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IValidationEventHandling*, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapterV1.get_Normalization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapterV1.get_Namespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdParserProxy*>::get(),
                                               "System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__DtdParserProxy::__XmlTextReaderImpl__DtdParserProxy() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_None
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (*)()>(&::System::Xml::__XmlTextReaderImpl__NodeData::get_None)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2874788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "get_None",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(&::System::Xml::__XmlTextReaderImpl__NodeData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2874828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_LineNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28748dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_LinePos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_LinePos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28748e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_LinePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28748ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.set_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(bool)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::set_IsEmptyElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2874910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "set_IsEmptyElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x287491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_IsDefaultAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.set_IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(bool)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::set_IsDefaultAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2874940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "set_IsDefaultAttribute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_ValueBuffered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_ValueBuffered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x287494c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_ValueBuffered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.get_StringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::get_StringValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x287495c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.TrimSpacesInValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::TrimSpacesInValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2874988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "TrimSpacesInValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::Clear)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2874850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.ClearName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(&::System::Xml::__XmlTextReaderImpl__NodeData::ClearName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28749c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "ClearName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(int32_t, int32_t)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetLineInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2874a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetLineInfo2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(int32_t, int32_t)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetLineInfo2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2874a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetLineInfo2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetValueNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNodeType, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetValueNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2874a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValueNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetValueNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(
    ::System::Xml::XmlNodeType, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::__XmlTextReaderImpl__NodeData::SetValueNode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2874aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValueNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetNamedNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNodeType, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetNamedNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2874b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetNamedNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetNamedNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNodeType, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetNamedNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2874bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetNamedNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::StringW)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2874c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2874c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.OnBufferInvalidated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)()>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::OnBufferInvalidated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2874c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                               "OnBufferInvalidated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__NodeData::*)(int32_t, ::System::Text::StringBuilder*)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::CopyTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2874ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.GetNameWPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::GetNameWPrefix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2874d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "GetNameWPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.CreateNameWPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::CreateNameWPrefix)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2874d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "CreateNameWPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__NodeData.System_IComparable_CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__NodeData::*)(::System::Object*)>(
    &::System::Xml::__XmlTextReaderImpl__NodeData::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2874dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "System.IComparable.CompareTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable"
constexpr System::Xml::__XmlTextReaderImpl__NodeData::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Xml::__XmlTextReaderImpl__NodeData::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlNodeType& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_type(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_nameWPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameWPrefix;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_nameWPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameWPrefix;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_nameWPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameWPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_valueStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueStartPos;
}
constexpr int32_t const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_valueStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueStartPos;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_valueStartPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueStartPos = value;
}
constexpr int32_t& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_valueLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLength;
}
constexpr int32_t const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_valueLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLength;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_valueLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLength = value;
}
constexpr ::System::Xml::LineInfo& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::System::Xml::LineInfo const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_lineInfo(::System::Xml::LineInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineInfo = value;
}
constexpr ::System::Xml::LineInfo& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_lineInfo2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo2;
}
constexpr ::System::Xml::LineInfo const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_lineInfo2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo2;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_lineInfo2(::System::Xml::LineInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineInfo2 = value;
}
constexpr char16_t& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr char16_t const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quoteChar = value;
}
constexpr int32_t& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr bool& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_isEmptyOrDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptyOrDefault;
}
constexpr bool const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_isEmptyOrDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptyOrDefault;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_isEmptyOrDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEmptyOrDefault = value;
}
constexpr int32_t& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_entityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityId;
}
constexpr int32_t const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_entityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityId;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_entityId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entityId = value;
}
constexpr bool& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_xmlContextPushed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlContextPushed;
}
constexpr bool const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_xmlContextPushed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlContextPushed;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_xmlContextPushed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlContextPushed = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_nextAttrValueChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAttrValueChunk;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_nextAttrValueChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAttrValueChunk;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_nextAttrValueChunk(::System::Xml::__XmlTextReaderImpl__NodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextAttrValueChunk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_schemaType(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_typedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_get_typedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr void System::Xml::__XmlTextReaderImpl__NodeData::__cordl_internal_set_typedValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::setStaticF_s_None(::System::Xml::__XmlTextReaderImpl__NodeData* value) {
  ::cordl_internals::setStaticField<::System::Xml::__XmlTextReaderImpl__NodeData*, "s_None",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get>(
      std::forward<::System::Xml::__XmlTextReaderImpl__NodeData*>(value));
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::__XmlTextReaderImpl__NodeData::getStaticF_s_None() {
  return ::cordl_internals::getStaticField<::System::Xml::__XmlTextReaderImpl__NodeData*, "s_None",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get>();
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::__XmlTextReaderImpl__NodeData::get_None() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "get_None",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::__XmlTextReaderImpl__NodeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__NodeData*>());
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__NodeData::get_LineNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "get_LineNo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__NodeData::get_LinePos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "get_LinePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::__XmlTextReaderImpl__NodeData::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::set_IsEmptyElement(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "set_IsEmptyElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::__XmlTextReaderImpl__NodeData::get_IsDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "get_IsDefaultAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::set_IsDefaultAttribute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "set_IsDefaultAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::__XmlTextReaderImpl__NodeData::get_ValueBuffered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "get_ValueBuffered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NodeData::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::TrimSpacesInValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "TrimSpacesInValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::Clear(::System::Xml::XmlNodeType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::ClearName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "ClearName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetLineInfo(int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetLineInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNo, linePos);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetLineInfo2(int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetLineInfo2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNo, linePos);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetValueNode(::System::Xml::XmlNodeType type, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValueNode", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetValueNode(::System::Xml::XmlNodeType type, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValueNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, chars, startPos, len);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetNamedNode", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, localName);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetNamedNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, localName, prefix, nameWPrefix);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::SetValue(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, startPos, len);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::OnBufferInvalidated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                             "OnBufferInvalidated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::__XmlTextReaderImpl__NodeData::CopyTo(int32_t valueOffset, ::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueOffset, sb);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NodeData::GetNameWPrefix(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "GetNameWPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, nt);
}
inline ::StringW System::Xml::__XmlTextReaderImpl__NodeData::CreateNameWPrefix(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "CreateNameWPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, nt);
}
inline int32_t System::Xml::__XmlTextReaderImpl__NodeData::System_IComparable_CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(), "System.IComparable.CompareTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__NodeData::__XmlTextReaderImpl__NodeData() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IComparer_1<::System::Object*>* (*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2874e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(),
                                                 "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::*)(
    ::System::Object*, ::System::Object*)>(&::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::Compare)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2874ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(),
                                                 "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::*)()>(
    &::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2875238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Object*>"
constexpr System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::operator ::System::Collections::Generic::IComparer_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Object*>*
System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::i___System__Collections__Generic__IComparer_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
inline void System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::setStaticF_s_instance(::System::Collections::Generic::IComparer_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::System::Object*>*, "s_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get>(
      std::forward<::System::Collections::Generic::IComparer_1<::System::Object*>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::System::Object*>* System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::getStaticF_s_instance() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::System::Object*>*, "s_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get>();
}
inline ::System::Collections::Generic::IComparer_1<::System::Object*>* System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(),
                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<::System::Object*>*, false>(nullptr, ___internal_method);
}
inline int32_t System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(), "Compare",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer* System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>());
}
inline void System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer() {}
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::*)(::System::Object*, void*)>(
    &::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28752a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::*)(
    ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*)>(&::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28753d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>(object, method));
}
inline void System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::Invoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultAttribute, coreReader);
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate() {}
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2861aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::IO::TextReader*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2861e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::IO::TextReader*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2861e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*)>(
    &::System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2861f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Xml::XmlParserContext*)>(
    &::System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2862324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishInitUriString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishInitUriString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x286245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitUriString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishInitStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishInitStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2862a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishInitTextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishInitTextReader)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2862aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitTextReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_Settings)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2862b04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862c5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_Name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2862c78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_Value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2862cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2862f04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_IsDefault)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2862f28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_ReadState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2862f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2862f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2862f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::MoveToAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2862f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2863280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28632f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::MoveToElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x286337c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishInit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2863404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::Read)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x286344c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28655cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::LookupNamespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2865690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x28656c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ResolveEntity)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2865da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_OuterReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlTextReaderImpl::set_OuterReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28664a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_OuterReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(
    &::System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28664a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(
    &::System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28664b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28664dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "LookupPrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_Namespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(bool)>(&::System::Xml::XmlTextReaderImpl::set_Namespaces)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2866500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_Namespaces",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_EntityHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::EntityHandling)>(
    &::System::Xml::XmlTextReaderImpl::set_EntityHandling)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28666d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_EntityHandling", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::XmlTextReaderImpl::set_XmlResolver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2866758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28667b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_DtdParserProxy_NameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_NamespaceResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IXmlNamespaceResolver* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28667bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_NamespaceResolver",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_DtdValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_DtdValidation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28667c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_DtdValidation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_Normalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Normalization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28667e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_Normalization",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_Namespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Namespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28667ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_DtdParserProxy_Namespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_V1CompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28667f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_V1CompatibilityMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_BaseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_BaseUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28667fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_DtdParserProxy_BaseUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_IsEof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_DtdParserProxy_IsEof", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ParsingBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_ParsingBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ParsingBufferLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_ParsingBufferLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_CurrentPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_CurrentPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_DtdParserProxy_CurrentPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(
    &::System::Xml::XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_DtdParserProxy_CurrentPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_EntityStackLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28668c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_EntityStackLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_IsEntityEolNormalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_IsEntityEolNormalized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ValidationEventHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IValidationEventHandling* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28668dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_ValidationEventHandling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_OnNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::DtdParserProxy_OnNewLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28668e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnNewLine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_LineNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286690c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_DtdParserProxy_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdParserProxy_LineStartPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2866914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_LineStartPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::DtdParserProxy_ReadData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286691c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "DtdParserProxy_ReadData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseNumericCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2866d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseNumericCharRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseNamedCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(bool, ::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2866e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_ParsePI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_ParsePI)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2866e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParsePI", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseComment)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x286723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseComment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_IsResolverNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_IsResolverNull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28675c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_IsResolverNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetTempResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlResolver* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::GetTempResolver)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2867604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetTempResolver",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_PushEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::IDtdEntityInfo*, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_PushEntity)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x286766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_PopEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(ByRef<::System::Xml::IDtdEntityInfo*>, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_PopEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2867e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PopEntity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::IDtdEntityInfo*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_PushExternalSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_PushExternalSubset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2867ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushExternalSubset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_PushInternalDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_PushInternalDtd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2868608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushInternalDtd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Exception*)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_Throw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2868868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_Throw", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_OnSystemId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_OnSystemId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2868900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnSystemId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DtdParserProxy_OnPublicId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(
    &::System::Xml::XmlTextReaderImpl::DtdParserProxy_OnPublicId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2868a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnPublicId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2868a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2868b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2868bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2868c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, int32_t, int32_t)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2868ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2868aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2868d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2868b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::System::Exception*)>(
    &::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2868dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Exception*)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2868e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Exception*)>(&::System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2868870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ReThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Exception*, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::ReThrow)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2868f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReThrow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28653b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2868fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Exception*)>(&::System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2869040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowInvalidChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28690cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SetErrorState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SetErrorState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2868f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetErrorState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW, int32_t, int32_t)>(&::System::Xml::XmlTextReaderImpl::SendValidationEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2867518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(
    ::System::Xml::Schema::XmlSeverityType, ::System::Xml::Schema::XmlSchemaException*)>(&::System::Xml::XmlTextReaderImpl::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x286913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_InAttributeValueIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_InAttributeValueIterator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28631b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "get_InAttributeValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishAttributeValueIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishAttributeValueIterator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28631dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "FinishAttributeValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdValidation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28667d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdValidation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitStreamInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Uri*, ::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2869328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitStreamInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Uri*, ::StringW, ::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2869388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitStreamInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(
    ::System::Uri*, ::StringW, ::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::Text::Encoding*)>(&::System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2862748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitTextReaderInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::IO::TextReader*)>(
    &::System::Xml::XmlTextReaderImpl::InitTextReaderInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2861f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitTextReaderInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitTextReaderInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Uri*, ::System::IO::TextReader*)>(
    &::System::Xml::XmlTextReaderImpl::InitTextReaderInput)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x286970c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitTextReaderInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitStringInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::System::Text::Encoding*, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::InitStringInput)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x286206c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStringInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InitFragmentReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*, bool)>(
    &::System::Xml::XmlTextReaderImpl::InitFragmentReader)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2862138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitFragmentReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ProcessDtdFromParserContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlParserContext*)>(
    &::System::Xml::XmlTextReaderImpl::ProcessDtdFromParserContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28629b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ProcessDtdFromParserContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OpenUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::OpenUrl)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2864020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenUrl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OpenUrlDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Object*)>(&::System::Xml::XmlTextReaderImpl::OpenUrlDelegate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28699e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenUrlDelegate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.DetectEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::DetectEncoding)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2869398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DetectEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SetupEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Text::Encoding*)>(
    &::System::Xml::XmlTextReaderImpl::SetupEncoding)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x28695c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetupEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SwitchEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Text::Encoding*)>(
    &::System::Xml::XmlTextReaderImpl::SwitchEncoding)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2869b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SwitchEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.CheckEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(
    &::System::Xml::XmlTextReaderImpl::CheckEncoding)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2869ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "CheckEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.UnDecodeChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::UnDecodeChars)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2869bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "UnDecodeChars",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SwitchEncodingToUTF8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SwitchEncodingToUTF8)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2869fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SwitchEncodingToUTF8",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ReadData)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2866920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReadData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::GetChars)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x286a068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetChars", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.InvalidCharRecovery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::InvalidCharRecovery)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x286a180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InvalidCharRecovery", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(bool)>(&::System::Xml::XmlTextReaderImpl::Close)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28655d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ShiftBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::ShiftBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x286a368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ShiftBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(bool)>(&::System::Xml::XmlTextReaderImpl::ParseXmlDeclaration)> {
  constexpr static std::size_t size = 0xd7c;
  constexpr static std::size_t addrs = 0x28641ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseXmlDeclaration",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseDocumentContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseDocumentContent)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x2863b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDocumentContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseElementContent)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x28637f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseElementContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowUnclosedElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ThrowUnclosedElements)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x286b8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ThrowUnclosedElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseElement)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x286a84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddDefaultAttributesAndNormalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::AddDefaultAttributesAndNormalize)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x286c0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddDefaultAttributesAndNormalize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseEndElement)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x286b508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowTagMismatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::ThrowTagMismatch)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x286d248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowTagMismatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseAttributes)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x286baa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ElementNamespaceLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ElementNamespaceLookup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x286caf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ElementNamespaceLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AttributeNamespaceLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::AttributeNamespaceLookup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x286d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "AttributeNamespaceLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AttributeDuplCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::AttributeDuplCheck)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x286e374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AttributeDuplCheck",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OnDefaultNamespaceDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::OnDefaultNamespaceDecl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x286dfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnDefaultNamespaceDecl", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OnNamespaceDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::OnNamespaceDecl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x286e0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnNamespaceDecl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OnXmlReservedAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::OnXmlReservedAttribute)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x286e188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnXmlReservedAttribute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseAttributeValueSlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, char16_t, ::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::ParseAttributeValueSlow)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x286d668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseAttributeValueSlow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddAttributeChunkToList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(
    ::System::Xml::__XmlTextReaderImpl__NodeData*, ::System::Xml::__XmlTextReaderImpl__NodeData*, ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*>)>(
    &::System::Xml::XmlTextReaderImpl::AddAttributeChunkToList)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x286ea80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttributeChunkToList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseText)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x286af98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::ParseText)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x286ebec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishPartialValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishPartialValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2862d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishPartialValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishOtherValueIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishOtherValueIterator)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2862df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "FinishOtherValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SkipPartialTextValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SkipPartialTextValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x286544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipPartialTextValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x286548c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishReadValueChunk",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishReadContentAsBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishReadContentAsBinary)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28654ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "FinishReadContentAsBinary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishReadElementContentAsBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishReadElementContentAsBinary)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28654fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishReadElementContentAsBinary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseRootLevelWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseRootLevelWhitespace)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x286b30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ParseRootLevelWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseEntityReference)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2864fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEntityReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.HandleEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__EntityType (::System::Xml::XmlTextReaderImpl::*)(
    bool, ::System::Xml::__XmlTextReaderImpl__EntityExpandType, ByRef<int32_t>)>(&::System::Xml::XmlTextReaderImpl::HandleEntityReference)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x286acec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__EntityExpandType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.HandleGeneralEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__EntityType (::System::Xml::XmlTextReaderImpl::*)(::StringW, bool, bool, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::HandleGeneralEntityReference)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x2865ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleGeneralEntityReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_InEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_InEntity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2869fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_InEntity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.HandleEntityEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(bool)>(&::System::Xml::XmlTextReaderImpl::HandleEntityEnd)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2869200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleEntityEnd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SetupEndEntityNodeInContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInContent)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2865050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "SetupEndEntityNodeInContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SetupEndEntityNodeInAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x286f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "SetupEndEntityNodeInAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParsePI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParsePI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParsePI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::ParsePI)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2866ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePI", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParsePIValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::ParsePIValue)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x286f550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePIValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseComment)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x286a540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseCData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseCDataOrComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::XmlTextReaderImpl::ParseCDataOrComment)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x28673c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCDataOrComment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseCDataOrComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::XmlNodeType, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::ParseCDataOrComment)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x286f8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCDataOrComment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseDoctypeDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseDoctypeDecl)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x286a5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDoctypeDecl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseDtd)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x286fd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDtd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SkipDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SkipDtd)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x287003c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipDtd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SkipPublicOrSystemIdLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::SkipPublicOrSystemIdLiteral)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2870394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "SkipPublicOrSystemIdLiteral", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SkipUntil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(char16_t, bool)>(&::System::Xml::XmlTextReaderImpl::SkipUntil)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x287044c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipUntil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.EatWhitespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::EatWhitespaces)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x28683b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "EatWhitespaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseCharRefInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(int32_t, ByRef<int32_t>, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>)>(&::System::Xml::XmlTextReaderImpl::ParseCharRefInline)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x286f310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCharRefInline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseNumericCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(
    bool, ::System::Text::StringBuilder*, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>)>(&::System::Xml::XmlTextReaderImpl::ParseNumericCharRef)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2866d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNumericCharRef", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseNumericCharRefInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(
    int32_t, bool, ::System::Text::StringBuilder*, ByRef<int32_t>, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>)>(&::System::Xml::XmlTextReaderImpl::ParseNumericCharRefInline)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x2870888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNumericCharRefInline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseNamedCharRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(bool, ::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2866e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseNamedCharRefInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(int32_t, bool, ::System::Text::StringBuilder*)>(
    &::System::Xml::XmlTextReaderImpl::ParseNamedCharRefInline)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2870ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNamedCharRefInline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x286a390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>)>(&::System::Xml::XmlTextReaderImpl::ParseQName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286ba90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(bool, int32_t, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::ParseQName)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x28711c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ReadDataInName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>)>(&::System::Xml::XmlTextReaderImpl::ReadDataInName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x287144c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReadDataInName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseEntityName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseEntityName)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x286eab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEntityName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (::System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::AddNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2864f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AllocNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (::System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::AllocNode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x287148c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AllocNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddAttributeNoChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (::System::Xml::XmlTextReaderImpl::*)(::StringW, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::AddAttributeNoChecks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x286898c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttributeNoChecks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (::System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::AddAttribute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x286d4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::AddAttribute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x28715c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PopElementContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PopElementContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2864f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopElementContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OnNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::OnNewLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28668f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnNewLine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OnEof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::OnEof)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2865330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnEof",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::LookupNamespace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x286e6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::System::Xml::__XmlTextReaderImpl__NodeData*)>(
    &::System::Xml::XmlTextReaderImpl::AddNamespace)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x286e824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ResetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ResetAttributes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2864f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ResetAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FullAttributeCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FullAttributeCleanup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2871724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FullAttributeCleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PushXmlContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PushXmlContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x286e7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushXmlContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PopXmlContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PopXmlContext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28716f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopXmlContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetWhitespaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlTextReaderImpl::*)()>(
    &::System::Xml::XmlTextReaderImpl::GetWhitespaceType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x286f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetWhitespaceType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetTextNodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(
    &::System::Xml::XmlTextReaderImpl::GetTextNodeType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x286f2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetTextNodeType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PushExternalEntityOrSubset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::System::Uri*, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::PushExternalEntityOrSubset)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2867fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushExternalEntityOrSubset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.OpenAndPush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::System::Uri*)>(&::System::Xml::XmlTextReaderImpl::OpenAndPush)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2871788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenAndPush", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PushExternalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::IDtdEntityInfo*)>(
    &::System::Xml::XmlTextReaderImpl::PushExternalEntity)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2867778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushExternalEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PushInternalEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::IDtdEntityInfo*)>(
    &::System::Xml::XmlTextReaderImpl::PushInternalEntity)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2867b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushInternalEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PopEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PopEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2867e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopEntity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.RegisterEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::IDtdEntityInfo*)>(
    &::System::Xml::XmlTextReaderImpl::RegisterEntity)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x28719bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "RegisterEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.UnregisterEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::UnregisterEntity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2871bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "UnregisterEntity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PushParsingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PushParsingState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x286866c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushParsingState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.PopParsingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::PopParsingState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x286a2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopParsingState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.IncrementalRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::IncrementalRead)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x2871c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "IncrementalRead",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.FinishIncrementalRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::FinishIncrementalRead)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2865188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "FinishIncrementalRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseFragmentAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseFragmentAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28651f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ParseFragmentAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseAttributeValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseAttributeValueChunk)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2865914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ParseAttributeValueChunk", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseXmlDeclarationFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseXmlDeclarationFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2865274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ParseXmlDeclarationFragment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286a594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286a83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x286a3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2872544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseUnexpectedToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ThrowExpectingWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::ThrowExpectingWhitespace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x286d444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowExpectingWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetIndexOfAttributeWithoutPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(
    &::System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithoutPrefix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x286301c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetIndexOfAttributeWithoutPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.GetIndexOfAttributeWithPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReaderImpl::*)(::StringW)>(
    &::System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithPrefix)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2863104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetIndexOfAttributeWithPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ZeroEndingStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(int32_t)>(&::System::Xml::XmlTextReaderImpl::ZeroEndingStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x286f37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ZeroEndingStream", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.ParseDtdFromParserContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::ParseDtdFromParserContext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x28697bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                               "ParseDtdFromParserContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.MoveToNextContentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(bool)>(&::System::Xml::XmlTextReaderImpl::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x286f3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "MoveToNextContentNode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.get_DtdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlTextReaderImpl::*)()>(&::System::Xml::XmlTextReaderImpl::get_DtdInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287260c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.SetDtdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(::System::Xml::IDtdInfo*)>(
    &::System::Xml::XmlTextReaderImpl::SetDtdInfo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2872614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetDtdInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_XmlValidatingReaderCompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(bool)>(
    &::System::Xml::XmlTextReaderImpl::set_XmlValidatingReaderCompatibilityMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2872748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddDefaultAttributeDtd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReaderImpl::*)(
    ::System::Xml::IDtdDefaultAttributeInfo*, bool, ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>)>(
    &::System::Xml::XmlTextReaderImpl::AddDefaultAttributeDtd)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x286cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddDefaultAttributeDtd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdDefaultAttributeInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.AddDefaultAttributeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::__XmlTextReaderImpl__NodeData* (
    ::System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, int32_t, int32_t, int32_t, bool)>(&::System::Xml::XmlTextReaderImpl::AddDefaultAttributeInternal)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2872820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddDefaultAttributeInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.set_DisableUndeclaredEntityCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(bool)>(
    &::System::Xml::XmlTextReaderImpl::set_DisableUndeclaredEntityCheck)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2872a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_DisableUndeclaredEntityCheck",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.RegisterConsumedCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReaderImpl::*)(int64_t, bool)>(
    &::System::Xml::XmlTextReaderImpl::RegisterConsumedCharacters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x286878c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "RegisterConsumedCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.StripSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlTextReaderImpl::StripSpaces)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2872a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.StripSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, ByRef<int32_t>)>(
    &::System::Xml::XmlTextReaderImpl::StripSpaces)> {
  constexpr static std::size_t size = 0x1110;
  constexpr static std::size_t addrs = 0x2872c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.BlockCopyChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x286a04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "BlockCopyChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReaderImpl.BlockCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextReaderImpl::BlockCopy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "BlockCopy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlTextReaderImpl::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlTextReaderImpl::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
constexpr ::System::Xml::__XmlTextReaderImpl__LaterInitParam*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_laterInitParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___laterInitParam;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__LaterInitParam*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_laterInitParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___laterInitParam;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_laterInitParam(::System::Xml::__XmlTextReaderImpl__LaterInitParam* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___laterInitParam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ps;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ps;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_ps(::System::Xml::__XmlTextReaderImpl__ParsingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ps = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingFunction;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingFunction;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_parsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parsingFunction = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextParsingFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextParsingFunction;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextParsingFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextParsingFunction;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextParsingFunction = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextNextParsingFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextNextParsingFunction;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextNextParsingFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextNextParsingFunction;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nextNextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextNextParsingFunction = value;
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nodes(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_curNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_curNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_curNode(::System::Xml::__XmlTextReaderImpl__NodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_curAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curAttrIndex;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_curAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curAttrIndex;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_curAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curAttrIndex = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_attrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCount = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashtable;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashtable;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_attrHashtable(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrHashtable = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrDuplWalkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrDuplWalkCount;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrDuplWalkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrDuplWalkCount;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_attrDuplWalkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrDuplWalkCount = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrNeedNamespaceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrNeedNamespaceLookup;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrNeedNamespaceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrNeedNamespaceLookup;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_attrNeedNamespaceLookup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrNeedNamespaceLookup = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fullAttrCleanup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullAttrCleanup;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fullAttrCleanup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullAttrCleanup;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_fullAttrCleanup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullAttrCleanup = value;
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrDuplSortingArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrDuplSortingArray;
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_attrDuplSortingArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrDuplSortingArray;
}
constexpr void
System::Xml::XmlTextReaderImpl::__cordl_internal_set_attrDuplSortingArray(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrDuplSortingArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nameTableFromSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTableFromSettings;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nameTableFromSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTableFromSettings;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nameTableFromSettings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTableFromSettings = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlTextReaderImpl::__cordl_internal_get_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr ::StringW const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_normalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_normalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_normalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalize = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_supportNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportNamespaces;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_supportNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportNamespaces;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_supportNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportNamespaces = value;
}
constexpr ::System::Xml::WhitespaceHandling& System::Xml::XmlTextReaderImpl::__cordl_internal_get_whitespaceHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceHandling;
}
constexpr ::System::Xml::WhitespaceHandling const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_whitespaceHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceHandling;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_whitespaceHandling(::System::Xml::WhitespaceHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___whitespaceHandling = value;
}
constexpr ::System::Xml::DtdProcessing& System::Xml::XmlTextReaderImpl::__cordl_internal_get_dtdProcessing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr ::System::Xml::DtdProcessing const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_dtdProcessing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtdProcessing = value;
}
constexpr ::System::Xml::EntityHandling& System::Xml::XmlTextReaderImpl::__cordl_internal_get_entityHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityHandling;
}
constexpr ::System::Xml::EntityHandling const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_entityHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entityHandling;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_entityHandling(::System::Xml::EntityHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entityHandling = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ignorePIs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ignorePIs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_ignorePIs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignorePIs = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ignoreComments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_ignoreComments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_ignoreComments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreComments = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lineNumberOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumberOffset;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lineNumberOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumberOffset;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_lineNumberOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumberOffset = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_linePositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePositionOffset;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_linePositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePositionOffset;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_linePositionOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePositionOffset = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_closeInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_closeInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_closeInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeInput = value;
}
constexpr int64_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_maxCharactersInDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersInDocument;
}
constexpr int64_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_maxCharactersInDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersInDocument;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_maxCharactersInDocument(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCharactersInDocument = value;
}
constexpr int64_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_maxCharactersFromEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersFromEntities;
}
constexpr int64_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_maxCharactersFromEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharactersFromEntities;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_maxCharactersFromEntities(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCharactersFromEntities = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_v1Compat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v1Compat;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_v1Compat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v1Compat;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_v1Compat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v1Compat = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_namespaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_namespaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lastPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPrefix;
}
constexpr ::StringW const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lastPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPrefix;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_lastPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlContext;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_xmlContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*>&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingStatesStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingStatesStack;
}
constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> const&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingStatesStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingStatesStack;
}
constexpr void
System::Xml::XmlTextReaderImpl::__cordl_internal_set_parsingStatesStack(::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parsingStatesStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingStatesStackTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingStatesStackTop;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingStatesStackTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingStatesStackTop;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_parsingStatesStackTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parsingStatesStackTop = value;
}
constexpr ::StringW& System::Xml::XmlTextReaderImpl::__cordl_internal_get_reportedBaseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportedBaseUri;
}
constexpr ::StringW const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_reportedBaseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportedBaseUri;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_reportedBaseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reportedBaseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_reportedEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportedEncoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_reportedEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportedEncoding;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_reportedEncoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reportedEncoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::IDtdInfo*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_dtdInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdInfo*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_dtdInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdInfo;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_dtdInfo(::System::Xml::IDtdInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dtdInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeType& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentType;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentType;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_fragmentType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragmentType = value;
}
constexpr ::System::Xml::XmlParserContext*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragmentParserContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentParserContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragmentParserContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragmentParserContext;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_fragmentParserContext(::System::Xml::XmlParserContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fragmentParserContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragment;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_fragment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fragment;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_fragment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fragment = value;
}
constexpr ::System::Xml::IncrementalReadDecoder*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadDecoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadDecoder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IncrementalReadDecoder*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadDecoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadDecoder;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadDecoder(::System::Xml::IncrementalReadDecoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___incReadDecoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadState;
}
constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadState;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadState(::System::Xml::__XmlTextReaderImpl__IncrementalReadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incReadState = value;
}
constexpr ::System::Xml::LineInfo& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLineInfo;
}
constexpr ::System::Xml::LineInfo const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLineInfo;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadLineInfo(::System::Xml::LineInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incReadLineInfo = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadDepth;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadDepth;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incReadDepth = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLeftStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLeftStartPos;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLeftStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLeftStartPos;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadLeftStartPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incReadLeftStartPos = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLeftEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLeftEndPos;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_incReadLeftEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incReadLeftEndPos;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_incReadLeftEndPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incReadLeftEndPos = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attributeValueBaseEntityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValueBaseEntityId;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_attributeValueBaseEntityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValueBaseEntityId;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_attributeValueBaseEntityId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeValueBaseEntityId = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_emptyEntityInAttributeResolved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyEntityInAttributeResolved;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_emptyEntityInAttributeResolved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyEntityInAttributeResolved;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_emptyEntityInAttributeResolved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyEntityInAttributeResolved = value;
}
constexpr ::System::Xml::IValidationEventHandling*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_validationEventHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandling;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IValidationEventHandling*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_validationEventHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandling;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_validationEventHandling(::System::Xml::IValidationEventHandling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validationEventHandling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_onDefaultAttributeUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDefaultAttributeUse;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*> const&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_onDefaultAttributeUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDefaultAttributeUse;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_onDefaultAttributeUse(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDefaultAttributeUse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_validatingReaderCompatFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatingReaderCompatFlag;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_validatingReaderCompatFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatingReaderCompatFlag;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_validatingReaderCompatFlag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validatingReaderCompatFlag = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_addDefaultAttributesAndNormalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDefaultAttributesAndNormalize;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_addDefaultAttributesAndNormalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addDefaultAttributesAndNormalize;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_addDefaultAttributesAndNormalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addDefaultAttributesAndNormalize = value;
}
constexpr ::System::Text::StringBuilder*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_rootElementParsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElementParsed;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_rootElementParsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElementParsed;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_rootElementParsed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootElementParsed = value;
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_standalone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_standalone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standalone;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_standalone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standalone = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextEntityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntityId;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_nextEntityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntityId;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_nextEntityId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextEntityId = value;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingMode;
}
constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parsingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parsingMode;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_parsingMode(::System::Xml::__XmlTextReaderImpl__ParsingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parsingMode = value;
}
constexpr ::System::Xml::ReadState& System::Xml::XmlTextReaderImpl::__cordl_internal_get_readState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr ::System::Xml::ReadState const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_readState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_readState(::System::Xml::ReadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readState = value;
}
constexpr ::System::Xml::IDtdEntityInfo*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lastEntity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastEntity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdEntityInfo*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_lastEntity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastEntity;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_lastEntity(::System::Xml::IDtdEntityInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastEntity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_afterResetState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterResetState;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_afterResetState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterResetState;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_afterResetState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterResetState = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_documentStartBytePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentStartBytePos;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_documentStartBytePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentStartBytePos;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_documentStartBytePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___documentStartBytePos = value;
}
constexpr int32_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_readValueOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readValueOffset;
}
constexpr int32_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_readValueOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readValueOffset;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_readValueOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readValueOffset = value;
}
constexpr int64_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_charactersInDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charactersInDocument;
}
constexpr int64_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_charactersInDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charactersInDocument;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_charactersInDocument(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charactersInDocument = value;
}
constexpr int64_t& System::Xml::XmlTextReaderImpl::__cordl_internal_get_charactersFromEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charactersFromEntities;
}
constexpr int64_t const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_charactersFromEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charactersFromEntities;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_charactersFromEntities(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charactersFromEntities = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_currentEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntities;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*> const&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_currentEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntities;
}
constexpr void
System::Xml::XmlTextReaderImpl::__cordl_internal_set_currentEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentEntities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_disableUndeclaredEntityCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableUndeclaredEntityCheck;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_disableUndeclaredEntityCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableUndeclaredEntityCheck;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_disableUndeclaredEntityCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableUndeclaredEntityCheck = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_outerReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outerReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_outerReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outerReader;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_outerReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outerReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlResolverIsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolverIsSet;
}
constexpr bool const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_xmlResolverIsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolverIsSet;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_xmlResolverIsSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolverIsSet = value;
}
constexpr ::StringW& System::Xml::XmlTextReaderImpl::__cordl_internal_get_Xml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xml;
}
constexpr ::StringW const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_Xml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xml;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_Xml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Xml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlTextReaderImpl::__cordl_internal_get_XmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XmlNs;
}
constexpr ::StringW const& System::Xml::XmlTextReaderImpl::__cordl_internal_get_XmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XmlNs;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_XmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*& System::Xml::XmlTextReaderImpl::__cordl_internal_get_parseText_dummyTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parseText_dummyTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*> const&
System::Xml::XmlTextReaderImpl::__cordl_internal_get_parseText_dummyTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parseText_dummyTask;
}
constexpr void System::Xml::XmlTextReaderImpl::__cordl_internal_set_parseText_dummyTask(::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parseText_dummyTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReaderImpl::New_ctor(::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReaderImpl*>(nt));
}
inline void System::Xml::XmlTextReaderImpl::_ctor(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nt);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReaderImpl::New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReaderImpl*>(input, nt));
}
inline void System::Xml::XmlTextReaderImpl::_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, nt);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReaderImpl::New_ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReaderImpl*>(url, input, nt));
}
inline void System::Xml::XmlTextReaderImpl::_ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, input, nt);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReaderImpl::New_ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReaderImpl*>(xmlFragment, fragType, context));
}
inline void System::Xml::XmlTextReaderImpl::_ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlFragment, fragType, context);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReaderImpl::New_ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReaderImpl*>(xmlFragment, context));
}
inline void System::Xml::XmlTextReaderImpl::_ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlFragment, context);
}
inline void System::Xml::XmlTextReaderImpl::FinishInitUriString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitUriString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishInitStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishInitTextReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInitTextReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlTextReaderImpl::get_Settings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlTextReaderImpl::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlTextReaderImpl::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_CanResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlTextReaderImpl::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlTextReaderImpl::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::set_OuterReader(::System::Xml::XmlReader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_OuterReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::StringW System::Xml::XmlTextReaderImpl::LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "LookupPrefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline void System::Xml::XmlTextReaderImpl::set_Namespaces(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_Namespaces",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReaderImpl::set_EntityHandling(::System::Xml::EntityHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_EntityHandling", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReaderImpl::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_NameTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_NamespaceResolver",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlNamespaceResolver*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_DtdValidation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_DtdValidation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Normalization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_Normalization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Namespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_Namespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_V1CompatibilityMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Uri* System::Xml::XmlTextReaderImpl::get_DtdParserProxy_BaseUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_BaseUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEof() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_IsEof", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_ParsingBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_ParsingBufferLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_CurrentPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_DtdParserProxy_CurrentPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_EntityStackLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_IsEntityEolNormalized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::IValidationEventHandling* System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_ValidationEventHandling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IValidationEventHandling*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnNewLine(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnNewLine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_DtdParserProxy_LineNo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdParserProxy_LineStartPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ReadData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "DtdParserProxy_ReadData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseNumericCharRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, internalSubsetBuilder);
}
inline int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, expand, internalSubsetBuilder);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_ParsePI(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParsePI", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseComment(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_ParseComment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline bool System::Xml::XmlTextReaderImpl::get_IsResolverNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_IsResolverNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlTextReaderImpl::GetTempResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetTempResolver",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushEntity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entity, entityId);
}
inline bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PopEntity", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::IDtdEntityInfo*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, oldEntity, newEntityId);
}
inline bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PushExternalSubset(::StringW systemId, ::StringW publicId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushExternalSubset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, systemId, publicId);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_PushInternalDtd(::StringW baseUri, ::StringW internalDtd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_PushInternalDtd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, internalDtd);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_Throw(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_Throw", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnSystemId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, systemId, keywordLineInfo, systemLiteralLineInfo);
}
inline void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DtdParserProxy_OnPublicId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::LineInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicId, keywordLineInfo, publicLiteralLineInfo);
}
inline void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, res, arg);
}
inline void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, res, args);
}
inline void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, res);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, lineNo, linePos);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, arg);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, arg, lineNo, linePos);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, args);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, arg, innerException);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, args, innerException);
}
inline void System::Xml::XmlTextReaderImpl::Throw(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::XmlTextReaderImpl::ReThrow(::System::Exception* e, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReThrow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, lineNo, linePos);
}
inline void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, arg);
}
inline void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowWithoutLineInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, args, innerException);
}
inline void System::Xml::XmlTextReaderImpl::ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowInvalidChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length, invCharPos);
}
inline void System::Xml::XmlTextReaderImpl::SetErrorState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetErrorState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, severity, code, arg, lineNo, linePos);
}
inline void System::Xml::XmlTextReaderImpl::SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, severity, exception);
}
inline bool System::Xml::XmlTextReaderImpl::get_InAttributeValueIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "get_InAttributeValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishAttributeValueIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "FinishAttributeValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::get_DtdValidation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_DtdValidation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::InitStreamInput(::System::Uri* baseUri, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, stream, encoding);
}
inline void System::Xml::XmlTextReaderImpl::InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, baseUriStr, stream, encoding);
}
inline void System::Xml::XmlTextReaderImpl::InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount,
                                                            ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStreamInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, baseUriStr, stream, bytes, byteCount, encoding);
}
inline void System::Xml::XmlTextReaderImpl::InitTextReaderInput(::StringW baseUriStr, ::System::IO::TextReader* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitTextReaderInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUriStr, input);
}
inline void System::Xml::XmlTextReaderImpl::InitTextReaderInput(::StringW baseUriStr, ::System::Uri* baseUri, ::System::IO::TextReader* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitTextReaderInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUriStr, baseUri, input);
}
inline void System::Xml::XmlTextReaderImpl::InitStringInput(::StringW baseUriStr, ::System::Text::Encoding* originalEncoding, ::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitStringInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUriStr, originalEncoding, str);
}
inline void System::Xml::XmlTextReaderImpl::InitFragmentReader(::System::Xml::XmlNodeType fragmentType, ::System::Xml::XmlParserContext* parserContext, bool allowXmlDeclFragment) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InitFragmentReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fragmentType, parserContext, allowXmlDeclFragment);
}
inline void System::Xml::XmlTextReaderImpl::ProcessDtdFromParserContext(::System::Xml::XmlParserContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ProcessDtdFromParserContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Xml::XmlTextReaderImpl::OpenUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenUrl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::OpenUrlDelegate(::System::Object* xmlResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenUrlDelegate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlResolver);
}
inline ::System::Text::Encoding* System::Xml::XmlTextReaderImpl::DetectEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "DetectEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SetupEncoding(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetupEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Xml::XmlTextReaderImpl::SwitchEncoding(::System::Text::Encoding* newEncoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SwitchEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEncoding);
}
inline ::System::Text::Encoding* System::Xml::XmlTextReaderImpl::CheckEncoding(::StringW newEncodingName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "CheckEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method, newEncodingName);
}
inline void System::Xml::XmlTextReaderImpl::UnDecodeChars() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "UnDecodeChars",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SwitchEncodingToUTF8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SwitchEncodingToUTF8",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::ReadData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReadData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::GetChars(int32_t maxCharsCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetChars", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, maxCharsCount);
}
inline void System::Xml::XmlTextReaderImpl::InvalidCharRecovery(ByRef<int32_t> bytesCount, ByRef<int32_t> charsCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "InvalidCharRecovery", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytesCount, charsCount);
}
inline void System::Xml::XmlTextReaderImpl::Close(bool closeInput) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, closeInput);
}
inline void System::Xml::XmlTextReaderImpl::ShiftBuffer(int32_t sourcePos, int32_t destPos, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ShiftBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourcePos, destPos, count);
}
inline bool System::Xml::XmlTextReaderImpl::ParseXmlDeclaration(bool isTextDecl) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseXmlDeclaration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, isTextDecl);
}
inline bool System::Xml::XmlTextReaderImpl::ParseDocumentContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDocumentContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParseElementContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseElementContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ThrowUnclosedElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnclosedElements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::AddDefaultAttributesAndNormalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "AddDefaultAttributesAndNormalize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ThrowTagMismatch(::System::Xml::__XmlTextReaderImpl__NodeData* startTag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowTagMismatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startTag);
}
inline void System::Xml::XmlTextReaderImpl::ParseAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ElementNamespaceLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ElementNamespaceLookup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::AttributeNamespaceLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "AttributeNamespaceLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::AttributeDuplCheck() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AttributeDuplCheck",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::OnDefaultNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnDefaultNamespaceDecl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attr);
}
inline void System::Xml::XmlTextReaderImpl::OnNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnNamespaceDecl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attr);
}
inline void System::Xml::XmlTextReaderImpl::OnXmlReservedAttribute(::System::Xml::__XmlTextReaderImpl__NodeData* attr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnXmlReservedAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attr);
}
inline void System::Xml::XmlTextReaderImpl::ParseAttributeValueSlow(int32_t curPos, char16_t quoteChar, ::System::Xml::__XmlTextReaderImpl__NodeData* attr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseAttributeValueSlow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curPos, quoteChar, attr);
}
inline void System::Xml::XmlTextReaderImpl::AddAttributeChunkToList(::System::Xml::__XmlTextReaderImpl__NodeData* attr, ::System::Xml::__XmlTextReaderImpl__NodeData* chunk,
                                                                    ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*> lastChunk) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttributeChunkToList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attr, chunk, lastChunk);
}
inline bool System::Xml::XmlTextReaderImpl::ParseText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParseText(ByRef<int32_t> startPos, ByRef<int32_t> endPos, ByRef<int32_t> outOrChars) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPos, endPos, outOrChars);
}
inline void System::Xml::XmlTextReaderImpl::FinishPartialValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishPartialValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishOtherValueIterator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "FinishOtherValueIterator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SkipPartialTextValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipPartialTextValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishReadValueChunk() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishReadValueChunk",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishReadContentAsBinary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "FinishReadContentAsBinary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishReadElementContentAsBinary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "FinishReadElementContentAsBinary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParseRootLevelWhitespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "ParseRootLevelWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseEntityReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEntityReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::XmlTextReaderImpl::HandleEntityReference(bool isInAttributeValue, ::System::Xml::__XmlTextReaderImpl__EntityExpandType expandType,
                                                                                                            ByRef<int32_t> charRefEndPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleEntityReference", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__EntityExpandType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__EntityType, false>(this, ___internal_method, isInAttributeValue, expandType, charRefEndPos);
}
inline ::System::Xml::__XmlTextReaderImpl__EntityType System::Xml::XmlTextReaderImpl::HandleGeneralEntityReference(::StringW name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver,
                                                                                                                   int32_t entityStartLinePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleGeneralEntityReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__EntityType, false>(this, ___internal_method, name, isInAttributeValue, pushFakeEntityIfNullResolver,
                                                                                                    entityStartLinePos);
}
inline bool System::Xml::XmlTextReaderImpl::get_InEntity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "get_InEntity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::HandleEntityEnd(bool checkEntityNesting) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "HandleEntityEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, checkEntityNesting);
}
inline void System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "SetupEndEntityNodeInContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "SetupEndEntityNodeInAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParsePI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParsePI(::System::Text::StringBuilder* piInDtdStringBuilder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePI", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, piInDtdStringBuilder);
}
inline bool System::Xml::XmlTextReaderImpl::ParsePIValue(ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParsePIValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, outStartPos, outEndPos);
}
inline bool System::Xml::XmlTextReaderImpl::ParseComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseCData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseCDataOrComment(::System::Xml::XmlNodeType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCDataOrComment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool System::Xml::XmlTextReaderImpl::ParseCDataOrComment(::System::Xml::XmlNodeType type, ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCDataOrComment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, outStartPos, outEndPos);
}
inline bool System::Xml::XmlTextReaderImpl::ParseDoctypeDecl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDoctypeDecl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseDtd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseDtd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SkipDtd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipDtd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SkipPublicOrSystemIdLiteral() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "SkipPublicOrSystemIdLiteral", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SkipUntil(char16_t stopChar, bool recognizeLiterals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SkipUntil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stopChar, recognizeLiterals);
}
inline int32_t System::Xml::XmlTextReaderImpl::EatWhitespaces(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "EatWhitespaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sb);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseCharRefInline(int32_t startPos, ByRef<int32_t> charCount, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseCharRefInline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos, charCount, entityType);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseNumericCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder,
                                                                   ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNumericCharRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, expand, internalSubsetBuilder, entityType);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseNumericCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder, ByRef<int32_t> charCount,
                                                                         ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNumericCharRefInline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::__XmlTextReaderImpl__EntityType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos, expand, internalSubsetBuilder, charCount, entityType);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNamedCharRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, expand, internalSubsetBuilder);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseNamedCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseNamedCharRefInline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos, expand, internalSubsetBuilder);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseQName(ByRef<int32_t> colonPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, colonPos);
}
inline int32_t System::Xml::XmlTextReaderImpl::ParseQName(bool isQName, int32_t startOffset, ByRef<int32_t> colonPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, isQName, startOffset, colonPos);
}
inline bool System::Xml::XmlTextReaderImpl::ReadDataInName(ByRef<int32_t> pos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ReadDataInName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
inline ::StringW System::Xml::XmlTextReaderImpl::ParseEntityName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseEntityName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AddNode(int32_t nodeIndex, int32_t nodeDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, nodeIndex, nodeDepth);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AllocNode(int32_t nodeIndex, int32_t nodeDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AllocNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, nodeIndex, nodeDepth);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AddAttributeNoChecks(::StringW name, int32_t attrDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttributeNoChecks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, name, attrDepth);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AddAttribute(int32_t endNamePos, int32_t colonPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, endNamePos, colonPos);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AddAttribute(::StringW localName, ::StringW prefix, ::StringW nameWPrefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, localName, prefix, nameWPrefix);
}
inline void System::Xml::XmlTextReaderImpl::PopElementContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopElementContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::OnNewLine(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnNewLine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline void System::Xml::XmlTextReaderImpl::OnEof() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OnEof",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReaderImpl::LookupNamespace(::System::Xml::__XmlTextReaderImpl__NodeData* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, node);
}
inline void System::Xml::XmlTextReaderImpl::AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::__XmlTextReaderImpl__NodeData* attr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__XmlTextReaderImpl__NodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri, attr);
}
inline void System::Xml::XmlTextReaderImpl::ResetAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ResetAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FullAttributeCleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FullAttributeCleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::PushXmlContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushXmlContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::PopXmlContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopXmlContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::GetWhitespaceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetWhitespaceType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::GetTextNodeType(int32_t orChars) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetTextNodeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method, orChars);
}
inline void System::Xml::XmlTextReaderImpl::PushExternalEntityOrSubset(::StringW publicId, ::StringW systemId, ::System::Uri* baseUri, ::StringW entityName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushExternalEntityOrSubset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicId, systemId, baseUri, entityName);
}
inline bool System::Xml::XmlTextReaderImpl::OpenAndPush(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "OpenAndPush", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uri);
}
inline bool System::Xml::XmlTextReaderImpl::PushExternalEntity(::System::Xml::IDtdEntityInfo* entity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushExternalEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entity);
}
inline void System::Xml::XmlTextReaderImpl::PushInternalEntity(::System::Xml::IDtdEntityInfo* entity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushInternalEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entity);
}
inline void System::Xml::XmlTextReaderImpl::PopEntity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopEntity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::RegisterEntity(::System::Xml::IDtdEntityInfo* entity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "RegisterEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdEntityInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entity);
}
inline void System::Xml::XmlTextReaderImpl::UnregisterEntity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "UnregisterEntity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::PushParsingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PushParsingState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::PopParsingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "PopParsingState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReaderImpl::IncrementalRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "IncrementalRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::FinishIncrementalRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "FinishIncrementalRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParseFragmentAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseFragmentAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::ParseAttributeValueChunk() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "ParseAttributeValueChunk", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ParseXmlDeclarationFragment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "ParseXmlDeclarationFragment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, expectedToken);
}
inline void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(::StringW expectedToken1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expectedToken1);
}
inline void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, expectedToken1, expectedToken2);
}
inline void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(::StringW expectedToken1, ::StringW expectedToken2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expectedToken1, expectedToken2);
}
inline ::StringW System::Xml::XmlTextReaderImpl::ParseUnexpectedToken(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseUnexpectedToken",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pos);
}
inline ::StringW System::Xml::XmlTextReaderImpl::ParseUnexpectedToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ParseUnexpectedToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::ThrowExpectingWhitespace(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ThrowExpectingWhitespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline int32_t System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithoutPrefix(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetIndexOfAttributeWithoutPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline int32_t System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithPrefix(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "GetIndexOfAttributeWithPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlTextReaderImpl::ZeroEndingStream(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "ZeroEndingStream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
inline void System::Xml::XmlTextReaderImpl::ParseDtdFromParserContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(),
                                                                             "ParseDtdFromParserContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReaderImpl::MoveToNextContentNode(bool moveIfOnContentNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "MoveToNextContentNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIfOnContentNode);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlTextReaderImpl::get_DtdInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReaderImpl::SetDtdInfo(::System::Xml::IDtdInfo* newDtdInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "SetDtdInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newDtdInfo);
}
inline void System::Xml::XmlTextReaderImpl::set_XmlValidatingReaderCompatibilityMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool
System::Xml::XmlTextReaderImpl::AddDefaultAttributeDtd(::System::Xml::IDtdDefaultAttributeInfo* defAttrInfo, bool definedInDtd,
                                                       ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> nameSortedNodeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddDefaultAttributeDtd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdDefaultAttributeInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, defAttrInfo, definedInDtd, nameSortedNodeData);
}
inline ::System::Xml::__XmlTextReaderImpl__NodeData* System::Xml::XmlTextReaderImpl::AddDefaultAttributeInternal(::StringW localName, ::StringW ns, ::StringW prefix, ::StringW value, int32_t lineNo,
                                                                                                                 int32_t linePos, int32_t valueLineNo, int32_t valueLinePos, bool isXmlAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "AddDefaultAttributeInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::__XmlTextReaderImpl__NodeData*, false>(this, ___internal_method, localName, ns, prefix, value, lineNo, linePos, valueLineNo, valueLinePos,
                                                                                                   isXmlAttribute);
}
inline void System::Xml::XmlTextReaderImpl::set_DisableUndeclaredEntityCheck(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "set_DisableUndeclaredEntityCheck",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReaderImpl::RegisterConsumedCharacters(int64_t characters, bool inEntityReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "RegisterConsumedCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, characters, inEntityReference);
}
inline ::StringW System::Xml::XmlTextReaderImpl::StripSpaces(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline void System::Xml::XmlTextReaderImpl::StripSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t index, ByRef<int32_t> len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "StripSpaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, index, len);
}
inline void System::Xml::XmlTextReaderImpl::BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset,
                                                           int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "BlockCopyChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void System::Xml::XmlTextReaderImpl::BlockCopy(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOffset, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOffset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReaderImpl*>::get(), "BlockCopy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextReaderImpl::XmlTextReaderImpl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
