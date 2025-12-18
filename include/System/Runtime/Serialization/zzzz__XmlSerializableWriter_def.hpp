#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlSerializableWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializableWriter)
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlSerializableWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlSerializableWriter);
// Dependencies System.Xml.XmlWriter
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlSerializableWriter
class CORDL_TYPE XmlSerializableWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::System::Object* obj;

  /// @brief Field xmlWriter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlWriter, put = __cordl_internal_set_xmlWriter)) ::System::Xml::XmlWriter* xmlWriter;

  /// @brief Method BeginWrite, addr 0x5fc3d74, size 0x10, virtual false, abstract: false, final false
  inline void BeginWrite(::System::Xml::XmlWriter* xmlWriter, ::System::Object* obj);

  /// @brief Method Close, addr 0x5fc4184, size 0x34, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndWrite, addr 0x5fc3d84, size 0xf4, virtual false, abstract: false, final false
  inline void EndWrite();

  /// @brief Method Flush, addr 0x5fc43b4, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x5fc43f4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Runtime::Serialization::XmlSerializableWriter* New_ctor();

  /// @brief Method WriteBase64, addr 0x5fc4354, size 0x20, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x5fc4374, size 0x20, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x5fc41f4, size 0x20, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x5fc4274, size 0x20, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x5fc42f4, size 0x20, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x5fc4214, size 0x20, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x5fc3f2c, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x5fc41d4, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x5fc3eb8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x5fc3f64, size 0x110, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x5fc4254, size 0x20, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x5fc4074, size 0x110, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x5fc4234, size 0x20, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteQualifiedName, addr 0x5fc43d4, size 0x20, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method WriteRaw, addr 0x5fc4314, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x5fc4334, size 0x20, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x5fc41b8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartDocument, addr 0x5fc3e78, size 0x40, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x5fc3ed4, size 0x58, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x5fc3f30, size 0x34, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x5fc42b4, size 0x20, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x5fc42d4, size 0x20, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x5fc4294, size 0x20, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Object* const& __cordl_internal_get_obj() const;

  constexpr ::System::Object*& __cordl_internal_get_obj();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_xmlWriter() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_xmlWriter();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_obj(::System::Object* value);

  constexpr void __cordl_internal_set_xmlWriter(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x5fc4454, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_WriteState, addr 0x5fc4394, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x5fc4434, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5fc4414, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializableWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializableWriter(XmlSerializableWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializableWriter(XmlSerializableWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17116 };

  /// @brief Field xmlWriter, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___xmlWriter;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableWriter, ___xmlWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableWriter, ___depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableWriter, ___obj) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlSerializableWriter, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlSerializableWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlSerializableWriter*, "System.Runtime.Serialization", "XmlSerializableWriter");
