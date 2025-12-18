#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/ColumnMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColumnMover)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader;
}
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnMoveLocationPreview;
}
namespace UnityEngine::UIElements {
class ColumnLayout;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class ColumnMover;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::ColumnMover);
// Dependencies UnityEngine.UIElements.PointerManipulator
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.ColumnMover
class CORDL_TYPE ColumnMover : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field <columnLayout>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__columnLayout_k__BackingField,
                      put = __cordl_internal_set__columnLayout_k__BackingField)) ::UnityEngine::UIElements::ColumnLayout* _columnLayout_k__BackingField;

  __declspec(property(get = get_active, put = set_active)) bool active;

  /// @brief Field activeChanged, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_activeChanged, put = __cordl_internal_set_activeChanged)) ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* activeChanged;

  __declspec(property(get = get_columnLayout, put = set_columnLayout)) ::UnityEngine::UIElements::ColumnLayout* columnLayout;

  /// @brief Field m_Active, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_Cancelled, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Cancelled, put = __cordl_internal_set_m_Cancelled)) bool m_Cancelled;

  /// @brief Field m_ColumnToMove, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnToMove, put = __cordl_internal_set_m_ColumnToMove)) ::UnityEngine::UIElements::Column* m_ColumnToMove;

  /// @brief Field m_ColumnToMovePos, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColumnToMovePos, put = __cordl_internal_set_m_ColumnToMovePos)) float_t m_ColumnToMovePos;

  /// @brief Field m_ColumnToMoveWidth, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColumnToMoveWidth, put = __cordl_internal_set_m_ColumnToMoveWidth)) float_t m_ColumnToMoveWidth;

  /// @brief Field m_DestinationColumn, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestinationColumn, put = __cordl_internal_set_m_DestinationColumn)) ::UnityEngine::UIElements::Column* m_DestinationColumn;

  /// @brief Field m_Header, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* m_Header;

  /// @brief Field m_LastPos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastPos, put = __cordl_internal_set_m_LastPos)) float_t m_LastPos;

  /// @brief Field m_LocationPreviewElement, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocationPreviewElement,
                      put = __cordl_internal_set_m_LocationPreviewElement)) ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* m_LocationPreviewElement;

  /// @brief Field m_MoveBeforeDestination, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MoveBeforeDestination, put = __cordl_internal_set_m_MoveBeforeDestination)) bool m_MoveBeforeDestination;

  /// @brief Field m_Moving, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Moving, put = __cordl_internal_set_m_Moving)) bool m_Moving;

  /// @brief Field m_PreviewElement, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviewElement, put = __cordl_internal_set_m_PreviewElement)) ::UnityEngine::UIElements::VisualElement* m_PreviewElement;

  /// @brief Field m_StartPos, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartPos, put = __cordl_internal_set_m_StartPos)) float_t m_StartPos;

  __declspec(property(get = get_moving, put = set_moving)) bool moving;

  /// @brief Field movingChanged, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_movingChanged, put = __cordl_internal_set_movingChanged)) ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* movingChanged;

  /// @brief Method BeginDragMove, addr 0x6b56bc4, size 0x454, virtual false, abstract: false, final false
  inline void BeginDragMove(float_t pos);

  /// @brief Method DragMove, addr 0x6b57018, size 0x8, virtual false, abstract: false, final false
  inline void DragMove(float_t pos);

  /// @brief Method EndDragMove, addr 0x6b56a24, size 0x120, virtual false, abstract: false, final false
  inline void EndDragMove(bool cancelled);

  static inline ::UnityEngine::UIElements::Internal::ColumnMover* New_ctor();

  /// @brief Method OnKeyDown, addr 0x6b56b44, size 0x80, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e);

  /// @brief Method OnPointerCancel, addr 0x6b56844, size 0x8c, virtual false, abstract: false, final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCaptureOut, addr 0x6b569ac, size 0x78, virtual false, abstract: false, final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDown, addr 0x6b562b0, size 0x9c, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove, addr 0x6b5650c, size 0x78, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp, addr 0x6b566a0, size 0xa0, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method ProcessCancelEvent, addr 0x6b568d0, size 0xdc, virtual false, abstract: false, final false
  inline void ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId);

  /// @brief Method ProcessDownEvent, addr 0x6b5634c, size 0x1c0, virtual false, abstract: false, final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessMoveEvent, addr 0x6b56584, size 0x11c, virtual false, abstract: false, final false
  inline void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Vector2 localPosition);

  /// @brief Method ProcessUpEvent, addr 0x6b56740, size 0x104, virtual false, abstract: false, final false
  inline void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x6b55c58, size 0x32c, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x6b55f84, size 0x32c, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method UpdateMoveLocation, addr 0x6b57020, size 0x33c, virtual false, abstract: false, final false
  inline void UpdateMoveLocation();

  /// @brief Method UpdatePreviewPosition, addr 0x6b5735c, size 0x290, virtual false, abstract: false, final false
  inline void UpdatePreviewPosition();

  constexpr ::UnityEngine::UIElements::ColumnLayout* const& __cordl_internal_get__columnLayout_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get__columnLayout_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* const& __cordl_internal_get_activeChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*& __cordl_internal_get_activeChanged();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr bool const& __cordl_internal_get_m_Cancelled() const;

  constexpr bool& __cordl_internal_get_m_Cancelled();

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get_m_ColumnToMove() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_m_ColumnToMove();

  constexpr float_t const& __cordl_internal_get_m_ColumnToMovePos() const;

  constexpr float_t& __cordl_internal_get_m_ColumnToMovePos();

  constexpr float_t const& __cordl_internal_get_m_ColumnToMoveWidth() const;

  constexpr float_t& __cordl_internal_get_m_ColumnToMoveWidth();

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get_m_DestinationColumn() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_m_DestinationColumn();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& __cordl_internal_get_m_Header() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& __cordl_internal_get_m_Header();

  constexpr float_t const& __cordl_internal_get_m_LastPos() const;

  constexpr float_t& __cordl_internal_get_m_LastPos();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* const& __cordl_internal_get_m_LocationPreviewElement() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*& __cordl_internal_get_m_LocationPreviewElement();

  constexpr bool const& __cordl_internal_get_m_MoveBeforeDestination() const;

  constexpr bool& __cordl_internal_get_m_MoveBeforeDestination();

  constexpr bool const& __cordl_internal_get_m_Moving() const;

  constexpr bool& __cordl_internal_get_m_Moving();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_PreviewElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PreviewElement();

  constexpr float_t const& __cordl_internal_get_m_StartPos() const;

  constexpr float_t& __cordl_internal_get_m_StartPos();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* const& __cordl_internal_get_movingChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*& __cordl_internal_get_movingChanged();

  constexpr void __cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr void __cordl_internal_set_m_Cancelled(bool value);

  constexpr void __cordl_internal_set_m_ColumnToMove(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set_m_ColumnToMovePos(float_t value);

  constexpr void __cordl_internal_set_m_ColumnToMoveWidth(float_t value);

  constexpr void __cordl_internal_set_m_DestinationColumn(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set_m_Header(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value);

  constexpr void __cordl_internal_set_m_LastPos(float_t value);

  constexpr void __cordl_internal_set_m_LocationPreviewElement(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* value);

  constexpr void __cordl_internal_set_m_MoveBeforeDestination(bool value);

  constexpr void __cordl_internal_set_m_Moving(bool value);

  constexpr void __cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_StartPos(float_t value);

  constexpr void __cordl_internal_set_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  /// @brief Method .ctor, addr 0x6b55b9c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_activeChanged, addr 0x6b5589c, size 0xc0, virtual false, abstract: false, final false
  inline void add_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  /// @brief Method add_movingChanged, addr 0x6b55a1c, size 0xc0, virtual false, abstract: false, final false
  inline void add_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  /// @brief Method get_active, addr 0x6b5581c, size 0x8, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_columnLayout, addr 0x6b5580c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ColumnLayout* get_columnLayout();

  /// @brief Method get_moving, addr 0x6b5585c, size 0x8, virtual false, abstract: false, final false
  inline bool get_moving();

  /// @brief Method remove_activeChanged, addr 0x6b5595c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  /// @brief Method remove_movingChanged, addr 0x6b55adc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value);

  /// @brief Method set_active, addr 0x6b55824, size 0x38, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_columnLayout, addr 0x6b55814, size 0x8, virtual false, abstract: false, final false
  inline void set_columnLayout(::UnityEngine::UIElements::ColumnLayout* value);

  /// @brief Method set_moving, addr 0x6b55864, size 0x38, virtual false, abstract: false, final false
  inline void set_moving(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnMover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnMover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnMover(ColumnMover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnMover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnMover(ColumnMover const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5512 };

  /// @brief Field m_StartPos, offset: 0x24, size: 0x4, def value: None
  float_t ___m_StartPos;

  /// @brief Field m_LastPos, offset: 0x28, size: 0x4, def value: None
  float_t ___m_LastPos;

  /// @brief Field m_Active, offset: 0x2c, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_Moving, offset: 0x2d, size: 0x1, def value: None
  bool ___m_Moving;

  /// @brief Field m_Cancelled, offset: 0x2e, size: 0x1, def value: None
  bool ___m_Cancelled;

  /// @brief Field m_Header, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* ___m_Header;

  /// @brief Field m_PreviewElement, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PreviewElement;

  /// @brief Field m_LocationPreviewElement, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* ___m_LocationPreviewElement;

  /// @brief Field m_ColumnToMove, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___m_ColumnToMove;

  /// @brief Field m_ColumnToMovePos, offset: 0x50, size: 0x4, def value: None
  float_t ___m_ColumnToMovePos;

  /// @brief Field m_ColumnToMoveWidth, offset: 0x54, size: 0x4, def value: None
  float_t ___m_ColumnToMoveWidth;

  /// @brief Field m_DestinationColumn, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___m_DestinationColumn;

  /// @brief Field m_MoveBeforeDestination, offset: 0x60, size: 0x1, def value: None
  bool ___m_MoveBeforeDestination;

  /// @brief Field <columnLayout>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* ____columnLayout_k__BackingField;

  /// @brief Field activeChanged, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* ___activeChanged;

  /// @brief Field movingChanged, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* ___movingChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_StartPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_LastPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_Active) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_Moving) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_Cancelled) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_Header) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_PreviewElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_LocationPreviewElement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_ColumnToMove) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_ColumnToMovePos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_ColumnToMoveWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_DestinationColumn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___m_MoveBeforeDestination) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ____columnLayout_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___activeChanged) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnMover, ___movingChanged) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::ColumnMover, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::ColumnMover);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::ColumnMover*, "UnityEngine.UIElements.Internal", "ColumnMover");
