#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeReader)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class ReadContentAsBinaryHelper;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
class XmlNodeReaderNavigator;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeReader);
// Dependencies System.Xml.ReadState, System.Xml.XmlNodeType, System.Xml.XmlReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNodeReader
class CORDL_TYPE XmlNodeReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_DtdInfo)) ::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field bInReadBinary, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get_bInReadBinary, put = __cordl_internal_set_bInReadBinary)) bool bInReadBinary;

  /// @brief Field bResolveEntity, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_bResolveEntity, put = __cordl_internal_set_bResolveEntity)) bool bResolveEntity;

  /// @brief Field bStartFromDocument, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_bStartFromDocument, put = __cordl_internal_set_bStartFromDocument)) bool bStartFromDocument;

  /// @brief Field curDepth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curDepth, put = __cordl_internal_set_curDepth)) int32_t curDepth;

  /// @brief Field fEOF, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_fEOF, put = __cordl_internal_set_fEOF)) bool fEOF;

  /// @brief Field nodeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeType, put = __cordl_internal_set_nodeType)) ::System::Xml::XmlNodeType nodeType;

  /// @brief Field readBinaryHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_readBinaryHelper, put = __cordl_internal_set_readBinaryHelper)) ::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper;

  /// @brief Field readState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_readState, put = __cordl_internal_set_readState)) ::System::Xml::ReadState readState;

  /// @brief Field readerNav, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_readerNav, put = __cordl_internal_set_readerNav)) ::System::Xml::XmlNodeReaderNavigator* readerNav;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method Close, addr 0x60aff38, size 0xc, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method FinishReadBinary, addr 0x60af4e8, size 0x20, virtual false, abstract: false, final false
  inline void FinishReadBinary();

  /// @brief Method GetAttribute, addr 0x60af39c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t attributeIndex);

  /// @brief Method GetAttribute, addr 0x60af330, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x60af35c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method IsInReadingStates, addr 0x60af018, size 0x10, virtual false, abstract: false, final false
  inline bool IsInReadingStates();

  /// @brief Method LookupNamespace, addr 0x60b002c, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x60af40c, size 0xdc, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x60af508, size 0xec, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method MoveToAttribute, addr 0x60af5f4, size 0x1e0, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t attributeIndex);

  /// @brief Method MoveToElement, addr 0x60af998, size 0xe0, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x60af7d4, size 0xe0, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x60af8b4, size 0xe4, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XmlNodeReader* New_ctor(::System::Xml::XmlNode* node);

  /// @brief Method ReSetReadingMarks, addr 0x60afd60, size 0x24, virtual false, abstract: false, final false
  inline void ReSetReadingMarks();

  /// @brief Method Read, addr 0x60afa78, size 0x8, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method Read, addr 0x60afa80, size 0x110, virtual false, abstract: false, final false
  inline bool Read(bool fSkipChildren);

  /// @brief Method ReadAtZeroLevel, addr 0x60afe9c, size 0x78, virtual false, abstract: false, final false
  inline bool ReadAtZeroLevel(bool fSkipChildren);

  /// @brief Method ReadAttributeValue, addr 0x60b00dc, size 0x50, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAsBase64, addr 0x60b012c, size 0x84, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x60b01b0, size 0x84, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadForward, addr 0x60afd84, size 0x100, virtual false, abstract: false, final false
  inline bool ReadForward(bool fSkipChildren);

  /// @brief Method ReadNextNode, addr 0x60afb90, size 0x1d0, virtual false, abstract: false, final false
  inline bool ReadNextNode(bool fSkipChildren);

  /// @brief Method ReadString, addr 0x60aff54, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ResolveEntity, addr 0x60b0068, size 0x74, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SetEndOfFile, addr 0x60afe84, size 0x18, virtual false, abstract: false, final false
  inline void SetEndOfFile();

  /// @brief Method Skip, addr 0x60aff4c, size 0x8, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x60b0234, size 0x18, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x60b0264, size 0x68, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x60b024c, size 0x18, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr bool const& __cordl_internal_get_bInReadBinary() const;

  constexpr bool& __cordl_internal_get_bInReadBinary();

  constexpr bool const& __cordl_internal_get_bResolveEntity() const;

  constexpr bool& __cordl_internal_get_bResolveEntity();

  constexpr bool const& __cordl_internal_get_bStartFromDocument() const;

  constexpr bool& __cordl_internal_get_bStartFromDocument();

  constexpr int32_t const& __cordl_internal_get_curDepth() const;

  constexpr int32_t& __cordl_internal_get_curDepth();

  constexpr bool const& __cordl_internal_get_fEOF() const;

  constexpr bool& __cordl_internal_get_fEOF();

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodeType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodeType();

  constexpr ::System::Xml::ReadContentAsBinaryHelper* const& __cordl_internal_get_readBinaryHelper() const;

  constexpr ::System::Xml::ReadContentAsBinaryHelper*& __cordl_internal_get_readBinaryHelper();

  constexpr ::System::Xml::ReadState const& __cordl_internal_get_readState() const;

  constexpr ::System::Xml::ReadState& __cordl_internal_get_readState();

  constexpr ::System::Xml::XmlNodeReaderNavigator* const& __cordl_internal_get_readerNav() const;

  constexpr ::System::Xml::XmlNodeReaderNavigator*& __cordl_internal_get_readerNav();

  constexpr void __cordl_internal_set_bInReadBinary(bool value);

  constexpr void __cordl_internal_set_bResolveEntity(bool value);

  constexpr void __cordl_internal_set_bStartFromDocument(bool value);

  constexpr void __cordl_internal_set_curDepth(int32_t value);

  constexpr void __cordl_internal_set_fEOF(bool value);

  constexpr void __cordl_internal_set_nodeType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper* value);

  constexpr void __cordl_internal_set_readState(::System::Xml::ReadState value);

  constexpr void __cordl_internal_set_readerNav(::System::Xml::XmlNodeReaderNavigator* value);

  /// @brief Method .ctor, addr 0x60aef34, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* node);

  /// @brief Method get_AttributeCount, addr 0x60af2f8, size 0x38, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x60af194, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanResolveEntity, addr 0x60af1c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0x60af18c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_DtdInfo, addr 0x60b02cc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_EOF, addr 0x60aff14, size 0x24, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_HasAttributes, addr 0x60afff0, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_IsDefault, addr 0x60af1f4, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x60af1c8, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x60af07c, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x60af044, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x60b0014, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x60af0b4, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x60af028, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x60af104, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_ReadState, addr 0x60aff44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_SchemaInfo, addr 0x60af2b4, size 0x44, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Value, addr 0x60af154, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x60af264, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x60af220, size 0x44, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeReader(XmlNodeReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeReader(XmlNodeReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9380 };

  /// @brief Field readerNav, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNodeReaderNavigator* ___readerNav;

  /// @brief Field nodeType, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___nodeType;

  /// @brief Field curDepth, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curDepth;

  /// @brief Field readState, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::ReadState ___readState;

  /// @brief Field fEOF, offset: 0x24, size: 0x1, def value: None
  bool ___fEOF;

  /// @brief Field bResolveEntity, offset: 0x25, size: 0x1, def value: None
  bool ___bResolveEntity;

  /// @brief Field bStartFromDocument, offset: 0x26, size: 0x1, def value: None
  bool ___bStartFromDocument;

  /// @brief Field bInReadBinary, offset: 0x27, size: 0x1, def value: None
  bool ___bInReadBinary;

  /// @brief Field readBinaryHelper, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::ReadContentAsBinaryHelper* ___readBinaryHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNodeReader, ___readerNav) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___nodeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___curDepth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___readState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___fEOF) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___bResolveEntity) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___bStartFromDocument) == 0x26, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___bInReadBinary) == 0x27, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReader, ___readBinaryHelper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeReader, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeReader*, "System.Xml", "XmlNodeReader");
