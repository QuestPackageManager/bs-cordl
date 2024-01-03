#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/XPath/zzzz__XPathItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNavigator)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
namespace System::Xml::XPath {
class XPathNavigatorKeyComparer;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
struct DateTime;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathNavigator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathNavigator);
// Type: System.Xml.XPath::XPathNavigator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11582))
// CS Name: ::System.Xml.XPath::XPathNavigator*
class CORDL_TYPE XPathNavigator : public ::System::Xml::XPath::XPathItem {
public:
  // Declarations
  /// @brief Field comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer))::System::Xml::XPath::XPathNavigatorKeyComparer* comparer;

  /// @brief Field NodeTypeLetter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NodeTypeLetter, put = setStaticF_NodeTypeLetter))::ArrayW<char16_t, ::Array<char16_t>*> NodeTypeLetter;

  /// @brief Field UniqueIdTbl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UniqueIdTbl, put = setStaticF_UniqueIdTbl))::ArrayW<char16_t, ::Array<char16_t>*> UniqueIdTbl;

  /// @brief Field ContentKindMasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ContentKindMasks, put = setStaticF_ContentKindMasks))::ArrayW<int32_t, ::Array<int32_t>*> ContentKindMasks;

  __declspec(property(get = get_XmlType))::System::Xml::Schema::XmlSchemaType* XmlType;

  __declspec(property(get = get_TypedValue))::System::Object* TypedValue;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_ValueAsBoolean)) bool ValueAsBoolean;

  __declspec(property(get = get_ValueAsDateTime))::System::DateTime ValueAsDateTime;

  __declspec(property(get = get_ValueAsDouble)) double_t ValueAsDouble;

  __declspec(property(get = get_ValueAsInt)) int32_t ValueAsInt;

  __declspec(property(get = get_ValueAsLong)) int64_t ValueAsLong;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NodeType))::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_UnderlyingObject))::System::Object* UnderlyingObject;

  __declspec(property(get = get_SchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  static inline void setStaticF_comparer(::System::Xml::XPath::XPathNavigatorKeyComparer* value);

  static inline ::System::Xml::XPath::XPathNavigatorKeyComparer* getStaticF_comparer();

  static inline void setStaticF_NodeTypeLetter(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_NodeTypeLetter();

  static inline void setStaticF_UniqueIdTbl(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_UniqueIdTbl();

  static inline void setStaticF_ContentKindMasks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_ContentKindMasks();

  /// @brief Method ToString, addr 0x28a9e80, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_XmlType, addr 0x28a9e8c, size 0x188, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_XmlType();

  /// @brief Method get_TypedValue, addr 0x28aa014, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Object* get_TypedValue();

  /// @brief Method get_ValueType, addr 0x28aa2f0, size 0x20c, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_ValueAsBoolean, addr 0x28aa4fc, size 0x2c4, virtual true, abstract: false, final false
  inline bool get_ValueAsBoolean();

  /// @brief Method get_ValueAsDateTime, addr 0x28aa7c0, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::DateTime get_ValueAsDateTime();

  /// @brief Method get_ValueAsDouble, addr 0x28aaa8c, size 0x2cc, virtual true, abstract: false, final false
  inline double_t get_ValueAsDouble();

  /// @brief Method get_ValueAsInt, addr 0x28aad58, size 0x2cc, virtual true, abstract: false, final false
  inline int32_t get_ValueAsInt();

  /// @brief Method get_ValueAsLong, addr 0x28ab024, size 0x2cc, virtual true, abstract: false, final false
  inline int64_t get_ValueAsLong();

  /// @brief Method ValueAs, addr 0x28ab2f0, size 0x2ec, virtual true, abstract: false, final false
  inline ::System::Object* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method System.ICloneable.Clone, addr 0x28ab5dc, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method get_NameTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method LookupNamespace, addr 0x28ab5ec, size 0x1a4, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x28ab790, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceURI);

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XPath::XPathNavigator* Clone();

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_UnderlyingObject, addr 0x28ab980, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_UnderlyingObject();

  /// @brief Method MoveToNamespace, addr 0x28ab988, size 0xa0, virtual true, abstract: false, final false
  inline bool MoveToNamespace(::StringW name);

  /// @brief Method MoveToFirstNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToNextNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToParent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToParent();

  /// @brief Method IsSamePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);

  /// @brief Method get_SchemaInfo, addr 0x28aba28, size 0x48, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method IsText, addr 0x28aba70, size 0x10, virtual false, abstract: false, final false
  static inline bool IsText(::System::Xml::XPath::XPathNodeType type);

  static inline ::System::Xml::XPath::XPathNavigator* New_ctor();

  /// @brief Method .ctor, addr 0x28aba80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNavigator(XPathNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNavigator(XPathNavigator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNavigator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNavigator, 0x10>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathNavigator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNavigator*, "System.Xml.XPath", "XPathNavigator");
