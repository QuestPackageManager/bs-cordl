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
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 249, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11314))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11315))
// CS Name: ::System.Xml::HtmlEncodedRawTextWriterIndent*
class CORDL_TYPE HtmlEncodedRawTextWriterIndent : public ::System::Xml::HtmlEncodedRawTextWriter {
public:
  // Declarations
  /// @brief Field indentLevel, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_indentLevel, put = __cordl_internal_set_indentLevel)) int32_t indentLevel;

  /// @brief Field endBlockPos, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_endBlockPos, put = __cordl_internal_set_endBlockPos)) int32_t endBlockPos;

  /// @brief Field indentChars, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_indentChars, put = __cordl_internal_set_indentChars))::StringW indentChars;

  /// @brief Field newLineOnAttributes, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineOnAttributes, put = __cordl_internal_set_newLineOnAttributes)) bool newLineOnAttributes;

  constexpr int32_t& __cordl_internal_get_indentLevel();

  constexpr int32_t const& __cordl_internal_get_indentLevel() const;

  constexpr void __cordl_internal_set_indentLevel(int32_t value);

  constexpr int32_t& __cordl_internal_get_endBlockPos();

  constexpr int32_t const& __cordl_internal_get_endBlockPos() const;

  constexpr void __cordl_internal_set_endBlockPos(int32_t value);

  constexpr ::StringW& __cordl_internal_get_indentChars();

  constexpr ::StringW const& __cordl_internal_get_indentChars() const;

  constexpr void __cordl_internal_set_indentChars(::StringW value);

  constexpr bool& __cordl_internal_get_newLineOnAttributes();

  constexpr bool const& __cordl_internal_get_newLineOnAttributes() const;

  constexpr void __cordl_internal_set_newLineOnAttributes(bool value);

  static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x28550c0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::HtmlEncodedRawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2855130, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteDocType, addr 0x2855178, size 0x1c, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2855194, size 0x1b4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x2855390, size 0x70, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement, addr 0x2855400, size 0xa0, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x28554a0, size 0x70, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method FlushBuffer, addr 0x2855510, size 0x28, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method Init, addr 0x2855108, size 0x28, virtual false, abstract: false, final false
  inline void Init(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteIndent, addr 0x2855348, size 0x48, virtual false, abstract: false, final false
  inline void WriteIndent();

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlEncodedRawTextWriterIndent();

public:
  /// @brief Field indentLevel, offset: 0xe4, size: 0x4, def value: None
  int32_t ___indentLevel;

  /// @brief Field endBlockPos, offset: 0xe8, size: 0x4, def value: None
  int32_t ___endBlockPos;

  /// @brief Field indentChars, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field newLineOnAttributes, offset: 0xf8, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlEncodedRawTextWriterIndent, 0x100>, "Size mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___indentLevel) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___endBlockPos) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___indentChars) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HtmlEncodedRawTextWriterIndent, ___newLineOnAttributes) == 0xf8, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlEncodedRawTextWriterIndent*, "System.Xml", "HtmlEncodedRawTextWriterIndent");
