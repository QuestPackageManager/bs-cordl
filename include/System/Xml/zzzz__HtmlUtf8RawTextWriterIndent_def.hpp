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
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::HtmlUtf8RawTextWriterIndent*
class CORDL_TYPE HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter {
public:
  // Declarations
  /// @brief Field endBlockPos, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_endBlockPos, put = __cordl_internal_set_endBlockPos)) int32_t endBlockPos;

  /// @brief Field indentChars, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_indentChars, put = __cordl_internal_set_indentChars))::StringW indentChars;

  /// @brief Field indentLevel, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_indentLevel, put = __cordl_internal_set_indentLevel)) int32_t indentLevel;

  /// @brief Field newLineOnAttributes, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineOnAttributes, put = __cordl_internal_set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Method FlushBuffer, addr 0x2d679ac, size 0x2c, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method Init, addr 0x2d674a8, size 0x28, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method StartElementContent, addr 0x2d67814, size 0x78, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteDocType, addr 0x2d674d0, size 0x20, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndElement, addr 0x2d6788c, size 0xa8, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteIndent, addr 0x2d677c4, size 0x50, virtual false, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteStartAttribute, addr 0x2d67934, size 0x78, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x2d674f0, size 0x1a8, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2d67468, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlUtf8RawTextWriterIndent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent const&) = delete;

  /// @brief Field indentLevel, offset: 0xbc, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field endBlockPos, offset: 0xc0, size: 0x4, def value: None
  int32_t ___endBlockPos;

  /// @brief Field indentChars, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field newLineOnAttributes, offset: 0xd0, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlUtf8RawTextWriterIndent, 0xd8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___indentLevel) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___endBlockPos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___indentChars) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlUtf8RawTextWriterIndent, ___newLineOnAttributes) == 0xd0, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriterIndent*, "System.Xml", "HtmlUtf8RawTextWriterIndent");
