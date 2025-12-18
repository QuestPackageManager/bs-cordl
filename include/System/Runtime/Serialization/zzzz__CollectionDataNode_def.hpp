#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionDataNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataNode_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionDataNode)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class ElementData;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CollectionDataNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CollectionDataNode);
// Dependencies System.Runtime.Serialization.DataNode`1<T>
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataNode
class CORDL_TYPE CollectionDataNode : public ::System::Runtime::Serialization::DataNode_1<::System::Array*> {
public:
  // Declarations
  __declspec(property(get = get_ItemName, put = set_ItemName)) ::StringW ItemName;

  __declspec(property(get = get_ItemNamespace, put = set_ItemNamespace)) ::StringW ItemNamespace;

  __declspec(property(get = get_Items, put = set_Items)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* Items;

  __declspec(property(get = get_Size, put = set_Size)) int32_t Size;

  /// @brief Field itemName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_itemName, put = __cordl_internal_set_itemName)) ::StringW itemName;

  /// @brief Field itemNamespace, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_itemNamespace, put = __cordl_internal_set_itemNamespace)) ::StringW itemNamespace;

  /// @brief Field items, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* items;

  /// @brief Field size, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Method Clear, addr 0x5f9bf3c, size 0x50, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetData, addr 0x5f9bd54, size 0xe4, virtual true, abstract: false, final false
  inline void GetData(::System::Runtime::Serialization::ElementData* element);

  static inline ::System::Runtime::Serialization::CollectionDataNode* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_itemName() const;

  constexpr ::StringW& __cordl_internal_get_itemName();

  constexpr ::StringW const& __cordl_internal_get_itemNamespace() const;

  constexpr ::StringW& __cordl_internal_get_itemNamespace();

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* const& __cordl_internal_get_items() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*& __cordl_internal_get_items();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_itemName(::StringW value);

  constexpr void __cordl_internal_set_itemNamespace(::StringW value);

  constexpr void __cordl_internal_set_items(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x5f9bb90, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ItemName, addr 0x5f9bd24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ItemName();

  /// @brief Method get_ItemNamespace, addr 0x5f9bd34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ItemNamespace();

  /// @brief Method get_Items, addr 0x5f9bd14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* get_Items();

  /// @brief Method get_Size, addr 0x5f9bd44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Method set_ItemName, addr 0x5f9bd2c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemName(::StringW value);

  /// @brief Method set_ItemNamespace, addr 0x5f9bd3c, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemNamespace(::StringW value);

  /// @brief Method set_Items, addr 0x5f9bd1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Items(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* value);

  /// @brief Method set_Size, addr 0x5f9bd4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Size(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataNode(CollectionDataNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataNode(CollectionDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17006 };

  /// @brief Field items, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* ___items;

  /// @brief Field itemName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___itemName;

  /// @brief Field itemNamespace, offset: 0x60, size: 0x8, def value: None
  ::StringW ___itemNamespace;

  /// @brief Field size, offset: 0x68, size: 0x4, def value: None
  int32_t ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionDataNode, ___items) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataNode, ___itemName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataNode, ___itemNamespace) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataNode, ___size) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionDataNode, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CollectionDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionDataNode*, "System.Runtime.Serialization", "CollectionDataNode");
