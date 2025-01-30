#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DragEventsProcessor)
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
struct DragEventsProcessor_DragState;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
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
class PointerLeaveEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
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
struct DragEventsProcessor_DragState;
}
namespace UnityEngine::UIElements {
class DragEventsProcessor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DragEventsProcessor_DragState);
MARK_REF_PTR_T(::UnityEngine::UIElements::DragEventsProcessor);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DragEventsProcessor/DragState
struct CORDL_TYPE DragEventsProcessor_DragState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DragEventsProcessor_DragState_Unwrapped
  enum struct __DragEventsProcessor_DragState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CanStartDrag = static_cast<int32_t>(0x1),
    __E_Dragging = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DragEventsProcessor_DragState_Unwrapped() const noexcept {
    return static_cast<__DragEventsProcessor_DragState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DragEventsProcessor_DragState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DragEventsProcessor_DragState(int32_t value__) noexcept;

  /// @brief Field CanStartDrag value: I32(1)
  static ::UnityEngine::UIElements::DragEventsProcessor_DragState const CanStartDrag;

  /// @brief Field Dragging value: I32(2)
  static ::UnityEngine::UIElements::DragEventsProcessor_DragState const Dragging;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::DragEventsProcessor_DragState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5745 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor_DragState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragEventsProcessor_DragState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.DragEventsProcessor::DragState, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DragEventsProcessor
class CORDL_TYPE DragEventsProcessor : public ::System::Object {
public:
  // Declarations
  using DragState = ::UnityEngine::UIElements::DragEventsProcessor_DragState;

  __declspec(property(get = get_dragAndDrop)) ::UnityEngine::UIElements::IDragAndDrop* dragAndDrop;

  __declspec(property(get = get_isEditorContext)) bool isEditorContext;

  /// @brief Field m_DragState, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragState, put = __cordl_internal_set_m_DragState)) ::UnityEngine::UIElements::DragEventsProcessor_DragState m_DragState;

  /// @brief Field m_IsRegistered, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsRegistered, put = __cordl_internal_set_m_IsRegistered)) bool m_IsRegistered;

  /// @brief Field m_Start, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start)) ::UnityEngine::Vector3 m_Start;

  /// @brief Field m_Target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityEngine::UIElements::VisualElement* m_Target;

  __declspec(property(get = get_supportsDragEvents)) bool supportsDragEvents;

  __declspec(property(get = get_useDragEvents)) bool useDragEvents;

  /// @brief Method CanStartDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearDragAndDropUI(bool dragCancelled);

  /// @brief Method GetDropTarget, addr 0x4a1a804, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragEventsProcessor* GetDropTarget(::UnityEngine::Vector2 position);

  static inline ::UnityEngine::UIElements::DragEventsProcessor* New_ctor(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method OnDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method OnPointerCancelEvent, addr 0x4a1a8fc, size 0x130, virtual false, abstract: false, final false
  inline void OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCapturedOut, addr 0x4a1aa2c, size 0x10c, virtual false, abstract: false, final false
  inline void OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x4a1a578, size 0xe8, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerLeaveEvent, addr 0x4a1a8ec, size 0x10, virtual false, abstract: false, final false
  inline void OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x4a1ab38, size 0x3a8, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUpEvent, addr 0x4a1a660, size 0x1a4, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method RegisterCallbacksFromTarget, addr 0x4a19e70, size 0x300, virtual false, abstract: false, final false
  inline void RegisterCallbacksFromTarget();

  /// @brief Method RegisterCallbacksFromTarget, addr 0x4a1a170, size 0x4, virtual false, abstract: false, final false
  inline void RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method StartDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x4a1a174, size 0x8, virtual false, abstract: false, final false
  inline void UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x4a1a17c, size 0x3fc, virtual false, abstract: false, final false
  inline void UnregisterCallbacksFromTarget(bool unregisterPanelEvents);

  /// @brief Method UpdateDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState const& __cordl_internal_get_m_DragState() const;

  constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState& __cordl_internal_get_m_DragState();

  constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

  constexpr bool& __cordl_internal_get_m_IsRegistered();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Start() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Start();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_DragState(::UnityEngine::UIElements::DragEventsProcessor_DragState value);

  constexpr void __cordl_internal_set_m_IsRegistered(bool value);

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a19d3c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method get_dragAndDrop, addr 0x4a19bfc, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop();

  /// @brief Method get_isEditorContext, addr 0x4a19c1c, size 0x120, virtual true, abstract: false, final false
  inline bool get_isEditorContext();

  /// @brief Method get_supportsDragEvents, addr 0x4a19bbc, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsDragEvents();

  /// @brief Method get_useDragEvents, addr 0x4a19bc4, size 0x38, virtual false, abstract: false, final false
  inline bool get_useDragEvents();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DragEventsProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DragEventsProcessor(DragEventsProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DragEventsProcessor(DragEventsProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5746 };

  /// @brief Field m_IsRegistered, offset: 0x10, size: 0x1, def value: None
  bool ___m_IsRegistered;

  /// @brief Field m_DragState, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragEventsProcessor_DragState ___m_DragState;

  /// @brief Field m_Start, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Start;

  /// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_IsRegistered) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_DragState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragEventsProcessor, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragEventsProcessor_DragState, "UnityEngine.UIElements", "DragEventsProcessor/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::DragEventsProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragEventsProcessor*, "UnityEngine.UIElements", "DragEventsProcessor");
