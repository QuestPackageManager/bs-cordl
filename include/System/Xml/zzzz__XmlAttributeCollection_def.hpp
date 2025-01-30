#pragma once
// IWYU pragma private; include "System/Xml/XmlAttributeCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttributeCollection)
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlAttributeCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAttributeCollection);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Xml.XmlNamedNodeMap
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAttributeCollection
class CORDL_TYPE XmlAttributeCollection : public ::System::Xml::XmlNamedNodeMap {
public:
  // Declarations
  __declspec(property(get = get_ItemOf)) ::System::Xml::XmlAttribute* ItemOf[];

  __declspec(property(get = get_ItemOf)) ::System::Xml::XmlAttribute* ItemOf[];

  __declspec(property(get = get_ItemOf)) ::System::Xml::XmlAttribute* ItemOf[];

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddNode, addr 0x433643c, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node);

  /// @brief Method Append, addr 0x4335f74, size 0x114, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* node);

  /// @brief Method Detach, addr 0x4336088, size 0x48, virtual false, abstract: false, final false
  inline void Detach(::System::Xml::XmlAttribute* attr);

  /// @brief Method FindNodeOffsetNS, addr 0x4335bbc, size 0x184, virtual false, abstract: false, final false
  inline int32_t FindNodeOffsetNS(::System::Xml::XmlAttribute* node);

  /// @brief Method InsertNodeAt, addr 0x4336624, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node);

  /// @brief Method InsertParentIntoElementIdAttrMap, addr 0x43360d0, size 0x158, virtual false, abstract: false, final false
  inline void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method InternalAppendAttribute, addr 0x4335ed4, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* InternalAppendAttribute(::System::Xml::XmlAttribute* node);

  static inline ::System::Xml::XmlAttributeCollection* New_ctor(::System::Xml::XmlNode* parent);

  /// @brief Method PrepareParentInElementIdAttrMap, addr 0x4334da4, size 0xf4, virtual false, abstract: false, final false
  inline bool PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName);

  /// @brief Method Remove, addr 0x4336228, size 0x88, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* node);

  /// @brief Method RemoveAll, addr 0x433635c, size 0x48, virtual false, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAt, addr 0x43362b0, size 0xac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* RemoveAt(int32_t i);

  /// @brief Method RemoveDuplicateAttribute, addr 0x4336520, size 0x104, virtual false, abstract: false, final false
  inline int32_t RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr);

  /// @brief Method RemoveNodeAt, addr 0x43366d4, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveNodeAt(int32_t i);

  /// @brief Method RemoveParentFromElementIdAttrMap, addr 0x4336874, size 0x158, virtual false, abstract: false, final false
  inline void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method ResetParentInElementIdAttrMap, addr 0x4334e98, size 0xc0, virtual false, abstract: false, final false
  inline void ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal);

  /// @brief Method SetNamedItem, addr 0x4335d40, size 0x194, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x43363a4, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x4336434, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x4336428, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x4336430, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method .ctor, addr 0x43357f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* parent);

  /// @brief Method get_ItemOf, addr 0x43357f8, size 0x144, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* get_ItemOf(int32_t i);

  /// @brief Method get_ItemOf, addr 0x4335a64, size 0x158, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* get_ItemOf(::StringW localName, ::StringW namespaceURI);

  /// @brief Method get_ItemOf, addr 0x433593c, size 0x128, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* get_ItemOf(::StringW name);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeCollection(XmlAttributeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeCollection(XmlAttributeCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAttributeCollection, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttributeCollection*, "System.Xml", "XmlAttributeCollection");
