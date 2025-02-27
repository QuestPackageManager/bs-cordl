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
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader;
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

  __declspec(property(get = get_header)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header;

  /// @brief Field m_ColumnController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnController, put = __cordl_internal_set_m_ColumnController)) ::UnityEngine::UIElements::MultiColumnController* m_ColumnController;

  /// @brief Method BindItem, addr 0x498981c, size 0x88, virtual true, abstract: false, final false
  inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method DestroyItem, addr 0x49898c0, size 0x1c, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Dispose, addr 0x4989a20, size 0xb8, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method InvokeMakeItem, addr 0x498932c, size 0xf0, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method MakeItem, addr 0x4989800, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  static inline ::UnityEngine::UIElements::MultiColumnListViewController* New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method PrepareView, addr 0x49898dc, size 0xa4, virtual true, abstract: false, final false
  inline void PrepareView();

  /// @brief Method UnbindItem, addr 0x49898a4, size 0x1c, virtual true, abstract: false, final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method UpdateReorderClassList, addr 0x4989b78, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateReorderClassList();

  constexpr ::UnityEngine::UIElements::MultiColumnController* const& __cordl_internal_get_m_ColumnController() const;

  constexpr ::UnityEngine::UIElements::MultiColumnController*& __cordl_internal_get_m_ColumnController();

  constexpr void __cordl_internal_set_m_ColumnController(::UnityEngine::UIElements::MultiColumnController* value);

  /// @brief Method .ctor, addr 0x49892a0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns);

  /// @brief Method get_columnController, addr 0x4989280, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MultiColumnController* get_columnController();

  /// @brief Method get_header, addr 0x4989288, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* get_header();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5475 };

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
