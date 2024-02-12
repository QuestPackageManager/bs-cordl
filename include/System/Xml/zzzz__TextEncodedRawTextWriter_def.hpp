#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml::TextEncodedRawTextWriter
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 182, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11347))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11341))
// CS Name: ::System.Xml::TextEncodedRawTextWriter*
class CORDL_TYPE TextEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter {
public:
  // Declarations
  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  static inline ::System::Xml::TextEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2858070, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::TextEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2858074, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteXmlDeclaration, addr 0x2858078, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x285807c, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method WriteDocType, addr 0x2858080, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2858084, size 0x4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndElement, addr 0x2858088, size 0x4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x285808c, size 0x4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x2858090, size 0x4, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteStartAttribute, addr 0x2858094, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x28580a0, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteNamespaceDeclaration, addr 0x28580a8, size 0x4, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x28580ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method WriteCData, addr 0x28580b4, size 0x4, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment, addr 0x285811c, size 0x4, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction, addr 0x2858120, size 0x4, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteEntityRef, addr 0x2858124, size 0x4, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x2858128, size 0x4, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity, addr 0x285812c, size 0x4, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x2858130, size 0x10, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString, addr 0x2858140, size 0x10, virtual true, abstract: false, final false
  inline void WriteString(::StringW textBlock);

  /// @brief Method WriteChars, addr 0x2858150, size 0x10, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x28581dc, size 0x10, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x28581ec, size 0x10, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  // Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEncodedRawTextWriter(TextEncodedRawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEncodedRawTextWriter(TextEncodedRawTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEncodedRawTextWriter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TextEncodedRawTextWriter, 0xb8>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TextEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextEncodedRawTextWriter*, "System.Xml", "TextEncodedRawTextWriter");
