#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAsyncCheckWriter)
namespace System::Xml {
struct WriteState;
}
namespace System::Threading::Tasks {
class Task;
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
// Type: System.Xml::XmlAsyncCheckWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11447))
// CS Name: ::System.Xml::XmlAsyncCheckWriter*
class CORDL_TYPE XmlAsyncCheckWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  /// @brief Field coreWriter, offset 0x10, size 0x8
  __declspec(property(get = __get_coreWriter, put = __set_coreWriter))::System::Xml::XmlWriter* coreWriter;

  /// @brief Field lastTask, offset 0x18, size 0x8
  __declspec(property(get = __get_lastTask, put = __set_lastTask))::System::Threading::Tasks::Task* lastTask;

  __declspec(property(get = get_WriteState))::System::Xml::WriteState WriteState;

  constexpr ::System::Xml::XmlWriter*& __get_coreWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& __get_coreWriter() const;

  constexpr void __set_coreWriter(::System::Xml::XmlWriter* value);

  constexpr ::System::Threading::Tasks::Task*& __get_lastTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get_lastTask() const;

  constexpr void __set_lastTask(::System::Threading::Tasks::Task* value);

  static inline ::System::Xml::XmlAsyncCheckWriter* New_ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method .ctor, addr 0x2854c58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method CheckAsync, addr 0x2854cd4, size 0x84, virtual false, abstract: false, final false
  inline void CheckAsync();

  /// @brief Method WriteStartDocument, addr 0x2854d58, size 0x28, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x2854d80, size 0x38, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteEndDocument, addr 0x2854db8, size 0x28, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteDocType, addr 0x2854de0, size 0x58, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2854e38, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndElement, addr 0x2854e88, size 0x28, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteFullEndElement, addr 0x2854eb0, size 0x28, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteStartAttribute, addr 0x2854ed8, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x2854f28, size 0x2c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteCData, addr 0x2854f54, size 0x3c, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment, addr 0x2854f90, size 0x3c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction, addr 0x2854fcc, size 0x44, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteEntityRef, addr 0x2855010, size 0x3c, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x285504c, size 0x3c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteWhitespace, addr 0x2855088, size 0x3c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString, addr 0x28550c4, size 0x3c, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2855100, size 0x44, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteChars, addr 0x2855144, size 0x54, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2855198, size 0x54, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x28551ec, size 0x3c, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteBase64, addr 0x2855228, size 0x54, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x285527c, size 0x54, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method get_WriteState, addr 0x28552d0, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method Close, addr 0x28552fc, size 0x2c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x2855328, size 0x2c, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x2855354, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  /// @brief Method WriteValue, addr 0x2855390, size 0x3c, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method Dispose, addr 0x28553cc, size 0x24, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckWriter(XmlAsyncCheckWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckWriter(XmlAsyncCheckWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckWriter();

public:
  /// @brief Field coreWriter, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___coreWriter;

  /// @brief Field lastTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___lastTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckWriter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckWriter, ___coreWriter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckWriter, ___lastTask) == 0x18, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckWriter*, "System.Xml", "XmlAsyncCheckWriter");
