#pragma once
// IWYU pragma private; include "System/Xml/TextEncodedRawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEncodedRawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class TextEncodedRawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TextEncodedRawTextWriter);
// Dependencies System.Xml.XmlEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.TextEncodedRawTextWriter
class CORDL_TYPE TextEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
public:
  // Declarations
  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  static inline ::System::Xml::TextEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::TextEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method StartElementContent, addr 0x430cf94, size 0x4, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteCData, addr 0x430cfb8, size 0x4, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x430d02c, size 0x4, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x430d054, size 0x10, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x430d020, size 0x4, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x430cf84, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x430cfa4, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x430cf8c, size 0x4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x430d028, size 0x4, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x430cf90, size 0x4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x430cfac, size 0x4, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteProcessingInstruction, addr 0x430d024, size 0x4, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x430d0e0, size 0x10, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x430d0f0, size 0x10, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x430cf98, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x430cf88, size 0x4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x430d044, size 0x10, virtual true, abstract: false, final false
  inline void WriteString(::StringW textBlock);

  /// @brief Method WriteSurrogateCharEntity, addr 0x430d030, size 0x4, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x430d034, size 0x10, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x430cf7c, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x430cf80, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method .ctor, addr 0x430ccf4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x430cc14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x430cfb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEncodedRawTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEncodedRawTextWriter(TextEncodedRawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEncodedRawTextWriter(TextEncodedRawTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TextEncodedRawTextWriter, 0xc0>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TextEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextEncodedRawTextWriter*, "System.Xml", "TextEncodedRawTextWriter");
