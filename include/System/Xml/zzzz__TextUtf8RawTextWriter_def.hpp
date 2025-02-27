#pragma once
// IWYU pragma private; include "System/Xml/TextUtf8RawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextUtf8RawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class TextUtf8RawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TextUtf8RawTextWriter);
// Dependencies System.Xml.XmlUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.TextUtf8RawTextWriter
class CORDL_TYPE TextUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  static inline ::System::Xml::TextUtf8RawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method StartElementContent, addr 0x431a664, size 0x4, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteCData, addr 0x431a688, size 0x8, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x431a69c, size 0x4, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x431a6cc, size 0x14, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x431a690, size 0x4, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x431a654, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x431a674, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x431a65c, size 0x4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x431a698, size 0x4, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x431a660, size 0x4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x431a67c, size 0x4, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteProcessingInstruction, addr 0x431a694, size 0x4, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x431a6e0, size 0x14, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x431a6f4, size 0x14, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x431a668, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x431a658, size 0x4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x431a6b8, size 0x14, virtual true, abstract: false, final false
  inline void WriteString(::StringW textBlock);

  /// @brief Method WriteSurrogateCharEntity, addr 0x431a6a0, size 0x4, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x431a6a4, size 0x14, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x431a64c, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x431a650, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method .ctor, addr 0x431a644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x431a680, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextUtf8RawTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextUtf8RawTextWriter(TextUtf8RawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextUtf8RawTextWriter(TextUtf8RawTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TextUtf8RawTextWriter, 0x90>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TextUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextUtf8RawTextWriter*, "System.Xml", "TextUtf8RawTextWriter");
