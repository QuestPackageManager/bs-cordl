#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUtf8RawTextWriterIndent)
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class BitStack;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUtf8RawTextWriterIndent);
// Type: System.Xml::XmlUtf8RawTextWriterIndent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11475)), TypeDefinitionIndex(TypeDefinitionIndex(11413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11476))
// CS Name: ::System.Xml::XmlUtf8RawTextWriterIndent*
class CORDL_TYPE XmlUtf8RawTextWriterIndent : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field indentLevel, offset 0x88, size 0x4
  __declspec(property(get = __get_indentLevel, put = __set_indentLevel)) int32_t indentLevel;

  /// @brief Field newLineOnAttributes, offset 0x8c, size 0x1
  __declspec(property(get = __get_newLineOnAttributes, put = __set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Field indentChars, offset 0x90, size 0x8
  __declspec(property(get = __get_indentChars, put = __set_indentChars))::StringW indentChars;

  /// @brief Field mixedContent, offset 0x98, size 0x1
  __declspec(property(get = __get_mixedContent, put = __set_mixedContent)) bool mixedContent;

  /// @brief Field mixedContentStack, offset 0xa0, size 0x8
  __declspec(property(get = __get_mixedContentStack, put = __set_mixedContentStack))::System::Xml::BitStack* mixedContentStack;

  /// @brief Field conformanceLevel, offset 0xa8, size 0x4
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

  static inline ::System::Xml::XmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor addr 0x28785f4 size 0x28 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteDocType addr 0x2878728 size 0x60 virtual true final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement addr 0x28787d0 size 0x6c virtual true final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent addr 0x287883c size 0x50 virtual true final false
  inline void StartElementContent();

  /// @brief Method OnRootElement addr 0x287888c size 0x8 virtual true final false
  inline void OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel);

  /// @brief Method WriteEndElement addr 0x2878894 size 0x80 virtual true final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement addr 0x2878914 size 0x80 virtual true final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute addr 0x2878994 size 0x3c virtual true final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteCData addr 0x28789d0 size 0xc virtual true final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment addr 0x28789dc size 0x40 virtual true final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction addr 0x2878a1c size 0x48 virtual true final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteEntityRef addr 0x2878a64 size 0xc virtual true final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity addr 0x2878a70 size 0xc virtual true final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity addr 0x2878a7c size 0xc virtual true final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace addr 0x2878a88 size 0xc virtual true final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString addr 0x2878a94 size 0xc virtual true final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteChars addr 0x2878aa0 size 0xc virtual true final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x2878aac size 0xc virtual true final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x2878ab8 size 0xc virtual true final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteBase64 addr 0x2878ac4 size 0x10 virtual true final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Init addr 0x287861c size 0x10c virtual false final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteIndent addr 0x2878788 size 0x48 virtual false final false
  inline void WriteIndent();

  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUtf8RawTextWriterIndent();

public:
  /// @brief Field indentLevel, offset: 0x88, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field newLineOnAttributes, offset: 0x8c, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  /// @brief Field indentChars, offset: 0x90, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field mixedContent, offset: 0x98, size: 0x1, def value: None
  bool ___mixedContent;

  /// @brief Field mixedContentStack, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::BitStack* ___mixedContentStack;

  /// @brief Field conformanceLevel, offset: 0xa8, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUtf8RawTextWriterIndent, 0xb0>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUtf8RawTextWriterIndent*, "System.Xml", "XmlUtf8RawTextWriterIndent");
