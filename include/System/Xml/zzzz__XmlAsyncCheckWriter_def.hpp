#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAsyncCheckWriter)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckWriter);
// Dependencies System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAsyncCheckWriter
class CORDL_TYPE XmlAsyncCheckWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  /// @brief Field coreWriter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_coreWriter, put = __cordl_internal_set_coreWriter)) ::System::Xml::XmlWriter* coreWriter;

  /// @brief Field lastTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastTask, put = __cordl_internal_set_lastTask)) ::System::Threading::Tasks::Task* lastTask;

  /// @brief Method CheckAsync, addr 0x430efa8, size 0x7c, virtual false, abstract: false, final false
  inline void CheckAsync();

  /// @brief Method Close, addr 0x430f5c8, size 0x2c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x430f720, size 0x24, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x430f5f4, size 0x2c, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x430f620, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlAsyncCheckWriter* New_ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteAttributes, addr 0x430f698, size 0x44, virtual true, abstract: false, final false
  inline void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteBase64, addr 0x430f4f4, size 0x54, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x430f548, size 0x54, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x430f220, size 0x3c, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x430f318, size 0x3c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x430f410, size 0x54, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x430f25c, size 0x3c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x430f0ac, size 0x58, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x430f1f4, size 0x2c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x430f084, size 0x28, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x430f154, size 0x28, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x430f2dc, size 0x3c, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x430f17c, size 0x28, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteNode, addr 0x430f6dc, size 0x44, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteProcessingInstruction, addr 0x430f298, size 0x44, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x430f464, size 0x54, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x430f4b8, size 0x3c, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x430f1a4, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartDocument, addr 0x430f024, size 0x28, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x430f04c, size 0x38, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x430f104, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x430f390, size 0x3c, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x430f3cc, size 0x44, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x430f65c, size 0x3c, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x430f354, size 0x3c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_coreWriter() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_coreWriter();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_lastTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_lastTask();

  constexpr void __cordl_internal_set_coreWriter(::System::Xml::XmlWriter* value);

  constexpr void __cordl_internal_set_lastTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x430ef2c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method get_WriteState, addr 0x430f59c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckWriter(XmlAsyncCheckWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckWriter(XmlAsyncCheckWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7218 };

  /// @brief Field coreWriter, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___coreWriter;

  /// @brief Field lastTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___lastTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAsyncCheckWriter, ___coreWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckWriter, ___lastTask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckWriter, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckWriter*, "System.Xml", "XmlAsyncCheckWriter");
