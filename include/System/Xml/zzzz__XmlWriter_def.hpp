#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWriter)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Xml {
class XmlWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlWriter);
// Type: System.Xml::XmlWriter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlWriter*
class CORDL_TYPE XmlWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_WriteState))::System::Xml::WriteState WriteState;

  /// @brief Field writeNodeBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writeNodeBuffer, put = __cordl_internal_set_writeNodeBuffer))::ArrayW<char16_t, ::Array<char16_t>*> writeNodeBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x2e85778, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Create, addr 0x2e85f3c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlWriter* Create(::System::IO::Stream* output, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method Create, addr 0x2e864dc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlWriter* Create(::System::IO::TextWriter* output, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method Dispose, addr 0x2e85ee4, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2e85ef8, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlWriter* New_ctor();

  /// @brief Method WriteAttributeString, addr 0x2e85654, size 0x5c, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteAttributeString, addr 0x2e856b0, size 0x5c, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW localName, ::StringW value);

  /// @brief Method WriteAttributeString, addr 0x2e8570c, size 0x50, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteAttributes, addr 0x2e85794, size 0x284, virtual true, abstract: false, final false
  inline void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteBase64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x2e8575c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteElementString, addr 0x2e85e80, size 0x64, virtual false, abstract: false, final false
  inline void WriteElementString(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteEndAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteNode, addr 0x2e85a18, size 0x468, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteProcessingInstruction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x2e8563c, size 0x18, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x2e8577c, size 0x18, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_writeNodeBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_writeNodeBuffer();

  constexpr void __cordl_internal_set_writeNodeBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor, addr 0x2e86864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_WriteState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWriter(XmlWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWriter(XmlWriter const&) = delete;

  /// @brief Field writeNodeBuffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___writeNodeBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWriter, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlWriter, ___writeNodeBuffer) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriter*, "System.Xml", "XmlWriter");
