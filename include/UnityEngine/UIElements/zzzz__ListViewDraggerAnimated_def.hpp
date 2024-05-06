#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDraggerAnimated)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
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
// Type: UnityEngine.UIElements::ListViewDraggerAnimated
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewDraggerAnimated*
class CORDL_TYPE ListViewDraggerAnimated : public ::UnityEngine::UIElements::ListViewDragger {
public:
  // Declarations
  __declspec(property(get = get_draggedItem))::UnityEngine::UIElements::ReusableCollectionItem* draggedItem;

  __declspec(property(get = get_isDragging)) bool isDragging;

  /// @brief Field m_CurrentIndex, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_CurrentPointerPosition, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentPointerPosition, put = __cordl_internal_set_m_CurrentPointerPosition))::UnityEngine::Vector3 m_CurrentPointerPosition;

  /// @brief Field m_DragStartIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragStartIndex, put = __cordl_internal_set_m_DragStartIndex)) int32_t m_DragStartIndex;

  /// @brief Field m_Item, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Item, put = __cordl_internal_set_m_Item))::UnityEngine::UIElements::ReusableCollectionItem* m_Item;

  /// @brief Field m_LocalOffsetOnStart, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalOffsetOnStart, put = __cordl_internal_set_m_LocalOffsetOnStart)) float_t m_LocalOffsetOnStart;

  /// @brief Field m_OffsetItem, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OffsetItem, put = __cordl_internal_set_m_OffsetItem))::UnityEngine::UIElements::ReusableCollectionItem* m_OffsetItem;

  /// @brief Field m_SelectionHeight, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectionHeight, put = __cordl_internal_set_m_SelectionHeight)) float_t m_SelectionHeight;

  __declspec(property(get = get_supportsDragEvents)) bool supportsDragEvents;

  /// @brief Method Animate, addr 0x3560274, size 0x340, virtual false, abstract: false, final false
  inline void Animate(::UnityEngine::UIElements::ReusableCollectionItem* element, float_t paddingTop);

  /// @brief Method ClearDragAndDropUI, addr 0x3561148, size 0x4, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI();

  static inline ::UnityEngine::UIElements::ListViewDraggerAnimated* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method OnDrop, addr 0x3560e48, size 0x300, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method StartDrag, addr 0x355fb94, size 0x6e0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method TryGetDragPosition, addr 0x356114c, size 0x20, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method UpdateDrag, addr 0x35605b4, size 0x894, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentPointerPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentPointerPosition();

  constexpr int32_t const& __cordl_internal_get_m_DragStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DragStartIndex();

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __cordl_internal_get_m_Item();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> const& __cordl_internal_get_m_Item() const;

  constexpr float_t const& __cordl_internal_get_m_LocalOffsetOnStart() const;

  constexpr float_t& __cordl_internal_get_m_LocalOffsetOnStart();

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __cordl_internal_get_m_OffsetItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> const& __cordl_internal_get_m_OffsetItem() const;

  constexpr float_t const& __cordl_internal_get_m_SelectionHeight() const;

  constexpr float_t& __cordl_internal_get_m_SelectionHeight();

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPointerPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_DragStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Item(::UnityEngine::UIElements::ReusableCollectionItem* value);

  constexpr void __cordl_internal_set_m_LocalOffsetOnStart(float_t value);

  constexpr void __cordl_internal_set_m_OffsetItem(::UnityEngine::UIElements::ReusableCollectionItem* value);

  constexpr void __cordl_internal_set_m_SelectionHeight(float_t value);

  /// @brief Method .ctor, addr 0x355fb90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method get_draggedItem, addr 0x355fb80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem();

  /// @brief Method get_isDragging, addr 0x355fb70, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_supportsDragEvents, addr 0x355fb88, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsDragEvents();

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

  /// @brief Field m_DragStartIndex, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_DragStartIndex;

  /// @brief Field m_CurrentIndex, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  /// @brief Field m_SelectionHeight, offset: 0x68, size: 0x4, def value: None
  float_t ___m_SelectionHeight;

  /// @brief Field m_LocalOffsetOnStart, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_LocalOffsetOnStart;

  /// @brief Field m_CurrentPointerPosition, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentPointerPosition;

  /// @brief Field m_Item, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* ___m_Item;

  /// @brief Field m_OffsetItem, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* ___m_OffsetItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDraggerAnimated, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_DragStartIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_CurrentIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_SelectionHeight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_LocalOffsetOnStart) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_CurrentPointerPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_Item) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDraggerAnimated, ___m_OffsetItem) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDraggerAnimated);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDraggerAnimated*, "UnityEngine.UIElements", "ListViewDraggerAnimated");
