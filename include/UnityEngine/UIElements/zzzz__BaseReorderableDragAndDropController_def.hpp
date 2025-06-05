#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseReorderableDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseReorderableDragAndDropController)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseReorderableDragAndDropController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseReorderableDragAndDropController);
// Dependencies System.Object, UnityEngine.UIElements.ICollectionDragAndDropController, UnityEngine.UIElements.IDragAndDropController`1<TArgs>, UnityEngine.UIElements.IReorderable
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseReorderableDragAndDropController
class CORDL_TYPE BaseReorderableDragAndDropController : public ::System::Object {
public:
  // Declarations
  /// @brief Field <enableReordering>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__enableReordering_k__BackingField, put = __cordl_internal_set__enableReordering_k__BackingField)) bool _enableReordering_k__BackingField;

  __declspec(property(get = get_enableReordering, put = set_enableReordering)) bool enableReordering;

  /// @brief Field m_SortedSelectedIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedSelectedIds, put = __cordl_internal_set_m_SortedSelectedIds)) ::System::Collections::Generic::List_1<int32_t>* m_SortedSelectedIds;

  /// @brief Field m_View, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_View, put = __cordl_internal_set_m_View)) ::UnityEngine::UIElements::BaseVerticalCollectionView* m_View;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICollectionDragAndDropController"
  constexpr operator ::UnityEngine::UIElements::ICollectionDragAndDropController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
  constexpr operator ::UnityEngine::UIElements::IReorderable*() noexcept;

  /// @brief Method CanStartDrag, addr 0x4a17fc0, size 0x10, virtual true, abstract: false, final false
  inline bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds);

  /// @brief Method CompareId, addr 0x4a188d8, size 0x20, virtual true, abstract: false, final false
  inline int32_t CompareId(int32_t id1, int32_t id2);

  /// @brief Method DragCleanup, addr 0x4a188f8, size 0x4, virtual true, abstract: false, final false
  inline void DragCleanup();

  /// @brief Method GetSortedSelectedIds, addr 0x4a17f14, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetSortedSelectedIds();

  /// @brief Method HandleAutoExpand, addr 0x4a188fc, size 0x4, virtual true, abstract: false, final false
  inline void HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  static inline ::UnityEngine::UIElements::BaseReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view);

  /// @brief Method OnDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  /// @brief Method SetupDragAndDrop, addr 0x4a17fd0, size 0x5b4, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds, bool skipText);

  constexpr bool const& __cordl_internal_get__enableReordering_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableReordering_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_SortedSelectedIds() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SortedSelectedIds();

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& __cordl_internal_get_m_View() const;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __cordl_internal_get_m_View();

  constexpr void __cordl_internal_set__enableReordering_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_SortedSelectedIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  /// @brief Method .ctor, addr 0x4a17f1c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view);

  /// @brief Method get_enableReordering, addr 0x4a17fac, size 0x8, virtual true, abstract: false, final false
  inline bool get_enableReordering();

  /// @brief Convert to "::UnityEngine::UIElements::ICollectionDragAndDropController"
  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* i___UnityEngine__UIElements__ICollectionDragAndDropController() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*
  i___UnityEngine__UIElements__IDragAndDropController_1___UnityEngine__UIElements__IListDragAndDropArgs__() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IReorderable"
  constexpr ::UnityEngine::UIElements::IReorderable* i___UnityEngine__UIElements__IReorderable() noexcept;

  /// @brief Method set_enableReordering, addr 0x4a17fb4, size 0xc, virtual true, abstract: false, final false
  inline void set_enableReordering(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseReorderableDragAndDropController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseReorderableDragAndDropController(BaseReorderableDragAndDropController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseReorderableDragAndDropController(BaseReorderableDragAndDropController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5744 };

  /// @brief Field m_View, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_View;

  /// @brief Field m_SortedSelectedIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SortedSelectedIds;

  /// @brief Field <enableReordering>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____enableReordering_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ___m_View) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ___m_SortedSelectedIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ____enableReordering_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseReorderableDragAndDropController, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseReorderableDragAndDropController*, "UnityEngine.UIElements", "BaseReorderableDragAndDropController");
