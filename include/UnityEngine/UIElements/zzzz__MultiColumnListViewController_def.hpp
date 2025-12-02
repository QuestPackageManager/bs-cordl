#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MultiColumnListViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiColumnListViewController)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class MultiColumnController;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MultiColumnListViewController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnListViewController);
// Dependencies UnityEngine.UIElements.BaseListViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MultiColumnListViewController
class CORDL_TYPE MultiColumnListViewController : public ::UnityEngine::UIElements::BaseListViewController {
public:
  // Declarations
  __declspec(property(get = get_columnController)) ::UnityEngine::UIElements::MultiColumnController* columnController;

  /// @brief Field m_ColumnController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnController, put = __cordl_internal_set_m_ColumnController)) ::UnityEngine::UIElements::MultiColumnController* m_ColumnController;

  /// @brief Method BindItem, addr 0x6a1fb88, size 0x8c, virtual true, abstract: false, final false
  inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method DestroyItem, addr 0x6a1fc2c, size 0x18, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Dispose, addr 0x6a1fdd0, size 0xb8, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetIdForIndex, addr 0x6a1fb58, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetIdForIndex(int32_t index);

  /// @brief Method GetIndexForId, addr 0x6a1fb40, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetIndexForId(int32_t id);

  /// @brief Method GetItemForIndex, addr 0x6a1fb14, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Object* GetItemForIndex(int32_t index);

  /// @brief Method InvokeBindItem, addr 0x6a1f918, size 0x150, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeMakeItem, addr 0x6a1f458, size 0xf4, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method MakeItem, addr 0x6a1fb70, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  static inline ::UnityEngine::UIElements::MultiColumnListViewController* New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method PreRefresh, addr 0x6a1f3f4, size 0x18, virtual true, abstract: false, final false
  inline void PreRefresh();

  /// @brief Method PrepareView, addr 0x6a1fc44, size 0xe0, virtual true, abstract: false, final false
  inline void PrepareView();

  /// @brief Method SortIfNeeded, addr 0x6a1f40c, size 0x4c, virtual false, abstract: false, final false
  inline void SortIfNeeded();

  /// @brief Method UnbindItem, addr 0x6a1fc14, size 0x18, virtual true, abstract: false, final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method UpdateReorderClassList, addr 0x6a1ff34, size 0xc4, virtual false, abstract: false, final false
  inline void UpdateReorderClassList();

  constexpr ::UnityEngine::UIElements::MultiColumnController* const& __cordl_internal_get_m_ColumnController() const;

  constexpr ::UnityEngine::UIElements::MultiColumnController*& __cordl_internal_get_m_ColumnController();

  constexpr void __cordl_internal_set_m_ColumnController(::UnityEngine::UIElements::MultiColumnController* value);

  /// @brief Method .ctor, addr 0x6a1f2f4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method get_columnController, addr 0x6a1f2ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MultiColumnController* get_columnController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnListViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnListViewController(MultiColumnListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnListViewController(MultiColumnListViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4083 };

  /// @brief Field m_ColumnController, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::MultiColumnController* ___m_ColumnController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MultiColumnListViewController, ___m_ColumnController) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnListViewController, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnListViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnListViewController*, "UnityEngine.UIElements", "MultiColumnListViewController");
