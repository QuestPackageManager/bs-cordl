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
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6959)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6961))
// CS Name: ::UnityEngine.UIElements::ListViewDraggerAnimated*
class CORDL_TYPE ListViewDraggerAnimated : public ::UnityEngine::UIElements::ListViewDragger {
public:
  // Declarations
  /// @brief Field m_DragStartIndex, offset 0x60, size 0x4
  __declspec(property(get = __get_m_DragStartIndex, put = __set_m_DragStartIndex)) int32_t m_DragStartIndex;

  /// @brief Field m_CurrentIndex, offset 0x64, size 0x4
  __declspec(property(get = __get_m_CurrentIndex, put = __set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_SelectionHeight, offset 0x68, size 0x4
  __declspec(property(get = __get_m_SelectionHeight, put = __set_m_SelectionHeight)) float_t m_SelectionHeight;

  /// @brief Field m_LocalOffsetOnStart, offset 0x6c, size 0x4
  __declspec(property(get = __get_m_LocalOffsetOnStart, put = __set_m_LocalOffsetOnStart)) float_t m_LocalOffsetOnStart;

  /// @brief Field m_CurrentPointerPosition, offset 0x70, size 0xc
  __declspec(property(get = __get_m_CurrentPointerPosition, put = __set_m_CurrentPointerPosition))::UnityEngine::Vector3 m_CurrentPointerPosition;

  /// @brief Field m_Item, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Item, put = __set_m_Item))::UnityEngine::UIElements::ReusableCollectionItem* m_Item;

  /// @brief Field m_OffsetItem, offset 0x88, size 0x8
  __declspec(property(get = __get_m_OffsetItem, put = __set_m_OffsetItem))::UnityEngine::UIElements::ReusableCollectionItem* m_OffsetItem;

  __declspec(property(get = get_isDragging)) bool isDragging;

  __declspec(property(get = get_draggedItem))::UnityEngine::UIElements::ReusableCollectionItem* draggedItem;

  __declspec(property(get = get_supportsDragEvents)) bool supportsDragEvents;

  constexpr int32_t& __get_m_DragStartIndex();

  constexpr int32_t const& __get_m_DragStartIndex() const;

  constexpr void __set_m_DragStartIndex(int32_t value);

  constexpr int32_t& __get_m_CurrentIndex();

  constexpr int32_t const& __get_m_CurrentIndex() const;

  constexpr void __set_m_CurrentIndex(int32_t value);

  constexpr float_t& __get_m_SelectionHeight();

  constexpr float_t const& __get_m_SelectionHeight() const;

  constexpr void __set_m_SelectionHeight(float_t value);

  constexpr float_t& __get_m_LocalOffsetOnStart();

  constexpr float_t const& __get_m_LocalOffsetOnStart() const;

  constexpr void __set_m_LocalOffsetOnStart(float_t value);

  constexpr ::UnityEngine::Vector3& __get_m_CurrentPointerPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_CurrentPointerPosition() const;

  constexpr void __set_m_CurrentPointerPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __get_m_Item();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> const& __get_m_Item() const;

  constexpr void __set_m_Item(::UnityEngine::UIElements::ReusableCollectionItem* value);

  constexpr ::UnityEngine::UIElements::ReusableCollectionItem*& __get_m_OffsetItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> const& __get_m_OffsetItem() const;

  constexpr void __set_m_OffsetItem(::UnityEngine::UIElements::ReusableCollectionItem* value);

  /// @brief Method get_isDragging, addr 0x2e0bcd4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_draggedItem, addr 0x2e0bce4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem();

  /// @brief Method get_supportsDragEvents, addr 0x2e0bcec, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsDragEvents();

  static inline ::UnityEngine::UIElements::ListViewDraggerAnimated* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method .ctor, addr 0x2e0bcf4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method StartDrag, addr 0x2e0bcf8, size 0x6e0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method UpdateDrag, addr 0x2e0c718, size 0x894, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method Animate, addr 0x2e0c3d8, size 0x340, virtual false, abstract: false, final false
  inline void Animate(::UnityEngine::UIElements::ReusableCollectionItem* element, float_t paddingTop);

  /// @brief Method OnDrop, addr 0x2e0cfac, size 0x300, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0x2e0d2ac, size 0x4, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI();

  /// @brief Method TryGetDragPosition, addr 0x2e0d2b0, size 0x20, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewDraggerAnimated(ListViewDraggerAnimated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewDraggerAnimated(ListViewDraggerAnimated const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDraggerAnimated();

public:
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
