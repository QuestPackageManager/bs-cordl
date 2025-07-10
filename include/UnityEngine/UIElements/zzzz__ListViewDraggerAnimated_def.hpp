#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDraggerAnimated.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDraggerAnimated)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct ListViewDragger_DragPosition;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDraggerAnimated;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDraggerAnimated);
// Dependencies UnityEngine.UIElements.ListViewDragger, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListViewDraggerAnimated
class CORDL_TYPE ListViewDraggerAnimated : public ::UnityEngine::UIElements::ListViewDragger {
public:
  // Declarations
  /// @brief Field <isDragging>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__isDragging_k__BackingField, put = __cordl_internal_set__isDragging_k__BackingField)) bool _isDragging_k__BackingField;

  __declspec(property(get = get_draggedItem)) ::UnityEngine::UIElements::ReusableCollectionItem* draggedItem;

  __declspec(property(get = get_isDragging, put = set_isDragging)) bool isDragging;

  /// @brief Field m_CurrentIndex, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_CurrentPointerPosition, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerPosition, put = __cordl_internal_set_m_CurrentPointerPosition)) ::UnityEngine::Vector3 m_CurrentPointerPosition;

  /// @brief Field m_DragStartIndex, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragStartIndex, put = __cordl_internal_set_m_DragStartIndex)) int32_t m_DragStartIndex;

  /// @brief Field m_Item, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Item, put = __cordl_internal_set_m_Item)) ::UnityEngine::UIElements::ReusableCollectionItem* m_Item;

  /// @brief Field m_LocalOffsetOnStart, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalOffsetOnStart, put = __cordl_internal_set_m_LocalOffsetOnStart)) float_t m_LocalOffsetOnStart;

  /// @brief Field m_OffsetItem, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OffsetItem, put = __cordl_internal_set_m_OffsetItem)) ::UnityEngine::UIElements::ReusableCollectionItem* m_OffsetItem;

  /// @brief Field m_SelectionHeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectionHeight, put = __cordl_internal_set_m_SelectionHeight)) float_t m_SelectionHeight;

  __declspec(property(get = get_supportsDragEvents)) bool supportsDragEvents;

  /// @brief Method Animate, addr 0x4a1e864, size 0x340, virtual false, abstract: false, final false
  inline void Animate(::UnityEngine::UIElements::ReusableCollectionItem* element, float_t paddingTop);

  /// @brief Method ClearDragAndDropUI, addr 0x4a1f868, size 0x4, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI(bool dragCancelled);

  static inline ::UnityEngine::UIElements::ListViewDraggerAnimated* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method OnDrop, addr 0x4a1f47c, size 0x3ec, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method StartDrag, addr 0x4a1e100, size 0x764, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method TryGetDragPosition, addr 0x4a1f86c, size 0x20, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition);

  /// @brief Method UpdateDrag, addr 0x4a1eba4, size 0x8d8, virtual true, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  constexpr bool const& __cordl_internal_get__isDragging_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDragging_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentPointerPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentPointerPosition();

  constexpr int32_t const& __cordl_internal_get_m_DragStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DragStartIndex();

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem* const& __cordl_internal_get_m_Item() const;

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __cordl_internal_get_m_Item();

  constexpr float_t const& __cordl_internal_get_m_LocalOffsetOnStart() const;

  constexpr float_t& __cordl_internal_get_m_LocalOffsetOnStart();

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem* const& __cordl_internal_get_m_OffsetItem() const;

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __cordl_internal_get_m_OffsetItem();

  constexpr float_t const& __cordl_internal_get_m_SelectionHeight() const;

  constexpr float_t& __cordl_internal_get_m_SelectionHeight();

  constexpr void __cordl_internal_set__isDragging_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPointerPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_DragStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Item(::UnityEngine::UIElements::ReusableCollectionItem* value);

  constexpr void __cordl_internal_set_m_LocalOffsetOnStart(float_t value);

  constexpr void __cordl_internal_set_m_OffsetItem(::UnityEngine::UIElements::ReusableCollectionItem* value);

  constexpr void __cordl_internal_set_m_SelectionHeight(float_t value);

  /// @brief Method .ctor, addr 0x4a1e0f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method get_draggedItem, addr 0x4a1e0e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem();

  /// @brief Method get_isDragging, addr 0x4a1e0d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_supportsDragEvents, addr 0x4a1e0ec, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsDragEvents();

  /// @brief Method set_isDragging, addr 0x4a1e0d8, size 0xc, virtual false, abstract: false, final false
  inline void set_isDragging(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDraggerAnimated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewDraggerAnimated(ListViewDraggerAnimated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewDraggerAnimated(ListViewDraggerAnimated const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5765 };

  /// @brief Field m_DragStartIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_DragStartIndex;

  /// @brief Field m_CurrentIndex, offset: 0x7c, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  /// @brief Field m_SelectionHeight, offset: 0x80, size: 0x4, def value: None
  float_t ___m_SelectionHeight;

  /// @brief Field m_LocalOffsetOnStart, offset: 0x84, size: 0x4, def value: None
  float_t ___m_LocalOffsetOnStart;

  /// @brief Field m_CurrentPointerPosition, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentPointerPosition;

  /// @brief Field m_Item, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* ___m_Item;

  /// @brief Field m_OffsetItem, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* ___m_OffsetItem;

  /// @brief Field <isDragging>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____isDragging_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_DragStartIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_CurrentIndex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_SelectionHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_LocalOffsetOnStart) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_CurrentPointerPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_Item) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_OffsetItem) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ____isDragging_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDraggerAnimated, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDraggerAnimated);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDraggerAnimated*, "UnityEngine.UIElements", "ListViewDraggerAnimated");
