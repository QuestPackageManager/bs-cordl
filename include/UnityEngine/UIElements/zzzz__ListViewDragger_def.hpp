#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDragger)
namespace System {
template <typename T> class IEquatable_1;
}
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
struct DragAndDropPosition;
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
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDragger);
MARK_VAL_T(::UnityEngine::UIElements::__ListViewDragger__DragPosition);
// Type: ::DragPosition
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::ListViewDragger::DragPosition
struct CORDL_TYPE __ListViewDragger__DragPosition {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>*();

  /// @brief Method Equals, addr 0x49b6f88, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x49b5114, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::__ListViewDragger__DragPosition other);

  /// @brief Method GetHashCode, addr 0x49b7010, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>* i___System__IEquatable_1___UnityEngine__UIElements____ListViewDragger__DragPosition_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListViewDragger__DragPosition();

  // Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "childIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: None },
  // CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }]
  constexpr __ListViewDragger__DragPosition(int32_t insertAtIndex, int32_t parentId, int32_t childIndex, ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem,
                                            ::UnityEngine::UIElements::DragAndDropPosition dropPosition) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, insertAtIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, parentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, childIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, recycledItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, dropPosition) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListViewDragger
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewDragger*
class CORDL_TYPE ListViewDragger : public ::UnityEngine::UIElements::DragEventsProcessor {
public:
  // Declarations
  using DragPosition = ::UnityEngine::UIElements::__ListViewDragger__DragPosition;

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
  __declspec(property(get = __cordl_internal_get_m_LastDragPosition, put = __cordl_internal_set_m_LastDragPosition)) ::UnityEngine::UIElements::__ListViewDragger__DragPosition m_LastDragPosition;

  /// @brief Field m_LeftIndentation, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LeftIndentation, put = __cordl_internal_set_m_LeftIndentation)) float_t m_LeftIndentation;

  /// @brief Field m_SiblingBottom, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SiblingBottom, put = __cordl_internal_set_m_SiblingBottom)) float_t m_SiblingBottom;

  __declspec(property(get = get_targetScrollView)) ::UnityEngine::UIElements::ScrollView* targetScrollView;

  __declspec(property(get = get_targetView)) ::UnityEngine::UIElements::BaseVerticalCollectionView* targetView;

  /// @brief Method ApplyDragAndDropUI, addr 0x49b44d8, size 0x798, virtual false, abstract: false, final false
  inline void ApplyDragAndDropUI(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  /// @brief Method CanStartDrag, addr 0x49b3568, size 0x2d8, virtual true, abstract: false, final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0x49b6834, size 0x670, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI(bool dragCancelled);

  /// @brief Method GetHoverBarTopPosition, addr 0x49b67a8, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method GetPreviousAndNextItemsIgnoringDraggedItems, addr 0x49b6530, size 0x278, virtual false, abstract: false, final false
  inline void GetPreviousAndNextItemsIgnoringDraggedItems(int32_t insertAtIndex, ByRef<int32_t> previousItemId, ByRef<int32_t> nextItemId);

  /// @brief Method GetRecycledItem, addr 0x49b3840, size 0x37c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method GetVisualMode, addr 0x49b4064, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode GetVisualMode(::UnityEngine::Vector3 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method HandleAutoExpansion, addr 0x49b43ec, size 0xec, virtual false, abstract: false, final false
  inline void HandleAutoExpansion(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndScroll, addr 0x49b41f4, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleDragAndScroll(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded, addr 0x49b6018, size 0x518, virtual false, abstract: false, final false
  inline void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleTreePosition, addr 0x49b5f10, size 0x108, virtual false, abstract: false, final false
  inline void HandleTreePosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method MakeDragAndDropArgs, addr 0x49b4c70, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragAndDropArgs MakeDragAndDropArgs(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  static inline ::UnityEngine::UIElements::ListViewDragger* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method OnDrop, addr 0x49b4d94, size 0x380, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method PlaceHoverBarAt, addr 0x49b518c, size 0x660, virtual false, abstract: false, final false
  inline void PlaceHoverBarAt(float_t top, float_t indentationPadding, float_t siblingBottom);

  /// @brief Method PlaceHoverBarAtElement, addr 0x49b5b30, size 0x1c, virtual false, abstract: false, final false
  inline void PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method StartDrag, addr 0x49b3bbc, size 0x2d8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method TryGetDragPosition, addr 0x49b5b4c, size 0x3c4, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method UpdateDrag, addr 0x49b3e94, size 0x1d0, virtual true, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method <ApplyDragAndDropUI>g__GeometryChangedCallback|27_0, addr 0x49b6ea4, size 0xe4, virtual false, abstract: false, final false
  inline void _ApplyDragAndDropUI_g__GeometryChangedCallback_27_0(::UnityEngine::UIElements::GeometryChangedEvent* e);

  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& __cordl_internal_get__dragAndDropController_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ICollectionDragAndDropController*> const& __cordl_internal_get__dragAndDropController_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverBar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_DragHoverBar() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverItemMarker();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_DragHoverItemMarker() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverSiblingMarker();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_DragHoverSiblingMarker() const;

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition const& __cordl_internal_get_m_LastDragPosition() const;

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition& __cordl_internal_get_m_LastDragPosition();

  constexpr float_t const& __cordl_internal_get_m_LeftIndentation() const;

  constexpr float_t& __cordl_internal_get_m_LeftIndentation();

  constexpr float_t const& __cordl_internal_get_m_SiblingBottom() const;

  constexpr float_t& __cordl_internal_get_m_SiblingBottom();

  constexpr void __cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

  constexpr void __cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHoverItemMarker(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHoverSiblingMarker(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LastDragPosition(::UnityEngine::UIElements::__ListViewDragger__DragPosition value);

  constexpr void __cordl_internal_set_m_LeftIndentation(float_t value);

  constexpr void __cordl_internal_set_m_SiblingBottom(float_t value);

  /// @brief Method .ctor, addr 0x49b355c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method get_dragAndDropController, addr 0x49b354c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController();

  /// @brief Method get_targetScrollView, addr 0x49b3530, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView* get_targetScrollView();

  /// @brief Method get_targetView, addr 0x49b34b4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetView();

  /// @brief Method set_dragAndDropController, addr 0x49b3554, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_LastDragPosition, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::UIElements::__ListViewDragger__DragPosition ___m_LastDragPosition;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDragger, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LastDragPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverItemMarker) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverSiblingMarker) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LeftIndentation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_SiblingBottom) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ____dragAndDropController_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDragger*, "UnityEngine.UIElements", "ListViewDragger");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListViewDragger__DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");
