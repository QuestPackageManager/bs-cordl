#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathDocumentNavigator)
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
namespace System {
class Object;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathDocumentNavigator;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathDocumentNavigator);
// Type: MS.Internal.Xml.Cache::XPathDocumentNavigator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11510))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11695))
// CS Name: ::MS.Internal.Xml.Cache::XPathDocumentNavigator*
class CORDL_TYPE XPathDocumentNavigator : public ::System::Xml::XPath::XPathNavigator {
public:
  // Declarations
  /// @brief Field _pageCurrent, offset 0x10, size 0x8
  __declspec(property(get = __get__pageCurrent, put = __set__pageCurrent))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _pageCurrent;

  /// @brief Field _pageParent, offset 0x18, size 0x8
  __declspec(property(get = __get__pageParent, put = __set__pageParent))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _pageParent;

  /// @brief Field _idxCurrent, offset 0x20, size 0x4
  __declspec(property(get = __get__idxCurrent, put = __set__idxCurrent)) int32_t _idxCurrent;

  /// @brief Field _idxParent, offset 0x24, size 0x4
  __declspec(property(get = __get__idxParent, put = __set__idxParent)) int32_t _idxParent;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_NodeType))::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_UnderlyingObject))::System::Object* UnderlyingObject;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__pageCurrent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__pageCurrent() const;

  constexpr void __set__pageCurrent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__pageParent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__pageParent() const;

  constexpr void __set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr int32_t& __get__idxCurrent();

  constexpr int32_t const& __get__idxCurrent() const;

  constexpr void __set__idxCurrent(int32_t value);

  constexpr int32_t& __get__idxParent();

  constexpr int32_t const& __get__idxParent() const;

  constexpr void __set__idxParent(int32_t value);

  static inline ::MS::Internal::Xml::Cache::XPathDocumentNavigator* New_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageCurrent,
                                                                             int32_t idxCurrent,
                                                                             ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageParent,
                                                                             int32_t idxParent);

  /// @brief Method .ctor addr 0x276cb18 size 0x84 virtual false final false
  inline void _ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageCurrent, int32_t idxCurrent,
                    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageParent, int32_t idxParent);

  /// @brief Method get_Value addr 0x276cb9c size 0x1fc virtual true final false
  inline ::StringW get_Value();

  /// @brief Method Clone addr 0x276cf78 size 0x7c virtual true final false
  inline ::System::Xml::XPath::XPathNavigator* Clone();

  /// @brief Method get_NodeType addr 0x276cff4 size 0x38 virtual true final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_LocalName addr 0x276d038 size 0x3c virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI addr 0x276d090 size 0x3c virtual true final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix addr 0x276d0e8 size 0x3c virtual true final false
  inline ::StringW get_Prefix();

  /// @brief Method get_NameTable addr 0x276d140 size 0x44 virtual true final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method MoveToFirstNamespace addr 0x276d1a0 size 0xf4 virtual true final false
  inline bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);

  /// @brief Method MoveToNextNamespace addr 0x276d45c size 0x108 virtual true final false
  inline bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope);

  /// @brief Method MoveToParent addr 0x276d588 size 0x2c virtual true final false
  inline bool MoveToParent();

  /// @brief Method IsSamePosition addr 0x276d60c size 0xac virtual true final false
  inline bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);

  /// @brief Method get_UnderlyingObject addr 0x276d6b8 size 0x10 virtual true final false
  inline ::System::Object* get_UnderlyingObject();

  /// @brief Method GetPositionHashCode addr 0x276d6c8 size 0xc virtual false final false
  inline int32_t GetPositionHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathDocumentNavigator(XPathDocumentNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocumentNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathDocumentNavigator(XPathDocumentNavigator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathDocumentNavigator();

public:
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
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathDocumentNavigator, 0x28>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____pageCurrent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____pageParent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____idxCurrent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathDocumentNavigator, ____idxParent) == 0x24, "Offset mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathDocumentNavigator);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
