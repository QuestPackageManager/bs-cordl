#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MultiColumnTreeViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseTreeViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiColumnTreeViewController)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class MultiColumnTreeViewController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MultiColumnTreeViewController);
// Dependencies UnityEngine.UIElements.BaseTreeViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MultiColumnTreeViewController
class CORDL_TYPE MultiColumnTreeViewController : public ::UnityEngine::UIElements::BaseTreeViewController {
public:
  // Declarations
  __declspec(property(get = get_columnController)) ::UnityEngine::UIElements::MultiColumnController* columnController;

  /// @brief Field m_ColumnController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnController, put = __cordl_internal_set_m_ColumnController)) ::UnityEngine::UIElements::MultiColumnController* m_ColumnController;

  /// @brief Method BindItem, addr 0x6a20590, size 0x8c, virtual true, abstract: false, final false
  inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method DestroyItem, addr 0x6a20634, size 0x18, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Dispose, addr 0x6a2066c, size 0x30, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method InvokeMakeItem, addr 0x6a200e4, size 0xd8, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method MakeItem, addr 0x6a20578, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  static inline ::UnityEngine::UIElements::MultiColumnTreeViewController* New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method PreRefresh, addr 0x6a200b4, size 0x30, virtual true, abstract: false, final false
  inline void PreRefresh();

  /// @brief Method PrepareView, addr 0x6a2064c, size 0x20, virtual true, abstract: false, final false
  inline void PrepareView();

  /// @brief Method UnbindItem, addr 0x6a2061c, size 0x18, virtual true, abstract: false, final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  constexpr ::UnityEngine::UIElements::MultiColumnController* const& __cordl_internal_get_m_ColumnController() const;

  constexpr ::UnityEngine::UIElements::MultiColumnController*& __cordl_internal_get_m_ColumnController();

  constexpr void __cordl_internal_set_m_ColumnController(::UnityEngine::UIElements::MultiColumnController* value);

  /// @brief Method .ctor, addr 0x6a20000, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method get_columnController, addr 0x6a1fff8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MultiColumnController* get_columnController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiColumnTreeViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiColumnTreeViewController(MultiColumnTreeViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiColumnTreeViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiColumnTreeViewController(MultiColumnTreeViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4084 };

  /// @brief Field m_ColumnController, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::MultiColumnController* ___m_ColumnController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MultiColumnTreeViewController, ___m_ColumnController) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MultiColumnTreeViewController, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MultiColumnTreeViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MultiColumnTreeViewController*, "UnityEngine.UIElements", "MultiColumnTreeViewController");
