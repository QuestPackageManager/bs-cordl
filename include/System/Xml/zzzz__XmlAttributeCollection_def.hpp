#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttributeCollection)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
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
// Type: System.Xml::XmlAttributeCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11519))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11498))
// CS Name: ::System.Xml::XmlAttributeCollection*
class CORDL_TYPE XmlAttributeCollection : public ::System::Xml::XmlNamedNodeMap {
public:
  // Declarations
  __declspec(property(get = get_ItemOf))::System::Xml::XmlAttribute* ItemOf[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline ::System::Xml::XmlAttributeCollection* New_ctor(::System::Xml::XmlNode* parent);

  /// @brief Method .ctor, addr 0x28826b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* parent);

  /// @brief Method get_ItemOf, addr 0x28826b8, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* get_ItemOf(int32_t i);

  /// @brief Method SetNamedItem, addr 0x2882804, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node);

  /// @brief Method Append, addr 0x2882a40, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* node);

  /// @brief Method Remove, addr 0x2882cfc, size 0x88, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* node);

  /// @brief Method RemoveAt, addr 0x2882d84, size 0xac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* RemoveAt(int32_t i);

  /// @brief Method RemoveAll, addr 0x2882e30, size 0x48, virtual false, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2882e78, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2882efc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2882f04, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x2882f08, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method AddNode, addr 0x2882f10, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node);

  /// @brief Method InsertNodeAt, addr 0x28830f8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node);

  /// @brief Method RemoveNodeAt, addr 0x28831a8, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveNodeAt(int32_t i);

  /// @brief Method Detach, addr 0x2882b5c, size 0x48, virtual false, abstract: false, final false
  inline void Detach(::System::Xml::XmlAttribute* attr);

  /// @brief Method InsertParentIntoElementIdAttrMap, addr 0x2882ba4, size 0x158, virtual false, abstract: false, final false
  inline void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method RemoveParentFromElementIdAttrMap, addr 0x2883348, size 0x158, virtual false, abstract: false, final false
  inline void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method RemoveDuplicateAttribute, addr 0x2882ff4, size 0x104, virtual false, abstract: false, final false
  inline int32_t RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr);

  /// @brief Method PrepareParentInElementIdAttrMap, addr 0x2882008, size 0xf4, virtual false, abstract: false, final false
  inline bool PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName);

  /// @brief Method ResetParentInElementIdAttrMap, addr 0x28820fc, size 0xc0, virtual false, abstract: false, final false
  inline void ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal);

  /// @brief Method InternalAppendAttribute, addr 0x28829a0, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* InternalAppendAttribute(::System::Xml::XmlAttribute* node);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeCollection(XmlAttributeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeCollection(XmlAttributeCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAttributeCollection, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttributeCollection*, "System.Xml", "XmlAttributeCollection");
