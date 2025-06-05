#pragma once
// IWYU pragma private; include "System/Xml/HtmlEncodedRawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlEncodedRawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
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
class HtmlEncodedRawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlEncodedRawTextWriter);
// Dependencies System.Xml.AttributeProperties, System.Xml.ElementProperties, System.Xml.XmlEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.HtmlEncodedRawTextWriter
class CORDL_TYPE HtmlEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
public:
  // Declarations
  /// @brief Field attributePropertySearch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_attributePropertySearch, put = setStaticF_attributePropertySearch)) ::System::Xml::TernaryTreeReadOnly* attributePropertySearch;

  /// @brief Field currentAttributeProperties, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_currentAttributeProperties, put = __cordl_internal_set_currentAttributeProperties)) ::System::Xml::AttributeProperties currentAttributeProperties;

  /// @brief Field currentElementProperties, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_currentElementProperties, put = __cordl_internal_set_currentElementProperties)) ::System::Xml::ElementProperties currentElementProperties;

  /// @brief Field doNotEscapeUriAttributes, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_doNotEscapeUriAttributes, put = __cordl_internal_set_doNotEscapeUriAttributes)) bool doNotEscapeUriAttributes;

  /// @brief Field elementPropertySearch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_elementPropertySearch, put = setStaticF_elementPropertySearch)) ::System::Xml::TernaryTreeReadOnly* elementPropertySearch;

  /// @brief Field elementScope, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_elementScope, put = __cordl_internal_set_elementScope)) ::System::Xml::ByteStack* elementScope;

  /// @brief Field endsWithAmpersand, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_endsWithAmpersand, put = __cordl_internal_set_endsWithAmpersand)) bool endsWithAmpersand;

  /// @brief Field mediaType, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType)) ::StringW mediaType;

  /// @brief Field uriEscapingBuffer, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_uriEscapingBuffer, put = __cordl_internal_set_uriEscapingBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> uriEscapingBuffer;

  /// @brief Method Init, addr 0x42429e4, size 0x170, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method OutputRestAmps, addr 0x4243480, size 0x94, virtual false, abstract: false, final false
  inline void OutputRestAmps();

  /// @brief Method StartElementContent, addr 0x4242efc, size 0x54, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteCharEntity, addr 0x424376c, size 0x58, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x424381c, size 0x90, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteDocType, addr 0x4242b88, size 0x248, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x42433f0, size 0x90, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x4243064, size 0x104, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x4243714, size 0x58, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x4243168, size 0x104, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteHtmlAttributeText, addr 0x4243be4, size 0x278, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeTextBlock, addr 0x42436b8, size 0x44, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlElementTextBlock, addr 0x42436fc, size 0x18, virtual false, abstract: false, final false
  inline void WriteHtmlElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteMetaElement, addr 0x4242f50, size 0x114, virtual false, abstract: false, final false
  inline void WriteMetaElement();

  /// @brief Method WriteProcessingInstruction, addr 0x4243514, size 0x134, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteStartAttribute, addr 0x424326c, size 0x184, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x4242dd0, size 0x12c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x4243648, size 0x70, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x42437c4, size 0x58, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteUriAttributeText, addr 0x42438ac, size 0x338, virtual false, abstract: false, final false
  inline void WriteUriAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteXmlDeclaration, addr 0x4242b80, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x4242b84, size 0x4, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x4242b54, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x42429b8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_attributePropertySearch();

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_elementPropertySearch();

  static inline void setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline void setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlEncodedRawTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7179 };

  /// @brief Field elementScope, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::ByteStack* ___elementScope;

  /// @brief Field currentElementProperties, offset: 0xc8, size: 0x4, def value: None
  ::System::Xml::ElementProperties ___currentElementProperties;

  /// @brief Field currentAttributeProperties, offset: 0xcc, size: 0x4, def value: None
  ::System::Xml::AttributeProperties ___currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset: 0xd0, size: 0x1, def value: None
  bool ___endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___uriEscapingBuffer;

  /// @brief Field mediaType, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset: 0xe8, size: 0x1, def value: None
  bool ___doNotEscapeUriAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___elementScope) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___currentElementProperties) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___currentAttributeProperties) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___endsWithAmpersand) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___uriEscapingBuffer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___mediaType) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___doNotEscapeUriAttributes) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlEncodedRawTextWriter, 0xf0>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriter*, "System.Xml", "HtmlEncodedRawTextWriter");
