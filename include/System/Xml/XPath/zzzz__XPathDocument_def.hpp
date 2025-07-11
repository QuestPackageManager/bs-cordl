#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathDocument)
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathDocument);
// Dependencies System.Object
namespace System::Xml::XPath {
// Is value type: false
// CS Name: System.Xml.XPath.XPathDocument
class CORDL_TYPE XPathDocument : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasLineInfo)) bool HasLineInfo;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  /// @brief Field hasLineInfo, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLineInfo, put = __cordl_internal_set_hasLineInfo)) bool hasLineInfo;

  /// @brief Field idxXmlNmsp, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_idxXmlNmsp, put = __cordl_internal_set_idxXmlNmsp)) int32_t idxXmlNmsp;

  /// @brief Field mapNmsp, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mapNmsp,
                      put = __cordl_internal_set_mapNmsp)) ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field pageXmlNmsp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pageXmlNmsp, put = __cordl_internal_set_pageXmlNmsp)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      pageXmlNmsp;

  /// @brief Method GetXmlNamespaceNode, addr 0x4363ed4, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetXmlNamespaceNode(::ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageXmlNmsp);

  /// @brief Method LookupNamespaces, addr 0x4363ee4, size 0xd0, virtual false, abstract: false, final false
  inline int32_t LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageElem, int32_t idxElem,
                                  ::ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNmsp);

  constexpr bool const& __cordl_internal_get_hasLineInfo() const;

  constexpr bool& __cordl_internal_get_hasLineInfo();

  constexpr int32_t const& __cordl_internal_get_idxXmlNmsp() const;

  constexpr int32_t& __cordl_internal_get_idxXmlNmsp();

  constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* const& __cordl_internal_get_mapNmsp() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*& __cordl_internal_get_mapNmsp();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get_pageXmlNmsp() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get_pageXmlNmsp();

  constexpr void __cordl_internal_set_hasLineInfo(bool value);

  constexpr void __cordl_internal_set_idxXmlNmsp(int32_t value);

  constexpr void __cordl_internal_set_mapNmsp(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  /// @brief Method get_HasLineInfo, addr 0x4363ecc, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasLineInfo();

  /// @brief Method get_NameTable, addr 0x4363ec4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathDocument(XPathDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathDocument(XPathDocument const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7377 };

  /// @brief Field pageXmlNmsp, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ___pageXmlNmsp;

  /// @brief Field idxXmlNmsp, offset: 0x18, size: 0x4, def value: None
  int32_t ___idxXmlNmsp;

  /// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field hasLineInfo, offset: 0x28, size: 0x1, def value: None
  bool ___hasLineInfo;

  /// @brief Field mapNmsp, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* ___mapNmsp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___pageXmlNmsp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___idxXmlNmsp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___hasLineInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___mapNmsp) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathDocument, 0x38>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathDocument*, "System.Xml.XPath", "XPathDocument");
