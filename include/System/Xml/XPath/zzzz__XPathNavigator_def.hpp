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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
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
namespace System::Xml {
struct XmlNamespaceScope;
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
// CS Name: ::System.Xml.XPath::XPathNavigator*
class CORDL_TYPE XPathNavigator : public ::System::Xml::XPath::XPathItem {
public:
  // Declarations
  /// @brief Field ContentKindMasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ContentKindMasks, put = setStaticF_ContentKindMasks))::ArrayW<int32_t, ::Array<int32_t>*> ContentKindMasks;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_NodeType))::System::Xml::XPath::XPathNodeType NodeType;

  /// @brief Field NodeTypeLetter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NodeTypeLetter, put = setStaticF_NodeTypeLetter))::ArrayW<char16_t, ::Array<char16_t>*> NodeTypeLetter;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_SchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_TypedValue))::System::Object* TypedValue;

  __declspec(property(get = get_UnderlyingObject))::System::Object* UnderlyingObject;

  /// @brief Field UniqueIdTbl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UniqueIdTbl, put = setStaticF_UniqueIdTbl))::ArrayW<char16_t, ::Array<char16_t>*> UniqueIdTbl;

  __declspec(property(get = get_ValueAsBoolean)) bool ValueAsBoolean;

  __declspec(property(get = get_ValueAsDateTime))::System::DateTime ValueAsDateTime;

  __declspec(property(get = get_ValueAsDouble)) double_t ValueAsDouble;

  __declspec(property(get = get_ValueAsInt)) int32_t ValueAsInt;

  __declspec(property(get = get_ValueAsLong)) int64_t ValueAsLong;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_XmlType))::System::Xml::Schema::XmlSchemaType* XmlType;

  /// @brief Field comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer))::System::Xml::XPath::XPathNavigatorKeyComparer* comparer;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XPath::XPathNavigator* Clone();

  /// @brief Method GetNamespacesInScope, addr 0x2dc0f84, size 0x210, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method IsSamePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);

  /// @brief Method IsText, addr 0x2dc1284, size 0x10, virtual false, abstract: false, final false
  static inline bool IsText(::System::Xml::XPath::XPathNodeType type);

  /// @brief Method LookupNamespace, addr 0x2dc0bf0, size 0x1a4, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x2dc0d94, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceURI);

  /// @brief Method MoveToFirstNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToNamespace, addr 0x2dc119c, size 0xa0, virtual true, abstract: false, final false
  inline bool MoveToNamespace(::StringW name);

  /// @brief Method MoveToNextNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToParent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToParent();

  static inline ::System::Xml::XPath::XPathNavigator* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x2dc0be0, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x2dbf484, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValueAs, addr 0x2dc08f4, size 0x2ec, virtual true, abstract: false, final false
  inline ::System::Object* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method .ctor, addr 0x2dc1294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_ContentKindMasks();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_NodeTypeLetter();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_UniqueIdTbl();

  static inline ::System::Xml::XPath::XPathNavigatorKeyComparer* getStaticF_comparer();

  /// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NameTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x2dc123c, size 0x48, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_TypedValue, addr 0x2dbf618, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Object* get_TypedValue();

  /// @brief Method get_UnderlyingObject, addr 0x2dc1194, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_UnderlyingObject();

  /// @brief Method get_ValueAsBoolean, addr 0x2dbfb00, size 0x2c4, virtual true, abstract: false, final false
  inline bool get_ValueAsBoolean();

  /// @brief Method get_ValueAsDateTime, addr 0x2dbfdc4, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::DateTime get_ValueAsDateTime();

  /// @brief Method get_ValueAsDouble, addr 0x2dc0090, size 0x2cc, virtual true, abstract: false, final false
  inline double_t get_ValueAsDouble();

  /// @brief Method get_ValueAsInt, addr 0x2dc035c, size 0x2cc, virtual true, abstract: false, final false
  inline int32_t get_ValueAsInt();

  /// @brief Method get_ValueAsLong, addr 0x2dc0628, size 0x2cc, virtual true, abstract: false, final false
  inline int64_t get_ValueAsLong();

  /// @brief Method get_ValueType, addr 0x2dbf8f4, size 0x20c, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlType, addr 0x2dbf490, size 0x188, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_XmlType();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  static inline void setStaticF_ContentKindMasks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_NodeTypeLetter(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_UniqueIdTbl(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_comparer(::System::Xml::XPath::XPathNavigatorKeyComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNavigator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNavigator(XPathNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNavigator(XPathNavigator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNavigator, 0x10>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathNavigator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNavigator*, "System.Xml.XPath", "XPathNavigator");
