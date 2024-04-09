#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter)
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
struct __XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__Item;
}
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
class XmlWriterSettings;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct __XmlWellFormedWriter__AttrName;
}
namespace System::Xml {
class __XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
struct __XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct __XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
class __XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Namespace;
}
namespace System::Xml {
struct __XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
struct __XmlWellFormedWriter__State;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Token;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace System::Xml {
struct __XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
struct __XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
struct __XmlWellFormedWriter__State;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Token;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__Item;
}
namespace System::Xml {
class XmlWellFormedWriter;
}
namespace System::Xml {
class __XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
class __XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
struct __XmlWellFormedWriter__AttrName;
}
namespace System::Xml {
struct __XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Namespace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__NamespaceKind);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__SpecialAttribute);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__State);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__Token);
MARK_REF_PTR_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk);
MARK_REF_PTR_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item);
MARK_REF_PTR_T(::System::Xml::XmlWellFormedWriter);
MARK_REF_PTR_T(::System::Xml::__XmlWellFormedWriter__AttributeValueCache);
MARK_REF_PTR_T(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__AttrName);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__ElementScope);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__Namespace);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::State
struct CORDL_TYPE __XmlWellFormedWriter__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__State_Unwrapped
  enum struct ____XmlWellFormedWriter__State_Unwrapped : int32_t {
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
  constexpr operator ____XmlWellFormedWriter__State_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AfterRootEle value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlWellFormedWriter__State const AfterRootEle;

  /// @brief Field AfterRootLevelAttr value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlWellFormedWriter__State const AfterRootLevelAttr;

  /// @brief Field Attribute value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlWellFormedWriter__State const Attribute;

  /// @brief Field B64Attribute value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlWellFormedWriter__State const B64Attribute;

  /// @brief Field B64Content value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlWellFormedWriter__State const B64Content;

  /// @brief Field Closed value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlWellFormedWriter__State const Closed;

  /// @brief Field Content value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__State const Content;

  /// @brief Field Document value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__State const Document;

  /// @brief Field Element value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__State const Element;

  /// @brief Field EndAttrEEle value: static_cast<int32_t>(0x6c)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrEEle;

  /// @brief Field EndAttrSAttr value: static_cast<int32_t>(0x6f)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSAttr;

  /// @brief Field EndAttrSCont value: static_cast<int32_t>(0x6d)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSCont;

  /// @brief Field EndAttrSEle value: static_cast<int32_t>(0x6b)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSEle;

  /// @brief Field EndDocument value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlWellFormedWriter__State const EndDocument;

  /// @brief Field Error value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlWellFormedWriter__State const Error;

  /// @brief Field PostB64Attr value: static_cast<int32_t>(0x71)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64Attr;

  /// @brief Field PostB64Cont value: static_cast<int32_t>(0x70)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64Cont;

  /// @brief Field PostB64RootAttr value: static_cast<int32_t>(0x72)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64RootAttr;

  /// @brief Field RootLevelAttr value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelAttr;

  /// @brief Field RootLevelB64Attr value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelB64Attr;

  /// @brief Field RootLevelSpecAttr value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelSpecAttr;

  /// @brief Field SpecialAttr value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlWellFormedWriter__State const SpecialAttr;

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__State const Start;

  /// @brief Field StartContent value: static_cast<int32_t>(0x65)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContent;

  /// @brief Field StartContentB64 value: static_cast<int32_t>(0x67)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContentB64;

  /// @brief Field StartContentEle value: static_cast<int32_t>(0x66)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContentEle;

  /// @brief Field StartDoc value: static_cast<int32_t>(0x68)
  static ::System::Xml::__XmlWellFormedWriter__State const StartDoc;

  /// @brief Field StartDocEle value: static_cast<int32_t>(0x6a)
  static ::System::Xml::__XmlWellFormedWriter__State const StartDocEle;

  /// @brief Field StartFragB64 value: static_cast<int32_t>(0x75)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragB64;

  /// @brief Field StartFragCont value: static_cast<int32_t>(0x74)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragCont;

  /// @brief Field StartFragEle value: static_cast<int32_t>(0x73)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragEle;

  /// @brief Field StartRootLevelAttr value: static_cast<int32_t>(0x76)
  static ::System::Xml::__XmlWellFormedWriter__State const StartRootLevelAttr;

  /// @brief Field TopLevel value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__State const TopLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__State, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::Token
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::Token
struct CORDL_TYPE __XmlWellFormedWriter__Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__Token_Unwrapped
  enum struct ____XmlWellFormedWriter__Token_Unwrapped : int32_t {
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
  constexpr operator ____XmlWellFormedWriter__Token_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__Token_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__Token();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__Token(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AtomicValue value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlWellFormedWriter__Token const AtomicValue;

  /// @brief Field Base64 value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlWellFormedWriter__Token const Base64;

  /// @brief Field CData value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlWellFormedWriter__Token const CData;

  /// @brief Field Comment value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__Token const Comment;

  /// @brief Field Dtd value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__Token const Dtd;

  /// @brief Field EndAttribute value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndAttribute;

  /// @brief Field EndDocument value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndDocument;

  /// @brief Field EndElement value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndElement;

  /// @brief Field PI value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__Token const PI;

  /// @brief Field RawData value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlWellFormedWriter__Token const RawData;

  /// @brief Field StartAttribute value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartAttribute;

  /// @brief Field StartDocument value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartDocument;

  /// @brief Field StartElement value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartElement;

  /// @brief Field Text value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlWellFormedWriter__Token const Text;

  /// @brief Field Whitespace value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlWellFormedWriter__Token const Whitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__Token, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__Token, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::NamespaceResolverProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::XmlWellFormedWriter::NamespaceResolverProxy*
class CORDL_TYPE __XmlWellFormedWriter__NamespaceResolverProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field wfWriter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wfWriter, put = __cordl_internal_set_wfWriter))::System::Xml::XmlWellFormedWriter* wfWriter;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  static inline ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy* New_ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x2d84c48, size 0x40, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x2d84c88, size 0x18, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x2d84ca0, size 0x24, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::XmlWellFormedWriter*& __cordl_internal_get_wfWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWellFormedWriter*> const& __cordl_internal_get_wfWriter() const;

  constexpr void __cordl_internal_set_wfWriter(::System::Xml::XmlWellFormedWriter* value);

  /// @brief Method .ctor, addr 0x2d7e6fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__NamespaceResolverProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__NamespaceResolverProxy(__XmlWellFormedWriter__NamespaceResolverProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__NamespaceResolverProxy(__XmlWellFormedWriter__NamespaceResolverProxy const&) = delete;

  /// @brief Field wfWriter, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWellFormedWriter* ___wfWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy, ___wfWriter) == 0x10, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ElementScope
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::ElementScope
struct CORDL_TYPE __XmlWellFormedWriter__ElementScope {
public:
  // Declarations
  /// @brief Method Set, addr 0x2d7e734, size 0x1c, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop);

  /// @brief Method WriteEndElement, addr 0x2d7ff1c, size 0x30, virtual false, abstract: false, final false
  inline void WriteEndElement(::System::Xml::XmlRawWriter* rawWriter);

  /// @brief Method WriteFullEndElement, addr 0x2d8020c, size 0x30, virtual false, abstract: false, final false
  inline void WriteFullEndElement(::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__ElementScope();

  // Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xmlSpace", ty:
  // "::System::Xml::XmlSpace", modifiers: "", def_value: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__ElementScope, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, prevNSTop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, prefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, xmlSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__ElementScope, xmlLang) == 0x28, "Offset mismatch!");

} // namespace System::Xml
// Type: ::NamespaceKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::NamespaceKind
struct CORDL_TYPE __XmlWellFormedWriter__NamespaceKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__NamespaceKind_Unwrapped
  enum struct ____XmlWellFormedWriter__NamespaceKind_Unwrapped : int32_t {
    __E_Written = static_cast<int32_t>(0x0),
    __E_NeedToWrite = static_cast<int32_t>(0x1),
    __E_Implied = static_cast<int32_t>(0x2),
    __E_Special = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__NamespaceKind_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__NamespaceKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__NamespaceKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__NamespaceKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Implied value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Implied;

  /// @brief Field NeedToWrite value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const NeedToWrite;

  /// @brief Field Special value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Special;

  /// @brief Field Written value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Written;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__NamespaceKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__NamespaceKind, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::Namespace
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::Namespace
struct CORDL_TYPE __XmlWellFormedWriter__Namespace {
public:
  // Declarations
  /// @brief Method Set, addr 0x2d7e724, size 0x10, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind);

  /// @brief Method WriteDecl, addr 0x2d83f00, size 0x12c, virtual false, abstract: false, final false
  inline void WriteDecl(::System::Xml::XmlWriter* writer, ::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__Namespace();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "kind", ty: "::System::Xml::__XmlWellFormedWriter__NamespaceKind", modifiers: "", def_value: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__Namespace(::StringW prefix, ::StringW namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind, int32_t prevNsIndex) noexcept;

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field kind, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind;

  /// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
  int32_t prevNsIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__Namespace, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__Namespace, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__Namespace, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__Namespace, kind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__Namespace, prevNsIndex) == 0x14, "Offset mismatch!");

} // namespace System::Xml
// Type: ::AttrName
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::AttrName
struct CORDL_TYPE __XmlWellFormedWriter__AttrName {
public:
  // Declarations
  /// @brief Method IsDuplicate, addr 0x2d84cd4, size 0x6c, virtual false, abstract: false, final false
  inline bool IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method Set, addr 0x2d84cc4, size 0x10, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttrName();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept;

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW localName;

  /// @brief Field prev, offset: 0x18, size: 0x4, def value: None
  int32_t prev;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__AttrName, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttrName, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttrName, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttrName, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttrName, prev) == 0x18, "Offset mismatch!");

} // namespace System::Xml
// Type: ::SpecialAttribute
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::SpecialAttribute
struct CORDL_TYPE __XmlWellFormedWriter__SpecialAttribute {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__SpecialAttribute_Unwrapped
  enum struct ____XmlWellFormedWriter__SpecialAttribute_Unwrapped : int32_t {
    __E_No = static_cast<int32_t>(0x0),
    __E_DefaultXmlns = static_cast<int32_t>(0x1),
    __E_PrefixedXmlns = static_cast<int32_t>(0x2),
    __E_XmlSpace = static_cast<int32_t>(0x3),
    __E_XmlLang = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__SpecialAttribute_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__SpecialAttribute_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__SpecialAttribute();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__SpecialAttribute(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DefaultXmlns value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const DefaultXmlns;

  /// @brief Field No value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const No;

  /// @brief Field PrefixedXmlns value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const PrefixedXmlns;

  /// @brief Field XmlLang value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const XmlLang;

  /// @brief Field XmlSpace value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const XmlSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__SpecialAttribute, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__SpecialAttribute, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ItemType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::ItemType
struct CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__ItemType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped
  enum struct ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped : int32_t {
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
  constexpr operator ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__ItemType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__AttributeValueCache__ItemType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CharEntity value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const CharEntity;

  /// @brief Field EntityRef value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const EntityRef;

  /// @brief Field Raw value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const Raw;

  /// @brief Field RawChars value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const RawChars;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const String;

  /// @brief Field StringChars value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const StringChars;

  /// @brief Field SurrogateCharEntity value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const SurrogateCharEntity;

  /// @brief Field ValueString value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const ValueString;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const Whitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Item
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::Item*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__Item : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::Object* data;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type;

  static inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item* New_ctor();

  /// @brief Method Set, addr 0x2d85cc4, size 0xc, virtual false, abstract: false, final false
  inline void Set(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::System::Object* data);

  constexpr ::System::Object*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_data(::System::Object* value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType value);

  /// @brief Method .ctor, addr 0x2d85cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__Item();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache__Item(__XmlWellFormedWriter__AttributeValueCache__Item&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache__Item(__XmlWellFormedWriter__AttributeValueCache__Item const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType ___type;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item, ___data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BufferChunk
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::BufferChunk*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__BufferChunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<char16_t, ::Array<char16_t>*> buffer;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x2d85388, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__BufferChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache__BufferChunk(__XmlWellFormedWriter__AttributeValueCache__BufferChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache__BufferChunk(__XmlWellFormedWriter__AttributeValueCache__BufferChunk const&) = delete;

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buffer;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk, ___count) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AttributeValueCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::XmlWellFormedWriter::AttributeValueCache*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache : public ::System::Object {
public:
  // Declarations
  using BufferChunk = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk;

  using Item = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item;

  using ItemType = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType;

  __declspec(property(get = get_StringValue))::StringW StringValue;

  /// @brief Field firstItem, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_firstItem, put = __cordl_internal_set_firstItem)) int32_t firstItem;

  /// @brief Field items, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*,
                                                                                                   ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> items;

  /// @brief Field lastItem, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastItem, put = __cordl_internal_set_lastItem)) int32_t lastItem;

  /// @brief Field singleStringValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_singleStringValue, put = __cordl_internal_set_singleStringValue))::StringW singleStringValue;

  /// @brief Field stringValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stringValue, put = __cordl_internal_set_stringValue))::System::Text::StringBuilder* stringValue;

  /// @brief Method AddItem, addr 0x2d84f4c, size 0x174, virtual false, abstract: false, final false
  inline void AddItem(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::System::Object* data);

  /// @brief Method Clear, addr 0x2d85c8c, size 0x30, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* New_ctor();

  /// @brief Method Replay, addr 0x2d85514, size 0x324, virtual false, abstract: false, final false
  inline void Replay(::System::Xml::XmlWriter* writer);

  /// @brief Method StartComplexValue, addr 0x2d84f10, size 0x3c, virtual false, abstract: false, final false
  inline void StartComplexValue();

  /// @brief Method Trim, addr 0x2d85838, size 0x454, virtual false, abstract: false, final false
  inline void Trim();

  /// @brief Method WriteCharEntity, addr 0x2d850c0, size 0x94, virtual false, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x2d852d8, size 0xb0, virtual false, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteEntityRef, addr 0x2d84d74, size 0x19c, virtual false, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteRaw, addr 0x2d853c4, size 0xb0, virtual false, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2d85474, size 0x50, virtual false, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteString, addr 0x2d85268, size 0x70, virtual false, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2d85154, size 0xc4, virtual false, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x2d854c4, size 0x50, virtual false, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x2d85218, size 0x50, virtual false, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr int32_t const& __cordl_internal_get_firstItem() const;

  constexpr int32_t& __cordl_internal_get_firstItem();

  constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> const&
  __cordl_internal_get_items() const;

  constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>&
  __cordl_internal_get_items();

  constexpr int32_t const& __cordl_internal_get_lastItem() const;

  constexpr int32_t& __cordl_internal_get_lastItem();

  constexpr ::StringW const& __cordl_internal_get_singleStringValue() const;

  constexpr ::StringW& __cordl_internal_get_singleStringValue();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_stringValue() const;

  constexpr void __cordl_internal_set_firstItem(int32_t value);

  constexpr void
  __cordl_internal_set_items(::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> value);

  constexpr void __cordl_internal_set_lastItem(int32_t value);

  constexpr void __cordl_internal_set_singleStringValue(::StringW value);

  constexpr void __cordl_internal_set_stringValue(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x2d85cd0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StringValue, addr 0x2d84d40, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache(__XmlWellFormedWriter__AttributeValueCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache(__XmlWellFormedWriter__AttributeValueCache const&) = delete;

  /// @brief Field stringValue, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringValue;

  /// @brief Field singleStringValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___singleStringValue;

  /// @brief Field items, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> ___items;

  /// @brief Field firstItem, offset: 0x28, size: 0x4, def value: None
  int32_t ___firstItem;

  /// @brief Field lastItem, offset: 0x2c, size: 0x4, def value: None
  int32_t ___lastItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__AttributeValueCache, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttributeValueCache, ___stringValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttributeValueCache, ___singleStringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttributeValueCache, ___items) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttributeValueCache, ___firstItem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlWellFormedWriter__AttributeValueCache, ___lastItem) == 0x2c, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlWellFormedWriter
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlWellFormedWriter*
class CORDL_TYPE XmlWellFormedWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  using AttrName = ::System::Xml::__XmlWellFormedWriter__AttrName;

  using AttributeValueCache = ::System::Xml::__XmlWellFormedWriter__AttributeValueCache;

  using ElementScope = ::System::Xml::__XmlWellFormedWriter__ElementScope;

  using Namespace = ::System::Xml::__XmlWellFormedWriter__Namespace;

  using NamespaceKind = ::System::Xml::__XmlWellFormedWriter__NamespaceKind;

  using NamespaceResolverProxy = ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy;

  using SpecialAttribute = ::System::Xml::__XmlWellFormedWriter__SpecialAttribute;

  using State = ::System::Xml::__XmlWellFormedWriter__State;

  using Token = ::System::Xml::__XmlWellFormedWriter__Token;

  __declspec(property(get = get_InBase64)) bool InBase64;

  __declspec(property(get = get_IsClosedOrErrorState)) bool IsClosedOrErrorState;

  __declspec(property(get = get_RawWriter))::System::Xml::XmlRawWriter* RawWriter;

  __declspec(property(get = get_SaveAttrValue)) bool SaveAttrValue;

  /// @brief Field StateTableAuto, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateTableAuto,
                             put = setStaticF_StateTableAuto))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> StateTableAuto;

  /// @brief Field StateTableDocument, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateTableDocument,
                             put = setStaticF_StateTableDocument))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> StateTableDocument;

  __declspec(property(get = get_WriteState))::System::Xml::WriteState WriteState;

  /// @brief Field attrCount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_attrCount, put = __cordl_internal_set_attrCount)) int32_t attrCount;

  /// @brief Field attrHashTable, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_attrHashTable, put = __cordl_internal_set_attrHashTable))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* attrHashTable;

  /// @brief Field attrStack, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_attrStack,
                      put = __cordl_internal_set_attrStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> attrStack;

  /// @brief Field attrValueCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValueCache, put = __cordl_internal_set_attrValueCache))::System::Xml::__XmlWellFormedWriter__AttributeValueCache* attrValueCache;

  /// @brief Field checkCharacters, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field conformanceLevel, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_conformanceLevel, put = __cordl_internal_set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field curDeclPrefix, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_curDeclPrefix, put = __cordl_internal_set_curDeclPrefix))::StringW curDeclPrefix;

  /// @brief Field currentState, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState))::System::Xml::__XmlWellFormedWriter__State currentState;

  /// @brief Field dtdWritten, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_dtdWritten, put = __cordl_internal_set_dtdWritten)) bool dtdWritten;

  /// @brief Field elemScopeStack, offset 0x50, size 0x8
  __declspec(
      property(get = __cordl_internal_get_elemScopeStack,
               put = __cordl_internal_set_elemScopeStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> elemScopeStack;

  /// @brief Field elemTop, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_elemTop, put = __cordl_internal_set_elemTop)) int32_t elemTop;

  /// @brief Field hasher, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_hasher, put = __cordl_internal_set_hasher))::System::Xml::SecureStringHasher* hasher;

  /// @brief Field nsHashtable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_nsHashtable, put = __cordl_internal_set_nsHashtable))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* nsHashtable;

  /// @brief Field nsStack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nsStack,
                      put = __cordl_internal_set_nsStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> nsStack;

  /// @brief Field nsTop, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_nsTop, put = __cordl_internal_set_nsTop)) int32_t nsTop;

  /// @brief Field omitDuplNamespaces, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get_omitDuplNamespaces, put = __cordl_internal_set_omitDuplNamespaces)) bool omitDuplNamespaces;

  /// @brief Field predefinedNamespaces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predefinedNamespaces, put = __cordl_internal_set_predefinedNamespaces))::System::Xml::IXmlNamespaceResolver* predefinedNamespaces;

  /// @brief Field rawWriter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rawWriter, put = __cordl_internal_set_rawWriter))::System::Xml::XmlRawWriter* rawWriter;

  /// @brief Field specAttr, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_specAttr, put = __cordl_internal_set_specAttr))::System::Xml::__XmlWellFormedWriter__SpecialAttribute specAttr;

  /// @brief Field state2WriteState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_state2WriteState, put = setStaticF_state2WriteState))::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> state2WriteState;

  /// @brief Field stateName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stateName, put = setStaticF_stateName))::ArrayW<::StringW, ::Array<::StringW>*> stateName;

  /// @brief Field stateTable, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_stateTable,
                      put = __cordl_internal_set_stateTable))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> stateTable;

  /// @brief Field tokenName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tokenName, put = setStaticF_tokenName))::ArrayW<::StringW, ::Array<::StringW>*> tokenName;

  /// @brief Field useNsHashtable, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_useNsHashtable, put = __cordl_internal_set_useNsHashtable)) bool useNsHashtable;

  /// @brief Field writeEndDocumentOnClose, offset 0x9e, size 0x1
  __declspec(property(get = __cordl_internal_get_writeEndDocumentOnClose, put = __cordl_internal_set_writeEndDocumentOnClose)) bool writeEndDocumentOnClose;

  /// @brief Field writer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer))::System::Xml::XmlWriter* writer;

  /// @brief Field xmlCharType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlDeclFollows, offset 0xa5, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlDeclFollows, put = __cordl_internal_set_xmlDeclFollows)) bool xmlDeclFollows;

  /// @brief Method AddAttribute, addr 0x2d80ba8, size 0x284, virtual false, abstract: false, final false
  inline void AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method AddNamespace, addr 0x2d83854, size 0x17c, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW ns, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind);

  /// @brief Method AddToAttrHashTable, addr 0x2d841ac, size 0x13c, virtual false, abstract: false, final false
  inline void AddToAttrHashTable(int32_t attributeIndex);

  /// @brief Method AddToNamespaceHashtable, addr 0x2d83adc, size 0xe8, virtual false, abstract: false, final false
  inline void AddToNamespaceHashtable(int32_t namespaceIndex);

  /// @brief Method AdvanceState, addr 0x2d7eb18, size 0x30c, virtual false, abstract: false, final false
  inline void AdvanceState(::System::Xml::__XmlWellFormedWriter__Token token);

  /// @brief Method CheckNCName, addr 0x2d7f6c8, size 0x100, virtual false, abstract: false, final false
  inline void CheckNCName(::StringW ncname);

  /// @brief Method Close, addr 0x2d83000, size 0x1bc, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DupAttrException, addr 0x2d839d0, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlException* DupAttrException(::StringW prefix, ::StringW localName);

  /// @brief Method Flush, addr 0x2d831e8, size 0xb4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GeneratePrefix, addr 0x2d809a4, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GeneratePrefix();

  /// @brief Method GetStateName, addr 0x2d83bc4, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetStateName(::System::Xml::__XmlWellFormedWriter__State state);

  /// @brief Method InvalidCharsException, addr 0x2d8402c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidCharsException(::StringW name, int32_t badCharIndex);

  /// @brief Method LookupLocalNamespace, addr 0x2d80ad8, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW LookupLocalNamespace(::StringW prefix);

  /// @brief Method LookupNamespace, addr 0x2d7f7c8, size 0x138, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespaceIndex, addr 0x2d83778, size 0xdc, virtual false, abstract: false, final false
  inline int32_t LookupNamespaceIndex(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x2d8329c, size 0x280, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlWellFormedWriter* New_ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method PopNamespaces, addr 0x2d7ff4c, size 0xd4, virtual false, abstract: false, final false
  inline void PopNamespaces(int32_t indexFrom, int32_t indexTo);

  /// @brief Method PushNamespaceExplicit, addr 0x2d81688, size 0x4e0, virtual false, abstract: false, final false
  inline bool PushNamespaceExplicit(::StringW prefix, ::StringW ns);

  /// @brief Method PushNamespaceImplicit, addr 0x2d7f900, size 0x430, virtual false, abstract: false, final false
  inline void PushNamespaceImplicit(::StringW prefix, ::StringW ns);

  /// @brief Method SetSpecialAttribute, addr 0x2d80910, size 0x94, virtual false, abstract: false, final false
  inline void SetSpecialAttribute(::System::Xml::__XmlWellFormedWriter__SpecialAttribute special);

  /// @brief Method StartElementContent, addr 0x2d83e38, size 0xc8, virtual false, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method StartFragment, addr 0x2d8376c, size 0xc, virtual false, abstract: false, final false
  inline void StartFragment();

  /// @brief Method ThrowInvalidStateTransition, addr 0x2d83c64, size 0x1d4, virtual false, abstract: false, final false
  inline void ThrowInvalidStateTransition(::System::Xml::__XmlWellFormedWriter__Token token, ::System::Xml::__XmlWellFormedWriter__State currentState);

  /// @brief Method WriteBase64, addr 0x2d82db0, size 0x250, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x2d83620, size 0x134, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x2d81b68, size 0x104, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x2d821ac, size 0x1b0, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x2d827bc, size 0x280, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x2d81c6c, size 0x104, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x2d7ee24, size 0x4ec, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x2d80e2c, size 0x85c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x2d7e9bc, size 0x15c, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x2d7fd30, size 0x1ec, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x2d8202c, size 0x170, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x2d80020, size 0x1ec, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x2d81d70, size 0x2bc, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x2d82a3c, size 0x280, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2d82cbc, size 0xf4, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x2d8023c, size 0x6d4, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method WriteStartDocument, addr 0x2d7e7e4, size 0x8, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x2d7e9a0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartDocumentImpl, addr 0x2d7e7ec, size 0x1b4, virtual false, abstract: false, final false
  inline void WriteStartDocumentImpl(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteStartElement, addr 0x2d7f310, size 0x3b8, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x2d826c8, size 0xf4, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2d8235c, size 0x1a8, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x2d8351c, size 0x104, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x2d82504, size 0x1c4, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr int32_t const& __cordl_internal_get_attrCount() const;

  constexpr int32_t& __cordl_internal_get_attrCount();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_attrHashTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get_attrHashTable() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> const& __cordl_internal_get_attrStack() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>& __cordl_internal_get_attrStack();

  constexpr ::System::Xml::__XmlWellFormedWriter__AttributeValueCache*& __cordl_internal_get_attrValueCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*> const& __cordl_internal_get_attrValueCache() const;

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr ::System::Xml::ConformanceLevel const& __cordl_internal_get_conformanceLevel() const;

  constexpr ::System::Xml::ConformanceLevel& __cordl_internal_get_conformanceLevel();

  constexpr ::StringW const& __cordl_internal_get_curDeclPrefix() const;

  constexpr ::StringW& __cordl_internal_get_curDeclPrefix();

  constexpr ::System::Xml::__XmlWellFormedWriter__State const& __cordl_internal_get_currentState() const;

  constexpr ::System::Xml::__XmlWellFormedWriter__State& __cordl_internal_get_currentState();

  constexpr bool const& __cordl_internal_get_dtdWritten() const;

  constexpr bool& __cordl_internal_get_dtdWritten();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> const& __cordl_internal_get_elemScopeStack() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>& __cordl_internal_get_elemScopeStack();

  constexpr int32_t const& __cordl_internal_get_elemTop() const;

  constexpr int32_t& __cordl_internal_get_elemTop();

  constexpr ::System::Xml::SecureStringHasher*& __cordl_internal_get_hasher();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::SecureStringHasher*> const& __cordl_internal_get_hasher() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_nsHashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get_nsHashtable() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> const& __cordl_internal_get_nsStack() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>& __cordl_internal_get_nsStack();

  constexpr int32_t const& __cordl_internal_get_nsTop() const;

  constexpr int32_t& __cordl_internal_get_nsTop();

  constexpr bool const& __cordl_internal_get_omitDuplNamespaces() const;

  constexpr bool& __cordl_internal_get_omitDuplNamespaces();

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_predefinedNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> const& __cordl_internal_get_predefinedNamespaces() const;

  constexpr ::System::Xml::XmlRawWriter*& __cordl_internal_get_rawWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> const& __cordl_internal_get_rawWriter() const;

  constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const& __cordl_internal_get_specAttr() const;

  constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute& __cordl_internal_get_specAttr();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> const& __cordl_internal_get_stateTable() const;

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*>& __cordl_internal_get_stateTable();

  constexpr bool const& __cordl_internal_get_useNsHashtable() const;

  constexpr bool& __cordl_internal_get_useNsHashtable();

  constexpr bool const& __cordl_internal_get_writeEndDocumentOnClose() const;

  constexpr bool& __cordl_internal_get_writeEndDocumentOnClose();

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr bool const& __cordl_internal_get_xmlDeclFollows() const;

  constexpr bool& __cordl_internal_get_xmlDeclFollows();

  constexpr void __cordl_internal_set_attrCount(int32_t value);

  constexpr void __cordl_internal_set_attrHashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_attrStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> value);

  constexpr void __cordl_internal_set_attrValueCache(::System::Xml::__XmlWellFormedWriter__AttributeValueCache* value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr void __cordl_internal_set_curDeclPrefix(::StringW value);

  constexpr void __cordl_internal_set_currentState(::System::Xml::__XmlWellFormedWriter__State value);

  constexpr void __cordl_internal_set_dtdWritten(bool value);

  constexpr void __cordl_internal_set_elemScopeStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> value);

  constexpr void __cordl_internal_set_elemTop(int32_t value);

  constexpr void __cordl_internal_set_hasher(::System::Xml::SecureStringHasher* value);

  constexpr void __cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_nsStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> value);

  constexpr void __cordl_internal_set_nsTop(int32_t value);

  constexpr void __cordl_internal_set_omitDuplNamespaces(bool value);

  constexpr void __cordl_internal_set_predefinedNamespaces(::System::Xml::IXmlNamespaceResolver* value);

  constexpr void __cordl_internal_set_rawWriter(::System::Xml::XmlRawWriter* value);

  constexpr void __cordl_internal_set_specAttr(::System::Xml::__XmlWellFormedWriter__SpecialAttribute value);

  constexpr void __cordl_internal_set_stateTable(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

  constexpr void __cordl_internal_set_useNsHashtable(bool value);

  constexpr void __cordl_internal_set_writeEndDocumentOnClose(bool value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlDeclFollows(bool value);

  /// @brief Method .ctor, addr 0x2d7e314, size 0x3e8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> getStaticF_StateTableAuto();

  static inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> getStaticF_StateTableDocument();

  static inline ::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> getStaticF_state2WriteState();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_stateName();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_tokenName();

  /// @brief Method get_InBase64, addr 0x2d831bc, size 0x2c, virtual false, abstract: false, final false
  inline bool get_InBase64();

  /// @brief Method get_IsClosedOrErrorState, addr 0x2d83754, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsClosedOrErrorState();

  /// @brief Method get_RawWriter, addr 0x2d83764, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlRawWriter* get_RawWriter();

  /// @brief Method get_SaveAttrValue, addr 0x2d8219c, size 0x10, virtual false, abstract: false, final false
  inline bool get_SaveAttrValue();

  /// @brief Method get_WriteState, addr 0x2d7e750, size 0x94, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  static inline void setStaticF_StateTableAuto(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

  static inline void setStaticF_StateTableDocument(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

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

  /// @brief Field writer, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field rawWriter, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___rawWriter;

  /// @brief Field predefinedNamespaces, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___predefinedNamespaces;

  /// @brief Field nsStack, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> ___nsStack;

  /// @brief Field nsTop, offset: 0x38, size: 0x4, def value: None
  int32_t ___nsTop;

  /// @brief Field nsHashtable, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___nsHashtable;

  /// @brief Field useNsHashtable, offset: 0x48, size: 0x1, def value: None
  bool ___useNsHashtable;

  /// @brief Field elemScopeStack, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> ___elemScopeStack;

  /// @brief Field elemTop, offset: 0x58, size: 0x4, def value: None
  int32_t ___elemTop;

  /// @brief Field attrStack, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> ___attrStack;

  /// @brief Field attrCount, offset: 0x68, size: 0x4, def value: None
  int32_t ___attrCount;

  /// @brief Field attrHashTable, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___attrHashTable;

  /// @brief Field specAttr, offset: 0x78, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__SpecialAttribute ___specAttr;

  /// @brief Field attrValueCache, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* ___attrValueCache;

  /// @brief Field curDeclPrefix, offset: 0x88, size: 0x8, def value: None
  ::StringW ___curDeclPrefix;

  /// @brief Field stateTable, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> ___stateTable;

  /// @brief Field currentState, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__State ___currentState;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter, 0xb8>, "Size mismatch!");

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

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__NamespaceKind, "System.Xml", "XmlWellFormedWriter/NamespaceKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__SpecialAttribute, "System.Xml", "XmlWellFormedWriter/SpecialAttribute");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__State, "System.Xml", "XmlWellFormedWriter/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__Token, "System.Xml", "XmlWellFormedWriter/Token");
NEED_NO_BOX(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
NEED_NO_BOX(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/Item");
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter*, "System.Xml", "XmlWellFormedWriter");
NEED_NO_BOX(::System::Xml::__XmlWellFormedWriter__AttributeValueCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
NEED_NO_BOX(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
