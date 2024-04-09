#pragma once
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
// Type: System.Xml::XmlTextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlTextReader*
class CORDL_TYPE XmlTextReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_DtdInfo))::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(put = set_EntityHandling))::System::Xml::EntityHandling EntityHandling;

  __declspec(property(get = get_Impl))::System::Xml::XmlTextReaderImpl* Impl;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceManager))::System::Xml::XmlNamespaceManager* NamespaceManager;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Namespaces)) bool Namespaces;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Normalization, put = set_Normalization)) bool Normalization;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(put = set_WhitespaceHandling))::System::Xml::WhitespaceHandling WhitespaceHandling;

  __declspec(property(get = get_XmlLang))::StringW XmlLang;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_XmlSpace))::System::Xml::XmlSpace XmlSpace;

  __declspec(property(put = set_XmlValidatingReaderCompatibilityMode)) bool XmlValidatingReaderCompatibilityMode;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl))::System::Xml::XmlTextReaderImpl* impl;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method Close, addr 0x2d72bbc, size 0x24, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetAttribute, addr 0x2d72a78, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x2d72a54, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x2d72a30, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method HasLineInfo, addr 0x2d72ce0, size 0x8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method LookupNamespace, addr 0x2d72c4c, size 0x38, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x2d72a9c, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x2d72ac0, size 0x24, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToElement, addr 0x2d72b2c, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x2d72ae4, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x2d72b08, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::Stream* input);

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::TextReader* input);

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReader* New_ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method Read, addr 0x2d72b74, size 0x24, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x2d72b50, size 0x24, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadString, addr 0x2d72cb8, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ResolveEntity, addr 0x2d72c8c, size 0x24, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method Skip, addr 0x2d72c04, size 0x24, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x2d72d20, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x2d72d3c, size 0x24, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x2d72d60, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::XmlTextReaderImpl*& __cordl_internal_get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& __cordl_internal_get_impl() const;

  constexpr void __cordl_internal_set_impl(::System::Xml::XmlTextReaderImpl* value);

  /// @brief Method .ctor, addr 0x2d725a4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x2d72704, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input);

  /// @brief Method .ctor, addr 0x2d727a8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x2d72648, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method get_AttributeCount, addr 0x2d72a0c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x2d72934, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x2d72cb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x2d72c84, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0x2d72914, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_DtdInfo, addr 0x2d72e58, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_EOF, addr 0x2d72b98, size 0x24, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_Impl, addr 0x2d72e0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlTextReaderImpl* get_Impl();

  /// @brief Method get_IsDefault, addr 0x2d7297c, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x2d72958, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LineNumber, addr 0x2d72ce8, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x2d72d04, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x2d72894, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x2d72874, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x2d72c28, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceManager, addr 0x2d72e14, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager();

  /// @brief Method get_NamespaceURI, addr 0x2d728b4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Namespaces, addr 0x2d6fb60, size 0x1c, virtual false, abstract: false, final false
  inline bool get_Namespaces();

  /// @brief Method get_NodeType, addr 0x2d72854, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Normalization, addr 0x2d72d7c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_Normalization();

  /// @brief Method get_Prefix, addr 0x2d728d4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x2d729a0, size 0x24, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x2d72be0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Value, addr 0x2d728f4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x2d729e8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x2d729c4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  /// @brief Method set_EntityHandling, addr 0x2d72dd4, size 0x1c, virtual false, abstract: false, final false
  inline void set_EntityHandling(::System::Xml::EntityHandling value);

  /// @brief Method set_Normalization, addr 0x2d72d98, size 0x20, virtual false, abstract: false, final false
  inline void set_Normalization(bool value);

  /// @brief Method set_WhitespaceHandling, addr 0x2d72db8, size 0x1c, virtual false, abstract: false, final false
  inline void set_WhitespaceHandling(::System::Xml::WhitespaceHandling value);

  /// @brief Method set_XmlResolver, addr 0x2d72df0, size 0x1c, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method set_XmlValidatingReaderCompatibilityMode, addr 0x2d72e38, size 0x20, virtual false, abstract: false, final false
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

  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlTextReaderImpl* ___impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReader, ___impl) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReader*, "System.Xml", "XmlTextReader");
