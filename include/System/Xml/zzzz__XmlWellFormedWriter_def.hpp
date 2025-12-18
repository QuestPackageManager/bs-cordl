#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class AttributeValueCache_XmlWellFormedWriter_BufferChunk;
}
namespace System::Xml {
struct AttributeValueCache_XmlWellFormedWriter_ItemType;
}
namespace System::Xml {
class AttributeValueCache_XmlWellFormedWriter_Item;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlException;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
struct XmlWellFormedWriter_AttrName;
}
namespace System::Xml {
class XmlWellFormedWriter_AttributeValueCache;
}
namespace System::Xml {
struct XmlWellFormedWriter_ElementScope;
}
namespace System::Xml {
struct XmlWellFormedWriter_NamespaceKind;
}
namespace System::Xml {
class XmlWellFormedWriter_NamespaceResolverProxy;
}
namespace System::Xml {
struct XmlWellFormedWriter_Namespace;
}
namespace System::Xml {
struct XmlWellFormedWriter_SpecialAttribute;
}
namespace System::Xml {
struct XmlWellFormedWriter_State;
}
namespace System::Xml {
struct XmlWellFormedWriter_Token;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
struct AttributeValueCache_XmlWellFormedWriter_ItemType;
}
namespace System::Xml {
struct XmlWellFormedWriter_NamespaceKind;
}
namespace System::Xml {
struct XmlWellFormedWriter_SpecialAttribute;
}
namespace System::Xml {
struct XmlWellFormedWriter_State;
}
namespace System::Xml {
struct XmlWellFormedWriter_Token;
}
namespace System::Xml {
class AttributeValueCache_XmlWellFormedWriter_BufferChunk;
}
namespace System::Xml {
class AttributeValueCache_XmlWellFormedWriter_Item;
}
namespace System::Xml {
class XmlWellFormedWriter;
}
namespace System::Xml {
class XmlWellFormedWriter_AttributeValueCache;
}
namespace System::Xml {
class XmlWellFormedWriter_NamespaceResolverProxy;
}
namespace System::Xml {
struct XmlWellFormedWriter_AttrName;
}
namespace System::Xml {
struct XmlWellFormedWriter_ElementScope;
}
namespace System::Xml {
struct XmlWellFormedWriter_Namespace;
}
// Write type traits
MARK_VAL_T(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_NamespaceKind);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_SpecialAttribute);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_State);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_Token);
MARK_REF_PTR_T(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk);
MARK_REF_PTR_T(::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item);
MARK_REF_PTR_T(::System::Xml::XmlWellFormedWriter);
MARK_REF_PTR_T(::System::Xml::XmlWellFormedWriter_AttributeValueCache);
MARK_REF_PTR_T(::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_AttrName);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_ElementScope);
MARK_VAL_T(::System::Xml::XmlWellFormedWriter_Namespace);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/State
struct CORDL_TYPE XmlWellFormedWriter_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlWellFormedWriter_State_Unwrapped
  enum struct __XmlWellFormedWriter_State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_TopLevel = static_cast<int32_t>(0x1),
    __E_Document = static_cast<int32_t>(0x2),
    __E_Element = static_cast<int32_t>(0x3),
    __E_Content = static_cast<int32_t>(0x4),
    __E_B64Content = static_cast<int32_t>(0x5),
    __E_B64Attribute = static_cast<int32_t>(0x6),
    __E_AfterRootEle = static_cast<int32_t>(0x7),
    __E_Attribute = static_cast<int32_t>(0x8),
    __E_SpecialAttr = static_cast<int32_t>(0x9),
    __E_EndDocument = static_cast<int32_t>(0xa),
    __E_RootLevelAttr = static_cast<int32_t>(0xb),
    __E_RootLevelSpecAttr = static_cast<int32_t>(0xc),
    __E_RootLevelB64Attr = static_cast<int32_t>(0xd),
    __E_AfterRootLevelAttr = static_cast<int32_t>(0xe),
    __E_Closed = static_cast<int32_t>(0xf),
    __E_Error = static_cast<int32_t>(0x10),
    __E_StartContent = static_cast<int32_t>(0x65),
    __E_StartContentEle = static_cast<int32_t>(0x66),
    __E_StartContentB64 = static_cast<int32_t>(0x67),
    __E_StartDoc = static_cast<int32_t>(0x68),
    __E_StartDocEle = static_cast<int32_t>(0x6a),
    __E_EndAttrSEle = static_cast<int32_t>(0x6b),
    __E_EndAttrEEle = static_cast<int32_t>(0x6c),
    __E_EndAttrSCont = static_cast<int32_t>(0x6d),
    __E_EndAttrSAttr = static_cast<int32_t>(0x6f),
    __E_PostB64Cont = static_cast<int32_t>(0x70),
    __E_PostB64Attr = static_cast<int32_t>(0x71),
    __E_PostB64RootAttr = static_cast<int32_t>(0x72),
    __E_StartFragEle = static_cast<int32_t>(0x73),
    __E_StartFragCont = static_cast<int32_t>(0x74),
    __E_StartFragB64 = static_cast<int32_t>(0x75),
    __E_StartRootLevelAttr = static_cast<int32_t>(0x76),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlWellFormedWriter_State_Unwrapped() const noexcept {
    return static_cast<__XmlWellFormedWriter_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_State(int32_t value__) noexcept;

  /// @brief Field AfterRootEle value: I32(7)
  static ::System::Xml::XmlWellFormedWriter_State const AfterRootEle;

  /// @brief Field AfterRootLevelAttr value: I32(14)
  static ::System::Xml::XmlWellFormedWriter_State const AfterRootLevelAttr;

  /// @brief Field Attribute value: I32(8)
  static ::System::Xml::XmlWellFormedWriter_State const Attribute;

  /// @brief Field B64Attribute value: I32(6)
  static ::System::Xml::XmlWellFormedWriter_State const B64Attribute;

  /// @brief Field B64Content value: I32(5)
  static ::System::Xml::XmlWellFormedWriter_State const B64Content;

  /// @brief Field Closed value: I32(15)
  static ::System::Xml::XmlWellFormedWriter_State const Closed;

  /// @brief Field Content value: I32(4)
  static ::System::Xml::XmlWellFormedWriter_State const Content;

  /// @brief Field Document value: I32(2)
  static ::System::Xml::XmlWellFormedWriter_State const Document;

  /// @brief Field Element value: I32(3)
  static ::System::Xml::XmlWellFormedWriter_State const Element;

  /// @brief Field EndAttrEEle value: I32(108)
  static ::System::Xml::XmlWellFormedWriter_State const EndAttrEEle;

  /// @brief Field EndAttrSAttr value: I32(111)
  static ::System::Xml::XmlWellFormedWriter_State const EndAttrSAttr;

  /// @brief Field EndAttrSCont value: I32(109)
  static ::System::Xml::XmlWellFormedWriter_State const EndAttrSCont;

  /// @brief Field EndAttrSEle value: I32(107)
  static ::System::Xml::XmlWellFormedWriter_State const EndAttrSEle;

  /// @brief Field EndDocument value: I32(10)
  static ::System::Xml::XmlWellFormedWriter_State const EndDocument;

  /// @brief Field Error value: I32(16)
  static ::System::Xml::XmlWellFormedWriter_State const Error;

  /// @brief Field PostB64Attr value: I32(113)
  static ::System::Xml::XmlWellFormedWriter_State const PostB64Attr;

  /// @brief Field PostB64Cont value: I32(112)
  static ::System::Xml::XmlWellFormedWriter_State const PostB64Cont;

  /// @brief Field PostB64RootAttr value: I32(114)
  static ::System::Xml::XmlWellFormedWriter_State const PostB64RootAttr;

  /// @brief Field RootLevelAttr value: I32(11)
  static ::System::Xml::XmlWellFormedWriter_State const RootLevelAttr;

  /// @brief Field RootLevelB64Attr value: I32(13)
  static ::System::Xml::XmlWellFormedWriter_State const RootLevelB64Attr;

  /// @brief Field RootLevelSpecAttr value: I32(12)
  static ::System::Xml::XmlWellFormedWriter_State const RootLevelSpecAttr;

  /// @brief Field SpecialAttr value: I32(9)
  static ::System::Xml::XmlWellFormedWriter_State const SpecialAttr;

  /// @brief Field Start value: I32(0)
  static ::System::Xml::XmlWellFormedWriter_State const Start;

  /// @brief Field StartContent value: I32(101)
  static ::System::Xml::XmlWellFormedWriter_State const StartContent;

  /// @brief Field StartContentB64 value: I32(103)
  static ::System::Xml::XmlWellFormedWriter_State const StartContentB64;

  /// @brief Field StartContentEle value: I32(102)
  static ::System::Xml::XmlWellFormedWriter_State const StartContentEle;

  /// @brief Field StartDoc value: I32(104)
  static ::System::Xml::XmlWellFormedWriter_State const StartDoc;

  /// @brief Field StartDocEle value: I32(106)
  static ::System::Xml::XmlWellFormedWriter_State const StartDocEle;

  /// @brief Field StartFragB64 value: I32(117)
  static ::System::Xml::XmlWellFormedWriter_State const StartFragB64;

  /// @brief Field StartFragCont value: I32(116)
  static ::System::Xml::XmlWellFormedWriter_State const StartFragCont;

  /// @brief Field StartFragEle value: I32(115)
  static ::System::Xml::XmlWellFormedWriter_State const StartFragEle;

  /// @brief Field StartRootLevelAttr value: I32(118)
  static ::System::Xml::XmlWellFormedWriter_State const StartRootLevelAttr;

  /// @brief Field TopLevel value: I32(1)
  static ::System::Xml::XmlWellFormedWriter_State const TopLevel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9328 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_State, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/Token
struct CORDL_TYPE XmlWellFormedWriter_Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlWellFormedWriter_Token_Unwrapped
  enum struct __XmlWellFormedWriter_Token_Unwrapped : int32_t {
    __E_StartDocument = static_cast<int32_t>(0x0),
    __E_EndDocument = static_cast<int32_t>(0x1),
    __E_PI = static_cast<int32_t>(0x2),
    __E_Comment = static_cast<int32_t>(0x3),
    __E_Dtd = static_cast<int32_t>(0x4),
    __E_StartElement = static_cast<int32_t>(0x5),
    __E_EndElement = static_cast<int32_t>(0x6),
    __E_StartAttribute = static_cast<int32_t>(0x7),
    __E_EndAttribute = static_cast<int32_t>(0x8),
    __E_Text = static_cast<int32_t>(0x9),
    __E_CData = static_cast<int32_t>(0xa),
    __E_AtomicValue = static_cast<int32_t>(0xb),
    __E_Base64 = static_cast<int32_t>(0xc),
    __E_RawData = static_cast<int32_t>(0xd),
    __E_Whitespace = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlWellFormedWriter_Token_Unwrapped() const noexcept {
    return static_cast<__XmlWellFormedWriter_Token_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_Token();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_Token(int32_t value__) noexcept;

  /// @brief Field AtomicValue value: I32(11)
  static ::System::Xml::XmlWellFormedWriter_Token const AtomicValue;

  /// @brief Field Base64 value: I32(12)
  static ::System::Xml::XmlWellFormedWriter_Token const Base64;

  /// @brief Field CData value: I32(10)
  static ::System::Xml::XmlWellFormedWriter_Token const CData;

  /// @brief Field Comment value: I32(3)
  static ::System::Xml::XmlWellFormedWriter_Token const Comment;

  /// @brief Field Dtd value: I32(4)
  static ::System::Xml::XmlWellFormedWriter_Token const Dtd;

  /// @brief Field EndAttribute value: I32(8)
  static ::System::Xml::XmlWellFormedWriter_Token const EndAttribute;

  /// @brief Field EndDocument value: I32(1)
  static ::System::Xml::XmlWellFormedWriter_Token const EndDocument;

  /// @brief Field EndElement value: I32(6)
  static ::System::Xml::XmlWellFormedWriter_Token const EndElement;

  /// @brief Field PI value: I32(2)
  static ::System::Xml::XmlWellFormedWriter_Token const PI;

  /// @brief Field RawData value: I32(13)
  static ::System::Xml::XmlWellFormedWriter_Token const RawData;

  /// @brief Field StartAttribute value: I32(7)
  static ::System::Xml::XmlWellFormedWriter_Token const StartAttribute;

  /// @brief Field StartDocument value: I32(0)
  static ::System::Xml::XmlWellFormedWriter_Token const StartDocument;

  /// @brief Field StartElement value: I32(5)
  static ::System::Xml::XmlWellFormedWriter_Token const StartElement;

  /// @brief Field Text value: I32(9)
  static ::System::Xml::XmlWellFormedWriter_Token const Text;

  /// @brief Field Whitespace value: I32(14)
  static ::System::Xml::XmlWellFormedWriter_Token const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9329 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_Token, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_Token, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
class CORDL_TYPE XmlWellFormedWriter_NamespaceResolverProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field wfWriter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wfWriter, put = __cordl_internal_set_wfWriter)) ::System::Xml::XmlWellFormedWriter* wfWriter;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  static inline ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy* New_ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x60f4860, size 0x38, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x60f4898, size 0x14, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x60f48ac, size 0x20, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::XmlWellFormedWriter* const& __cordl_internal_get_wfWriter() const;

  constexpr ::System::Xml::XmlWellFormedWriter*& __cordl_internal_get_wfWriter();

  constexpr void __cordl_internal_set_wfWriter(::System::Xml::XmlWellFormedWriter* value);

  /// @brief Method .ctor, addr 0x60ecf0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_NamespaceResolverProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter_NamespaceResolverProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWellFormedWriter_NamespaceResolverProxy(XmlWellFormedWriter_NamespaceResolverProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter_NamespaceResolverProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWellFormedWriter_NamespaceResolverProxy(XmlWellFormedWriter_NamespaceResolverProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9330 };

  /// @brief Field wfWriter, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWellFormedWriter* ___wfWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy, ___wfWriter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlSpace
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/ElementScope
struct CORDL_TYPE XmlWellFormedWriter_ElementScope {
public:
  // Declarations
  /// @brief Method Set, addr 0x60ecf24, size 0x1c, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop);

  /// @brief Method WriteEndElement, addr 0x60ee730, size 0x2c, virtual false, abstract: false, final false
  inline void WriteEndElement(::System::Xml::XmlRawWriter* rawWriter);

  /// @brief Method WriteFullEndElement, addr 0x60eea40, size 0x2c, virtual false, abstract: false, final false
  inline void WriteFullEndElement(::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_ElementScope();

  // Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xmlSpace", ty:
  // "::System::Xml::XmlSpace", modifiers: "", def_value: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9331 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field prevNSTop, offset: 0x0, size: 0x4, def value: None
  int32_t prevNSTop;

  /// @brief Field prefix, offset: 0x8, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW localName;

  /// @brief Field namespaceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field xmlSpace, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::XmlSpace xmlSpace;

  /// @brief Field xmlLang, offset: 0x28, size: 0x8, def value: None
  ::StringW xmlLang;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, prevNSTop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, prefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, xmlSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_ElementScope, xmlLang) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_ElementScope, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/NamespaceKind
struct CORDL_TYPE XmlWellFormedWriter_NamespaceKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlWellFormedWriter_NamespaceKind_Unwrapped
  enum struct __XmlWellFormedWriter_NamespaceKind_Unwrapped : int32_t {
    __E_Written = static_cast<int32_t>(0x0),
    __E_NeedToWrite = static_cast<int32_t>(0x1),
    __E_Implied = static_cast<int32_t>(0x2),
    __E_Special = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlWellFormedWriter_NamespaceKind_Unwrapped() const noexcept {
    return static_cast<__XmlWellFormedWriter_NamespaceKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_NamespaceKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_NamespaceKind(int32_t value__) noexcept;

  /// @brief Field Implied value: I32(2)
  static ::System::Xml::XmlWellFormedWriter_NamespaceKind const Implied;

  /// @brief Field NeedToWrite value: I32(1)
  static ::System::Xml::XmlWellFormedWriter_NamespaceKind const NeedToWrite;

  /// @brief Field Special value: I32(3)
  static ::System::Xml::XmlWellFormedWriter_NamespaceKind const Special;

  /// @brief Field Written value: I32(0)
  static ::System::Xml::XmlWellFormedWriter_NamespaceKind const Written;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_NamespaceKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_NamespaceKind, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlWellFormedWriter::NamespaceKind
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/Namespace
struct CORDL_TYPE XmlWellFormedWriter_Namespace {
public:
  // Declarations
  /// @brief Method Set, addr 0x60ecf14, size 0x10, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW namespaceUri, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind);

  /// @brief Method WriteDecl, addr 0x60f3ddc, size 0x12c, virtual false, abstract: false, final false
  inline void WriteDecl(::System::Xml::XmlWriter* writer, ::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_Namespace();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "kind", ty: "::System::Xml::XmlWellFormedWriter_NamespaceKind", modifiers: "", def_value: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_Namespace(::StringW prefix, ::StringW namespaceUri, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind, int32_t prevNsIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field kind, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlWellFormedWriter_NamespaceKind kind;

  /// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
  int32_t prevNsIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_Namespace, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_Namespace, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_Namespace, kind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_Namespace, prevNsIndex) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_Namespace, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/AttrName
struct CORDL_TYPE XmlWellFormedWriter_AttrName {
public:
  // Declarations
  /// @brief Method IsDuplicate, addr 0x60f4048, size 0x60, virtual false, abstract: false, final false
  inline bool IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method Set, addr 0x60f4038, size 0x10, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_AttrName();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW localName;

  /// @brief Field prev, offset: 0x18, size: 0x4, def value: None
  int32_t prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttrName, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttrName, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttrName, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttrName, prev) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_AttrName, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/SpecialAttribute
struct CORDL_TYPE XmlWellFormedWriter_SpecialAttribute {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlWellFormedWriter_SpecialAttribute_Unwrapped
  enum struct __XmlWellFormedWriter_SpecialAttribute_Unwrapped : int32_t {
    __E_No = static_cast<int32_t>(0x0),
    __E_DefaultXmlns = static_cast<int32_t>(0x1),
    __E_PrefixedXmlns = static_cast<int32_t>(0x2),
    __E_XmlSpace = static_cast<int32_t>(0x3),
    __E_XmlLang = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlWellFormedWriter_SpecialAttribute_Unwrapped() const noexcept {
    return static_cast<__XmlWellFormedWriter_SpecialAttribute_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_SpecialAttribute();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWellFormedWriter_SpecialAttribute(int32_t value__) noexcept;

  /// @brief Field DefaultXmlns value: I32(1)
  static ::System::Xml::XmlWellFormedWriter_SpecialAttribute const DefaultXmlns;

  /// @brief Field No value: I32(0)
  static ::System::Xml::XmlWellFormedWriter_SpecialAttribute const No;

  /// @brief Field PrefixedXmlns value: I32(2)
  static ::System::Xml::XmlWellFormedWriter_SpecialAttribute const PrefixedXmlns;

  /// @brief Field XmlLang value: I32(4)
  static ::System::Xml::XmlWellFormedWriter_SpecialAttribute const XmlLang;

  /// @brief Field XmlSpace value: I32(3)
  static ::System::Xml::XmlWellFormedWriter_SpecialAttribute const XmlSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9335 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_SpecialAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_SpecialAttribute, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType
struct CORDL_TYPE AttributeValueCache_XmlWellFormedWriter_ItemType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped
  enum struct __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped : int32_t {
    __E_EntityRef = static_cast<int32_t>(0x0),
    __E_CharEntity = static_cast<int32_t>(0x1),
    __E_SurrogateCharEntity = static_cast<int32_t>(0x2),
    __E_Whitespace = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_StringChars = static_cast<int32_t>(0x5),
    __E_Raw = static_cast<int32_t>(0x6),
    __E_RawChars = static_cast<int32_t>(0x7),
    __E_ValueString = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped() const noexcept {
    return static_cast<__AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeValueCache_XmlWellFormedWriter_ItemType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttributeValueCache_XmlWellFormedWriter_ItemType(int32_t value__) noexcept;

  /// @brief Field CharEntity value: I32(1)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const CharEntity;

  /// @brief Field EntityRef value: I32(0)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const EntityRef;

  /// @brief Field Raw value: I32(6)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const Raw;

  /// @brief Field RawChars value: I32(7)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const RawChars;

  /// @brief Field String value: I32(4)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const String;

  /// @brief Field StringChars value: I32(5)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const StringChars;

  /// @brief Field SurrogateCharEntity value: I32(2)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const SurrogateCharEntity;

  /// @brief Field ValueString value: I32(8)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const ValueString;

  /// @brief Field Whitespace value: I32(3)
  static ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlWellFormedWriter::AttributeValueCache::ItemType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWellFormedWriter/AttributeValueCache/Item
class CORDL_TYPE AttributeValueCache_XmlWellFormedWriter_Item : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::Object* data;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType type;

  static inline ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item* New_ctor();

  /// @brief Method Set, addr 0x60f4a88, size 0xc, virtual false, abstract: false, final false
  inline void Set(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType type, ::System::Object* data);

  constexpr ::System::Object* const& __cordl_internal_get_data() const;

  constexpr ::System::Object*& __cordl_internal_get_data();

  constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_data(::System::Object* value);

  constexpr void __cordl_internal_set_type(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType value);

  /// @brief Method .ctor, addr 0x60f4a84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeValueCache_XmlWellFormedWriter_Item();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueCache_XmlWellFormedWriter_Item", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeValueCache_XmlWellFormedWriter_Item(AttributeValueCache_XmlWellFormedWriter_Item&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueCache_XmlWellFormedWriter_Item", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeValueCache_XmlWellFormedWriter_Item(AttributeValueCache_XmlWellFormedWriter_Item const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9337 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType ___type;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
class CORDL_TYPE AttributeValueCache_XmlWellFormedWriter_BufferChunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<char16_t, ::Array<char16_t>*> buffer;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x60f4a78, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeValueCache_XmlWellFormedWriter_BufferChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueCache_XmlWellFormedWriter_BufferChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeValueCache_XmlWellFormedWriter_BufferChunk(AttributeValueCache_XmlWellFormedWriter_BufferChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueCache_XmlWellFormedWriter_BufferChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeValueCache_XmlWellFormedWriter_BufferChunk(AttributeValueCache_XmlWellFormedWriter_BufferChunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9338 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buffer;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk, ___count) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWellFormedWriter/AttributeValueCache
class CORDL_TYPE XmlWellFormedWriter_AttributeValueCache : public ::System::Object {
public:
  // Declarations
  using BufferChunk = ::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk;

  using Item = ::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item;

  using ItemType = ::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType;

  __declspec(property(get = get_StringValue)) ::StringW StringValue;

  /// @brief Field firstItem, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_firstItem, put = __cordl_internal_set_firstItem)) int32_t firstItem;

  /// @brief Field items, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_items,
                      put = __cordl_internal_set_items)) ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*>
      items;

  /// @brief Field lastItem, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastItem, put = __cordl_internal_set_lastItem)) int32_t lastItem;

  /// @brief Field singleStringValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_singleStringValue, put = __cordl_internal_set_singleStringValue)) ::StringW singleStringValue;

  /// @brief Field stringValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stringValue, put = __cordl_internal_set_stringValue)) ::System::Text::StringBuilder* stringValue;

  /// @brief Method AddItem, addr 0x60f4908, size 0x170, virtual false, abstract: false, final false
  inline void AddItem(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType type, ::System::Object* data);

  /// @brief Method Clear, addr 0x60f0b34, size 0x2c, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::XmlWellFormedWriter_AttributeValueCache* New_ctor();

  /// @brief Method Replay, addr 0x60f0390, size 0x33c, virtual false, abstract: false, final false
  inline void Replay(::System::Xml::XmlWriter* writer);

  /// @brief Method StartComplexValue, addr 0x60f48cc, size 0x3c, virtual false, abstract: false, final false
  inline void StartComplexValue();

  /// @brief Method Trim, addr 0x60f06cc, size 0x468, virtual false, abstract: false, final false
  inline void Trim();

  /// @brief Method WriteCharEntity, addr 0x60f1464, size 0x64, virtual false, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x60f1ce0, size 0xac, virtual false, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteEntityRef, addr 0x60f113c, size 0x1ac, virtual false, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteRaw, addr 0x60f2014, size 0xac, virtual false, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x60f21ac, size 0x50, virtual false, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteString, addr 0x60f19e8, size 0x70, virtual false, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x60f164c, size 0xc8, virtual false, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x60f33e8, size 0x50, virtual false, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x60f18ac, size 0x50, virtual false, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr int32_t const& __cordl_internal_get_firstItem() const;

  constexpr int32_t& __cordl_internal_get_firstItem();

  constexpr ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*> const& __cordl_internal_get_items() const;

  constexpr ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*>& __cordl_internal_get_items();

  constexpr int32_t const& __cordl_internal_get_lastItem() const;

  constexpr int32_t& __cordl_internal_get_lastItem();

  constexpr ::StringW const& __cordl_internal_get_singleStringValue() const;

  constexpr ::StringW& __cordl_internal_get_singleStringValue();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringValue() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringValue();

  constexpr void __cordl_internal_set_firstItem(int32_t value);

  constexpr void __cordl_internal_set_items(::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*> value);

  constexpr void __cordl_internal_set_lastItem(int32_t value);

  constexpr void __cordl_internal_set_singleStringValue(::StringW value);

  constexpr void __cordl_internal_set_stringValue(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x60f358c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StringValue, addr 0x60efed8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter_AttributeValueCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter_AttributeValueCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWellFormedWriter_AttributeValueCache(XmlWellFormedWriter_AttributeValueCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter_AttributeValueCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWellFormedWriter_AttributeValueCache(XmlWellFormedWriter_AttributeValueCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9339 };

  /// @brief Field stringValue, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringValue;

  /// @brief Field singleStringValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___singleStringValue;

  /// @brief Field items, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, ::Array<::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*>*> ___items;

  /// @brief Field firstItem, offset: 0x28, size: 0x4, def value: None
  int32_t ___firstItem;

  /// @brief Field lastItem, offset: 0x2c, size: 0x4, def value: None
  int32_t ___lastItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttributeValueCache, ___stringValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttributeValueCache, ___singleStringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttributeValueCache, ___items) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttributeValueCache, ___firstItem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter_AttributeValueCache, ___lastItem) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter_AttributeValueCache, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.ConformanceLevel, System.Xml.XmlCharType, System.Xml.XmlWellFormedWriter::SpecialAttribute, System.Xml.XmlWellFormedWriter::State, System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWellFormedWriter
class CORDL_TYPE XmlWellFormedWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  using AttrName = ::System::Xml::XmlWellFormedWriter_AttrName;

  using AttributeValueCache = ::System::Xml::XmlWellFormedWriter_AttributeValueCache;

  using ElementScope = ::System::Xml::XmlWellFormedWriter_ElementScope;

  using Namespace = ::System::Xml::XmlWellFormedWriter_Namespace;

  using NamespaceKind = ::System::Xml::XmlWellFormedWriter_NamespaceKind;

  using NamespaceResolverProxy = ::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy;

  using SpecialAttribute = ::System::Xml::XmlWellFormedWriter_SpecialAttribute;

  using State = ::System::Xml::XmlWellFormedWriter_State;

  using Token = ::System::Xml::XmlWellFormedWriter_Token;

  __declspec(property(get = get_InBase64)) bool InBase64;

  __declspec(property(get = get_IsClosedOrErrorState)) bool IsClosedOrErrorState;

  __declspec(property(get = get_RawWriter)) ::System::Xml::XmlRawWriter* RawWriter;

  __declspec(property(get = get_SaveAttrValue)) bool SaveAttrValue;

  /// @brief Field StateTableAuto, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StateTableAuto, put = setStaticF_StateTableAuto)) ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>
      StateTableAuto;

  /// @brief Field StateTableDocument, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StateTableDocument, put = setStaticF_StateTableDocument)) ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>
      StateTableDocument;

  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field attrCount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_attrCount, put = __cordl_internal_set_attrCount)) int32_t attrCount;

  /// @brief Field attrHashTable, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_attrHashTable, put = __cordl_internal_set_attrHashTable)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* attrHashTable;

  /// @brief Field attrStack, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_attrStack,
                      put = __cordl_internal_set_attrStack)) ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*>
      attrStack;

  /// @brief Field attrValueCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValueCache, put = __cordl_internal_set_attrValueCache)) ::System::Xml::XmlWellFormedWriter_AttributeValueCache* attrValueCache;

  /// @brief Field checkCharacters, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field conformanceLevel, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_conformanceLevel, put = __cordl_internal_set_conformanceLevel)) ::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field curDeclPrefix, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_curDeclPrefix, put = __cordl_internal_set_curDeclPrefix)) ::StringW curDeclPrefix;

  /// @brief Field currentState, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState)) ::System::Xml::XmlWellFormedWriter_State currentState;

  /// @brief Field dtdWritten, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_dtdWritten, put = __cordl_internal_set_dtdWritten)) bool dtdWritten;

  /// @brief Field elemScopeStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_elemScopeStack,
                      put = __cordl_internal_set_elemScopeStack)) ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*>
      elemScopeStack;

  /// @brief Field elemTop, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_elemTop, put = __cordl_internal_set_elemTop)) int32_t elemTop;

  /// @brief Field hasher, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_hasher, put = __cordl_internal_set_hasher)) ::System::Xml::SecureStringHasher* hasher;

  /// @brief Field nsHashtable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_nsHashtable, put = __cordl_internal_set_nsHashtable)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* nsHashtable;

  /// @brief Field nsStack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nsStack,
                      put = __cordl_internal_set_nsStack)) ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*>
      nsStack;

  /// @brief Field nsTop, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_nsTop, put = __cordl_internal_set_nsTop)) int32_t nsTop;

  /// @brief Field omitDuplNamespaces, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get_omitDuplNamespaces, put = __cordl_internal_set_omitDuplNamespaces)) bool omitDuplNamespaces;

  /// @brief Field predefinedNamespaces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predefinedNamespaces, put = __cordl_internal_set_predefinedNamespaces)) ::System::Xml::IXmlNamespaceResolver* predefinedNamespaces;

  /// @brief Field rawWriter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rawWriter, put = __cordl_internal_set_rawWriter)) ::System::Xml::XmlRawWriter* rawWriter;

  /// @brief Field specAttr, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_specAttr, put = __cordl_internal_set_specAttr)) ::System::Xml::XmlWellFormedWriter_SpecialAttribute specAttr;

  /// @brief Field state2WriteState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_state2WriteState, put = setStaticF_state2WriteState)) ::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> state2WriteState;

  /// @brief Field stateName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_stateName, put = setStaticF_stateName)) ::ArrayW<::StringW, ::Array<::StringW>*> stateName;

  /// @brief Field stateTable, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_stateTable,
                      put = __cordl_internal_set_stateTable)) ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>
      stateTable;

  /// @brief Field tokenName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tokenName, put = setStaticF_tokenName)) ::ArrayW<::StringW, ::Array<::StringW>*> tokenName;

  /// @brief Field useNsHashtable, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_useNsHashtable, put = __cordl_internal_set_useNsHashtable)) bool useNsHashtable;

  /// @brief Field writeEndDocumentOnClose, offset 0x9e, size 0x1
  __declspec(property(get = __cordl_internal_get_writeEndDocumentOnClose, put = __cordl_internal_set_writeEndDocumentOnClose)) bool writeEndDocumentOnClose;

  /// @brief Field writer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlWriter* writer;

  /// @brief Field xmlCharType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlDeclFollows, offset 0xa5, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlDeclFollows, put = __cordl_internal_set_xmlDeclFollows)) bool xmlDeclFollows;

  /// @brief Method AddAttribute, addr 0x60ef3e0, size 0x298, virtual false, abstract: false, final false
  inline void AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method AddNamespace, addr 0x60f36d8, size 0x1b0, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW ns, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind);

  /// @brief Method AddToAttrHashTable, addr 0x60f40a8, size 0x160, virtual false, abstract: false, final false
  inline void AddToAttrHashTable(int32_t attributeIndex);

  /// @brief Method AddToNamespaceHashtable, addr 0x60f399c, size 0xfc, virtual false, abstract: false, final false
  inline void AddToNamespaceHashtable(int32_t namespaceIndex);

  /// @brief Method AdvanceState, addr 0x60ed318, size 0x2e0, virtual false, abstract: false, final false
  inline void AdvanceState(::System::Xml::XmlWellFormedWriter_Token token);

  /// @brief Method CheckNCName, addr 0x60edf1c, size 0xf8, virtual false, abstract: false, final false
  inline void CheckNCName(::StringW ncname);

  /// @brief Method Close, addr 0x60f2458, size 0x1d4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DupAttrException, addr 0x60f3888, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlException* DupAttrException(::StringW prefix, ::StringW localName);

  /// @brief Method Flush, addr 0x60f2648, size 0xb0, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GeneratePrefix, addr 0x60ef1d8, size 0x148, virtual false, abstract: false, final false
  inline ::StringW GeneratePrefix();

  /// @brief Method GetStateName, addr 0x60f3a98, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetStateName(::System::Xml::XmlWellFormedWriter_State state);

  /// @brief Method InvalidCharsException, addr 0x60f3f08, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidCharsException(::StringW name, int32_t badCharIndex);

  /// @brief Method LookupLocalNamespace, addr 0x60ef320, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW LookupLocalNamespace(::StringW prefix);

  /// @brief Method LookupNamespace, addr 0x60ee014, size 0x138, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespaceIndex, addr 0x60f35fc, size 0xdc, virtual false, abstract: false, final false
  inline int32_t LookupNamespaceIndex(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x60f26f8, size 0x27c, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlWellFormedWriter* New_ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method PopNamespaces, addr 0x60ee75c, size 0xf0, virtual false, abstract: false, final false
  inline void PopNamespaces(int32_t indexFrom, int32_t indexTo);

  /// @brief Method PushNamespaceExplicit, addr 0x60eff04, size 0x48c, virtual false, abstract: false, final false
  inline bool PushNamespaceExplicit(::StringW prefix, ::StringW ns);

  /// @brief Method PushNamespaceImplicit, addr 0x60ee14c, size 0x3f0, virtual false, abstract: false, final false
  inline void PushNamespaceImplicit(::StringW prefix, ::StringW ns);

  /// @brief Method SetSpecialAttribute, addr 0x60ef144, size 0x94, virtual false, abstract: false, final false
  inline void SetSpecialAttribute(::System::Xml::XmlWellFormedWriter_SpecialAttribute special);

  /// @brief Method StartElementContent, addr 0x60f3d10, size 0xcc, virtual false, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method StartFragment, addr 0x60f35f0, size 0xc, virtual false, abstract: false, final false
  inline void StartFragment();

  /// @brief Method ThrowInvalidStateTransition, addr 0x60f3b44, size 0x1cc, virtual false, abstract: false, final false
  inline void ThrowInvalidStateTransition(::System::Xml::XmlWellFormedWriter_Token token, ::System::Xml::XmlWellFormedWriter_State currentState);

  /// @brief Method WriteBase64, addr 0x60f21fc, size 0x25c, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x60f3438, size 0x120, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x60f0b60, size 0xdc, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x60f12e8, size 0x17c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x60f1a58, size 0x288, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x60f0c3c, size 0xdc, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x60ed5f8, size 0x568, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x60ef678, size 0x860, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x60ed1bc, size 0x15c, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x60ee53c, size 0x1f4, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x60f0fc0, size 0x16c, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x60ee84c, size 0x1f4, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x60f0d18, size 0x2a8, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteQualifiedName, addr 0x60f2a58, size 0x320, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method WriteRaw, addr 0x60f1d8c, size 0x288, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x60f20c0, size 0xec, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x60eea6c, size 0x6d8, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method WriteStartDocument, addr 0x60ecfd8, size 0x8, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x60ed1a0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartDocumentImpl, addr 0x60ecfe0, size 0x1c0, virtual false, abstract: false, final false
  inline void WriteStartDocumentImpl(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteStartElement, addr 0x60edb60, size 0x3bc, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x60f18fc, size 0xec, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x60f14c8, size 0x184, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x60f32ec, size 0xfc, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x60f2e3c, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x60f3098, size 0xcc, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x60f2d78, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x60f2f00, size 0xcc, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x60f2fcc, size 0xcc, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x60f3164, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x60f3228, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteWhitespace, addr 0x60f1714, size 0x198, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr int32_t const& __cordl_internal_get_attrCount() const;

  constexpr int32_t& __cordl_internal_get_attrCount();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_attrHashTable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_attrHashTable();

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*> const& __cordl_internal_get_attrStack() const;

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*>& __cordl_internal_get_attrStack();

  constexpr ::System::Xml::XmlWellFormedWriter_AttributeValueCache* const& __cordl_internal_get_attrValueCache() const;

  constexpr ::System::Xml::XmlWellFormedWriter_AttributeValueCache*& __cordl_internal_get_attrValueCache();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr ::System::Xml::ConformanceLevel const& __cordl_internal_get_conformanceLevel() const;

  constexpr ::System::Xml::ConformanceLevel& __cordl_internal_get_conformanceLevel();

  constexpr ::StringW const& __cordl_internal_get_curDeclPrefix() const;

  constexpr ::StringW& __cordl_internal_get_curDeclPrefix();

  constexpr ::System::Xml::XmlWellFormedWriter_State const& __cordl_internal_get_currentState() const;

  constexpr ::System::Xml::XmlWellFormedWriter_State& __cordl_internal_get_currentState();

  constexpr bool const& __cordl_internal_get_dtdWritten() const;

  constexpr bool& __cordl_internal_get_dtdWritten();

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*> const& __cordl_internal_get_elemScopeStack() const;

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*>& __cordl_internal_get_elemScopeStack();

  constexpr int32_t const& __cordl_internal_get_elemTop() const;

  constexpr int32_t& __cordl_internal_get_elemTop();

  constexpr ::System::Xml::SecureStringHasher* const& __cordl_internal_get_hasher() const;

  constexpr ::System::Xml::SecureStringHasher*& __cordl_internal_get_hasher();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_nsHashtable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_nsHashtable();

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*> const& __cordl_internal_get_nsStack() const;

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*>& __cordl_internal_get_nsStack();

  constexpr int32_t const& __cordl_internal_get_nsTop() const;

  constexpr int32_t& __cordl_internal_get_nsTop();

  constexpr bool const& __cordl_internal_get_omitDuplNamespaces() const;

  constexpr bool& __cordl_internal_get_omitDuplNamespaces();

  constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_predefinedNamespaces() const;

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_predefinedNamespaces();

  constexpr ::System::Xml::XmlRawWriter* const& __cordl_internal_get_rawWriter() const;

  constexpr ::System::Xml::XmlRawWriter*& __cordl_internal_get_rawWriter();

  constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute const& __cordl_internal_get_specAttr() const;

  constexpr ::System::Xml::XmlWellFormedWriter_SpecialAttribute& __cordl_internal_get_specAttr();

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> const& __cordl_internal_get_stateTable() const;

  constexpr ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*>& __cordl_internal_get_stateTable();

  constexpr bool const& __cordl_internal_get_useNsHashtable() const;

  constexpr bool& __cordl_internal_get_useNsHashtable();

  constexpr bool const& __cordl_internal_get_writeEndDocumentOnClose() const;

  constexpr bool& __cordl_internal_get_writeEndDocumentOnClose();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr bool const& __cordl_internal_get_xmlDeclFollows() const;

  constexpr bool& __cordl_internal_get_xmlDeclFollows();

  constexpr void __cordl_internal_set_attrCount(int32_t value);

  constexpr void __cordl_internal_set_attrHashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_attrStack(::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*> value);

  constexpr void __cordl_internal_set_attrValueCache(::System::Xml::XmlWellFormedWriter_AttributeValueCache* value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr void __cordl_internal_set_curDeclPrefix(::StringW value);

  constexpr void __cordl_internal_set_currentState(::System::Xml::XmlWellFormedWriter_State value);

  constexpr void __cordl_internal_set_dtdWritten(bool value);

  constexpr void __cordl_internal_set_elemScopeStack(::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*> value);

  constexpr void __cordl_internal_set_elemTop(int32_t value);

  constexpr void __cordl_internal_set_hasher(::System::Xml::SecureStringHasher* value);

  constexpr void __cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_nsStack(::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*> value);

  constexpr void __cordl_internal_set_nsTop(int32_t value);

  constexpr void __cordl_internal_set_omitDuplNamespaces(bool value);

  constexpr void __cordl_internal_set_predefinedNamespaces(::System::Xml::IXmlNamespaceResolver* value);

  constexpr void __cordl_internal_set_rawWriter(::System::Xml::XmlRawWriter* value);

  constexpr void __cordl_internal_set_specAttr(::System::Xml::XmlWellFormedWriter_SpecialAttribute value);

  constexpr void __cordl_internal_set_stateTable(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value);

  constexpr void __cordl_internal_set_useNsHashtable(bool value);

  constexpr void __cordl_internal_set_writeEndDocumentOnClose(bool value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlDeclFollows(bool value);

  /// @brief Method .ctor, addr 0x60ecaf8, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> getStaticF_StateTableAuto();

  static inline ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> getStaticF_StateTableDocument();

  static inline ::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> getStaticF_state2WriteState();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_stateName();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_tokenName();

  /// @brief Method get_InBase64, addr 0x60f262c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_InBase64();

  /// @brief Method get_IsClosedOrErrorState, addr 0x60f3558, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsClosedOrErrorState();

  /// @brief Method get_RawWriter, addr 0x60f3584, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlRawWriter* get_RawWriter();

  /// @brief Method get_SaveAttrValue, addr 0x60f112c, size 0x10, virtual false, abstract: false, final false
  inline bool get_SaveAttrValue();

  /// @brief Method get_WriteState, addr 0x60ecf40, size 0x98, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x60f29e0, size 0x78, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x60f2974, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  static inline void setStaticF_StateTableAuto(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value);

  static inline void setStaticF_StateTableDocument(::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> value);

  static inline void setStaticF_state2WriteState(::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> value);

  static inline void setStaticF_stateName(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_tokenName(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWellFormedWriter(XmlWellFormedWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWellFormedWriter(XmlWellFormedWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9340 };

  /// @brief Field writer, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field rawWriter, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___rawWriter;

  /// @brief Field predefinedNamespaces, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___predefinedNamespaces;

  /// @brief Field nsStack, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlWellFormedWriter_Namespace, ::Array<::System::Xml::XmlWellFormedWriter_Namespace>*> ___nsStack;

  /// @brief Field nsTop, offset: 0x38, size: 0x4, def value: None
  int32_t ___nsTop;

  /// @brief Field nsHashtable, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___nsHashtable;

  /// @brief Field useNsHashtable, offset: 0x48, size: 0x1, def value: None
  bool ___useNsHashtable;

  /// @brief Field elemScopeStack, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlWellFormedWriter_ElementScope, ::Array<::System::Xml::XmlWellFormedWriter_ElementScope>*> ___elemScopeStack;

  /// @brief Field elemTop, offset: 0x58, size: 0x4, def value: None
  int32_t ___elemTop;

  /// @brief Field attrStack, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlWellFormedWriter_AttrName, ::Array<::System::Xml::XmlWellFormedWriter_AttrName>*> ___attrStack;

  /// @brief Field attrCount, offset: 0x68, size: 0x4, def value: None
  int32_t ___attrCount;

  /// @brief Field attrHashTable, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___attrHashTable;

  /// @brief Field specAttr, offset: 0x78, size: 0x4, def value: None
  ::System::Xml::XmlWellFormedWriter_SpecialAttribute ___specAttr;

  /// @brief Field attrValueCache, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlWellFormedWriter_AttributeValueCache* ___attrValueCache;

  /// @brief Field curDeclPrefix, offset: 0x88, size: 0x8, def value: None
  ::StringW ___curDeclPrefix;

  /// @brief Field stateTable, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlWellFormedWriter_State, ::Array<::System::Xml::XmlWellFormedWriter_State>*> ___stateTable;

  /// @brief Field currentState, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::XmlWellFormedWriter_State ___currentState;

  /// @brief Field checkCharacters, offset: 0x9c, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field omitDuplNamespaces, offset: 0x9d, size: 0x1, def value: None
  bool ___omitDuplNamespaces;

  /// @brief Field writeEndDocumentOnClose, offset: 0x9e, size: 0x1, def value: None
  bool ___writeEndDocumentOnClose;

  /// @brief Field conformanceLevel, offset: 0xa0, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  /// @brief Field dtdWritten, offset: 0xa4, size: 0x1, def value: None
  bool ___dtdWritten;

  /// @brief Field xmlDeclFollows, offset: 0xa5, size: 0x1, def value: None
  bool ___xmlDeclFollows;

  /// @brief Field xmlCharType, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field hasher, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::SecureStringHasher* ___hasher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___rawWriter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___predefinedNamespaces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___nsStack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___nsTop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___nsHashtable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___useNsHashtable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___elemScopeStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___elemTop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___attrStack) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___attrCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___attrHashTable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___specAttr) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___attrValueCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___curDeclPrefix) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___stateTable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___currentState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___checkCharacters) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___omitDuplNamespaces) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___writeEndDocumentOnClose) == 0x9e, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___conformanceLevel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___dtdWritten) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___xmlDeclFollows) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___xmlCharType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWellFormedWriter, ___hasher) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter, 0xb8>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeValueCache_XmlWellFormedWriter_ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_NamespaceKind, "System.Xml", "XmlWellFormedWriter/NamespaceKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_SpecialAttribute, "System.Xml", "XmlWellFormedWriter/SpecialAttribute");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_State, "System.Xml", "XmlWellFormedWriter/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_Token, "System.Xml", "XmlWellFormedWriter/Token");
NEED_NO_BOX(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeValueCache_XmlWellFormedWriter_BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
NEED_NO_BOX(::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeValueCache_XmlWellFormedWriter_Item*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/Item");
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter*, "System.Xml", "XmlWellFormedWriter");
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter_AttributeValueCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy*, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter_Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
