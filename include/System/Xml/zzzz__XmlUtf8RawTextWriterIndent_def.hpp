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
namespace System::IO {
class Stream;
}
namespace System::Xml {
class BitStack;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUtf8RawTextWriterIndent);
// Type: System.Xml::XmlUtf8RawTextWriterIndent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlUtf8RawTextWriterIndent*
class CORDL_TYPE XmlUtf8RawTextWriterIndent : public ::System::Xml::XmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field conformanceLevel, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_conformanceLevel, put = __cordl_internal_set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field indentChars, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_indentChars, put = __cordl_internal_set_indentChars))::StringW indentChars;

  /// @brief Field indentLevel, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_indentLevel, put = __cordl_internal_set_indentLevel)) int32_t indentLevel;

  /// @brief Field mixedContent, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_mixedContent, put = __cordl_internal_set_mixedContent)) bool mixedContent;

  /// @brief Field mixedContentStack, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_mixedContentStack, put = __cordl_internal_set_mixedContentStack))::System::Xml::BitStack* mixedContentStack;

  /// @brief Field newLineOnAttributes, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineOnAttributes, put = __cordl_internal_set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Method Init, addr 0x2d7f358, size 0x10c, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::XmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method OnRootElement, addr 0x2d7f5c8, size 0x8, virtual true, abstract: false, final false
  inline void OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel);

  /// @brief Method StartElementContent, addr 0x2d7f578, size 0x50, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteBase64, addr 0x2d7f800, size 0x10, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x2d7f70c, size 0xc, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x2d7f7ac, size 0xc, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x2d7f7dc, size 0xc, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x2d7f718, size 0x40, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x2d7f464, size 0x60, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndElement, addr 0x2d7f5d0, size 0x80, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x2d7f7a0, size 0xc, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x2d7f650, size 0x80, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteIndent, addr 0x2d7f4c4, size 0x48, virtual false, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteProcessingInstruction, addr 0x2d7f758, size 0x48, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW target, ::StringW text);

  /// @brief Method WriteRaw, addr 0x2d7f7e8, size 0xc, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2d7f7f4, size 0xc, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x2d7f6d0, size 0x3c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x2d7f50c, size 0x6c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x2d7f7d0, size 0xc, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2d7f7b8, size 0xc, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x2d7f7c4, size 0xc, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::System::Xml::ConformanceLevel const& __cordl_internal_get_conformanceLevel() const;

  constexpr ::System::Xml::ConformanceLevel& __cordl_internal_get_conformanceLevel();

  constexpr ::StringW const& __cordl_internal_get_indentChars() const;

  constexpr ::StringW& __cordl_internal_get_indentChars();

  constexpr int32_t const& __cordl_internal_get_indentLevel() const;

  constexpr int32_t& __cordl_internal_get_indentLevel();

  constexpr bool const& __cordl_internal_get_mixedContent() const;

  constexpr bool& __cordl_internal_get_mixedContent();

  constexpr ::System::Xml::BitStack*& __cordl_internal_get_mixedContentStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::BitStack*> const& __cordl_internal_get_mixedContentStack() const;

  constexpr bool const& __cordl_internal_get_newLineOnAttributes() const;

  constexpr bool& __cordl_internal_get_newLineOnAttributes();

  constexpr void __cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr void __cordl_internal_set_indentChars(::StringW value);

  constexpr void __cordl_internal_set_indentLevel(int32_t value);

  constexpr void __cordl_internal_set_mixedContent(bool value);

  constexpr void __cordl_internal_set_mixedContentStack(::System::Xml::BitStack* value);

  constexpr void __cordl_internal_set_newLineOnAttributes(bool value);

  /// @brief Method .ctor, addr 0x2d7f330, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUtf8RawTextWriterIndent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent const&) = delete;

  /// @brief Field indentLevel, offset: 0x90, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field newLineOnAttributes, offset: 0x94, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  /// @brief Field indentChars, offset: 0x98, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field mixedContent, offset: 0xa0, size: 0x1, def value: None
  bool ___mixedContent;

  /// @brief Field mixedContentStack, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::BitStack* ___mixedContentStack;

  /// @brief Field conformanceLevel, offset: 0xb0, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUtf8RawTextWriterIndent, 0xb8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___indentLevel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___newLineOnAttributes) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___indentChars) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___mixedContent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___mixedContentStack) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriterIndent, ___conformanceLevel) == 0xb0, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUtf8RawTextWriterIndent*, "System.Xml", "XmlUtf8RawTextWriterIndent");
