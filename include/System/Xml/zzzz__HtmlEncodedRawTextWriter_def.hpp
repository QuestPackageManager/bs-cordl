#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml::HtmlEncodedRawTextWriter
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 225, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11449)), TypeDefinitionIndex(TypeDefinitionIndex(11438)), TypeDefinitionIndex(TypeDefinitionIndex(11437))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11416))
// CS Name: ::System.Xml::HtmlEncodedRawTextWriter*
class CORDL_TYPE HtmlEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
public:
  // Declarations
  /// @brief Field elementScope, offset 0xb8, size 0x8
  __declspec(property(get = __get_elementScope, put = __set_elementScope))::System::Xml::ByteStack* elementScope;

  /// @brief Field currentElementProperties, offset 0xc0, size 0x4
  __declspec(property(get = __get_currentElementProperties, put = __set_currentElementProperties))::System::Xml::ElementProperties currentElementProperties;

  /// @brief Field currentAttributeProperties, offset 0xc4, size 0x4
  __declspec(property(get = __get_currentAttributeProperties, put = __set_currentAttributeProperties))::System::Xml::AttributeProperties currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset 0xc8, size 0x1
  __declspec(property(get = __get_endsWithAmpersand, put = __set_endsWithAmpersand)) bool endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset 0xd0, size 0x8
  __declspec(property(get = __get_uriEscapingBuffer, put = __set_uriEscapingBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> uriEscapingBuffer;

  /// @brief Field mediaType, offset 0xd8, size 0x8
  __declspec(property(get = __get_mediaType, put = __set_mediaType))::StringW mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset 0xe0, size 0x1
  __declspec(property(get = __get_doNotEscapeUriAttributes, put = __set_doNotEscapeUriAttributes)) bool doNotEscapeUriAttributes;

  /// @brief Field elementPropertySearch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_elementPropertySearch, put = setStaticF_elementPropertySearch))::System::Xml::TernaryTreeReadOnly* elementPropertySearch;

  /// @brief Field attributePropertySearch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_attributePropertySearch, put = setStaticF_attributePropertySearch))::System::Xml::TernaryTreeReadOnly* attributePropertySearch;

  constexpr ::System::Xml::ByteStack*& __get_elementScope();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::ByteStack*> const& __get_elementScope() const;

  constexpr void __set_elementScope(::System::Xml::ByteStack* value);

  constexpr ::System::Xml::ElementProperties& __get_currentElementProperties();

  constexpr ::System::Xml::ElementProperties const& __get_currentElementProperties() const;

  constexpr void __set_currentElementProperties(::System::Xml::ElementProperties value);

  constexpr ::System::Xml::AttributeProperties& __get_currentAttributeProperties();

  constexpr ::System::Xml::AttributeProperties const& __get_currentAttributeProperties() const;

  constexpr void __set_currentAttributeProperties(::System::Xml::AttributeProperties value);

  constexpr bool& __get_endsWithAmpersand();

  constexpr bool const& __get_endsWithAmpersand() const;

  constexpr void __set_endsWithAmpersand(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_uriEscapingBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_uriEscapingBuffer() const;

  constexpr void __set_uriEscapingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_mediaType();

  constexpr ::StringW const& __get_mediaType() const;

  constexpr void __set_mediaType(::StringW value);

  constexpr bool& __get_doNotEscapeUriAttributes();

  constexpr bool const& __get_doNotEscapeUriAttributes() const;

  constexpr void __set_doNotEscapeUriAttributes(bool value);

  static inline void setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_elementPropertySearch();

  static inline void setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_attributePropertySearch();

  static inline ::System::Xml::HtmlEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x284f060, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x284f2d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteXmlDeclaration, addr 0x284f588, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x284f58c, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method WriteDocType, addr 0x284f590, size 0x228, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x284f868, size 0x118, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x284fb74, size 0x54, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement, addr 0x284fcc4, size 0xf8, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x284ff2c, size 0xf8, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x285012c, size 0x170, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x28503bc, size 0x90, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteProcessingInstruction, addr 0x28504e0, size 0x128, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteString, addr 0x285091c, size 0x6c, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteEntityRef, addr 0x28509d8, size 0x60, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x2850a38, size 0x60, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2850a98, size 0x60, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteChars, addr 0x2850af8, size 0x88, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Init, addr 0x284f164, size 0x174, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteMetaElement, addr 0x284fbc8, size 0xfc, virtual false, abstract: false, final false
  inline void WriteMetaElement();

  /// @brief Method WriteHtmlElementTextBlock, addr 0x28509c8, size 0x10, virtual false, abstract: false, final false
  inline void WriteHtmlElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeTextBlock, addr 0x2850988, size 0x40, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeText, addr 0x2851638, size 0x2d8, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteUriAttributeText, addr 0x28512c0, size 0x378, virtual false, abstract: false, final false
  inline void WriteUriAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method OutputRestAmps, addr 0x285044c, size 0x94, virtual false, abstract: false, final false
  inline void OutputRestAmps();

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlEncodedRawTextWriter();

public:
  /// @brief Field elementScope, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::ByteStack* ___elementScope;

  /// @brief Field currentElementProperties, offset: 0xc0, size: 0x4, def value: None
  ::System::Xml::ElementProperties ___currentElementProperties;

  /// @brief Field currentAttributeProperties, offset: 0xc4, size: 0x4, def value: None
  ::System::Xml::AttributeProperties ___currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset: 0xc8, size: 0x1, def value: None
  bool ___endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___uriEscapingBuffer;

  /// @brief Field mediaType, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset: 0xe0, size: 0x1, def value: None
  bool ___doNotEscapeUriAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlEncodedRawTextWriter, 0xe8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___elementScope) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___currentElementProperties) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___currentAttributeProperties) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___endsWithAmpersand) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___uriEscapingBuffer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___mediaType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriter, ___doNotEscapeUriAttributes) == 0xe0, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriter*, "System.Xml", "HtmlEncodedRawTextWriter");
