#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReader)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextReader;
}
namespace System::Xml {
struct EntityHandling;
}
namespace System::Xml {
class IDtdInfo;
}
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
struct WhitespaceHandling;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
// Forward declare root types
namespace System::Xml {
class XmlTextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlTextReader);
// Dependencies System.Xml.XmlReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlTextReader
class CORDL_TYPE XmlTextReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_DtdInfo)) ::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(put = set_EntityHandling)) ::System::Xml::EntityHandling EntityHandling;

  __declspec(property(get = get_Impl)) ::System::Xml::XmlTextReaderImpl* Impl;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceManager)) ::System::Xml::XmlNamespaceManager* NamespaceManager;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_Namespaces)) bool Namespaces;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Normalization, put = set_Normalization)) bool Normalization;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_WhitespaceHandling, put = set_WhitespaceHandling)) ::System::Xml::WhitespaceHandling WhitespaceHandling;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(put = set_XmlValidatingReaderCompatibilityMode)) bool XmlValidatingReaderCompatibilityMode;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl)) ::System::Xml::XmlTextReaderImpl* impl;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method Close, addr 0x60e1600, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetAttribute, addr 0x60e14c0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x60e14a0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x60e1480, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method HasLineInfo, addr 0x60e1750, size 0x8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method LookupNamespace, addr 0x60e1680, size 0x38, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x60e1500, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method MoveToAttribute, addr 0x60e14e0, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x60e1520, size 0x20, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToElement, addr 0x60e1580, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x60e1540, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x60e1560, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::Stream* input);

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::TextReader* input);

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReader* New_ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method Read, addr 0x60e15c0, size 0x20, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x60e15a0, size 0x20, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAsBase64, addr 0x60e16e0, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x60e1700, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadString, addr 0x60e1728, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ResolveEntity, addr 0x60e16c0, size 0x20, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method Skip, addr 0x60e1640, size 0x20, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x60e17a0, size 0x2c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x60e17cc, size 0x20, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x60e17ec, size 0x2c, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::XmlTextReaderImpl* const& __cordl_internal_get_impl() const;

  constexpr ::System::Xml::XmlTextReaderImpl*& __cordl_internal_get_impl();

  constexpr void __cordl_internal_set_impl(::System::Xml::XmlTextReaderImpl* value);

  /// @brief Method .ctor, addr 0x60e1030, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x60e1188, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input);

  /// @brief Method .ctor, addr 0x60e1228, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x60e10d0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method get_AttributeCount, addr 0x60e1460, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x60e13a0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x60e1720, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x60e16b8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0x60e1384, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_DtdInfo, addr 0x60e18f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_EOF, addr 0x60e15e0, size 0x20, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_Impl, addr 0x60e18ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlTextReaderImpl* get_Impl();

  /// @brief Method get_IsDefault, addr 0x60e13e0, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x60e13c0, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LineNumber, addr 0x60e1758, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x60e177c, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x60e1314, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x60e12f8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x60e1660, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceManager, addr 0x60e18b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager();

  /// @brief Method get_NamespaceURI, addr 0x60e1330, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Namespaces, addr 0x60ddf98, size 0x18, virtual false, abstract: false, final false
  inline bool get_Namespaces();

  /// @brief Method get_NodeType, addr 0x60e12dc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Normalization, addr 0x60e1818, size 0x18, virtual false, abstract: false, final false
  inline bool get_Normalization();

  /// @brief Method get_Prefix, addr 0x60e134c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x60e1400, size 0x20, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x60e1620, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Value, addr 0x60e1368, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_WhitespaceHandling, addr 0x60e184c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::WhitespaceHandling get_WhitespaceHandling();

  /// @brief Method get_XmlLang, addr 0x60e1440, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x60e1420, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  /// @brief Method set_EntityHandling, addr 0x60e187c, size 0x18, virtual false, abstract: false, final false
  inline void set_EntityHandling(::System::Xml::EntityHandling value);

  /// @brief Method set_Normalization, addr 0x60e1830, size 0x1c, virtual false, abstract: false, final false
  inline void set_Normalization(bool value);

  /// @brief Method set_WhitespaceHandling, addr 0x60e1864, size 0x18, virtual false, abstract: false, final false
  inline void set_WhitespaceHandling(::System::Xml::WhitespaceHandling value);

  /// @brief Method set_XmlResolver, addr 0x60e1894, size 0x18, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method set_XmlValidatingReaderCompatibilityMode, addr 0x60e18d4, size 0x1c, virtual false, abstract: false, final false
  inline void set_XmlValidatingReaderCompatibilityMode(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextReader(XmlTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextReader(XmlTextReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9298 };

  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlTextReaderImpl* ___impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextReader, ___impl) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextReader, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReader*, "System.Xml", "XmlTextReader");
