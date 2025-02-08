#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultTreeViewController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TreeViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTreeViewController_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class DefaultTreeViewController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::DefaultTreeViewController_1);
// Dependencies UnityEngine.UIElements.TreeViewController
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultTreeViewController`1<T>
class CORDL_TYPE DefaultTreeViewController_1 : public ::UnityEngine::UIElements::TreeViewController {
public:
  // Declarations
  __declspec(property(get = get_itemsSource, put = set_itemsSource)) ::System::Collections::IList* itemsSource;

  /// @brief Field m_TreeDataController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeDataController, put = __cordl_internal_set_m_TreeDataController)) ::UnityEngine::UIElements::TreeDataController_1<T>* m_TreeDataController;

  __declspec(property(get = get_treeDataController)) ::UnityEngine::UIElements::TreeDataController_1<T>* treeDataController;

  /// @brief Method GetAllItemIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds);

  /// @brief Method GetChildrenIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIds(int32_t id);

  /// @brief Method GetItemForIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetItemForIndex(int32_t index);

  /// @brief Method GetParentId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetParentId(int32_t id);

  /// @brief Method HasChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasChildren(int32_t id);

  /// @brief Method IsChildOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsChildOf(int32_t childId, int32_t id);

  /// @brief Method Move, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Move(int32_t id, int32_t newParentId, int32_t childIndex, bool rebuildTree);

  static inline ::UnityEngine::UIElements::DefaultTreeViewController_1<T>* New_ctor();

  /// @brief Method SetRootItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items);

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>* const& __cordl_internal_get_m_TreeDataController() const;

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>*& __cordl_internal_get_m_TreeDataController();

  constexpr void __cordl_internal_set_m_TreeDataController(::UnityEngine::UIElements::TreeDataController_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_itemsSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_itemsSource();

  /// @brief Method get_treeDataController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TreeDataController_1<T>* get_treeDataController();

  /// @brief Method set_itemsSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_itemsSource(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTreeViewController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTreeViewController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTreeViewController_1(DefaultTreeViewController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTreeViewController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTreeViewController_1(DefaultTreeViewController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5472 };

  /// @brief Field m_TreeDataController, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::TreeDataController_1<T>* ___m_TreeDataController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DefaultTreeViewController_1, "UnityEngine.UIElements", "DefaultTreeViewController`1");
