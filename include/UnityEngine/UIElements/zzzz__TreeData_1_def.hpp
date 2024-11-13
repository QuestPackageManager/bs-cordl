#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeData_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeData_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct TreeData_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::TreeData_1);
// Type: UnityEngine.UIElements::TreeData`1
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.UIElements::TreeData`1<T>
struct CORDL_TYPE TreeData_1 {
public:
  // Declarations
  __declspec(property(get = get_rootItemIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>* rootItemIds;

  /// @brief Method AddItemToParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddItemToParent(::UnityEngine::UIElements::TreeViewItemData_1<T> item, int32_t parentId, int32_t childIndex);

  /// @brief Method BuildTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void BuildTree(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items, bool isRoot);

  /// @brief Method GetDataForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TreeViewItemData_1<T> GetDataForId(int32_t id);

  /// @brief Method GetParentId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetParentId(int32_t id);

  /// @brief Method HasAncestor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasAncestor(int32_t childId, int32_t ancestorId);

  /// @brief Method Move, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Move(int32_t id, int32_t newParentId, int32_t childIndex);

  /// @brief Method RefreshTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RefreshTree(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* rootItems);

  /// @brief Method RemoveFromParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveFromParent(int32_t id, int32_t parentId);

  /// @brief Method UpdateParentTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateParentTree(::UnityEngine::UIElements::TreeViewItemData_1<T> current);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* rootItems);

  /// @brief Method get_rootItemIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_rootItemIds();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeData_1();

  // Ctor Parameters [CppParam { name: "m_RootItemIds", ty: "::System::Collections::Generic::IList_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_Tree", ty:
  // "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::UIElements::TreeViewItemData_1<T>>*", modifiers: "", def_value: None }, CppParam { name: "m_ParentIds", ty:
  // "::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_ChildrenIds", ty:
  // "::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: None }]
  constexpr TreeData_1(::System::Collections::Generic::IList_1<int32_t>* m_RootItemIds, ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Tree,
                       ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_ParentIds,
                       ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* m_ChildrenIds) noexcept;

  /// @brief Field m_RootItemIds, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<int32_t>* m_RootItemIds;

  /// @brief Field m_Tree, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Tree;

  /// @brief Field m_ParentIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_ParentIds;

  /// @brief Field m_ChildrenIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* m_ChildrenIds;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::TreeData_1, "UnityEngine.UIElements", "TreeData`1");
