#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultMultiColumnTreeViewController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultMultiColumnTreeViewController_1)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class DefaultMultiColumnTreeViewController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1);
// Dependencies UnityEngine.UIElements.MultiColumnTreeViewController
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultMultiColumnTreeViewController`1<T>
class CORDL_TYPE DefaultMultiColumnTreeViewController_1 : public ::UnityEngine::UIElements::MultiColumnTreeViewController {
public:
  // Declarations
  __declspec(property(get = get_itemsSource, put = set_itemsSource)) ::System::Collections::IList* itemsSource;

  /// @brief Field m_TreeDataController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeDataController, put = __cordl_internal_set_m_TreeDataController)) ::UnityEngine::UIElements::TreeDataController_1<T>* m_TreeDataController;

  __declspec(property(get = get_treeDataController)) ::UnityEngine::UIElements::TreeDataController_1<T>* treeDataController;

  /// @brief Method GetItemForIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetItemForIndex(int32_t index);

  static inline ::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1<T>*
  New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method SetRootItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items);

  /// @brief Method <SetRootItems>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode _SetRootItems_b__7_0(::Unity::Hierarchy::HierarchyNode node);

  /// @brief Method <SetRootItems>b__7_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SetRootItems_b__7_1(int32_t id, ::Unity::Hierarchy::HierarchyNode node);

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>* const& __cordl_internal_get_m_TreeDataController() const;

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>*& __cordl_internal_get_m_TreeDataController();

  constexpr void __cordl_internal_set_m_TreeDataController(::UnityEngine::UIElements::TreeDataController_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method get_itemsSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_itemsSource();

  /// @brief Method get_treeDataController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TreeDataController_1<T>* get_treeDataController();

  /// @brief Method set_itemsSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_itemsSource(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMultiColumnTreeViewController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultMultiColumnTreeViewController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultMultiColumnTreeViewController_1(DefaultMultiColumnTreeViewController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultMultiColumnTreeViewController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultMultiColumnTreeViewController_1(DefaultMultiColumnTreeViewController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4080 };

  /// @brief Field m_TreeDataController, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::TreeDataController_1<T>* ___m_TreeDataController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1, "UnityEngine.UIElements", "DefaultMultiColumnTreeViewController`1");
