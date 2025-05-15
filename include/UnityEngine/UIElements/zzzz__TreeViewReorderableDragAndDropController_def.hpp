#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewReorderableDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
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
class TreeViewReorderableDragAndDropController_DropData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeViewReorderableDragAndDropController;
}
namespace UnityEngine::UIElements {
class TreeViewReorderableDragAndDropController_DropData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController);
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData);
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeViewReorderableDragAndDropController/DropData
class CORDL_TYPE TreeViewReorderableDragAndDropController_DropData : public ::System::Object {
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

  static inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* New_ctor();

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

  /// @brief Method .ctor, addr 0x4a21a60, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeViewReorderableDragAndDropController_DropData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeViewReorderableDragAndDropController_DropData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeViewReorderableDragAndDropController_DropData(TreeViewReorderableDragAndDropController_DropData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeViewReorderableDragAndDropController_DropData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeViewReorderableDragAndDropController_DropData(TreeViewReorderableDragAndDropController_DropData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5767 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, ___expandedIdsBeforeDrag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, ___draggedIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, ___lastItemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, ___expandItemBeginTimerMs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, ___expandItemBeginPosition) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseReorderableDragAndDropController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeViewReorderableDragAndDropController
class CORDL_TYPE TreeViewReorderableDragAndDropController : public ::UnityEngine::UIElements::BaseReorderableDragAndDropController {
public:
  // Declarations
  using DropData = ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData;

  /// @brief Field m_DropData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DropData, put = __cordl_internal_set_m_DropData)) ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* m_DropData;

  /// @brief Field m_ExpandDropItemCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpandDropItemCallback, put = __cordl_internal_set_m_ExpandDropItemCallback)) ::System::Action* m_ExpandDropItemCallback;

  /// @brief Field m_ExpandDropItemScheduledItem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpandDropItemScheduledItem,
                      put = __cordl_internal_set_m_ExpandDropItemScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ExpandDropItemScheduledItem;

  /// @brief Field m_TreeView, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeView, put = __cordl_internal_set_m_TreeView)) ::UnityEngine::UIElements::BaseTreeView* m_TreeView;

  /// @brief Method CompareId, addr 0x4a20158, size 0x644, virtual true, abstract: false, final false
  inline int32_t CompareId(int32_t id1, int32_t id2);

  /// @brief Method DelayExpandDropItem, addr 0x4a216a4, size 0x218, virtual false, abstract: false, final false
  inline void DelayExpandDropItem();

  /// @brief Method DragCleanup, addr 0x4a210d4, size 0x140, virtual true, abstract: false, final false
  inline void DragCleanup();

  /// @brief Method ExpandDropItem, addr 0x4a218bc, size 0x1a4, virtual false, abstract: false, final false
  inline void ExpandDropItem();

  /// @brief Method HandleAutoExpand, addr 0x4a21570, size 0x134, virtual true, abstract: false, final false
  inline void HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndDrop, addr 0x4a20840, size 0xe8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  static inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseTreeView* view);

  /// @brief Method OnDrop, addr 0x4a20928, size 0x7ac, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  /// @brief Method RestoreExpanded, addr 0x4a21214, size 0x35c, virtual false, abstract: false, final false
  inline void RestoreExpanded(::System::Collections::Generic::List_1<int32_t>* ids);

  /// @brief Method SetupDragAndDrop, addr 0x4a2079c, size 0xa4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds, bool skipText);

  constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* const& __cordl_internal_get_m_DropData() const;

  constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*& __cordl_internal_get_m_DropData();

  constexpr ::System::Action* const& __cordl_internal_get_m_ExpandDropItemCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ExpandDropItemCallback();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_ExpandDropItemScheduledItem() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ExpandDropItemScheduledItem();

  constexpr ::UnityEngine::UIElements::BaseTreeView* const& __cordl_internal_get_m_TreeView() const;

  constexpr ::UnityEngine::UIElements::BaseTreeView*& __cordl_internal_get_m_TreeView();

  constexpr void __cordl_internal_set_m_DropData(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* value);

  constexpr void __cordl_internal_set_m_ExpandDropItemCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ExpandDropItemScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_TreeView(::UnityEngine::UIElements::BaseTreeView* value);

  /// @brief Method .ctor, addr 0x4a20094, size 0xc4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5768 };

  /// @brief Field m_DropData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* ___m_DropData;

  /// @brief Field m_TreeView, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeView* ___m_TreeView;

  /// @brief Field m_ExpandDropItemScheduledItem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ExpandDropItemScheduledItem;

  /// @brief Field m_ExpandDropItemCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___m_ExpandDropItemCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_DropData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_TreeView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_ExpandDropItemScheduledItem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, ___m_ExpandDropItemCallback) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*, "UnityEngine.UIElements", "TreeViewReorderableDragAndDropController");
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*, "UnityEngine.UIElements", "TreeViewReorderableDragAndDropController/DropData");
