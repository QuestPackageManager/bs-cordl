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
// Type: UnityEngine.UIElements::ListViewReorderableDragAndDropController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewReorderableDragAndDropController*
class CORDL_TYPE ListViewReorderableDragAndDropController : public ::UnityEngine::UIElements::BaseReorderableDragAndDropController {
public:
  // Declarations
  /// @brief Field m_ListView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListView, put = __cordl_internal_set_m_ListView)) ::UnityEngine::UIElements::BaseListView* m_ListView;

  /// @brief Method HandleDragAndDrop, addr 0x49b8854, size 0x148, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  static inline ::UnityEngine::UIElements::ListViewReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseListView* view);

  /// @brief Method OnDrop, addr 0x49b899c, size 0x2bc, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  constexpr ::UnityEngine::UIElements::BaseListView*& __cordl_internal_get_m_ListView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseListView*> const& __cordl_internal_get_m_ListView() const;

  constexpr void __cordl_internal_set_m_ListView(::UnityEngine::UIElements::BaseListView* value);

  /// @brief Method .ctor, addr 0x49b8830, size 0x24, virtual false, abstract: false, final false
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

  /// @brief Field m_ListView, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseListView* ___m_ListView;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewReorderableDragAndDropController, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewReorderableDragAndDropController, ___m_ListView) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewReorderableDragAndDropController*, "UnityEngine.UIElements", "ListViewReorderableDragAndDropController");
