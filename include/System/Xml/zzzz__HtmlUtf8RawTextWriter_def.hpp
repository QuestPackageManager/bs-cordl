#pragma once
// IWYU pragma private; include "System/Xml/HtmlUtf8RawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlUtf8RawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class ByteStack;
}
namespace System::Xml {
class TernaryTreeReadOnly;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlUtf8RawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlUtf8RawTextWriter);
// Dependencies System.Xml.AttributeProperties, System.Xml.ElementProperties, System.Xml.XmlUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.HtmlUtf8RawTextWriter
class CORDL_TYPE HtmlUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field attributePropertySearch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_attributePropertySearch, put = setStaticF_attributePropertySearch)) ::System::Xml::TernaryTreeReadOnly* attributePropertySearch;

  /// @brief Field currentAttributeProperties, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentAttributeProperties, put = __cordl_internal_set_currentAttributeProperties)) ::System::Xml::AttributeProperties currentAttributeProperties;

  /// @brief Field currentElementProperties, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_currentElementProperties, put = __cordl_internal_set_currentElementProperties)) ::System::Xml::ElementProperties currentElementProperties;

  /// @brief Field doNotEscapeUriAttributes, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_doNotEscapeUriAttributes, put = __cordl_internal_set_doNotEscapeUriAttributes)) bool doNotEscapeUriAttributes;

  /// @brief Field elementPropertySearch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_elementPropertySearch, put = setStaticF_elementPropertySearch)) ::System::Xml::TernaryTreeReadOnly* elementPropertySearch;

  /// @brief Field elementScope, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_elementScope, put = __cordl_internal_set_elementScope)) ::System::Xml::ByteStack* elementScope;

  /// @brief Field endsWithAmpersand, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_endsWithAmpersand, put = __cordl_internal_set_endsWithAmpersand)) bool endsWithAmpersand;

  /// @brief Field mediaType, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType)) ::StringW mediaType;

  /// @brief Field uriEscapingBuffer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_uriEscapingBuffer, put = __cordl_internal_set_uriEscapingBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> uriEscapingBuffer;

  /// @brief Method Init, addr 0x4248904, size 0x170, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlUtf8RawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method OutputRestAmps, addr 0x42492e4, size 0xc4, virtual false, abstract: false, final false
  inline void OutputRestAmps();

  /// @brief Method StartElementContent, addr 0x4248dd0, size 0x58, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteCharEntity, addr 0x42495cc, size 0x58, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x424967c, size 0x44, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteDocType, addr 0x4248a7c, size 0x248, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x4249278, size 0x6c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x4248f3c, size 0xe4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x4249574, size 0x58, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x4249020, size 0xe4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteHtmlAttributeText, addr 0x42499dc, size 0x254, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeTextBlock, addr 0x4249518, size 0x44, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlElementTextBlock, addr 0x424955c, size 0x18, virtual false, abstract: false, final false
  inline void WriteHtmlElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteMetaElement, addr 0x4248e28, size 0x114, virtual false, abstract: false, final false
  inline void WriteMetaElement();

  /// @brief Method WriteProcessingInstruction, addr 0x42493a8, size 0x120, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteStartAttribute, addr 0x4249104, size 0x174, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x4248cc4, size 0x10c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x42494c8, size 0x50, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x4249624, size 0x58, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteUriAttributeText, addr 0x42496c0, size 0x31c, virtual false, abstract: false, final false
  inline void WriteUriAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteXmlDeclaration, addr 0x4248a74, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x4248a78, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr ::System::Xml::AttributeProperties const& __cordl_internal_get_currentAttributeProperties() const;

  constexpr ::System::Xml::AttributeProperties& __cordl_internal_get_currentAttributeProperties();

  constexpr ::System::Xml::ElementProperties const& __cordl_internal_get_currentElementProperties() const;

  constexpr ::System::Xml::ElementProperties& __cordl_internal_get_currentElementProperties();

  constexpr bool const& __cordl_internal_get_doNotEscapeUriAttributes() const;

  constexpr bool& __cordl_internal_get_doNotEscapeUriAttributes();

  constexpr ::System::Xml::ByteStack* const& __cordl_internal_get_elementScope() const;

  constexpr ::System::Xml::ByteStack*& __cordl_internal_get_elementScope();

  constexpr bool const& __cordl_internal_get_endsWithAmpersand() const;

  constexpr bool& __cordl_internal_get_endsWithAmpersand();

  constexpr ::StringW const& __cordl_internal_get_mediaType() const;

  constexpr ::StringW& __cordl_internal_get_mediaType();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_uriEscapingBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_uriEscapingBuffer();

  constexpr void __cordl_internal_set_currentAttributeProperties(::System::Xml::AttributeProperties value);

  constexpr void __cordl_internal_set_currentElementProperties(::System::Xml::ElementProperties value);

  constexpr void __cordl_internal_set_doNotEscapeUriAttributes(bool value);

  constexpr void __cordl_internal_set_elementScope(::System::Xml::ByteStack* value);

  constexpr void __cordl_internal_set_endsWithAmpersand(bool value);

  constexpr void __cordl_internal_set_mediaType(::StringW value);

  constexpr void __cordl_internal_set_uriEscapingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x42488d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_attributePropertySearch();

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_elementPropertySearch();

  static inline void setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline void setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlUtf8RawTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7181 };

  /// @brief Field elementScope, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::ByteStack* ___elementScope;

  /// @brief Field currentElementProperties, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::ElementProperties ___currentElementProperties;

  /// @brief Field currentAttributeProperties, offset: 0x9c, size: 0x4, def value: None
  ::System::Xml::AttributeProperties ___currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset: 0xa0, size: 0x1, def value: None
  bool ___endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___uriEscapingBuffer;

  /// @brief Field mediaType, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset: 0xb8, size: 0x1, def value: None
  bool ___doNotEscapeUriAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___elementScope) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___currentElementProperties) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___currentAttributeProperties) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___endsWithAmpersand) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___uriEscapingBuffer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___mediaType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___doNotEscapeUriAttributes) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlUtf8RawTextWriter, 0xc0>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriter*, "System.Xml", "HtmlUtf8RawTextWriter");
