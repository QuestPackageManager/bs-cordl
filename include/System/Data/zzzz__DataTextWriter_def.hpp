#pragma once
// IWYU pragma private; include "System/Data/DataTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTextWriter)
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Data {
class DataTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTextWriter);
// Dependencies System.Xml.XmlWriter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataTextWriter
class CORDL_TYPE DataTextWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  __declspec(property(get = get_BaseStream)) ::System::IO::Stream* BaseStream;

  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field _xmltextWriter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__xmltextWriter, put = __cordl_internal_set__xmltextWriter)) ::System::Xml::XmlWriter* _xmltextWriter;

  /// @brief Method Close, addr 0x5ece608, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateWriter, addr 0x5ec9388, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlWriter* CreateWriter(::System::Xml::XmlWriter* xw);

  /// @brief Method Flush, addr 0x5ece628, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x5ece668, size 0x20, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Data::DataTextWriter* New_ctor(::System::Xml::XmlWriter* w);

  /// @brief Method WriteBase64, addr 0x5ece5a8, size 0x20, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x5ece5c8, size 0x20, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x5ece448, size 0x20, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x5ece4c8, size 0x20, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x5ece548, size 0x20, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x5ece468, size 0x20, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x5ece39c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x5ece428, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x5ece380, size 0x1c, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x5ece3d4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x5ece4a8, size 0x20, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x5ece3f0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x5ece488, size 0x20, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteQualifiedName, addr 0x5ece648, size 0x20, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method WriteRaw, addr 0x5ece568, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x5ece588, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x5ece40c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartDocument, addr 0x5ece344, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x5ece360, size 0x20, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x5ece3b8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x5ece508, size 0x20, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x5ece528, size 0x20, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x5ece4e8, size 0x20, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get__xmltextWriter() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get__xmltextWriter();

  constexpr void __cordl_internal_set__xmltextWriter(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x5ece33c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* w);

  /// @brief Method get_BaseStream, addr 0x5ec6034, size 0x8c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_WriteState, addr 0x5ece5e8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x5ece6a8, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5ece688, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTextWriter(DataTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTextWriter(DataTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13855 };

  /// @brief Field _xmltextWriter, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ____xmltextWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTextWriter, ____xmltextWriter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTextWriter, 0x20>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTextWriter*, "System.Data", "DataTextWriter");
