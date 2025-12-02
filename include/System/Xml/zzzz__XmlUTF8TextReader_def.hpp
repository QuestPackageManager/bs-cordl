#pragma once
// IWYU pragma private; include "System/Xml/XmlUTF8TextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlBaseReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUTF8TextReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class OnXmlDictionaryReaderClose;
}
namespace System::Xml {
class PrefixHandle;
}
namespace System::Xml {
class StringHandle;
}
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
// Forward declare root types
namespace System::Xml {
class XmlUTF8TextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUTF8TextReader);
// Dependencies System.Xml.XmlBaseReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUTF8TextReader
class CORDL_TYPE XmlUTF8TextReader : public ::System::Xml::XmlBaseReader {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Field buffered, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_buffered, put = __cordl_internal_set_buffered)) bool buffered;

  /// @brief Field charType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_charType, put = setStaticF_charType)) ::ArrayW<uint8_t, ::Array<uint8_t>*> charType;

  /// @brief Field localName, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::System::Xml::StringHandle* localName;

  /// @brief Field maxBytesPerRead, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBytesPerRead, put = __cordl_internal_set_maxBytesPerRead)) int32_t maxBytesPerRead;

  /// @brief Field onClose, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_onClose, put = __cordl_internal_set_onClose)) ::System::Xml::OnXmlDictionaryReaderClose* onClose;

  /// @brief Field prefix, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::System::Xml::PrefixHandle* prefix;

  /// @brief Field rowOffsets, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_rowOffsets, put = __cordl_internal_set_rowOffsets)) ::ArrayW<int32_t, ::Array<int32_t>*> rowOffsets;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method BreakText, addr 0x5f0fd4c, size 0xb4, virtual false, abstract: false, final false
  inline int32_t BreakText(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method BufferElement, addr 0x5f0de08, size 0x128, virtual false, abstract: false, final false
  inline void BufferElement();

  /// @brief Method Close, addr 0x5f0d900, size 0xf0, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetPosition, addr 0x5f107f4, size 0xc0, virtual false, abstract: false, final false
  inline void GetPosition(::ByRef<int32_t> row, ::ByRef<int32_t> column);

  /// @brief Method HasLineInfo, addr 0x5f107cc, size 0x8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method IsNextCharacterNonFFFE, addr 0x5f0f0c4, size 0x64, virtual false, abstract: false, final false
  inline bool IsNextCharacterNonFFFE(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method MoveToInitial, addr 0x5f0d8c4, size 0x3c, virtual false, abstract: false, final false
  inline void MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::OnXmlDictionaryReaderClose* onClose);

  static inline ::System::Xml::XmlUTF8TextReader* New_ctor();

  /// @brief Method Read, addr 0x5f102f0, size 0x48c, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeText, addr 0x5f0ed44, size 0xe8, virtual false, abstract: false, final false
  inline int32_t ReadAttributeText(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t offsetMax);

  /// @brief Method ReadAttributes, addr 0x5f0dfd0, size 0x5e8, virtual false, abstract: false, final false
  inline void ReadAttributes();

  /// @brief Method ReadCData, addr 0x5f0f8f4, size 0x2a8, virtual false, abstract: false, final false
  inline void ReadCData();

  /// @brief Method ReadCharRef, addr 0x5f0eea8, size 0x9c, virtual false, abstract: false, final false
  inline int32_t ReadCharRef();

  /// @brief Method ReadComment, addr 0x5f0f5bc, size 0x284, virtual false, abstract: false, final false
  inline void ReadComment();

  /// @brief Method ReadDeclaration, addr 0x5f0dac0, size 0x348, virtual false, abstract: false, final false
  inline void ReadDeclaration();

  /// @brief Method ReadEndElement, addr 0x5f0f328, size 0x210, virtual false, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadEscapedText, addr 0x5f10220, size 0xd0, virtual false, abstract: false, final false
  inline void ReadEscapedText();

  /// @brief Method ReadNonFFFE, addr 0x5f0ef44, size 0x110, virtual false, abstract: false, final false
  inline void ReadNonFFFE();

  /// @brief Method ReadQualifiedName, addr 0x5f0e9d0, size 0x374, virtual false, abstract: false, final false
  inline void ReadQualifiedName(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName);

  /// @brief Method ReadStartElement, addr 0x5f0f128, size 0x200, virtual false, abstract: false, final false
  inline void ReadStartElement();

  /// @brief Method ReadText, addr 0x5f0fe00, size 0xe8, virtual false, abstract: false, final false
  inline int32_t ReadText(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t offsetMax);

  /// @brief Method ReadText, addr 0x5f10098, size 0x188, virtual false, abstract: false, final false
  inline void ReadText(bool hasLeadingByteOf0xEF);

  /// @brief Method ReadTextAndWatchForInvalidCharacters, addr 0x5f0fee8, size 0x1b0, virtual false, abstract: false, final false
  inline int32_t ReadTextAndWatchForInvalidCharacters(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t offsetMax);

  /// @brief Method ReadWhitespace, addr 0x5f0fc64, size 0xe8, virtual false, abstract: false, final false
  inline int32_t ReadWhitespace(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t offsetMax);

  /// @brief Method ReadWhitespace, addr 0x5f0fb9c, size 0xc8, virtual false, abstract: false, final false
  inline void ReadWhitespace();

  /// @brief Method SetInput, addr 0x5f0d7dc, size 0xe8, virtual true, abstract: false, final true
  inline void SetInput(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::OnXmlDictionaryReaderClose* onClose);

  /// @brief Method SkipWhitespace, addr 0x5f0d9f0, size 0xd0, virtual false, abstract: false, final false
  inline void SkipWhitespace();

  /// @brief Method VerifyNCName, addr 0x5f0e614, size 0xf0, virtual false, abstract: false, final false
  inline void VerifyNCName(::StringW s);

  constexpr bool const& __cordl_internal_get_buffered() const;

  constexpr bool& __cordl_internal_get_buffered();

  constexpr ::System::Xml::StringHandle* const& __cordl_internal_get_localName() const;

  constexpr ::System::Xml::StringHandle*& __cordl_internal_get_localName();

  constexpr int32_t const& __cordl_internal_get_maxBytesPerRead() const;

  constexpr int32_t& __cordl_internal_get_maxBytesPerRead();

  constexpr ::System::Xml::OnXmlDictionaryReaderClose* const& __cordl_internal_get_onClose() const;

  constexpr ::System::Xml::OnXmlDictionaryReaderClose*& __cordl_internal_get_onClose();

  constexpr ::System::Xml::PrefixHandle* const& __cordl_internal_get_prefix() const;

  constexpr ::System::Xml::PrefixHandle*& __cordl_internal_get_prefix();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_rowOffsets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_rowOffsets();

  constexpr void __cordl_internal_set_buffered(bool value);

  constexpr void __cordl_internal_set_localName(::System::Xml::StringHandle* value);

  constexpr void __cordl_internal_set_maxBytesPerRead(int32_t value);

  constexpr void __cordl_internal_set_onClose(::System::Xml::OnXmlDictionaryReaderClose* value);

  constexpr void __cordl_internal_set_prefix(::System::Xml::PrefixHandle* value);

  constexpr void __cordl_internal_set_rowOffsets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x5f0d714, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_charType();

  /// @brief Method get_LineNumber, addr 0x5f107d4, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x5f108b4, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

  static inline void setStaticF_charType(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUTF8TextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8TextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUTF8TextReader(XmlUTF8TextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8TextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUTF8TextReader(XmlUTF8TextReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16947 };

  /// @brief Field prefix, offset: 0xf8, size: 0x8, def value: None
  ::System::Xml::PrefixHandle* ___prefix;

  /// @brief Field localName, offset: 0x100, size: 0x8, def value: None
  ::System::Xml::StringHandle* ___localName;

  /// @brief Field rowOffsets, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___rowOffsets;

  /// @brief Field onClose, offset: 0x110, size: 0x8, def value: None
  ::System::Xml::OnXmlDictionaryReaderClose* ___onClose;

  /// @brief Field buffered, offset: 0x118, size: 0x1, def value: None
  bool ___buffered;

  /// @brief Field maxBytesPerRead, offset: 0x11c, size: 0x4, def value: None
  int32_t ___maxBytesPerRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___prefix) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___localName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___rowOffsets) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___onClose) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___buffered) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8TextReader, ___maxBytesPerRead) == 0x11c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUTF8TextReader, 0x120>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUTF8TextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUTF8TextReader*, "System.Xml", "XmlUTF8TextReader");
