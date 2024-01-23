#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml::HtmlUtf8RawTextWriter
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11437)), TypeDefinitionIndex(TypeDefinitionIndex(11438)), TypeDefinitionIndex(TypeDefinitionIndex(11475))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11419))
// CS Name: ::System.Xml::HtmlUtf8RawTextWriter*
class CORDL_TYPE HtmlUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field elementScope, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_elementScope, put = __cordl_internal_set_elementScope))::System::Xml::ByteStack* elementScope;

  /// @brief Field currentElementProperties, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_currentElementProperties, put = __cordl_internal_set_currentElementProperties))::System::Xml::ElementProperties currentElementProperties;

  /// @brief Field currentAttributeProperties, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_currentAttributeProperties, put = __cordl_internal_set_currentAttributeProperties))::System::Xml::AttributeProperties currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_endsWithAmpersand, put = __cordl_internal_set_endsWithAmpersand)) bool endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_uriEscapingBuffer, put = __cordl_internal_set_uriEscapingBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> uriEscapingBuffer;

  /// @brief Field mediaType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType))::StringW mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_doNotEscapeUriAttributes, put = __cordl_internal_set_doNotEscapeUriAttributes)) bool doNotEscapeUriAttributes;

  /// @brief Field elementPropertySearch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_elementPropertySearch, put = setStaticF_elementPropertySearch))::System::Xml::TernaryTreeReadOnly* elementPropertySearch;

  /// @brief Field attributePropertySearch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_attributePropertySearch, put = setStaticF_attributePropertySearch))::System::Xml::TernaryTreeReadOnly* attributePropertySearch;

  constexpr ::System::Xml::ByteStack*& __cordl_internal_get_elementScope();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::ByteStack*> const& __cordl_internal_get_elementScope() const;

  constexpr void __cordl_internal_set_elementScope(::System::Xml::ByteStack* value);

  constexpr ::System::Xml::ElementProperties& __cordl_internal_get_currentElementProperties();

  constexpr ::System::Xml::ElementProperties const& __cordl_internal_get_currentElementProperties() const;

  constexpr void __cordl_internal_set_currentElementProperties(::System::Xml::ElementProperties value);

  constexpr ::System::Xml::AttributeProperties& __cordl_internal_get_currentAttributeProperties();

  constexpr ::System::Xml::AttributeProperties const& __cordl_internal_get_currentAttributeProperties() const;

  constexpr void __cordl_internal_set_currentAttributeProperties(::System::Xml::AttributeProperties value);

  constexpr bool& __cordl_internal_get_endsWithAmpersand();

  constexpr bool const& __cordl_internal_get_endsWithAmpersand() const;

  constexpr void __cordl_internal_set_endsWithAmpersand(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_uriEscapingBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_uriEscapingBuffer() const;

  constexpr void __cordl_internal_set_uriEscapingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __cordl_internal_get_mediaType();

  constexpr ::StringW const& __cordl_internal_get_mediaType() const;

  constexpr void __cordl_internal_set_mediaType(::StringW value);

  constexpr bool& __cordl_internal_get_doNotEscapeUriAttributes();

  constexpr bool const& __cordl_internal_get_doNotEscapeUriAttributes() const;

  constexpr void __cordl_internal_set_doNotEscapeUriAttributes(bool value);

  static inline void setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_elementPropertySearch();

  static inline void setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value);

  static inline ::System::Xml::TernaryTreeReadOnly* getStaticF_attributePropertySearch();

  static inline ::System::Xml::HtmlUtf8RawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2852198, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteXmlDeclaration, addr 0x2852338, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x285233c, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method WriteDocType, addr 0x2852340, size 0x248, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2852588, size 0x108, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x2852690, size 0x58, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement, addr 0x28527fc, size 0xe4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x28528e0, size 0xe4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x28529c4, size 0x170, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x2852b34, size 0x78, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteProcessingInstruction, addr 0x2852c70, size 0x120, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteString, addr 0x2852d90, size 0x50, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteEntityRef, addr 0x2852e3c, size 0x60, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x2852e9c, size 0x60, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2852efc, size 0x60, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteChars, addr 0x2852f5c, size 0x44, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Init, addr 0x28521c4, size 0x174, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteMetaElement, addr 0x28526e8, size 0x114, virtual false, abstract: false, final false
  inline void WriteMetaElement();

  /// @brief Method WriteHtmlElementTextBlock, addr 0x2852e24, size 0x18, virtual false, abstract: false, final false
  inline void WriteHtmlElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeTextBlock, addr 0x2852de0, size 0x44, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteHtmlAttributeText, addr 0x28532dc, size 0x260, virtual false, abstract: false, final false
  inline void WriteHtmlAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteUriAttributeText, addr 0x2852fa0, size 0x33c, virtual false, abstract: false, final false
  inline void WriteUriAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method OutputRestAmps, addr 0x2852bac, size 0xc4, virtual false, abstract: false, final false
  inline void OutputRestAmps();

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlUtf8RawTextWriter();

public:
  /// @brief Field elementScope, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::ByteStack* ___elementScope;

  /// @brief Field currentElementProperties, offset: 0x90, size: 0x4, def value: None
  ::System::Xml::ElementProperties ___currentElementProperties;

  /// @brief Field currentAttributeProperties, offset: 0x94, size: 0x4, def value: None
  ::System::Xml::AttributeProperties ___currentAttributeProperties;

  /// @brief Field endsWithAmpersand, offset: 0x98, size: 0x1, def value: None
  bool ___endsWithAmpersand;

  /// @brief Field uriEscapingBuffer, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___uriEscapingBuffer;

  /// @brief Field mediaType, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field doNotEscapeUriAttributes, offset: 0xb0, size: 0x1, def value: None
  bool ___doNotEscapeUriAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlUtf8RawTextWriter, 0xb8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___elementScope) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___currentElementProperties) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___currentAttributeProperties) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___endsWithAmpersand) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___uriEscapingBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___mediaType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriter, ___doNotEscapeUriAttributes) == 0xb0, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriter*, "System.Xml", "HtmlUtf8RawTextWriter");
