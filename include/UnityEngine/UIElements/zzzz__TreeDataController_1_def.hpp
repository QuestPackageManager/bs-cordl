#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeDataController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeDataController_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TreeDataController_1);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeDataController`1<T>
class CORDL_TYPE TreeDataController_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ItemStack, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ItemStack,
      put = __cordl_internal_set_m_ItemStack)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* m_ItemStack;

  /// @brief Field m_NodeStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeStack, put = __cordl_internal_set_m_NodeStack)) ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* m_NodeStack;

  /// @brief Field m_NodeToItemDataDictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeToItemDataDictionary, put = __cordl_internal_set_m_NodeToItemDataDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_NodeToItemDataDictionary;

  /// @brief Method ClearNodeToDataDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearNodeToDataDictionary();

  /// @brief Method ConvertTreeViewItemDataToHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ConvertTreeViewItemDataToHierarchy(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* list,
                                                 ::System::Func_2<::Unity::Hierarchy::HierarchyNode, ::Unity::Hierarchy::HierarchyNode>* createNode,
                                                 ::System::Action_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* updateDictionary);

  /// @brief Method GetDataForNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetDataForNode(::Unity::Hierarchy::HierarchyNode node);

  static inline ::UnityEngine::UIElements::TreeDataController_1<T>* New_ctor();

  /// @brief Method UpdateNodeToDataDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateNodeToDataDictionary(::Unity::Hierarchy::HierarchyNode node, ::UnityEngine::UIElements::TreeViewItemData_1<T> item);

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* const& __cordl_internal_get_m_ItemStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>*& __cordl_internal_get_m_ItemStack();

  constexpr ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* const& __cordl_internal_get_m_NodeStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>*& __cordl_internal_get_m_NodeStack();

  constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* const&
  __cordl_internal_get_m_NodeToItemDataDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>*& __cordl_internal_get_m_NodeToItemDataDictionary();

  constexpr void __cordl_internal_set_m_ItemStack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* value);

  constexpr void __cordl_internal_set_m_NodeStack(::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* value);

  constexpr void
  __cordl_internal_set_m_NodeToItemDataDictionary(::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeDataController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeDataController_1(TreeDataController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeDataController_1(TreeDataController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4085 };

  /// @brief Field m_NodeToItemDataDictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Unity::Hierarchy::HierarchyNode, ::UnityEngine::UIElements::TreeViewItemData_1<T>>* ___m_NodeToItemDataDictionary;

  /// @brief Field m_ItemStack, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*>* ___m_ItemStack;

  /// @brief Field m_NodeStack, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Unity::Hierarchy::HierarchyNode>* ___m_NodeStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TreeDataController_1, "UnityEngine.UIElements", "TreeDataController`1");
