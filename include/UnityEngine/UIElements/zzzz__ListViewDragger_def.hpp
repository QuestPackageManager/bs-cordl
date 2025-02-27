#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDragger)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
struct ListViewDragger_DragPosition;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct ListViewDragger_DragPosition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDragger);
MARK_VAL_T(::UnityEngine::UIElements::ListViewDragger_DragPosition);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.DragAndDropPosition
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ListViewDragger/DragPosition
struct CORDL_TYPE ListViewDragger_DragPosition {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*();

  /// @brief Method Equals, addr 0x4a2a784, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a28910, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::ListViewDragger_DragPosition other);

  /// @brief Method GetHashCode, addr 0x4a2a80c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>* i___System__IEquatable_1___UnityEngine__UIElements__ListViewDragger_DragPosition_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDragger_DragPosition();

  // Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "childIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: None },
  // CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }]
  constexpr ListViewDragger_DragPosition(int32_t insertAtIndex, int32_t parentId, int32_t childIndex, ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem,
                                         ::UnityEngine::UIElements::DragAndDropPosition dropPosition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field insertAtIndex, offset: 0x0, size: 0x4, def value: None
  int32_t insertAtIndex;

  /// @brief Field parentId, offset: 0x4, size: 0x4, def value: None
  int32_t parentId;

  /// @brief Field childIndex, offset: 0x8, size: 0x4, def value: None
  int32_t childIndex;

  /// @brief Field recycledItem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem;

  /// @brief Field dropPosition, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragAndDropPosition dropPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger_DragPosition, insertAtIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger_DragPosition, parentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger_DragPosition, childIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger_DragPosition, recycledItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger_DragPosition, dropPosition) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDragger_DragPosition, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.DragEventsProcessor, UnityEngine.UIElements.ListViewDragger::DragPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListViewDragger
class CORDL_TYPE ListViewDragger : public ::UnityEngine::UIElements::DragEventsProcessor {
public:
  // Declarations
  using DragPosition = ::UnityEngine::UIElements::ListViewDragger_DragPosition;

  /// @brief Field <dragAndDropController>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__dragAndDropController_k__BackingField,
                      put = __cordl_internal_set__dragAndDropController_k__BackingField)) ::UnityEngine::UIElements::ICollectionDragAndDropController* _dragAndDropController_k__BackingField;

  __declspec(property(get = get_dragAndDropController, put = set_dragAndDropController)) ::UnityEngine::UIElements::ICollectionDragAndDropController* dragAndDropController;

  /// @brief Field m_DragHoverBar, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHoverBar, put = __cordl_internal_set_m_DragHoverBar)) ::UnityEngine::UIElements::VisualElement* m_DragHoverBar;

  /// @brief Field m_DragHoverItemMarker, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHoverItemMarker, put = __cordl_internal_set_m_DragHoverItemMarker)) ::UnityEngine::UIElements::VisualElement* m_DragHoverItemMarker;

  /// @brief Field m_DragHoverSiblingMarker, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHoverSiblingMarker, put = __cordl_internal_set_m_DragHoverSiblingMarker)) ::UnityEngine::UIElements::VisualElement* m_DragHoverSiblingMarker;

  /// @brief Field m_LastDragPosition, offset 0x30, size 0x20
  __declspec(property(get = __cordl_internal_get_m_LastDragPosition, put = __cordl_internal_set_m_LastDragPosition)) ::UnityEngine::UIElements::ListViewDragger_DragPosition m_LastDragPosition;

  /// @brief Field m_LeftIndentation, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LeftIndentation, put = __cordl_internal_set_m_LeftIndentation)) float_t m_LeftIndentation;

  /// @brief Field m_SiblingBottom, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SiblingBottom, put = __cordl_internal_set_m_SiblingBottom)) float_t m_SiblingBottom;

  __declspec(property(get = get_targetScrollView)) ::UnityEngine::UIElements::ScrollView* targetScrollView;

  __declspec(property(get = get_targetView)) ::UnityEngine::UIElements::BaseVerticalCollectionView* targetView;

  /// @brief Method ApplyDragAndDropUI, addr 0x4a27cd4, size 0x798, virtual false, abstract: false, final false
  inline void ApplyDragAndDropUI(::UnityEngine::UIElements::ListViewDragger_DragPosition dragPosition);

  /// @brief Method CanStartDrag, addr 0x4a26d64, size 0x2d8, virtual true, abstract: false, final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0x4a2a030, size 0x670, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI(bool dragCancelled);

  /// @brief Method GetHoverBarTopPosition, addr 0x4a29fa4, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method GetPreviousAndNextItemsIgnoringDraggedItems, addr 0x4a29d2c, size 0x278, virtual false, abstract: false, final false
  inline void GetPreviousAndNextItemsIgnoringDraggedItems(int32_t insertAtIndex, ::ByRef<int32_t> previousItemId, ::ByRef<int32_t> nextItemId);

  /// @brief Method GetRecycledItem, addr 0x4a2703c, size 0x37c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method GetVisualMode, addr 0x4a27860, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode GetVisualMode(::UnityEngine::Vector3 pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition);

  /// @brief Method HandleAutoExpansion, addr 0x4a27be8, size 0xec, virtual false, abstract: false, final false
  inline void HandleAutoExpansion(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndScroll, addr 0x4a279f0, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleDragAndScroll(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded, addr 0x4a29814, size 0x518, virtual false, abstract: false, final false
  inline void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleTreePosition, addr 0x4a2970c, size 0x108, virtual false, abstract: false, final false
  inline void HandleTreePosition(::UnityEngine::Vector2 pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition);

  /// @brief Method MakeDragAndDropArgs, addr 0x4a2846c, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragAndDropArgs MakeDragAndDropArgs(::UnityEngine::UIElements::ListViewDragger_DragPosition dragPosition);

  static inline ::UnityEngine::UIElements::ListViewDragger* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method OnDrop, addr 0x4a28590, size 0x380, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method PlaceHoverBarAt, addr 0x4a28988, size 0x660, virtual false, abstract: false, final false
  inline void PlaceHoverBarAt(float_t top, float_t indentationPadding, float_t siblingBottom);

  /// @brief Method PlaceHoverBarAtElement, addr 0x4a2932c, size 0x1c, virtual false, abstract: false, final false
  inline void PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method StartDrag, addr 0x4a273b8, size 0x2d8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method TryGetDragPosition, addr 0x4a29348, size 0x3c4, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition);

  /// @brief Method UpdateDrag, addr 0x4a27690, size 0x1d0, virtual true, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method <ApplyDragAndDropUI>g__GeometryChangedCallback|27_0, addr 0x4a2a6a0, size 0xe4, virtual false, abstract: false, final false
  inline void _ApplyDragAndDropUI_g__GeometryChangedCallback_27_0(::UnityEngine::UIElements::GeometryChangedEvent* e);

  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* const& __cordl_internal_get__dragAndDropController_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& __cordl_internal_get__dragAndDropController_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverBar() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverBar();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverItemMarker() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverItemMarker();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHoverSiblingMarker() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverSiblingMarker();

  constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition const& __cordl_internal_get_m_LastDragPosition() const;

  constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition& __cordl_internal_get_m_LastDragPosition();

  constexpr float_t const& __cordl_internal_get_m_LeftIndentation() const;

  constexpr float_t& __cordl_internal_get_m_LeftIndentation();

  constexpr float_t const& __cordl_internal_get_m_SiblingBottom() const;

  constexpr float_t& __cordl_internal_get_m_SiblingBottom();

  constexpr void __cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

  constexpr void __cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHoverItemMarker(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHoverSiblingMarker(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LastDragPosition(::UnityEngine::UIElements::ListViewDragger_DragPosition value);

  constexpr void __cordl_internal_set_m_LeftIndentation(float_t value);

  constexpr void __cordl_internal_set_m_SiblingBottom(float_t value);

  /// @brief Method .ctor, addr 0x4a26d58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method get_dragAndDropController, addr 0x4a26d48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController();

  /// @brief Method get_targetScrollView, addr 0x4a26d2c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView* get_targetScrollView();

  /// @brief Method get_targetView, addr 0x4a26cb0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetView();

  /// @brief Method set_dragAndDropController, addr 0x4a26d50, size 0x8, virtual false, abstract: false, final false
  inline void set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDragger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewDragger(ListViewDragger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewDragger(ListViewDragger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5763 };

  /// @brief Field m_LastDragPosition, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::UIElements::ListViewDragger_DragPosition ___m_LastDragPosition;

  /// @brief Field m_DragHoverBar, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHoverBar;

  /// @brief Field m_DragHoverItemMarker, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHoverItemMarker;

  /// @brief Field m_DragHoverSiblingMarker, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHoverSiblingMarker;

  /// @brief Field m_LeftIndentation, offset: 0x68, size: 0x4, def value: None
  float_t ___m_LeftIndentation;

  /// @brief Field m_SiblingBottom, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_SiblingBottom;

  /// @brief Field <dragAndDropController>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICollectionDragAndDropController* ____dragAndDropController_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LastDragPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverItemMarker) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverSiblingMarker) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LeftIndentation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_SiblingBottom) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ____dragAndDropController_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDragger, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDragger*, "UnityEngine.UIElements", "ListViewDragger");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDragger_DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");
