#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathDocument)
namespace System::Xml {
class XmlNameTable;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathDocument);
// Type: System.Xml.XPath::XPathDocument
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11507))
// CS Name: ::System.Xml.XPath::XPathDocument*
class CORDL_TYPE XPathDocument : public ::System::Object {
public:
  // Declarations
  /// @brief Field pageXmlNmsp, offset 0x10, size 0x8
  __declspec(property(get = __get_pageXmlNmsp, put = __set_pageXmlNmsp))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageXmlNmsp;

  /// @brief Field idxXmlNmsp, offset 0x18, size 0x4
  __declspec(property(get = __get_idxXmlNmsp, put = __set_idxXmlNmsp)) int32_t idxXmlNmsp;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field mapNmsp, offset 0x28, size 0x8
  __declspec(property(get = __get_mapNmsp,
                      put = __set_mapNmsp))::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get_pageXmlNmsp();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get_pageXmlNmsp() const;

  constexpr void __set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr int32_t& __get_idxXmlNmsp();

  constexpr int32_t const& __get_idxXmlNmsp() const;

  constexpr void __set_idxXmlNmsp(int32_t value);

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*& __get_mapNmsp();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*> const&
  __get_mapNmsp() const;

  constexpr void __set_mapNmsp(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* value);

  /// @brief Method get_NameTable addr 0x272cd54 size 0x8 virtual false final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method GetXmlNamespaceNode addr 0x272cd5c size 0x10 virtual false final false
  inline int32_t GetXmlNamespaceNode(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageXmlNmsp);

  /// @brief Method LookupNamespaces addr 0x272cd6c size 0xd4 virtual false final false
  inline int32_t LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageElem, int32_t idxElem,
                                  ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNmsp);

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathDocument(XPathDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathDocument(XPathDocument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathDocument();

public:
  /// @brief Field pageXmlNmsp, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ___pageXmlNmsp;

  /// @brief Field idxXmlNmsp, offset: 0x18, size: 0x4, def value: None
  int32_t ___idxXmlNmsp;

  /// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field mapNmsp, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* ___mapNmsp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathDocument, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___pageXmlNmsp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___idxXmlNmsp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathDocument, ___mapNmsp) == 0x28, "Offset mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathDocument*, "System.Xml.XPath", "XPathDocument");
