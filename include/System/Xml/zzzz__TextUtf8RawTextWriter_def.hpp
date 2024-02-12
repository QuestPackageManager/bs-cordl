#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml::TextUtf8RawTextWriter
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 134, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11373))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11342))
// CS Name: ::System.Xml::TextUtf8RawTextWriter*
class CORDL_TYPE TextUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  static inline ::System::Xml::TextUtf8RawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x28581fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteXmlDeclaration, addr 0x2858204, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x2858208, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method WriteDocType, addr 0x285820c, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2858210, size 0x4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndElement, addr 0x2858214, size 0x4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x2858218, size 0x4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x285821c, size 0x4, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteStartAttribute, addr 0x2858220, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x285822c, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteNamespaceDeclaration, addr 0x2858234, size 0x4, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x2858238, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method WriteCData, addr 0x2858240, size 0x8, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment, addr 0x2858248, size 0x4, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction, addr 0x285824c, size 0x4, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteEntityRef, addr 0x2858250, size 0x4, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x2858254, size 0x4, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2858258, size 0x4, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x285825c, size 0x14, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString, addr 0x2858270, size 0x14, virtual true, abstract: false, final false
  inline void WriteString(::StringW textBlock);

  /// @brief Method WriteChars, addr 0x2858284, size 0x14, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2858298, size 0x14, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x28582ac, size 0x14, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  // Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextUtf8RawTextWriter(TextUtf8RawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextUtf8RawTextWriter(TextUtf8RawTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextUtf8RawTextWriter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TextUtf8RawTextWriter, 0x88>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TextUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextUtf8RawTextWriter*, "System.Xml", "TextUtf8RawTextWriter");
