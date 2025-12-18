#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBaseReader)
namespace System::Collections {
class IComparer;
}
namespace System::Text {
class Base64Encoding;
}
namespace System::Text {
class BinHexEncoding;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class NamespaceManager_XmlBaseReader_XmlAttribute;
}
namespace System::Xml {
struct PrefixHandleType;
}
namespace System::Xml {
class PrefixHandle;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class StringHandle;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class ValueHandle;
}
namespace System::Xml {
class XmlBaseReader_AttributeSorter;
}
namespace System::Xml {
class XmlBaseReader_NamespaceManager;
}
namespace System::Xml {
class XmlBaseReader_Namespace;
}
namespace System::Xml {
struct XmlBaseReader_QNameType;
}
namespace System::Xml {
class XmlBaseReader_QuotaNameTable;
}
namespace System::Xml {
class XmlBaseReader_XmlAtomicTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlAttributeNode;
}
namespace System::Xml {
class XmlBaseReader_XmlAttributeTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlCDataNode;
}
namespace System::Xml {
class XmlBaseReader_XmlClosedNode;
}
namespace System::Xml {
class XmlBaseReader_XmlCommentNode;
}
namespace System::Xml {
class XmlBaseReader_XmlComplexTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlDeclarationNode;
}
namespace System::Xml {
class XmlBaseReader_XmlElementNode;
}
namespace System::Xml {
class XmlBaseReader_XmlEndElementNode;
}
namespace System::Xml {
class XmlBaseReader_XmlEndOfFileNode;
}
namespace System::Xml {
class XmlBaseReader_XmlInitialNode;
}
namespace System::Xml {
class XmlBaseReader_XmlNode;
}
namespace System::Xml {
class XmlBaseReader_XmlTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlWhitespaceTextNode;
}
namespace System::Xml {
class XmlBufferReader;
}
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct XmlNode_XmlBaseReader_XmlNodeFlags;
}
namespace System::Xml {
class XmlSigningNodeWriter;
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
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
struct XmlBaseReader_QNameType;
}
namespace System::Xml {
struct XmlNode_XmlBaseReader_XmlNodeFlags;
}
namespace System::Xml {
class NamespaceManager_XmlBaseReader_XmlAttribute;
}
namespace System::Xml {
class XmlBaseReader;
}
namespace System::Xml {
class XmlBaseReader_AttributeSorter;
}
namespace System::Xml {
class XmlBaseReader_Namespace;
}
namespace System::Xml {
class XmlBaseReader_NamespaceManager;
}
namespace System::Xml {
class XmlBaseReader_QuotaNameTable;
}
namespace System::Xml {
class XmlBaseReader_XmlAtomicTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlAttributeNode;
}
namespace System::Xml {
class XmlBaseReader_XmlAttributeTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlCDataNode;
}
namespace System::Xml {
class XmlBaseReader_XmlClosedNode;
}
namespace System::Xml {
class XmlBaseReader_XmlCommentNode;
}
namespace System::Xml {
class XmlBaseReader_XmlComplexTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlDeclarationNode;
}
namespace System::Xml {
class XmlBaseReader_XmlElementNode;
}
namespace System::Xml {
class XmlBaseReader_XmlEndElementNode;
}
namespace System::Xml {
class XmlBaseReader_XmlEndOfFileNode;
}
namespace System::Xml {
class XmlBaseReader_XmlInitialNode;
}
namespace System::Xml {
class XmlBaseReader_XmlNode;
}
namespace System::Xml {
class XmlBaseReader_XmlTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlWhitespaceTextNode;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlBaseReader_QNameType);
MARK_VAL_T(::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags);
MARK_REF_PTR_T(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_AttributeSorter);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_Namespace);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_NamespaceManager);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_QuotaNameTable);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlAtomicTextNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlAttributeNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlAttributeTextNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlCDataNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlClosedNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlCommentNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlComplexTextNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlDeclarationNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlElementNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlEndElementNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlEndOfFileNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlInitialNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlTextNode);
MARK_REF_PTR_T(::System::Xml::XmlBaseReader_XmlWhitespaceTextNode);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBaseReader/QNameType
struct CORDL_TYPE XmlBaseReader_QNameType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlBaseReader_QNameType_Unwrapped
  enum struct __XmlBaseReader_QNameType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Xmlns = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlBaseReader_QNameType_Unwrapped() const noexcept {
    return static_cast<__XmlBaseReader_QNameType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_QNameType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlBaseReader_QNameType(int32_t value__) noexcept;

  /// @brief Field Normal value: I32(0)
  static ::System::Xml::XmlBaseReader_QNameType const Normal;

  /// @brief Field Xmlns value: I32(1)
  static ::System::Xml::XmlBaseReader_QNameType const Xmlns;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_QNameType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_QNameType, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBaseReader/XmlNode/XmlNodeFlags
struct CORDL_TYPE XmlNode_XmlBaseReader_XmlNodeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped
  enum struct __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CanGetAttribute = static_cast<int32_t>(0x1),
    __E_CanMoveToElement = static_cast<int32_t>(0x2),
    __E_HasValue = static_cast<int32_t>(0x4),
    __E_AtomicValue = static_cast<int32_t>(0x8),
    __E_SkipValue = static_cast<int32_t>(0x10),
    __E_HasContent = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped() const noexcept {
    return static_cast<__XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNode_XmlBaseReader_XmlNodeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlNode_XmlBaseReader_XmlNodeFlags(int32_t value__) noexcept;

  /// @brief Field AtomicValue value: I32(8)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const AtomicValue;

  /// @brief Field CanGetAttribute value: I32(1)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const CanGetAttribute;

  /// @brief Field CanMoveToElement value: I32(2)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const CanMoveToElement;

  /// @brief Field HasContent value: I32(32)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const HasContent;

  /// @brief Field HasValue value: I32(4)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const HasValue;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const None;

  /// @brief Field SkipValue value: I32(16)
  static ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags const SkipValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16910 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.ReadState, System.Xml.XmlBaseReader::QNameType, System.Xml.XmlNodeType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlNode
class CORDL_TYPE XmlBaseReader_XmlNode : public ::System::Object {
public:
  // Declarations
  using XmlNodeFlags = ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags;

  __declspec(property(get = get_AttributeText)) ::System::Xml::XmlBaseReader_XmlAttributeTextNode* AttributeText;

  __declspec(property(get = get_CanGetAttribute)) bool CanGetAttribute;

  __declspec(property(get = get_CanMoveToElement)) bool CanMoveToElement;

  __declspec(property(get = get_DepthDelta)) int32_t DepthDelta;

  __declspec(property(get = get_ExitScope, put = set_ExitScope)) bool ExitScope;

  __declspec(property(get = get_HasContent)) bool HasContent;

  __declspec(property(get = get_IsAtomicValue, put = set_IsAtomicValue)) bool IsAtomicValue;

  __declspec(property(get = get_IsEmptyElement, put = set_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName)) ::System::Xml::StringHandle* LocalName;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::System::Xml::XmlBaseReader_Namespace* Namespace;

  __declspec(property(get = get_NodeType, put = set_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::System::Xml::PrefixHandle* Prefix;

  __declspec(property(get = get_QNameType, put = set_QNameType)) ::System::Xml::XmlBaseReader_QNameType QNameType;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_SkipValue)) bool SkipValue;

  __declspec(property(get = get_Value)) ::System::Xml::ValueHandle* Value;

  __declspec(property(get = get_ValueAsString)) ::StringW ValueAsString;

  /// @brief Field attributeTextNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeTextNode, put = __cordl_internal_set_attributeTextNode)) ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode;

  /// @brief Field canGetAttribute, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_canGetAttribute, put = __cordl_internal_set_canGetAttribute)) bool canGetAttribute;

  /// @brief Field canMoveToElement, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_canMoveToElement, put = __cordl_internal_set_canMoveToElement)) bool canMoveToElement;

  /// @brief Field depthDelta, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_depthDelta, put = __cordl_internal_set_depthDelta)) int32_t depthDelta;

  /// @brief Field exitScope, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_exitScope, put = __cordl_internal_set_exitScope)) bool exitScope;

  /// @brief Field hasContent, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_hasContent, put = __cordl_internal_set_hasContent)) bool hasContent;

  /// @brief Field hasValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_hasValue, put = __cordl_internal_set_hasValue)) bool hasValue;

  /// @brief Field isAtomicValue, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isAtomicValue, put = __cordl_internal_set_isAtomicValue)) bool isAtomicValue;

  /// @brief Field isEmptyElement, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isEmptyElement, put = __cordl_internal_set_isEmptyElement)) bool isEmptyElement;

  /// @brief Field localName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::System::Xml::StringHandle* localName;

  /// @brief Field nodeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeType, put = __cordl_internal_set_nodeType)) ::System::Xml::XmlNodeType nodeType;

  /// @brief Field ns, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::System::Xml::XmlBaseReader_Namespace* ns;

  /// @brief Field prefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::System::Xml::PrefixHandle* prefix;

  /// @brief Field qnameType, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_qnameType, put = __cordl_internal_set_qnameType)) ::System::Xml::XmlBaseReader_QNameType qnameType;

  /// @brief Field quoteChar, offset 0x5a, size 0x2
  __declspec(property(get = __cordl_internal_get_quoteChar, put = __cordl_internal_set_quoteChar)) char16_t quoteChar;

  /// @brief Field readState, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_readState, put = __cordl_internal_set_readState)) ::System::Xml::ReadState readState;

  /// @brief Field skipValue, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_skipValue, put = __cordl_internal_set_skipValue)) bool skipValue;

  /// @brief Field value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Xml::ValueHandle* value;

  /// @brief Method IsLocalName, addr 0x5f568ac, size 0xcc, virtual false, abstract: false, final false
  inline bool IsLocalName(::StringW localName);

  /// @brief Method IsLocalName, addr 0x5f569dc, size 0xc8, virtual false, abstract: false, final false
  inline bool IsLocalName(::System::Xml::XmlDictionaryString* localName);

  /// @brief Method IsLocalNameAndNamespaceUri, addr 0x5f554bc, size 0x120, virtual false, abstract: false, final false
  inline bool IsLocalNameAndNamespaceUri(::StringW localName, ::StringW ns);

  /// @brief Method IsNamespaceUri, addr 0x5f56af0, size 0x80, virtual false, abstract: false, final false
  inline bool IsNamespaceUri(::StringW ns);

  /// @brief Method IsNamespaceUri, addr 0x5f56bbc, size 0x84, virtual false, abstract: false, final false
  inline bool IsNamespaceUri(::System::Xml::XmlDictionaryString* ns);

  /// @brief Method IsPrefixAndLocalName, addr 0x5f55268, size 0x138, virtual false, abstract: false, final false
  inline bool IsPrefixAndLocalName(::StringW prefix, ::StringW localName);

  static inline ::System::Xml::XmlBaseReader_XmlNode* New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                               ::System::Xml::ValueHandle* value, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                               ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta);

  /// @brief Method TryGetLocalNameAsDictionaryString, addr 0x5f59704, size 0x28, virtual false, abstract: false, final false
  inline bool TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName);

  /// @brief Method TryGetNamespaceUriAsDictionaryString, addr 0x5f59740, size 0x38, virtual false, abstract: false, final false
  inline bool TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> ns);

  /// @brief Method TryGetValueAsDictionaryString, addr 0x5f5978c, size 0x4c, virtual false, abstract: false, final false
  inline bool TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value);

  constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode* const& __cordl_internal_get_attributeTextNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode*& __cordl_internal_get_attributeTextNode();

  constexpr bool const& __cordl_internal_get_canGetAttribute() const;

  constexpr bool& __cordl_internal_get_canGetAttribute();

  constexpr bool const& __cordl_internal_get_canMoveToElement() const;

  constexpr bool& __cordl_internal_get_canMoveToElement();

  constexpr int32_t const& __cordl_internal_get_depthDelta() const;

  constexpr int32_t& __cordl_internal_get_depthDelta();

  constexpr bool const& __cordl_internal_get_exitScope() const;

  constexpr bool& __cordl_internal_get_exitScope();

  constexpr bool const& __cordl_internal_get_hasContent() const;

  constexpr bool& __cordl_internal_get_hasContent();

  constexpr bool const& __cordl_internal_get_hasValue() const;

  constexpr bool& __cordl_internal_get_hasValue();

  constexpr bool const& __cordl_internal_get_isAtomicValue() const;

  constexpr bool& __cordl_internal_get_isAtomicValue();

  constexpr bool const& __cordl_internal_get_isEmptyElement() const;

  constexpr bool& __cordl_internal_get_isEmptyElement();

  constexpr ::System::Xml::StringHandle* const& __cordl_internal_get_localName() const;

  constexpr ::System::Xml::StringHandle*& __cordl_internal_get_localName();

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodeType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodeType();

  constexpr ::System::Xml::XmlBaseReader_Namespace* const& __cordl_internal_get_ns() const;

  constexpr ::System::Xml::XmlBaseReader_Namespace*& __cordl_internal_get_ns();

  constexpr ::System::Xml::PrefixHandle* const& __cordl_internal_get_prefix() const;

  constexpr ::System::Xml::PrefixHandle*& __cordl_internal_get_prefix();

  constexpr ::System::Xml::XmlBaseReader_QNameType const& __cordl_internal_get_qnameType() const;

  constexpr ::System::Xml::XmlBaseReader_QNameType& __cordl_internal_get_qnameType();

  constexpr char16_t const& __cordl_internal_get_quoteChar() const;

  constexpr char16_t& __cordl_internal_get_quoteChar();

  constexpr ::System::Xml::ReadState const& __cordl_internal_get_readState() const;

  constexpr ::System::Xml::ReadState& __cordl_internal_get_readState();

  constexpr bool const& __cordl_internal_get_skipValue() const;

  constexpr bool& __cordl_internal_get_skipValue();

  constexpr ::System::Xml::ValueHandle* const& __cordl_internal_get_value() const;

  constexpr ::System::Xml::ValueHandle*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_attributeTextNode(::System::Xml::XmlBaseReader_XmlAttributeTextNode* value);

  constexpr void __cordl_internal_set_canGetAttribute(bool value);

  constexpr void __cordl_internal_set_canMoveToElement(bool value);

  constexpr void __cordl_internal_set_depthDelta(int32_t value);

  constexpr void __cordl_internal_set_exitScope(bool value);

  constexpr void __cordl_internal_set_hasContent(bool value);

  constexpr void __cordl_internal_set_hasValue(bool value);

  constexpr void __cordl_internal_set_isAtomicValue(bool value);

  constexpr void __cordl_internal_set_isEmptyElement(bool value);

  constexpr void __cordl_internal_set_localName(::System::Xml::StringHandle* value);

  constexpr void __cordl_internal_set_nodeType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_ns(::System::Xml::XmlBaseReader_Namespace* value);

  constexpr void __cordl_internal_set_prefix(::System::Xml::PrefixHandle* value);

  constexpr void __cordl_internal_set_qnameType(::System::Xml::XmlBaseReader_QNameType value);

  constexpr void __cordl_internal_set_quoteChar(char16_t value);

  constexpr void __cordl_internal_set_readState(::System::Xml::ReadState value);

  constexpr void __cordl_internal_set_skipValue(bool value);

  constexpr void __cordl_internal_set_value(::System::Xml::ValueHandle* value);

  /// @brief Method .ctor, addr 0x5f5a140, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                    ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState, ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode,
                    int32_t depthDelta);

  /// @brief Method get_AttributeText, addr 0x5f5a2a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* get_AttributeText();

  /// @brief Method get_CanGetAttribute, addr 0x5f5a298, size 0x8, virtual false, abstract: false, final false
  inline bool get_CanGetAttribute();

  /// @brief Method get_CanMoveToElement, addr 0x5f5a2a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CanMoveToElement();

  /// @brief Method get_DepthDelta, addr 0x5f5a2c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DepthDelta();

  /// @brief Method get_ExitScope, addr 0x5f5a310, size 0x8, virtual false, abstract: false, final false
  inline bool get_ExitScope();

  /// @brief Method get_HasContent, addr 0x5f5a2c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasContent();

  /// @brief Method get_IsAtomicValue, addr 0x5f5a300, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAtomicValue();

  /// @brief Method get_IsEmptyElement, addr 0x5f5a320, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x5f5a288, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::StringHandle* get_LocalName();

  /// @brief Method get_Namespace, addr 0x5f5a2f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* get_Namespace();

  /// @brief Method get_NodeType, addr 0x5f5a2d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x5f5a290, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::PrefixHandle* get_Prefix();

  /// @brief Method get_QNameType, addr 0x5f5a2e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_QNameType get_QNameType();

  /// @brief Method get_QuoteChar, addr 0x5f5a330, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5f5a280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_SkipValue, addr 0x5f5a2b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_SkipValue();

  /// @brief Method get_Value, addr 0x5f5a2b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::ValueHandle* get_Value();

  /// @brief Method get_ValueAsString, addr 0x5f555f4, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_ValueAsString();

  /// @brief Method set_ExitScope, addr 0x5f5a318, size 0x8, virtual false, abstract: false, final false
  inline void set_ExitScope(bool value);

  /// @brief Method set_IsAtomicValue, addr 0x5f5a308, size 0x8, virtual false, abstract: false, final false
  inline void set_IsAtomicValue(bool value);

  /// @brief Method set_IsEmptyElement, addr 0x5f5a328, size 0x8, virtual false, abstract: false, final false
  inline void set_IsEmptyElement(bool value);

  /// @brief Method set_Namespace, addr 0x5f5a2f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::System::Xml::XmlBaseReader_Namespace* value);

  /// @brief Method set_NodeType, addr 0x5f5a2d8, size 0x8, virtual false, abstract: false, final false
  inline void set_NodeType(::System::Xml::XmlNodeType value);

  /// @brief Method set_QNameType, addr 0x5f5a2e8, size 0x8, virtual false, abstract: false, final false
  inline void set_QNameType(::System::Xml::XmlBaseReader_QNameType value);

  /// @brief Method set_QuoteChar, addr 0x5f5a338, size 0x8, virtual false, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlNode(XmlBaseReader_XmlNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlNode(XmlBaseReader_XmlNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16911 };

  /// @brief Field nodeType, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___nodeType;

  /// @brief Field prefix, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::PrefixHandle* ___prefix;

  /// @brief Field localName, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::StringHandle* ___localName;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::ValueHandle* ___value;

  /// @brief Field ns, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_Namespace* ___ns;

  /// @brief Field hasValue, offset: 0x38, size: 0x1, def value: None
  bool ___hasValue;

  /// @brief Field canGetAttribute, offset: 0x39, size: 0x1, def value: None
  bool ___canGetAttribute;

  /// @brief Field canMoveToElement, offset: 0x3a, size: 0x1, def value: None
  bool ___canMoveToElement;

  /// @brief Field readState, offset: 0x3c, size: 0x4, def value: None
  ::System::Xml::ReadState ___readState;

  /// @brief Field attributeTextNode, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlAttributeTextNode* ___attributeTextNode;

  /// @brief Field exitScope, offset: 0x48, size: 0x1, def value: None
  bool ___exitScope;

  /// @brief Field depthDelta, offset: 0x4c, size: 0x4, def value: None
  int32_t ___depthDelta;

  /// @brief Field isAtomicValue, offset: 0x50, size: 0x1, def value: None
  bool ___isAtomicValue;

  /// @brief Field skipValue, offset: 0x51, size: 0x1, def value: None
  bool ___skipValue;

  /// @brief Field qnameType, offset: 0x54, size: 0x4, def value: None
  ::System::Xml::XmlBaseReader_QNameType ___qnameType;

  /// @brief Field hasContent, offset: 0x58, size: 0x1, def value: None
  bool ___hasContent;

  /// @brief Field isEmptyElement, offset: 0x59, size: 0x1, def value: None
  bool ___isEmptyElement;

  /// @brief Field quoteChar, offset: 0x5a, size: 0x2, def value: None
  char16_t ___quoteChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___nodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___prefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___localName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___ns) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___hasValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___canGetAttribute) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___canMoveToElement) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___readState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___attributeTextNode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___exitScope) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___depthDelta) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___isAtomicValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___skipValue) == 0x51, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___qnameType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___hasContent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___isEmptyElement) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlNode, ___quoteChar) == 0x5a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlElementNode
class CORDL_TYPE XmlBaseReader_XmlElementNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  __declspec(property(get = get_BufferOffset, put = set_BufferOffset)) int32_t BufferOffset;

  __declspec(property(get = get_EndElement)) ::System::Xml::XmlBaseReader_XmlEndElementNode* EndElement;

  /// @brief Field NameLength, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_NameLength, put = __cordl_internal_set_NameLength)) int32_t NameLength;

  /// @brief Field NameOffset, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_NameOffset, put = __cordl_internal_set_NameOffset)) int32_t NameOffset;

  /// @brief Field bufferOffset, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferOffset, put = __cordl_internal_set_bufferOffset)) int32_t bufferOffset;

  /// @brief Field endElementNode, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_endElementNode, put = __cordl_internal_set_endElementNode)) ::System::Xml::XmlBaseReader_XmlEndElementNode* endElementNode;

  static inline ::System::Xml::XmlBaseReader_XmlElementNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::System::Xml::XmlBaseReader_XmlElementNode* New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

  constexpr int32_t const& __cordl_internal_get_NameLength() const;

  constexpr int32_t& __cordl_internal_get_NameLength();

  constexpr int32_t const& __cordl_internal_get_NameOffset() const;

  constexpr int32_t& __cordl_internal_get_NameOffset();

  constexpr int32_t const& __cordl_internal_get_bufferOffset() const;

  constexpr int32_t& __cordl_internal_get_bufferOffset();

  constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode* const& __cordl_internal_get_endElementNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode*& __cordl_internal_get_endElementNode();

  constexpr void __cordl_internal_set_NameLength(int32_t value);

  constexpr void __cordl_internal_set_NameOffset(int32_t value);

  constexpr void __cordl_internal_set_bufferOffset(int32_t value);

  constexpr void __cordl_internal_set_endElementNode(::System::Xml::XmlBaseReader_XmlEndElementNode* value);

  /// @brief Method .ctor, addr 0x5f52ca0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f5a47c, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

  /// @brief Method get_BufferOffset, addr 0x5f5a588, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BufferOffset();

  /// @brief Method get_EndElement, addr 0x5f5a580, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlEndElementNode* get_EndElement();

  /// @brief Method set_BufferOffset, addr 0x5f5a590, size 0x8, virtual false, abstract: false, final false
  inline void set_BufferOffset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlElementNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlElementNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlElementNode(XmlBaseReader_XmlElementNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlElementNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlElementNode(XmlBaseReader_XmlElementNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16912 };

  /// @brief Field endElementNode, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlEndElementNode* ___endElementNode;

  /// @brief Field bufferOffset, offset: 0x68, size: 0x4, def value: None
  int32_t ___bufferOffset;

  /// @brief Field NameOffset, offset: 0x6c, size: 0x4, def value: None
  int32_t ___NameOffset;

  /// @brief Field NameLength, offset: 0x70, size: 0x4, def value: None
  int32_t ___NameLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_XmlElementNode, ___endElementNode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlElementNode, ___bufferOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlElementNode, ___NameOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_XmlElementNode, ___NameLength) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlElementNode, 0x78>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlAttributeNode
class CORDL_TYPE XmlBaseReader_XmlAttributeNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlAttributeNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::System::Xml::XmlBaseReader_XmlAttributeNode* New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

  /// @brief Method .ctor, addr 0x5f54520, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f5a598, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlAttributeNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAttributeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlAttributeNode(XmlBaseReader_XmlAttributeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAttributeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlAttributeNode(XmlBaseReader_XmlAttributeNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlAttributeNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlEndElementNode
class CORDL_TYPE XmlBaseReader_XmlEndElementNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlEndElementNode* New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

  /// @brief Method .ctor, addr 0x5f5a544, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlEndElementNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlEndElementNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlEndElementNode(XmlBaseReader_XmlEndElementNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlEndElementNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlEndElementNode(XmlBaseReader_XmlEndElementNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlEndElementNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlTextNode
class CORDL_TYPE XmlBaseReader_XmlTextNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlTextNode* New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                   ::System::Xml::ValueHandle* value, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                                   ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta);

  /// @brief Method .ctor, addr 0x5f5a698, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                    ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState, ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode,
                    int32_t depthDelta);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlTextNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlTextNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlTextNode(XmlBaseReader_XmlTextNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlTextNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlTextNode(XmlBaseReader_XmlTextNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlTextNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlTextNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlAtomicTextNode
class CORDL_TYPE XmlBaseReader_XmlAtomicTextNode : public ::System::Xml::XmlBaseReader_XmlTextNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f52d6c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlAtomicTextNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAtomicTextNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlAtomicTextNode(XmlBaseReader_XmlAtomicTextNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAtomicTextNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlAtomicTextNode(XmlBaseReader_XmlAtomicTextNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16916 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlAtomicTextNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlTextNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlComplexTextNode
class CORDL_TYPE XmlBaseReader_XmlComplexTextNode : public ::System::Xml::XmlBaseReader_XmlTextNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f53c9c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlComplexTextNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlComplexTextNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlComplexTextNode(XmlBaseReader_XmlComplexTextNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlComplexTextNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlComplexTextNode(XmlBaseReader_XmlComplexTextNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlComplexTextNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlTextNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlWhitespaceTextNode
class CORDL_TYPE XmlBaseReader_XmlWhitespaceTextNode : public ::System::Xml::XmlBaseReader_XmlTextNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f53e30, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlWhitespaceTextNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlWhitespaceTextNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlWhitespaceTextNode(XmlBaseReader_XmlWhitespaceTextNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlWhitespaceTextNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlWhitespaceTextNode(XmlBaseReader_XmlWhitespaceTextNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlTextNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlCDataNode
class CORDL_TYPE XmlBaseReader_XmlCDataNode : public ::System::Xml::XmlBaseReader_XmlTextNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlCDataNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f53b20, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlCDataNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlCDataNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlCDataNode(XmlBaseReader_XmlCDataNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlCDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlCDataNode(XmlBaseReader_XmlCDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlCDataNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlTextNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlAttributeTextNode
class CORDL_TYPE XmlBaseReader_XmlAttributeTextNode : public ::System::Xml::XmlBaseReader_XmlTextNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

  /// @brief Method .ctor, addr 0x5f5a65c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlAttributeTextNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAttributeTextNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlAttributeTextNode(XmlBaseReader_XmlAttributeTextNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlAttributeTextNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlAttributeTextNode(XmlBaseReader_XmlAttributeTextNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlAttributeTextNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlInitialNode
class CORDL_TYPE XmlBaseReader_XmlInitialNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlInitialNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f59e7c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlInitialNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlInitialNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlInitialNode(XmlBaseReader_XmlInitialNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlInitialNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlInitialNode(XmlBaseReader_XmlInitialNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlInitialNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlDeclarationNode
class CORDL_TYPE XmlBaseReader_XmlDeclarationNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f53858, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlDeclarationNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlDeclarationNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlDeclarationNode(XmlBaseReader_XmlDeclarationNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlDeclarationNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlDeclarationNode(XmlBaseReader_XmlDeclarationNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlDeclarationNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlCommentNode
class CORDL_TYPE XmlBaseReader_XmlCommentNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlCommentNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f539bc, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlCommentNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlCommentNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlCommentNode(XmlBaseReader_XmlCommentNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlCommentNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlCommentNode(XmlBaseReader_XmlCommentNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlCommentNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlEndOfFileNode
class CORDL_TYPE XmlBaseReader_XmlEndOfFileNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f59f68, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlEndOfFileNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlEndOfFileNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlEndOfFileNode(XmlBaseReader_XmlEndOfFileNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlEndOfFileNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlEndOfFileNode(XmlBaseReader_XmlEndOfFileNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlEndOfFileNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader::XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/XmlClosedNode
class CORDL_TYPE XmlBaseReader_XmlClosedNode : public ::System::Xml::XmlBaseReader_XmlNode {
public:
  // Declarations
  static inline ::System::Xml::XmlBaseReader_XmlClosedNode* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method .ctor, addr 0x5f5a054, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_XmlClosedNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlClosedNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_XmlClosedNode(XmlBaseReader_XmlClosedNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_XmlClosedNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_XmlClosedNode(XmlBaseReader_XmlClosedNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_XmlClosedNode, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/AttributeSorter
class CORDL_TYPE XmlBaseReader_AttributeSorter : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributeIndex1, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeIndex1, put = __cordl_internal_set_attributeIndex1)) int32_t attributeIndex1;

  /// @brief Field attributeIndex2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeIndex2, put = __cordl_internal_set_attributeIndex2)) int32_t attributeIndex2;

  /// @brief Field attributeNodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeNodes,
                      put = __cordl_internal_set_attributeNodes)) ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>
      attributeNodes;

  /// @brief Field indeces, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_indeces, put = __cordl_internal_set_indeces)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indeces;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Close, addr 0x5f54f18, size 0x1c, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Compare, addr 0x5f5a8cc, size 0x118, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* obj1, ::System::Object* obj2);

  /// @brief Method CompareQNameType, addr 0x5f5a9e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t CompareQNameType(::System::Xml::XmlBaseReader_QNameType type1, ::System::Xml::XmlBaseReader_QNameType type2);

  /// @brief Method GetIndeces, addr 0x5f56140, size 0x14, virtual false, abstract: false, final false
  inline void GetIndeces(::ByRef<int32_t> attributeIndex1, ::ByRef<int32_t> attributeIndex2);

  /// @brief Method IsSorted, addr 0x5f5a7dc, size 0xf0, virtual false, abstract: false, final false
  inline bool IsSorted();

  static inline ::System::Xml::XmlBaseReader_AttributeSorter* New_ctor();

  /// @brief Method Sort, addr 0x5f5a6a4, size 0x138, virtual false, abstract: false, final false
  inline bool Sort();

  /// @brief Method Sort, addr 0x5f56110, size 0x30, virtual false, abstract: false, final false
  inline bool Sort(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes, int32_t attributeCount);

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr int32_t const& __cordl_internal_get_attributeIndex1() const;

  constexpr int32_t& __cordl_internal_get_attributeIndex1();

  constexpr int32_t const& __cordl_internal_get_attributeIndex2() const;

  constexpr int32_t& __cordl_internal_get_attributeIndex2();

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> const& __cordl_internal_get_attributeNodes() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>& __cordl_internal_get_attributeNodes();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_indeces() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_indeces();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributeIndex1(int32_t value);

  constexpr void __cordl_internal_set_attributeIndex2(int32_t value);

  constexpr void __cordl_internal_set_attributeNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> value);

  constexpr void __cordl_internal_set_indeces(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x5f5610c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_AttributeSorter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_AttributeSorter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_AttributeSorter(XmlBaseReader_AttributeSorter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_AttributeSorter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_AttributeSorter(XmlBaseReader_AttributeSorter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16926 };

  /// @brief Field indeces, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___indeces;

  /// @brief Field attributeNodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> ___attributeNodes;

  /// @brief Field attributeCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field attributeIndex1, offset: 0x24, size: 0x4, def value: None
  int32_t ___attributeIndex1;

  /// @brief Field attributeIndex2, offset: 0x28, size: 0x4, def value: None
  int32_t ___attributeIndex2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_AttributeSorter, ___indeces) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_AttributeSorter, ___attributeNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_AttributeSorter, ___attributeCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_AttributeSorter, ___attributeIndex1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_AttributeSorter, ___attributeIndex2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_AttributeSorter, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlSpace
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/NamespaceManager/XmlAttribute
class CORDL_TYPE NamespaceManager_XmlBaseReader_XmlAttribute : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) int32_t Depth;

  __declspec(property(get = get_XmlLang, put = set_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace, put = set_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field lang, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lang, put = __cordl_internal_set_lang)) ::StringW lang;

  /// @brief Field space, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) ::System::Xml::XmlSpace space;

  static inline ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute* New_ctor();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::StringW const& __cordl_internal_get_lang() const;

  constexpr ::StringW& __cordl_internal_get_lang();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get_space() const;

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get_space();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_lang(::StringW value);

  constexpr void __cordl_internal_set_space(::System::Xml::XmlSpace value);

  /// @brief Method .ctor, addr 0x5f5ae20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Depth, addr 0x5f5afe0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_XmlLang, addr 0x5f5aff0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f5b000, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Method set_Depth, addr 0x5f5afe8, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(int32_t value);

  /// @brief Method set_XmlLang, addr 0x5f5aff8, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlLang(::StringW value);

  /// @brief Method set_XmlSpace, addr 0x5f5b008, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlSpace(::System::Xml::XmlSpace value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceManager_XmlBaseReader_XmlAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseReader_XmlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceManager_XmlBaseReader_XmlAttribute(NamespaceManager_XmlBaseReader_XmlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseReader_XmlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceManager_XmlBaseReader_XmlAttribute(NamespaceManager_XmlBaseReader_XmlAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16927 };

  /// @brief Field space, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlSpace ___space;

  /// @brief Field lang, offset: 0x18, size: 0x8, def value: None
  ::StringW ___lang;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute, ___space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute, ___lang) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute, ___depth) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlSpace
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/NamespaceManager
class CORDL_TYPE XmlBaseReader_NamespaceManager : public ::System::Object {
public:
  // Declarations
  using XmlAttribute = ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field attributeCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes,
                      put =
                          __cordl_internal_set_attributes)) ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*>
      attributes;

  /// @brief Field bufferReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferReader, put = __cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader* bufferReader;

  /// @brief Field depth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field emptyNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyNamespace, put = setStaticF_emptyNamespace)) ::System::Xml::XmlBaseReader_Namespace* emptyNamespace;

  /// @brief Field lang, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lang, put = __cordl_internal_set_lang)) ::StringW lang;

  /// @brief Field namespaces, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces,
                      put = __cordl_internal_set_namespaces)) ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>
      namespaces;

  /// @brief Field nsCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nsCount, put = __cordl_internal_set_nsCount)) int32_t nsCount;

  /// @brief Field shortPrefixUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_shortPrefixUri,
                      put = __cordl_internal_set_shortPrefixUri)) ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>
      shortPrefixUri;

  /// @brief Field space, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) ::System::Xml::XmlSpace space;

  /// @brief Field xmlNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_xmlNamespace, put = setStaticF_xmlNamespace)) ::System::Xml::XmlBaseReader_Namespace* xmlNamespace;

  /// @brief Method AddAttribute, addr 0x5f5acac, size 0x174, virtual false, abstract: false, final false
  inline void AddAttribute();

  /// @brief Method AddLangAttribute, addr 0x5f54d38, size 0x24, virtual false, abstract: false, final false
  inline void AddLangAttribute(::StringW lang);

  /// @brief Method AddNamespace, addr 0x5f54600, size 0x178, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* AddNamespace();

  /// @brief Method AddSpaceAttribute, addr 0x5f54d5c, size 0x24, virtual false, abstract: false, final false
  inline void AddSpaceAttribute(::System::Xml::XmlSpace space);

  /// @brief Method Clear, addr 0x5f53114, size 0xf8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Close, addr 0x5f54ed0, size 0x48, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method EnterScope, addr 0x5f54200, size 0x10, virtual false, abstract: false, final false
  inline void EnterScope();

  /// @brief Method ExitScope, addr 0x5f54244, size 0x14c, virtual false, abstract: false, final false
  inline void ExitScope();

  /// @brief Method LookupNamespace, addr 0x5f558a0, size 0x154, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespace, addr 0x5f55a40, size 0x130, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* LookupNamespace(::System::Xml::PrefixHandle* prefix);

  /// @brief Method LookupNamespace, addr 0x5f5ae2c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* LookupNamespace(::System::Xml::PrefixHandleType prefix);

  static inline ::System::Xml::XmlBaseReader_NamespaceManager* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method Register, addr 0x5f54abc, size 0x98, virtual false, abstract: false, final false
  inline void Register(::System::Xml::XmlBaseReader_Namespace* nameSpace);

  /// @brief Method TryGetShortPrefix, addr 0x5f5ae5c, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetShortPrefix(::StringW s, ::ByRef<::System::Xml::PrefixHandleType> shortPrefix);

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*> const& __cordl_internal_get_attributes() const;

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*>& __cordl_internal_get_attributes();

  constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

  constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::StringW const& __cordl_internal_get_lang() const;

  constexpr ::StringW& __cordl_internal_get_lang();

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> const& __cordl_internal_get_namespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>& __cordl_internal_get_namespaces();

  constexpr int32_t const& __cordl_internal_get_nsCount() const;

  constexpr int32_t& __cordl_internal_get_nsCount();

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> const& __cordl_internal_get_shortPrefixUri() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>& __cordl_internal_get_shortPrefixUri();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get_space() const;

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get_space();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributes(::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*> value);

  constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_lang(::StringW value);

  constexpr void __cordl_internal_set_namespaces(::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> value);

  constexpr void __cordl_internal_set_nsCount(int32_t value);

  constexpr void __cordl_internal_set_shortPrefixUri(::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> value);

  constexpr void __cordl_internal_set_space(::System::Xml::XmlSpace value);

  /// @brief Method .ctor, addr 0x5f52ba8, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::System::Xml::XmlBaseReader_Namespace* getStaticF_emptyNamespace();

  static inline ::System::Xml::XmlBaseReader_Namespace* getStaticF_xmlNamespace();

  /// @brief Method get_EmptyNamespace, addr 0x5f5ac40, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlBaseReader_Namespace* get_EmptyNamespace();

  /// @brief Method get_XmlLang, addr 0x5f5ac9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlNamespace, addr 0x5f5a9ec, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlBaseReader_Namespace* get_XmlNamespace();

  /// @brief Method get_XmlSpace, addr 0x5f5aca4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  static inline void setStaticF_emptyNamespace(::System::Xml::XmlBaseReader_Namespace* value);

  static inline void setStaticF_xmlNamespace(::System::Xml::XmlBaseReader_Namespace* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_NamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_NamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_NamespaceManager(XmlBaseReader_NamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_NamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_NamespaceManager(XmlBaseReader_NamespaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16928 };

  /// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBufferReader* ___bufferReader;

  /// @brief Field namespaces, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> ___namespaces;

  /// @brief Field nsCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___nsCount;

  /// @brief Field depth, offset: 0x24, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field shortPrefixUri, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> ___shortPrefixUri;

  /// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*> ___attributes;

  /// @brief Field attributeCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field space, offset: 0x3c, size: 0x4, def value: None
  ::System::Xml::XmlSpace ___space;

  /// @brief Field lang, offset: 0x40, size: 0x8, def value: None
  ::StringW ___lang;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___namespaces) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___nsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___depth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___shortPrefixUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___attributeCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___space) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_NamespaceManager, ___lang) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_NamespaceManager, 0x48>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/Namespace
class CORDL_TYPE XmlBaseReader_Namespace : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) int32_t Depth;

  __declspec(property(get = get_OuterUri, put = set_OuterUri)) ::System::Xml::XmlBaseReader_Namespace* OuterUri;

  __declspec(property(get = get_Prefix)) ::System::Xml::PrefixHandle* Prefix;

  __declspec(property(get = get_Uri)) ::System::Xml::StringHandle* Uri;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field outerUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_outerUri, put = __cordl_internal_set_outerUri)) ::System::Xml::XmlBaseReader_Namespace* outerUri;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::System::Xml::PrefixHandle* prefix;

  /// @brief Field uri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::System::Xml::StringHandle* uri;

  /// @brief Field uriString, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_uriString, put = __cordl_internal_set_uriString)) ::StringW uriString;

  /// @brief Method Clear, addr 0x5f5ae24, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method IsUri, addr 0x5f5a340, size 0x98, virtual false, abstract: false, final false
  inline bool IsUri(::StringW s);

  /// @brief Method IsUri, addr 0x5f5a3d8, size 0xa4, virtual false, abstract: false, final false
  inline bool IsUri(::System::Xml::XmlDictionaryString* s);

  static inline ::System::Xml::XmlBaseReader_Namespace* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Xml::XmlBaseReader_Namespace* const& __cordl_internal_get_outerUri() const;

  constexpr ::System::Xml::XmlBaseReader_Namespace*& __cordl_internal_get_outerUri();

  constexpr ::System::Xml::PrefixHandle* const& __cordl_internal_get_prefix() const;

  constexpr ::System::Xml::PrefixHandle*& __cordl_internal_get_prefix();

  constexpr ::System::Xml::StringHandle* const& __cordl_internal_get_uri() const;

  constexpr ::System::Xml::StringHandle*& __cordl_internal_get_uri();

  constexpr ::StringW const& __cordl_internal_get_uriString() const;

  constexpr ::StringW& __cordl_internal_get_uriString();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_outerUri(::System::Xml::XmlBaseReader_Namespace* value);

  constexpr void __cordl_internal_set_prefix(::System::Xml::PrefixHandle* value);

  constexpr void __cordl_internal_set_uri(::System::Xml::StringHandle* value);

  constexpr void __cordl_internal_set_uriString(::StringW value);

  /// @brief Method .ctor, addr 0x5f5aba4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method get_Depth, addr 0x5f5b010, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_OuterUri, addr 0x5f5b030, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* get_OuterUri();

  /// @brief Method get_Prefix, addr 0x5f5b020, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::PrefixHandle* get_Prefix();

  /// @brief Method get_Uri, addr 0x5f5b028, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::StringHandle* get_Uri();

  /// @brief Method set_Depth, addr 0x5f5b018, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(int32_t value);

  /// @brief Method set_OuterUri, addr 0x5f5b038, size 0x8, virtual false, abstract: false, final false
  inline void set_OuterUri(::System::Xml::XmlBaseReader_Namespace* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_Namespace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_Namespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_Namespace(XmlBaseReader_Namespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_Namespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_Namespace(XmlBaseReader_Namespace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16929 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::PrefixHandle* ___prefix;

  /// @brief Field uri, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::StringHandle* ___uri;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field outerUri, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_Namespace* ___outerUri;

  /// @brief Field uriString, offset: 0x30, size: 0x8, def value: None
  ::StringW ___uriString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_Namespace, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_Namespace, ___uri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_Namespace, ___depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_Namespace, ___outerUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_Namespace, ___uriString) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_Namespace, 0x38>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlNameTable
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader/QuotaNameTable
class CORDL_TYPE XmlBaseReader_QuotaNameTable : public ::System::Xml::XmlNameTable {
public:
  // Declarations
  /// @brief Field charCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_charCount, put = __cordl_internal_set_charCount)) int32_t charCount;

  /// @brief Field maxCharCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCharCount, put = __cordl_internal_set_maxCharCount)) int32_t maxCharCount;

  /// @brief Field nameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlDictionaryReader* reader;

  /// @brief Method Add, addr 0x5f5b0a8, size 0x98, virtual true, abstract: false, final false
  inline ::StringW Add(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method Add, addr 0x5f5b140, size 0x84, virtual true, abstract: false, final false
  inline ::StringW Add(::StringW value);

  /// @brief Method Add, addr 0x5f5b078, size 0x30, virtual false, abstract: false, final false
  inline void Add(int32_t charCount);

  /// @brief Method Get, addr 0x5f5b040, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW Get(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method Get, addr 0x5f5b05c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW value);

  static inline ::System::Xml::XmlBaseReader_QuotaNameTable* New_ctor(::System::Xml::XmlDictionaryReader* reader, int32_t maxCharCount);

  constexpr int32_t const& __cordl_internal_get_charCount() const;

  constexpr int32_t& __cordl_internal_get_charCount();

  constexpr int32_t const& __cordl_internal_get_maxCharCount() const;

  constexpr int32_t& __cordl_internal_get_maxCharCount();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::XmlDictionaryReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlDictionaryReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_charCount(int32_t value);

  constexpr void __cordl_internal_set_maxCharCount(int32_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlDictionaryReader* value);

  /// @brief Method .ctor, addr 0x5f566bc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDictionaryReader* reader, int32_t maxCharCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader_QuotaNameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_QuotaNameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader_QuotaNameTable(XmlBaseReader_QuotaNameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader_QuotaNameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader_QuotaNameTable(XmlBaseReader_QuotaNameTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16930 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryReader* ___reader;

  /// @brief Field nameTable, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field maxCharCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___maxCharCount;

  /// @brief Field charCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___charCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader_QuotaNameTable, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_QuotaNameTable, ___nameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_QuotaNameTable, ___maxCharCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader_QuotaNameTable, ___charCount) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader_QuotaNameTable, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlDictionaryReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseReader
class CORDL_TYPE XmlBaseReader : public ::System::Xml::XmlDictionaryReader {
public:
  // Declarations
  using AttributeSorter = ::System::Xml::XmlBaseReader_AttributeSorter;

  using Namespace = ::System::Xml::XmlBaseReader_Namespace;

  using NamespaceManager = ::System::Xml::XmlBaseReader_NamespaceManager;

  using QNameType = ::System::Xml::XmlBaseReader_QNameType;

  using QuotaNameTable = ::System::Xml::XmlBaseReader_QuotaNameTable;

  using XmlAtomicTextNode = ::System::Xml::XmlBaseReader_XmlAtomicTextNode;

  using XmlAttributeNode = ::System::Xml::XmlBaseReader_XmlAttributeNode;

  using XmlAttributeTextNode = ::System::Xml::XmlBaseReader_XmlAttributeTextNode;

  using XmlCDataNode = ::System::Xml::XmlBaseReader_XmlCDataNode;

  using XmlClosedNode = ::System::Xml::XmlBaseReader_XmlClosedNode;

  using XmlCommentNode = ::System::Xml::XmlBaseReader_XmlCommentNode;

  using XmlComplexTextNode = ::System::Xml::XmlBaseReader_XmlComplexTextNode;

  using XmlDeclarationNode = ::System::Xml::XmlBaseReader_XmlDeclarationNode;

  using XmlElementNode = ::System::Xml::XmlBaseReader_XmlElementNode;

  using XmlEndElementNode = ::System::Xml::XmlBaseReader_XmlEndElementNode;

  using XmlEndOfFileNode = ::System::Xml::XmlBaseReader_XmlEndOfFileNode;

  using XmlInitialNode = ::System::Xml::XmlBaseReader_XmlInitialNode;

  using XmlNode = ::System::Xml::XmlBaseReader_XmlNode;

  using XmlTextNode = ::System::Xml::XmlBaseReader_XmlTextNode;

  using XmlWhitespaceTextNode = ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode;

  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_BufferReader)) ::System::Xml::XmlBufferReader* BufferReader;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_ElementNode)) ::System::Xml::XmlBaseReader_XmlElementNode* ElementNode;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_Node)) ::System::Xml::XmlBaseReader_XmlNode* Node;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OutsideRootElement)) bool OutsideRootElement;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_Quotas)) ::System::Xml::XmlDictionaryReaderQuotas* Quotas;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field atomicTextNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_atomicTextNode, put = __cordl_internal_set_atomicTextNode)) ::System::Xml::XmlBaseReader_XmlAtomicTextNode* atomicTextNode;

  /// @brief Field attributeCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributeIndex, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeIndex, put = __cordl_internal_set_attributeIndex)) int32_t attributeIndex;

  /// @brief Field attributeNodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeNodes,
                      put = __cordl_internal_set_attributeNodes)) ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>
      attributeNodes;

  /// @brief Field attributeSorter, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeSorter, put = __cordl_internal_set_attributeSorter)) ::System::Xml::XmlBaseReader_AttributeSorter* attributeSorter;

  /// @brief Field attributeStart, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeStart, put = __cordl_internal_set_attributeStart)) int32_t attributeStart;

  /// @brief Field base64Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Encoding, put = setStaticF_base64Encoding)) ::System::Text::Base64Encoding* base64Encoding;

  /// @brief Field binhexEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_binhexEncoding, put = setStaticF_binhexEncoding)) ::System::Text::BinHexEncoding* binhexEncoding;

  /// @brief Field bufferReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferReader, put = __cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader* bufferReader;

  /// @brief Field cdataNode, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_cdataNode, put = __cordl_internal_set_cdataNode)) ::System::Xml::XmlBaseReader_XmlCDataNode* cdataNode;

  /// @brief Field chars, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field closedNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_closedNode, put = setStaticF_closedNode)) ::System::Xml::XmlBaseReader_XmlClosedNode* closedNode;

  /// @brief Field commentNode, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_commentNode, put = __cordl_internal_set_commentNode)) ::System::Xml::XmlBaseReader_XmlCommentNode* commentNode;

  /// @brief Field complexTextNode, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_complexTextNode, put = __cordl_internal_set_complexTextNode)) ::System::Xml::XmlBaseReader_XmlComplexTextNode* complexTextNode;

  /// @brief Field declarationNode, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_declarationNode, put = __cordl_internal_set_declarationNode)) ::System::Xml::XmlBaseReader_XmlDeclarationNode* declarationNode;

  /// @brief Field depth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field elementNodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_elementNodes,
                      put = __cordl_internal_set_elementNodes)) ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*>
      elementNodes;

  /// @brief Field endOfFileNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endOfFileNode, put = setStaticF_endOfFileNode)) ::System::Xml::XmlBaseReader_XmlEndOfFileNode* endOfFileNode;

  /// @brief Field initialNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initialNode, put = setStaticF_initialNode)) ::System::Xml::XmlBaseReader_XmlInitialNode* initialNode;

  /// @brief Field localName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field nameTable, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field node, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::System::Xml::XmlBaseReader_XmlNode* node;

  /// @brief Field ns, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field nsMgr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nsMgr, put = __cordl_internal_set_nsMgr)) ::System::Xml::XmlBaseReader_NamespaceManager* nsMgr;

  /// @brief Field prefix, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field quotas, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_quotas, put = __cordl_internal_set_quotas)) ::System::Xml::XmlDictionaryReaderQuotas* quotas;

  /// @brief Field readingElement, offset 0xd9, size 0x1
  __declspec(property(get = __cordl_internal_get_readingElement, put = __cordl_internal_set_readingElement)) bool readingElement;

  /// @brief Field rootElement, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_rootElement, put = __cordl_internal_set_rootElement)) bool rootElement;

  /// @brief Field rootElementNode, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rootElementNode, put = __cordl_internal_set_rootElementNode)) ::System::Xml::XmlBaseReader_XmlElementNode* rootElementNode;

  /// @brief Field signing, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_signing, put = __cordl_internal_set_signing)) bool signing;

  /// @brief Field signingWriter, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_signingWriter, put = __cordl_internal_set_signingWriter)) ::System::Xml::XmlSigningNodeWriter* signingWriter;

  /// @brief Field trailByteCount, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_trailByteCount, put = __cordl_internal_set_trailByteCount)) int32_t trailByteCount;

  /// @brief Field trailBytes, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_trailBytes, put = __cordl_internal_set_trailBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> trailBytes;

  /// @brief Field trailCharCount, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_trailCharCount, put = __cordl_internal_set_trailCharCount)) int32_t trailCharCount;

  /// @brief Field trailChars, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_trailChars, put = __cordl_internal_set_trailChars)) ::ArrayW<char16_t, ::Array<char16_t>*> trailChars;

  /// @brief Field value, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Field whitespaceTextNode, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_whitespaceTextNode, put = __cordl_internal_set_whitespaceTextNode)) ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* whitespaceTextNode;

  /// @brief Method AddAttribute, addr 0x5f54778, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* AddAttribute();

  /// @brief Method AddAttribute, addr 0x5f54390, size 0x190, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* AddAttribute(::System::Xml::XmlBaseReader_QNameType qnameType, bool isAtomicValue);

  /// @brief Method AddNamespace, addr 0x5f545ec, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* AddNamespace();

  /// @brief Method AddXmlAttribute, addr 0x5f54784, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* AddXmlAttribute();

  /// @brief Method AddXmlnsAttribute, addr 0x5f54790, size 0x32c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* AddXmlnsAttribute(::System::Xml::XmlBaseReader_Namespace* ns);

  /// @brief Method CheckAttributes, addr 0x5f55f50, size 0x1bc, virtual false, abstract: false, final false
  inline void CheckAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes, int32_t attributeCount);

  /// @brief Method CheckDeclAttribute, addr 0x5f534d8, size 0x194, virtual false, abstract: false, final false
  inline bool CheckDeclAttribute(int32_t index, ::StringW localName, ::StringW value, bool checkLower, ::StringW valueSR);

  /// @brief Method CheckStandalone, addr 0x5f5366c, size 0x1ec, virtual false, abstract: false, final false
  inline bool CheckStandalone(int32_t attr);

  /// @brief Method Close, addr 0x5f54ddc, size 0xf4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EnterScope, addr 0x5f54040, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlElementNode* EnterScope();

  /// @brief Method ExitScope, addr 0x5f54210, size 0x34, virtual false, abstract: false, final false
  inline void ExitScope();

  /// @brief Method FixXmlAttribute, addr 0x5f54b54, size 0x1e4, virtual false, abstract: false, final false
  inline void FixXmlAttribute(::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode);

  /// @brief Method GetAttribute, addr 0x5f555dc, size 0x18, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t index);

  /// @brief Method GetAttribute, addr 0x5f55648, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceUri);

  /// @brief Method GetAttribute, addr 0x5f5562c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttributeNode, addr 0x5f54f74, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* GetAttributeNode(int32_t index);

  /// @brief Method GetAttributeNode, addr 0x5f553a0, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* GetAttributeNode(::StringW localName, ::StringW namespaceUri);

  /// @brief Method GetAttributeNode, addr 0x5f550b0, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAttributeNode* GetAttributeNode(::StringW name);

  /// @brief Method GetCharBuffer, addr 0x5f58470, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetCharBuffer(int32_t count);

  /// @brief Method GetLocalName, addr 0x5f556a4, size 0x130, virtual false, abstract: false, final false
  inline ::StringW GetLocalName(bool enforceAtomization);

  /// @brief Method GetNamespaceUri, addr 0x5f56444, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW GetNamespaceUri(bool enforceAtomization);

  /// @brief Method GetOpenElements, addr 0x5f597d8, size 0xe0, virtual false, abstract: false, final false
  inline ::StringW GetOpenElements();

  /// @brief Method IndexOfLocalName, addr 0x5f56ebc, size 0x24c, virtual true, abstract: false, final false
  inline int32_t IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> localNames, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method IsLocalName, addr 0x5f56848, size 0x64, virtual true, abstract: false, final false
  inline bool IsLocalName(::StringW localName);

  /// @brief Method IsLocalName, addr 0x5f56978, size 0x64, virtual true, abstract: false, final false
  inline bool IsLocalName(::System::Xml::XmlDictionaryString* localName);

  /// @brief Method IsNamespaceUri, addr 0x5f56aa4, size 0x4c, virtual true, abstract: false, final false
  inline bool IsNamespaceUri(::StringW namespaceUri);

  /// @brief Method IsNamespaceUri, addr 0x5f56b70, size 0x4c, virtual true, abstract: false, final false
  inline bool IsNamespaceUri(::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method IsStartElement, addr 0x5f56c40, size 0x88, virtual true, abstract: false, final true
  inline bool IsStartElement();

  /// @brief Method IsStartElement, addr 0x5f56cc8, size 0xdc, virtual true, abstract: false, final false
  inline bool IsStartElement(::StringW localName, ::StringW namespaceUri);

  /// @brief Method IsStartElement, addr 0x5f56da4, size 0x118, virtual true, abstract: false, final false
  inline bool IsStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method LookupNamespace, addr 0x5f557d4, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespace, addr 0x5f559f4, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_Namespace* LookupNamespace(::System::Xml::PrefixHandle* prefix);

  /// @brief Method MoveToAtomicText, addr 0x5f53c0c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* MoveToAtomicText();

  /// @brief Method MoveToAttribute, addr 0x5f561b8, size 0x34, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW localName, ::StringW namespaceUri);

  /// @brief Method MoveToAttribute, addr 0x5f56184, size 0x34, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5f56154, size 0x30, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t index);

  /// @brief Method MoveToCData, addr 0x5f53aa8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlCDataNode* MoveToCData();

  /// @brief Method MoveToComment, addr 0x5f53944, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlCommentNode* MoveToComment();

  /// @brief Method MoveToComplexText, addr 0x5f53c24, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* MoveToComplexText();

  /// @brief Method MoveToContent, addr 0x5f56268, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType MoveToContent();

  /// @brief Method MoveToDeclaration, addr 0x5f5320c, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* MoveToDeclaration();

  /// @brief Method MoveToElement, addr 0x5f561ec, size 0x7c, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToEndElement, addr 0x5f53f60, size 0x60, virtual false, abstract: false, final false
  inline void MoveToEndElement();

  /// @brief Method MoveToEndOfFile, addr 0x5f53fc0, size 0x80, virtual false, abstract: false, final false
  inline void MoveToEndOfFile();

  /// @brief Method MoveToFirstAttribute, addr 0x5f56360, size 0x54, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToInitial, addr 0x5f53020, size 0xf4, virtual false, abstract: false, final false
  inline void MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas);

  /// @brief Method MoveToNextAttribute, addr 0x5f563b4, size 0x68, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToNode, addr 0x5f53010, size 0x10, virtual false, abstract: false, final false
  inline void MoveToNode(::System::Xml::XmlBaseReader_XmlNode* node);

  /// @brief Method MoveToWhitespaceText, addr 0x5f53d88, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlTextNode* MoveToWhitespaceText();

  static inline ::System::Xml::XmlBaseReader* New_ctor();

  /// @brief Method ProcessAttributes, addr 0x5f55b70, size 0x18, virtual false, abstract: false, final false
  inline void ProcessAttributes();

  /// @brief Method ProcessAttributes, addr 0x5f55b88, size 0x3c8, virtual false, abstract: false, final false
  inline void ProcessAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes, int32_t attributeCount);

  /// @brief Method ReadAttributeValue, addr 0x5f576b8, size 0x30, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadBytes, addr 0x5f57be0, size 0x5cc, virtual false, abstract: false, final false
  inline int32_t ReadBytes(::System::Text::Encoding* encoding, int32_t byteBlock, int32_t charBlock, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t byteCount, bool readContent);

  /// @brief Method ReadContentAs, addr 0x5f58e9c, size 0x5e4, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver);

  /// @brief Method ReadContentAsBase64, addr 0x5f5778c, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadContentAsBase64();

  /// @brief Method ReadContentAsBase64, addr 0x5f57878, size 0x368, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x5f581ac, size 0x2c4, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadContentAsBoolean, addr 0x5f585d4, size 0xd0, virtual true, abstract: false, final false
  inline bool ReadContentAsBoolean();

  /// @brief Method ReadContentAsDateTime, addr 0x5f58844, size 0xd0, virtual true, abstract: false, final false
  inline ::System::DateTime ReadContentAsDateTime();

  /// @brief Method ReadContentAsDecimal, addr 0x5f58acc, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Decimal ReadContentAsDecimal();

  /// @brief Method ReadContentAsDouble, addr 0x5f58914, size 0xdc, virtual true, abstract: false, final false
  inline double_t ReadContentAsDouble();

  /// @brief Method ReadContentAsFloat, addr 0x5f589f0, size 0xdc, virtual true, abstract: false, final false
  inline float_t ReadContentAsFloat();

  /// @brief Method ReadContentAsGuid, addr 0x5f58d44, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Guid ReadContentAsGuid();

  /// @brief Method ReadContentAsInt, addr 0x5f58774, size 0xd0, virtual true, abstract: false, final false
  inline int32_t ReadContentAsInt();

  /// @brief Method ReadContentAsLong, addr 0x5f586a4, size 0xd0, virtual true, abstract: false, final false
  inline int64_t ReadContentAsLong();

  /// @brief Method ReadContentAsObject, addr 0x5f58e1c, size 0x80, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAsObject();

  /// @brief Method ReadContentAsString, addr 0x5f58508, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ReadContentAsString();

  /// @brief Method ReadContentAsTimeSpan, addr 0x5f58c74, size 0xd0, virtual true, abstract: false, final false
  inline ::System::TimeSpan ReadContentAsTimeSpan();

  /// @brief Method ReadContentAsUniqueId, addr 0x5f58ba4, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Xml::UniqueId* ReadContentAsUniqueId();

  /// @brief Method ReadElementContentAsString, addr 0x5f57404, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ReadElementContentAsString();

  /// @brief Method ReadElementString, addr 0x5f574b0, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ReadElementString();

  /// @brief Method ReadEndElement, addr 0x5f57598, size 0x120, virtual true, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadStartElement, addr 0x5f5754c, size 0x4c, virtual true, abstract: false, final false
  inline void ReadStartElement();

  /// @brief Method ReadValueChunk, addr 0x5f57108, size 0x2fc, virtual true, abstract: false, final false
  inline int32_t ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method ResolveEntity, addr 0x5f59480, size 0x50, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SignAttribute, addr 0x5f59940, size 0x124, virtual false, abstract: false, final false
  inline void SignAttribute(::System::Xml::XmlSigningNodeWriter* writer, ::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode);

  /// @brief Method SignEndElement, addr 0x5f59a64, size 0x8c, virtual false, abstract: false, final false
  inline void SignEndElement(::System::Xml::XmlSigningNodeWriter* writer);

  /// @brief Method SignNode, addr 0x5f59c8c, size 0x14, virtual false, abstract: false, final false
  inline void SignNode();

  /// @brief Method SignNode, addr 0x5f59af0, size 0x19c, virtual false, abstract: false, final false
  inline void SignNode(::System::Xml::XmlSigningNodeWriter* writer);

  /// @brief Method SignStartElement, addr 0x5f598b8, size 0x88, virtual false, abstract: false, final false
  inline void SignStartElement(::System::Xml::XmlSigningNodeWriter* writer);

  /// @brief Method Skip, addr 0x5f594d0, size 0xe0, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method SkipValue, addr 0x5f57700, size 0x28, virtual false, abstract: false, final false
  inline void SkipValue(::System::Xml::XmlBaseReader_XmlNode* node);

  /// @brief Method TryGetBase64ContentLength, addr 0x5f57728, size 0x64, virtual true, abstract: false, final false
  inline bool TryGetBase64ContentLength(::ByRef<int32_t> length);

  /// @brief Method TryGetLocalNameAsDictionaryString, addr 0x5f596f0, size 0x14, virtual true, abstract: false, final false
  inline bool TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName);

  /// @brief Method TryGetNamespaceUriAsDictionaryString, addr 0x5f5972c, size 0x14, virtual true, abstract: false, final false
  inline bool TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName);

  /// @brief Method TryGetValueAsDictionaryString, addr 0x5f59778, size 0x14, virtual true, abstract: false, final false
  inline bool TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value);

  constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode* const& __cordl_internal_get_atomicTextNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode*& __cordl_internal_get_atomicTextNode();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr int32_t const& __cordl_internal_get_attributeIndex() const;

  constexpr int32_t& __cordl_internal_get_attributeIndex();

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> const& __cordl_internal_get_attributeNodes() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>& __cordl_internal_get_attributeNodes();

  constexpr ::System::Xml::XmlBaseReader_AttributeSorter* const& __cordl_internal_get_attributeSorter() const;

  constexpr ::System::Xml::XmlBaseReader_AttributeSorter*& __cordl_internal_get_attributeSorter();

  constexpr int32_t const& __cordl_internal_get_attributeStart() const;

  constexpr int32_t& __cordl_internal_get_attributeStart();

  constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

  constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader();

  constexpr ::System::Xml::XmlBaseReader_XmlCDataNode* const& __cordl_internal_get_cdataNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlCDataNode*& __cordl_internal_get_cdataNode();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr ::System::Xml::XmlBaseReader_XmlCommentNode* const& __cordl_internal_get_commentNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlCommentNode*& __cordl_internal_get_commentNode();

  constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode* const& __cordl_internal_get_complexTextNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode*& __cordl_internal_get_complexTextNode();

  constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode* const& __cordl_internal_get_declarationNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode*& __cordl_internal_get_declarationNode();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*> const& __cordl_internal_get_elementNodes() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*>& __cordl_internal_get_elementNodes();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::XmlBaseReader_XmlNode* const& __cordl_internal_get_node() const;

  constexpr ::System::Xml::XmlBaseReader_XmlNode*& __cordl_internal_get_node();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Xml::XmlBaseReader_NamespaceManager* const& __cordl_internal_get_nsMgr() const;

  constexpr ::System::Xml::XmlBaseReader_NamespaceManager*& __cordl_internal_get_nsMgr();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::System::Xml::XmlDictionaryReaderQuotas* const& __cordl_internal_get_quotas() const;

  constexpr ::System::Xml::XmlDictionaryReaderQuotas*& __cordl_internal_get_quotas();

  constexpr bool const& __cordl_internal_get_readingElement() const;

  constexpr bool& __cordl_internal_get_readingElement();

  constexpr bool const& __cordl_internal_get_rootElement() const;

  constexpr bool& __cordl_internal_get_rootElement();

  constexpr ::System::Xml::XmlBaseReader_XmlElementNode* const& __cordl_internal_get_rootElementNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlElementNode*& __cordl_internal_get_rootElementNode();

  constexpr bool const& __cordl_internal_get_signing() const;

  constexpr bool& __cordl_internal_get_signing();

  constexpr ::System::Xml::XmlSigningNodeWriter* const& __cordl_internal_get_signingWriter() const;

  constexpr ::System::Xml::XmlSigningNodeWriter*& __cordl_internal_get_signingWriter();

  constexpr int32_t const& __cordl_internal_get_trailByteCount() const;

  constexpr int32_t& __cordl_internal_get_trailByteCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_trailBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_trailBytes();

  constexpr int32_t const& __cordl_internal_get_trailCharCount() const;

  constexpr int32_t& __cordl_internal_get_trailCharCount();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_trailChars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_trailChars();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* const& __cordl_internal_get_whitespaceTextNode() const;

  constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*& __cordl_internal_get_whitespaceTextNode();

  constexpr void __cordl_internal_set_atomicTextNode(::System::Xml::XmlBaseReader_XmlAtomicTextNode* value);

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributeIndex(int32_t value);

  constexpr void __cordl_internal_set_attributeNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> value);

  constexpr void __cordl_internal_set_attributeSorter(::System::Xml::XmlBaseReader_AttributeSorter* value);

  constexpr void __cordl_internal_set_attributeStart(int32_t value);

  constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value);

  constexpr void __cordl_internal_set_cdataNode(::System::Xml::XmlBaseReader_XmlCDataNode* value);

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_commentNode(::System::Xml::XmlBaseReader_XmlCommentNode* value);

  constexpr void __cordl_internal_set_complexTextNode(::System::Xml::XmlBaseReader_XmlComplexTextNode* value);

  constexpr void __cordl_internal_set_declarationNode(::System::Xml::XmlBaseReader_XmlDeclarationNode* value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_elementNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*> value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_node(::System::Xml::XmlBaseReader_XmlNode* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_nsMgr(::System::Xml::XmlBaseReader_NamespaceManager* value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_quotas(::System::Xml::XmlDictionaryReaderQuotas* value);

  constexpr void __cordl_internal_set_readingElement(bool value);

  constexpr void __cordl_internal_set_rootElement(bool value);

  constexpr void __cordl_internal_set_rootElementNode(::System::Xml::XmlBaseReader_XmlElementNode* value);

  constexpr void __cordl_internal_set_signing(bool value);

  constexpr void __cordl_internal_set_signingWriter(::System::Xml::XmlSigningNodeWriter* value);

  constexpr void __cordl_internal_set_trailByteCount(int32_t value);

  constexpr void __cordl_internal_set_trailBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_trailCharCount(int32_t value);

  constexpr void __cordl_internal_set_trailChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_value(::StringW value);

  constexpr void __cordl_internal_set_whitespaceTextNode(::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* value);

  /// @brief Method .ctor, addr 0x5f52a44, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::Base64Encoding* getStaticF_base64Encoding();

  static inline ::System::Text::BinHexEncoding* getStaticF_binhexEncoding();

  static inline ::System::Xml::XmlBaseReader_XmlClosedNode* getStaticF_closedNode();

  static inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* getStaticF_endOfFileNode();

  static inline ::System::Xml::XmlBaseReader_XmlInitialNode* getStaticF_initialNode();

  /// @brief Method get_AttributeCount, addr 0x5f54db4, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_Base64Encoding, addr 0x5f52f28, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Text::Base64Encoding* get_Base64Encoding();

  /// @brief Method get_BaseURI, addr 0x5f54d98, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_BinHexEncoding, addr 0x5f52e58, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Text::BinHexEncoding* get_BinHexEncoding();

  /// @brief Method get_BufferReader, addr 0x5f52ff8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBufferReader* get_BufferReader();

  /// @brief Method get_CanReadValueChunk, addr 0x5f54d90, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_Depth, addr 0x5f54f34, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x5f54f54, size 0x20, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_ElementNode, addr 0x5f53f1c, size 0x44, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlElementNode* get_ElementNode();

  /// @brief Method get_IsDefault, addr 0x5f54dac, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x5f55664, size 0x18, virtual true, abstract: false, final true
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x5f5567c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NameTable, addr 0x5f5651c, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x5f5641c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Node, addr 0x5f53008, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlNode* get_Node();

  /// @brief Method get_NodeType, addr 0x5f56730, size 0x18, virtual true, abstract: false, final true
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OutsideRootElement, addr 0x5f54d80, size 0x10, virtual false, abstract: false, final false
  inline bool get_OutsideRootElement();

  /// @brief Method get_Prefix, addr 0x5f56748, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Quotas, addr 0x5f53000, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryReaderQuotas* get_Quotas();

  /// @brief Method get_QuoteChar, addr 0x5f56830, size 0x18, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5f576e8, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Value, addr 0x5f595b0, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x5f595dc, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlLang, addr 0x5f596c0, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f596d8, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  static inline void setStaticF_base64Encoding(::System::Text::Base64Encoding* value);

  static inline void setStaticF_binhexEncoding(::System::Text::BinHexEncoding* value);

  static inline void setStaticF_closedNode(::System::Xml::XmlBaseReader_XmlClosedNode* value);

  static inline void setStaticF_endOfFileNode(::System::Xml::XmlBaseReader_XmlEndOfFileNode* value);

  static inline void setStaticF_initialNode(::System::Xml::XmlBaseReader_XmlInitialNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseReader(XmlBaseReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseReader(XmlBaseReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16931 };

  /// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBufferReader* ___bufferReader;

  /// @brief Field node, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlNode* ___node;

  /// @brief Field nsMgr, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_NamespaceManager* ___nsMgr;

  /// @brief Field elementNodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*> ___elementNodes;

  /// @brief Field attributeNodes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> ___attributeNodes;

  /// @brief Field atomicTextNode, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlAtomicTextNode* ___atomicTextNode;

  /// @brief Field depth, offset: 0x40, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field attributeCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field attributeStart, offset: 0x48, size: 0x4, def value: None
  int32_t ___attributeStart;

  /// @brief Field quotas, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryReaderQuotas* ___quotas;

  /// @brief Field nameTable, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field declarationNode, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlDeclarationNode* ___declarationNode;

  /// @brief Field complexTextNode, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlComplexTextNode* ___complexTextNode;

  /// @brief Field whitespaceTextNode, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* ___whitespaceTextNode;

  /// @brief Field cdataNode, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlCDataNode* ___cdataNode;

  /// @brief Field commentNode, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlCommentNode* ___commentNode;

  /// @brief Field rootElementNode, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_XmlElementNode* ___rootElementNode;

  /// @brief Field attributeIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ___attributeIndex;

  /// @brief Field chars, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  /// @brief Field prefix, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field localName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field ns, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field value, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field trailCharCount, offset: 0xc0, size: 0x4, def value: None
  int32_t ___trailCharCount;

  /// @brief Field trailByteCount, offset: 0xc4, size: 0x4, def value: None
  int32_t ___trailByteCount;

  /// @brief Field trailChars, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___trailChars;

  /// @brief Field trailBytes, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___trailBytes;

  /// @brief Field rootElement, offset: 0xd8, size: 0x1, def value: None
  bool ___rootElement;

  /// @brief Field readingElement, offset: 0xd9, size: 0x1, def value: None
  bool ___readingElement;

  /// @brief Field signingWriter, offset: 0xe0, size: 0x8, def value: None
  ::System::Xml::XmlSigningNodeWriter* ___signingWriter;

  /// @brief Field signing, offset: 0xe8, size: 0x1, def value: None
  bool ___signing;

  /// @brief Field attributeSorter, offset: 0xf0, size: 0x8, def value: None
  ::System::Xml::XmlBaseReader_AttributeSorter* ___attributeSorter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseReader, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___nsMgr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___elementNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___attributeNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___atomicTextNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___depth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___attributeCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___attributeStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___quotas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___nameTable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___declarationNode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___complexTextNode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___whitespaceTextNode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___cdataNode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___commentNode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___rootElementNode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___attributeIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___chars) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___prefix) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___localName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___ns) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___value) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___trailCharCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___trailByteCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___trailChars) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___trailBytes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___rootElement) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___readingElement) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___signingWriter) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___signing) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseReader, ___attributeSorter) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseReader, 0xf8>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_QNameType, "System.Xml", "XmlBaseReader/QNameType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, "System.Xml", "XmlBaseReader/XmlNode/XmlNodeFlags");
NEED_NO_BOX(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, "System.Xml", "XmlBaseReader/NamespaceManager/XmlAttribute");
NEED_NO_BOX(::System::Xml::XmlBaseReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader*, "System.Xml", "XmlBaseReader");
NEED_NO_BOX(::System::Xml::XmlBaseReader_AttributeSorter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_AttributeSorter*, "System.Xml", "XmlBaseReader/AttributeSorter");
NEED_NO_BOX(::System::Xml::XmlBaseReader_Namespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_Namespace*, "System.Xml", "XmlBaseReader/Namespace");
NEED_NO_BOX(::System::Xml::XmlBaseReader_NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_NamespaceManager*, "System.Xml", "XmlBaseReader/NamespaceManager");
NEED_NO_BOX(::System::Xml::XmlBaseReader_QuotaNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_QuotaNameTable*, "System.Xml", "XmlBaseReader/QuotaNameTable");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlAtomicTextNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlAtomicTextNode*, "System.Xml", "XmlBaseReader/XmlAtomicTextNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlAttributeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlAttributeNode*, "System.Xml", "XmlBaseReader/XmlAttributeNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlAttributeTextNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlAttributeTextNode*, "System.Xml", "XmlBaseReader/XmlAttributeTextNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlCDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlCDataNode*, "System.Xml", "XmlBaseReader/XmlCDataNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlClosedNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlClosedNode*, "System.Xml", "XmlBaseReader/XmlClosedNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlCommentNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlCommentNode*, "System.Xml", "XmlBaseReader/XmlCommentNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlComplexTextNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlComplexTextNode*, "System.Xml", "XmlBaseReader/XmlComplexTextNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlDeclarationNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlDeclarationNode*, "System.Xml", "XmlBaseReader/XmlDeclarationNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlElementNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlElementNode*, "System.Xml", "XmlBaseReader/XmlElementNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlEndElementNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlEndElementNode*, "System.Xml", "XmlBaseReader/XmlEndElementNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlEndOfFileNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlEndOfFileNode*, "System.Xml", "XmlBaseReader/XmlEndOfFileNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlInitialNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlInitialNode*, "System.Xml", "XmlBaseReader/XmlInitialNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlNode*, "System.Xml", "XmlBaseReader/XmlNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlTextNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlTextNode*, "System.Xml", "XmlBaseReader/XmlTextNode");
NEED_NO_BOX(::System::Xml::XmlBaseReader_XmlWhitespaceTextNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*, "System.Xml", "XmlBaseReader/XmlWhitespaceTextNode");
