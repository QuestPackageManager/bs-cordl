#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewReorderableDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeViewReorderableDragAndDropController)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class __TreeViewReorderableDragAndDropController__DropData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeViewReorderableDragAndDropController;
}
namespace UnityEngine::UIElements {
class __TreeViewReorderableDragAndDropController__DropData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData);
// Type: ::DropData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeViewReorderableDragAndDropController::DropData*
class CORDL_TYPE __TreeViewReorderableDragAndDropController__DropData : public ::System::Object {
public:
  // Declarations
  /// @brief Field draggedIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_draggedIds, put = __cordl_internal_set_draggedIds)) ::ArrayW<int32_t, ::Array<int32_t>*> draggedIds;

  /// @brief Field expandItemBeginPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_expandItemBeginPosition, put = __cordl_internal_set_expandItemBeginPosition)) ::UnityEngine::Vector2 expandItemBeginPosition;

  /// @brief Field expandItemBeginTimerMs, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_expandItemBeginTimerMs, put = __cordl_internal_set_expandItemBeginTimerMs)) float_t expandItemBeginTimerMs;

  /// @brief Field expandedIdsBeforeDrag, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_expandedIdsBeforeDrag, put = __cordl_internal_set_expandedIdsBeforeDrag)) ::ArrayW<int32_t, ::Array<int32_t>*> expandedIdsBeforeDrag;

  /// @brief Field lastItemId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastItemId, put = __cordl_internal_set_lastItemId)) int32_t lastItemId;

  static inline ::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData* New_ctor();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_draggedIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_draggedIds();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_expandItemBeginPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_expandItemBeginPosition();

  constexpr float_t const& __cordl_internal_get_expandItemBeginTimerMs() const;

  constexpr float_t& __cordl_internal_get_expandItemBeginTimerMs();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_expandedIdsBeforeDrag() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_expandedIdsBeforeDrag();

  constexpr int32_t const& __cordl_internal_get_lastItemId() const;

  constexpr int32_t& __cordl_internal_get_lastItemId();

  constexpr void __cordl_internal_set_draggedIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_expandItemBeginPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_expandItemBeginTimerMs(float_t value);

  constexpr void __cordl_internal_set_expandedIdsBeforeDrag(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_lastItemId(int32_t value);

  /// @brief Method .ctor, addr 0x49ba624, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeViewReorderableDragAndDropController__DropData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeViewReorderableDragAndDropController__DropData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeViewReorderableDragAndDropController__DropData(__TreeViewReorderableDragAndDropController__DropData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeViewReorderableDragAndDropController__DropData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeViewReorderableDragAndDropController__DropData(__TreeViewReorderableDragAndDropController__DropData const&) = delete;

  /// @brief Field expandedIdsBeforeDrag, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___expandedIdsBeforeDrag;

  /// @brief Field draggedIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___draggedIds;

  /// @brief Field lastItemId, offset: 0x20, size: 0x4, def value: None
  int32_t ___lastItemId;

  /// @brief Field expandItemBeginTimerMs, offset: 0x24, size: 0x4, def value: None
  float_t ___expandItemBeginTimerMs;

  /// @brief Field expandItemBeginPosition, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___expandItemBeginPosition;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, ___expandedIdsBeforeDrag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, ___draggedIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, ___lastItemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, ___expandItemBeginTimerMs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData, ___expandItemBeginPosition) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TreeViewReorderableDragAndDropController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TreeViewReorderableDragAndDropController*
class CORDL_TYPE TreeViewReorderableDragAndDropController : public ::UnityEngine::UIElements::BaseReorderableDragAndDropController {
public:
  // Declarations
  using DropData = ::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData;

  /// @brief Field m_DropData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DropData, put = __cordl_internal_set_m_DropData)) ::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData* m_DropData;

  /// @brief Field m_ExpandDropItemCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpandDropItemCallback, put = __cordl_internal_set_m_ExpandDropItemCallback)) ::System::Action* m_ExpandDropItemCallback;

  /// @brief Field m_ExpandDropItemScheduledItem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpandDropItemScheduledItem,
                      put = __cordl_internal_set_m_ExpandDropItemScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ExpandDropItemScheduledItem;

  /// @brief Field m_TreeView, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeView, put = __cordl_internal_set_m_TreeView)) ::UnityEngine::UIElements::BaseTreeView* m_TreeView;

  /// @brief Method CompareId, addr 0x49b8d1c, size 0x644, virtual true, abstract: false, final false
  inline int32_t CompareId(int32_t id1, int32_t id2);

  /// @brief Method DelayExpandDropItem, addr 0x49ba268, size 0x218, virtual false, abstract: false, final false
  inline void DelayExpandDropItem();

  /// @brief Method DragCleanup, addr 0x49b9c98, size 0x140, virtual true, abstract: false, final false
  inline void DragCleanup();

  /// @brief Method ExpandDropItem, addr 0x49ba480, size 0x1a4, virtual false, abstract: false, final false
  inline void ExpandDropItem();

  /// @brief Method HandleAutoExpand, addr 0x49ba134, size 0x134, virtual true, abstract: false, final false
  inline void HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndDrop, addr 0x49b9404, size 0xe8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  static inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseTreeView* view);

  /// @brief Method OnDrop, addr 0x49b94ec, size 0x7ac, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  /// @brief Method RestoreExpanded, addr 0x49b9dd8, size 0x35c, virtual false, abstract: false, final false
  inline void RestoreExpanded(::System::Collections::Generic::List_1<int32_t>* ids);

  /// @brief Method SetupDragAndDrop, addr 0x49b9360, size 0xa4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds, bool skipText);

  constexpr ::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData*& __cordl_internal_get_m_DropData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData*> const& __cordl_internal_get_m_DropData() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ExpandDropItemCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_ExpandDropItemCallback() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ExpandDropItemScheduledItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_ExpandDropItemScheduledItem() const;

  constexpr ::UnityEngine::UIElements::BaseTreeView*& __cordl_internal_get_m_TreeView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseTreeView*> const& __cordl_internal_get_m_TreeView() const;

  constexpr void __cordl_internal_set_m_DropData(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData* value);

  constexpr void __cordl_internal_set_m_ExpandDropItemCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ExpandDropItemScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_TreeView(::UnityEngine::UIElements::BaseTreeView* value);

  /// @brief Method .ctor, addr 0x49b8c58, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseTreeView* view);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeViewReorderableDragAndDropController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeViewReorderableDragAndDropController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeViewReorderableDragAndDropController(TreeViewReorderableDragAndDropController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeViewReorderableDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeViewReorderableDragAndDropController(TreeViewReorderableDragAndDropController const&) = delete;

  /// @brief Field m_DropData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData* ___m_DropData;

  /// @brief Field m_TreeView, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeView* ___m_TreeView;

  /// @brief Field m_ExpandDropItemScheduledItem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ExpandDropItemScheduledItem;

  /// @brief Field m_ExpandDropItemCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___m_ExpandDropItemCallback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_DropData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_TreeView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_ExpandDropItemScheduledItem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_ExpandDropItemCallback) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*, "UnityEngine.UIElements", "TreeViewReorderableDragAndDropController");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeViewReorderableDragAndDropController__DropData*, "UnityEngine.UIElements", "TreeViewReorderableDragAndDropController/DropData");
