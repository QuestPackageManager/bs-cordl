#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__HtmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlEncodedRawTextWriterIndent)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlEncodedRawTextWriterIndent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlEncodedRawTextWriterIndent);
// Type: System.Xml::HtmlEncodedRawTextWriterIndent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 257, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::HtmlEncodedRawTextWriterIndent*
class CORDL_TYPE HtmlEncodedRawTextWriterIndent : public ::System::Xml::HtmlEncodedRawTextWriter {
public:
  // Declarations
  /// @brief Field endBlockPos, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_endBlockPos, put = __cordl_internal_set_endBlockPos)) int32_t endBlockPos;

  /// @brief Field indentChars, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_indentChars, put = __cordl_internal_set_indentChars))::StringW indentChars;

  /// @brief Field indentLevel, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_indentLevel, put = __cordl_internal_set_indentLevel)) int32_t indentLevel;

  /// @brief Field newLineOnAttributes, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineOnAttributes, put = __cordl_internal_set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Method FlushBuffer, addr 0x2d95d30, size 0x2c, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method Init, addr 0x2d95908, size 0x28, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method StartElementContent, addr 0x2d95bac, size 0x70, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteDocType, addr 0x2d9597c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndElement, addr 0x2d95c1c, size 0xa0, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteIndent, addr 0x2d95b5c, size 0x50, virtual false, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteStartAttribute, addr 0x2d95cbc, size 0x74, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x2d95998, size 0x1c4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  constexpr int32_t const& __cordl_internal_get_endBlockPos() const;

  constexpr int32_t& __cordl_internal_get_endBlockPos();

  constexpr ::StringW const& __cordl_internal_get_indentChars() const;

  constexpr ::StringW& __cordl_internal_get_indentChars();

  constexpr int32_t const& __cordl_internal_get_indentLevel() const;

  constexpr int32_t& __cordl_internal_get_indentLevel();

  constexpr bool const& __cordl_internal_get_newLineOnAttributes() const;

  constexpr bool& __cordl_internal_get_newLineOnAttributes();

  constexpr void __cordl_internal_set_endBlockPos(int32_t value);

  constexpr void __cordl_internal_set_indentChars(::StringW value);

  constexpr void __cordl_internal_set_indentLevel(int32_t value);

  constexpr void __cordl_internal_set_newLineOnAttributes(bool value);

  /// @brief Method .ctor, addr 0x2d95930, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2d958bc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlEncodedRawTextWriterIndent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent const&) = delete;

  /// @brief Field indentLevel, offset: 0xec, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field endBlockPos, offset: 0xf0, size: 0x4, def value: None
  int32_t ___endBlockPos;

  /// @brief Field indentChars, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field newLineOnAttributes, offset: 0x100, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlEncodedRawTextWriterIndent, 0x108>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___indentLevel) == 0xec, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___endBlockPos) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___indentChars) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___newLineOnAttributes) == 0x100, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriterIndent*, "System.Xml", "HtmlEncodedRawTextWriterIndent");
