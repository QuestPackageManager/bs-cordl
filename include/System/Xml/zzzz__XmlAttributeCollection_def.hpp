#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttributeCollection)
namespace System::Xml {
class XmlNode;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Xml {
class XmlAttribute;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11447))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11426))
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

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::System::Xml::XmlAttributeCollection* New_ctor(::System::Xml::XmlNode* parent);

  /// @brief Method .ctor addr 0x2705690 size 0x8 virtual false final false
  inline void _ctor(::System::Xml::XmlNode* parent);

  /// @brief Method get_ItemOf addr 0x2705698 size 0x14c virtual false final false
  inline ::System::Xml::XmlAttribute* get_ItemOf(int32_t i);

  /// @brief Method SetNamedItem addr 0x27057e4 size 0x19c virtual true final false
  inline ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node);

  /// @brief Method Append addr 0x2705a20 size 0x11c virtual false final false
  inline ::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* node);

  /// @brief Method Remove addr 0x2705cdc size 0x88 virtual false final false
  inline ::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* node);

  /// @brief Method RemoveAt addr 0x2705d64 size 0xac virtual false final false
  inline ::System::Xml::XmlAttribute* RemoveAt(int32_t i);

  /// @brief Method RemoveAll addr 0x2705e10 size 0x48 virtual false final false
  inline void RemoveAll();

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x2705e58 size 0x84 virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x2705edc size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2705ee4 size 0x4 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.get_Count addr 0x2705ee8 size 0x8 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method AddNode addr 0x2705ef0 size 0xe4 virtual true final false
  inline ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node);

  /// @brief Method InsertNodeAt addr 0x27060d8 size 0xb0 virtual true final false
  inline ::System::Xml::XmlNode* InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node);

  /// @brief Method RemoveNodeAt addr 0x2706188 size 0x1a0 virtual true final false
  inline ::System::Xml::XmlNode* RemoveNodeAt(int32_t i);

  /// @brief Method Detach addr 0x2705b3c size 0x48 virtual false final false
  inline void Detach(::System::Xml::XmlAttribute* attr);

  /// @brief Method InsertParentIntoElementIdAttrMap addr 0x2705b84 size 0x158 virtual false final false
  inline void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method RemoveParentFromElementIdAttrMap addr 0x2706328 size 0x158 virtual false final false
  inline void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr);

  /// @brief Method RemoveDuplicateAttribute addr 0x2705fd4 size 0x104 virtual false final false
  inline int32_t RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr);

  /// @brief Method PrepareParentInElementIdAttrMap addr 0x2704fe8 size 0xf4 virtual false final false
  inline bool PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName);

  /// @brief Method ResetParentInElementIdAttrMap addr 0x27050dc size 0xc0 virtual false final false
  inline void ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal);

  /// @brief Method InternalAppendAttribute addr 0x2705980 size 0xa0 virtual false final false
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
