#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlEncodedRawTextWriterIndent)
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class BitStack;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Xml {
class XmlEncodedRawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEncodedRawTextWriterIndent);
// Type: System.Xml::XmlEncodedRawTextWriterIndent
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 220, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11341)), TypeDefinitionIndex(TypeDefinitionIndex(11377))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11378))
// CS Name: ::System.Xml::XmlEncodedRawTextWriterIndent*
class CORDL_TYPE XmlEncodedRawTextWriterIndent : public ::System::Xml::XmlEncodedRawTextWriter {
public:
  // Declarations
  /// @brief Field indentLevel, offset 0xb8, size 0x4
  __declspec(property(get = __get_indentLevel, put = __set_indentLevel)) int32_t indentLevel;

  /// @brief Field newLineOnAttributes, offset 0xbc, size 0x1
  __declspec(property(get = __get_newLineOnAttributes, put = __set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Field indentChars, offset 0xc0, size 0x8
  __declspec(property(get = __get_indentChars, put = __set_indentChars))::StringW indentChars;

  /// @brief Field mixedContent, offset 0xc8, size 0x1
  __declspec(property(get = __get_mixedContent, put = __set_mixedContent)) bool mixedContent;

  /// @brief Field mixedContentStack, offset 0xd0, size 0x8
  __declspec(property(get = __get_mixedContentStack, put = __set_mixedContentStack))::System::Xml::BitStack* mixedContentStack;

  /// @brief Field conformanceLevel, offset 0xd8, size 0x4
  __declspec(property(get = __get_conformanceLevel, put = __set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  constexpr int32_t& __get_indentLevel();

  constexpr int32_t const& __get_indentLevel() const;

  constexpr void __set_indentLevel(int32_t value);

  constexpr bool& __get_newLineOnAttributes();

  constexpr bool const& __get_newLineOnAttributes() const;

  constexpr void __set_newLineOnAttributes(bool value);

  constexpr ::StringW& __get_indentChars();

  constexpr ::StringW const& __get_indentChars() const;

  constexpr void __set_indentChars(::StringW value);

  constexpr bool& __get_mixedContent();

  constexpr bool const& __get_mixedContent() const;

  constexpr void __set_mixedContent(bool value);

  constexpr ::System::Xml::BitStack*& __get_mixedContentStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::BitStack*> const& __get_mixedContentStack() const;

  constexpr void __set_mixedContentStack(::System::Xml::BitStack* value);

  constexpr ::System::Xml::ConformanceLevel& __get_conformanceLevel();

  constexpr ::System::Xml::ConformanceLevel const& __get_conformanceLevel() const;

  constexpr void __set_conformanceLevel(::System::Xml::ConformanceLevel value);

  static inline ::System::Xml::XmlEncodedRawTextWriterIndent* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor addr 0x26dc6ac size 0x28 virtual false final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::XmlEncodedRawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor addr 0x26dc7e8 size 0x28 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteDocType addr 0x26dc810 size 0x60 virtual true final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement addr 0x26dc8b8 size 0x98 virtual true final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent addr 0x26dc950 size 0x44 virtual true final false
  inline void StartElementContent();

  /// @brief Method OnRootElement addr 0x26dc994 size 0x8 virtual true final false
  inline void OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel);

  /// @brief Method WriteEndElement addr 0x26dc99c size 0x98 virtual true final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement addr 0x26dca34 size 0x98 virtual true final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute addr 0x26dcacc size 0x3c virtual true final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteCData addr 0x26dcb08 size 0xc virtual true final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment addr 0x26dcb14 size 0x40 virtual true final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction addr 0x26dcb54 size 0x48 virtual true final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteEntityRef addr 0x26dcb9c size 0xc virtual true final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity addr 0x26dcba8 size 0xc virtual true final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity addr 0x26dcbb4 size 0xc virtual true final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace addr 0x26dcbc0 size 0xc virtual true final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString addr 0x26dcbcc size 0xc virtual true final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteChars addr 0x26dcbd8 size 0xc virtual true final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x26dcbe4 size 0xc virtual true final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x26dcbf0 size 0xc virtual true final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteBase64 addr 0x26dcbfc size 0xc virtual true final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Init addr 0x26dc6d4 size 0x114 virtual false final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteIndent addr 0x26dc870 size 0x48 virtual false final false
  inline void WriteIndent();

  // Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEncodedRawTextWriterIndent(XmlEncodedRawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEncodedRawTextWriterIndent(XmlEncodedRawTextWriterIndent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEncodedRawTextWriterIndent();

public:
  /// @brief Field indentLevel, offset: 0xb8, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field newLineOnAttributes, offset: 0xbc, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  /// @brief Field indentChars, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field mixedContent, offset: 0xc8, size: 0x1, def value: None
  bool ___mixedContent;

  /// @brief Field mixedContentStack, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::BitStack* ___mixedContentStack;

  /// @brief Field conformanceLevel, offset: 0xd8, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEncodedRawTextWriterIndent, 0xe0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___indentLevel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___newLineOnAttributes) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___indentChars) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___mixedContent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___mixedContentStack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriterIndent, ___conformanceLevel) == 0xd8, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEncodedRawTextWriterIndent*, "System.Xml", "XmlEncodedRawTextWriterIndent");
