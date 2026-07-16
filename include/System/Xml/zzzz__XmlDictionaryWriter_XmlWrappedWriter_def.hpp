#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryWriter_XmlWrappedWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryWriter_XmlWrappedWriter)
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class XmlDictionaryWriter_XmlWrappedWriter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*, "System.Xml", "XmlDictionaryWriter/XmlWrappedWriter");
// Dependencies System.Xml.XmlDictionaryWriter
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryWriter/XmlWrappedWriter
class CORDL_TYPE XmlDictionaryWriter_XmlWrappedWriter : public ::System::Xml::XmlDictionaryWriter {
public:
  // Declarations
  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field prefix, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) int32_t prefix;

  /// @brief Field writer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlWriter* writer;

  /// @brief Method Close, addr 0x6122080, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x61220a0, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x61220c0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceUri);

  static inline ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter* New_ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteAttributes, addr 0x61220e0, size 0x24, virtual true, abstract: false, final false
  inline void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteBase64, addr 0x6122104, size 0x20, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x6122124, size 0x20, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x6122144, size 0x20, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x6122164, size 0x20, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x6122184, size 0x20, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x61221a4, size 0x20, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x61221c4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x61221e0, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x6122200, size 0x1c, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x612221c, size 0x34, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x6122250, size 0x20, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x6122270, size 0x1c, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteNode, addr 0x612228c, size 0x24, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteProcessingInstruction, addr 0x61222b0, size 0x20, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteQualifiedName, addr 0x61222d0, size 0x20, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteRaw, addr 0x61222f0, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x6122310, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x6122330, size 0x34, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteStartDocument, addr 0x6122364, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x6122380, size 0x20, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x61223a0, size 0x38, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteString, addr 0x61223f8, size 0x20, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x6122418, size 0x20, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x6122458, size 0x20, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x612249c, size 0x20, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x6122478, size 0x24, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x61224bc, size 0x20, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x61224dc, size 0x20, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x61224fc, size 0x20, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteWhitespace, addr 0x6122438, size 0x20, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW whitespace);

  /// @brief Method WriteXmlnsAttribute, addr 0x612251c, size 0x1a0, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW namespaceUri);

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr int32_t const& __cordl_internal_get_prefix() const;

  constexpr int32_t& __cordl_internal_get_prefix();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_prefix(int32_t value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x611ef4c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method get_WriteState, addr 0x61223d8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x61226bc, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x61226dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryWriter_XmlWrappedWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter_XmlWrappedWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryWriter_XmlWrappedWriter(XmlDictionaryWriter_XmlWrappedWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter_XmlWrappedWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryWriter_XmlWrappedWriter(XmlDictionaryWriter_XmlWrappedWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16957 };

  /// @brief Field writer, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field prefix, offset: 0x24, size: 0x4, def value: None
  int32_t ___prefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter, ___writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter, ___depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter, ___prefix) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
