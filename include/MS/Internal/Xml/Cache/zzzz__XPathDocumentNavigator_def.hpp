#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathDocumentNavigator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathDocumentNavigator)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathDocumentNavigator;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathDocumentNavigator);
// Dependencies System.Xml.IXmlLineInfo, System.Xml.XPath.XPathNavigator
namespace MS::Internal::Xml::Cache {
// Is value type: false
// CS Name: MS.Internal.Xml.Cache.XPathDocumentNavigator
class CORDL_TYPE XPathDocumentNavigator : public ::System::Xml::XPath::XPathNavigator {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_UnderlyingObject)) ::System::Object* UnderlyingObject;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field _idxCurrent, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__idxCurrent, put = __cordl_internal_set__idxCurrent)) int32_t _idxCurrent;

  /// @brief Field _idxParent, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__idxParent, put = __cordl_internal_set__idxParent)) int32_t _idxParent;

  /// @brief Field _pageCurrent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pageCurrent,
                      put = __cordl_internal_set__pageCurrent)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      _pageCurrent;

  /// @brief Field _pageParent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pageParent, put = __cordl_internal_set__pageParent)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      _pageParent;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method Clone, addr 0x4317e68, size 0x74, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNavigator* Clone();

  /// @brief Method GetPositionHashCode, addr 0x4318794, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetPositionHashCode();

  /// @brief Method HasLineInfo, addr 0x43185b0, size 0x44, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method IsSamePosition, addr 0x43184fc, size 0xa4, virtual true, abstract: false, final false
  inline bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);

  /// @brief Method MoveToFirstNamespace, addr 0x4318088, size 0xf0, virtual true, abstract: false, final false
  inline bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToNextNamespace, addr 0x4318344, size 0x114, virtual true, abstract: false, final false
  inline bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope);

  /// @brief Method MoveToParent, addr 0x431847c, size 0x2c, virtual true, abstract: false, final false
  inline bool MoveToParent();

  static inline ::MS::Internal::Xml::Cache::XPathDocumentNavigator* New_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageCurrent,
                                                                             int32_t idxCurrent,
                                                                             ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageParent,
                                                                             int32_t idxParent);

  constexpr int32_t const& __cordl_internal_get__idxCurrent() const;

  constexpr int32_t& __cordl_internal_get__idxCurrent();

  constexpr int32_t const& __cordl_internal_get__idxParent() const;

  constexpr int32_t& __cordl_internal_get__idxParent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageCurrent() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageCurrent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageParent() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageParent();

  constexpr void __cordl_internal_set__idxCurrent(int32_t value);

  constexpr void __cordl_internal_set__idxParent(int32_t value);

  constexpr void __cordl_internal_set__pageCurrent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  /// @brief Method .ctor, addr 0x4317a14, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageCurrent, int32_t idxCurrent,
                    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageParent, int32_t idxParent);

  /// @brief Method get_LineNumber, addr 0x43185f4, size 0x84, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x43186a0, size 0xa4, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x4317f20, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NameTable, addr 0x4318028, size 0x44, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x4317f78, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x4317edc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x4317fd0, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_UnderlyingObject, addr 0x43185a0, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* get_UnderlyingObject();

  /// @brief Method get_Value, addr 0x4317a98, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathDocumentNavigator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathDocumentNavigator(XPathDocumentNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathDocumentNavigator(XPathDocumentNavigator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7789 };

  /// @brief Field _pageCurrent, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageCurrent;

  /// @brief Field _pageParent, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageParent;

  /// @brief Field _idxCurrent, offset: 0x20, size: 0x4, def value: None
  int32_t ____idxCurrent;

  /// @brief Field _idxParent, offset: 0x24, size: 0x4, def value: None
  int32_t ____idxParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____pageCurrent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____pageParent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____idxCurrent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____idxParent) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathDocumentNavigator, 0x28>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathDocumentNavigator);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
