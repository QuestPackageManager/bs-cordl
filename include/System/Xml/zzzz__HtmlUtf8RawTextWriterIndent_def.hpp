#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__HtmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlUtf8RawTextWriterIndent)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlUtf8RawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlUtf8RawTextWriterIndent);
// Type: System.Xml::HtmlUtf8RawTextWriterIndent
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11348))
// CS Name: ::System.Xml::HtmlUtf8RawTextWriterIndent*
class CORDL_TYPE HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field indentLevel, offset 0xb4, size 0x4
  __declspec(property(get = __get_indentLevel, put = __set_indentLevel)) int32_t indentLevel;

  /// @brief Field endBlockPos, offset 0xb8, size 0x4
  __declspec(property(get = __get_endBlockPos, put = __set_endBlockPos)) int32_t endBlockPos;

  /// @brief Field indentChars, offset 0xc0, size 0x8
  __declspec(property(get = __get_indentChars, put = __set_indentChars))::StringW indentChars;

  /// @brief Field newLineOnAttributes, offset 0xc8, size 0x1
  __declspec(property(get = __get_newLineOnAttributes, put = __set_newLineOnAttributes)) bool newLineOnAttributes;

  constexpr int32_t& __get_indentLevel();

  constexpr int32_t const& __get_indentLevel() const;

  constexpr void __set_indentLevel(int32_t value);

  constexpr int32_t& __get_endBlockPos();

  constexpr int32_t const& __get_endBlockPos() const;

  constexpr void __set_endBlockPos(int32_t value);

  constexpr ::StringW& __get_indentChars();

  constexpr ::StringW const& __get_indentChars() const;

  constexpr void __set_indentChars(::StringW value);

  constexpr bool& __get_newLineOnAttributes();

  constexpr bool const& __get_newLineOnAttributes() const;

  constexpr void __set_newLineOnAttributes(bool value);

  static inline ::System::Xml::HtmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor addr 0x26d7520 size 0x4c virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteDocType addr 0x26d7594 size 0x1c virtual true final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement addr 0x26d75b0 size 0x1a4 virtual true final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent addr 0x26d77a4 size 0x74 virtual true final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement addr 0x26d7818 size 0xa0 virtual true final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute addr 0x26d78b8 size 0x74 virtual true final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method FlushBuffer addr 0x26d792c size 0x2c virtual true final false
  inline void FlushBuffer();

  /// @brief Method Init addr 0x26d756c size 0x28 virtual false final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteIndent addr 0x26d7754 size 0x50 virtual false final false
  inline void WriteIndent();

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlUtf8RawTextWriterIndent();

public:
  /// @brief Field indentLevel, offset: 0xb4, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field endBlockPos, offset: 0xb8, size: 0x4, def value: None
  int32_t ___endBlockPos;

  /// @brief Field indentChars, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field newLineOnAttributes, offset: 0xc8, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlUtf8RawTextWriterIndent, 0xd0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___indentLevel) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___endBlockPos) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___indentChars) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___newLineOnAttributes) == 0xc8, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriterIndent*, "System.Xml", "HtmlUtf8RawTextWriterIndent");
