#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewReorderableDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_def.hpp"
CORDL_MODULE_EXPORT(ListViewReorderableDragAndDropController)
namespace UnityEngine::UIElements {
class BaseListView;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewReorderableDragAndDropController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewReorderableDragAndDropController);
// Dependencies UnityEngine.UIElements.BaseReorderableDragAndDropController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListViewReorderableDragAndDropController
class CORDL_TYPE ListViewReorderableDragAndDropController : public ::UnityEngine::UIElements::BaseReorderableDragAndDropController {
public:
  // Declarations
  /// @brief Field m_ListView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListView, put = __cordl_internal_set_m_ListView)) ::UnityEngine::UIElements::BaseListView* m_ListView;

  /// @brief Method HandleDragAndDrop, addr 0x4a1d164, size 0x148, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  static inline ::UnityEngine::UIElements::ListViewReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseListView* view);

  /// @brief Method OnDrop, addr 0x4a1d2ac, size 0x2bc, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  constexpr ::UnityEngine::UIElements::BaseListView* const& __cordl_internal_get_m_ListView() const;

  constexpr ::UnityEngine::UIElements::BaseListView*& __cordl_internal_get_m_ListView();

  constexpr void __cordl_internal_set_m_ListView(::UnityEngine::UIElements::BaseListView* value);

  /// @brief Method .ctor, addr 0x4a1d140, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseListView* view);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewReorderableDragAndDropController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewReorderableDragAndDropController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewReorderableDragAndDropController(ListViewReorderableDragAndDropController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewReorderableDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewReorderableDragAndDropController(ListViewReorderableDragAndDropController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5761 };

  /// @brief Field m_ListView, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseListView* ___m_ListView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListViewReorderableDragAndDropController, ___m_ListView) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewReorderableDragAndDropController, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewReorderableDragAndDropController*, "UnityEngine.UIElements", "ListViewReorderableDragAndDropController");
