#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReader_XmlWrappedReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryReader_XmlWrappedReader)
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class XmlDictionaryReader_XmlWrappedReader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader);
// Dependencies System.Xml.XmlDictionaryReader
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryReader/XmlWrappedReader
class CORDL_TYPE XmlDictionaryReader_XmlWrappedReader : public ::System::Xml::XmlDictionaryReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field nsMgr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nsMgr, put = __cordl_internal_set_nsMgr)) ::System::Xml::XmlNamespaceManager* nsMgr;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method Close, addr 0x5f6eda4, size 0x30, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetAttribute, addr 0x5f6ee10, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t index);

  /// @brief Method GetAttribute, addr 0x5f6ee30, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x5f6ee50, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceUri);

  /// @brief Method HasLineInfo, addr 0x5f6f408, size 0xb8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method IsStartElement, addr 0x5f6eeb0, size 0x20, virtual true, abstract: false, final false
  inline bool IsStartElement(::StringW localName, ::StringW namespaceUri);

  /// @brief Method LookupNamespace, addr 0x5f6eeec, size 0x20, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW namespaceUri);

  /// @brief Method MoveToAttribute, addr 0x5f6ef2c, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5f6ef4c, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW namespaceUri);

  /// @brief Method MoveToAttribute, addr 0x5f6ef0c, size 0x20, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t index);

  /// @brief Method MoveToElement, addr 0x5f6ef6c, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x5f6ef8c, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x5f6efac, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader* New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* nsMgr);

  /// @brief Method Read, addr 0x5f6f07c, size 0x20, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x5f6f09c, size 0x20, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAs, addr 0x5f6f3e8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver);

  /// @brief Method ReadContentAsBase64, addr 0x5f6f1b8, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x5f6f1d8, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadContentAsBoolean, addr 0x5f6f238, size 0x20, virtual true, abstract: false, final false
  inline bool ReadContentAsBoolean();

  /// @brief Method ReadContentAsDateTime, addr 0x5f6f258, size 0x20, virtual true, abstract: false, final false
  inline ::System::DateTime ReadContentAsDateTime();

  /// @brief Method ReadContentAsDecimal, addr 0x5f6f278, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Decimal ReadContentAsDecimal();

  /// @brief Method ReadContentAsDouble, addr 0x5f6f348, size 0x20, virtual true, abstract: false, final false
  inline double_t ReadContentAsDouble();

  /// @brief Method ReadContentAsFloat, addr 0x5f6f3a8, size 0x20, virtual true, abstract: false, final false
  inline float_t ReadContentAsFloat();

  /// @brief Method ReadContentAsInt, addr 0x5f6f368, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsInt();

  /// @brief Method ReadContentAsLong, addr 0x5f6f388, size 0x20, virtual true, abstract: false, final false
  inline int64_t ReadContentAsLong();

  /// @brief Method ReadContentAsString, addr 0x5f6f3c8, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ReadContentAsString();

  /// @brief Method ReadEndElement, addr 0x5f6f0dc, size 0x20, virtual true, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadInnerXml, addr 0x5f6f0bc, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ReadInnerXml();

  /// @brief Method ReadString, addr 0x5f6f0fc, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadValueChunk, addr 0x5f6f1f8, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method ResolveEntity, addr 0x5f6f13c, size 0x20, virtual true, abstract: false, final false
  inline void ResolveEntity();

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_nsMgr() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_nsMgr();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_nsMgr(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x5f6ba48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* nsMgr);

  /// @brief Method get_AttributeCount, addr 0x5f6ed44, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x5f6ed64, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x5f6ed84, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_Depth, addr 0x5f6edd4, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x5f6edf0, size 0x20, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_IsDefault, addr 0x5f6ee70, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x5f6ee90, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LineNumber, addr 0x5f6f4c0, size 0xc0, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x5f6f580, size 0xc0, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x5f6eed0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x5f6efcc, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x5f6f004, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x5f6efe8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x5f6f024, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x5f6f040, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x5f6f05c, size 0x20, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5f6f11c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Value, addr 0x5f6f15c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x5f6f218, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlLang, addr 0x5f6f178, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f6f198, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryReader_XmlWrappedReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader_XmlWrappedReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryReader_XmlWrappedReader(XmlDictionaryReader_XmlWrappedReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader_XmlWrappedReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryReader_XmlWrappedReader(XmlDictionaryReader_XmlWrappedReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16950 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field nsMgr, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___nsMgr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader, ___nsMgr) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*, "System.Xml", "XmlDictionaryReader/XmlWrappedReader");
