#pragma once
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
struct ListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::ListViewDragger::DragPosition
struct CORDL_TYPE __ListViewDragger__DragPosition {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>*();

  /// @brief Method Equals, addr 0x355fa8c, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x355eebc, size 0x58, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::__ListViewDragger__DragPosition other);

  /// @brief Method GetHashCode, addr 0x355fb28, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>* i___System__IEquatable_1___UnityEngine__UIElements____ListViewDragger__DragPosition_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListViewDragger__DragPosition();

  // Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*",
  // modifiers: "", def_value: None }, CppParam { name: "dragAndDropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }]
  constexpr __ListViewDragger__DragPosition(int32_t insertAtIndex, ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem,
                                            ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition) noexcept;

  /// @brief Field insertAtIndex, offset: 0x0, size: 0x4, def value: None
  int32_t insertAtIndex;

  /// @brief Field recycledItem, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem;

  /// @brief Field dragAndDropPosition, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, insertAtIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, recycledItem) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListViewDragger__DragPosition, dragAndDropPosition) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListViewDragger
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewDragger*
class CORDL_TYPE ListViewDragger : public ::UnityEngine::UIElements::DragEventsProcessor {
public:
  // Declarations
  using DragPosition = ::UnityEngine::UIElements::__ListViewDragger__DragPosition;

  /// @brief Field <dragAndDropController>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__dragAndDropController_k__BackingField,
                      put = __cordl_internal_set__dragAndDropController_k__BackingField))::UnityEngine::UIElements::ICollectionDragAndDropController* _dragAndDropController_k__BackingField;

  __declspec(property(get = get_dragAndDropController, put = set_dragAndDropController))::UnityEngine::UIElements::ICollectionDragAndDropController* dragAndDropController;

  /// @brief Field m_DragHoverBar, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHoverBar, put = __cordl_internal_set_m_DragHoverBar))::UnityEngine::UIElements::VisualElement* m_DragHoverBar;

  /// @brief Field m_LastDragPosition, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LastDragPosition, put = __cordl_internal_set_m_LastDragPosition))::UnityEngine::UIElements::__ListViewDragger__DragPosition m_LastDragPosition;

  __declspec(property(get = get_targetListView))::UnityEngine::UIElements::BaseVerticalCollectionView* targetListView;

  __declspec(property(get = get_targetScrollView))::UnityEngine::UIElements::ScrollView* targetScrollView;

  /// @brief Method ApplyDragAndDropUI, addr 0x355e370, size 0x5e0, virtual false, abstract: false, final false
  inline void ApplyDragAndDropUI(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  /// @brief Method CanStartDrag, addr 0x355da10, size 0x23c, virtual true, abstract: false, final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0x355f574, size 0x410, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI();

  /// @brief Method GetRecycledItem, addr 0x355dc4c, size 0x398, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method GetVisualMode, addr 0x355e20c, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode GetVisualMode(::UnityEngine::Vector3 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method HandleDragAndScroll, addr 0x355e950, size 0x23c, virtual false, abstract: false, final false
  inline void HandleDragAndScroll(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method MakeDragAndDropArgs, addr 0x355eb8c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListDragAndDropArgs MakeDragAndDropArgs(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  static inline ::UnityEngine::UIElements::ListViewDragger* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method OnDrop, addr 0x355ecdc, size 0x1e0, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method PlaceHoverBarAt, addr 0x355ef14, size 0x184, virtual false, abstract: false, final false
  inline void PlaceHoverBarAt(float_t top);

  /// @brief Method PlaceHoverBarAtElement, addr 0x355f098, size 0xbc, virtual false, abstract: false, final false
  inline void PlaceHoverBarAtElement(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method StartDrag, addr 0x355dfe4, size 0x1bc, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method TryGetDragPosition, addr 0x355f154, size 0x340, virtual true, abstract: false, final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method UpdateDrag, addr 0x355e1a0, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method <ApplyDragAndDropUI>b__22_0, addr 0x355f984, size 0x108, virtual false, abstract: false, final false
  inline void _ApplyDragAndDropUI_b__22_0(::UnityEngine::UIElements::GeometryChangedEvent* e);

  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& __cordl_internal_get__dragAndDropController_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ICollectionDragAndDropController*> const& __cordl_internal_get__dragAndDropController_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHoverBar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_DragHoverBar() const;

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition const& __cordl_internal_get_m_LastDragPosition() const;

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition& __cordl_internal_get_m_LastDragPosition();

  constexpr void __cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

  constexpr void __cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LastDragPosition(::UnityEngine::UIElements::__ListViewDragger__DragPosition value);

  /// @brief Method .ctor, addr 0x355d8d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method get_dragAndDropController, addr 0x355d8c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController();

  /// @brief Method get_targetListView, addr 0x355d828, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetListView();

  /// @brief Method get_targetScrollView, addr 0x355d8a4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView* get_targetScrollView();

  /// @brief Method set_dragAndDropController, addr 0x355d8c8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_LastDragPosition, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::__ListViewDragger__DragPosition ___m_LastDragPosition;

  /// @brief Field m_DragHoverBar, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHoverBar;

  /// @brief Field <dragAndDropController>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICollectionDragAndDropController* ____dragAndDropController_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDragger, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_LastDragPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ___m_DragHoverBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewDragger, ____dragAndDropController_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDragger*, "UnityEngine.UIElements", "ListViewDragger");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListViewDragger__DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");
