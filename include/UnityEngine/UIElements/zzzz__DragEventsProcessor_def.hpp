#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
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
namespace UnityEngine::UIElements {
struct __DragEventsProcessor__DragState;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __DragEventsProcessor__DragState;
}
namespace UnityEngine::UIElements {
class DragEventsProcessor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__DragEventsProcessor__DragState);
MARK_REF_PTR_T(::UnityEngine::UIElements::DragEventsProcessor);
// Type: ::DragState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::DragEventsProcessor::DragState
struct CORDL_TYPE __DragEventsProcessor__DragState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DragEventsProcessor__DragState_Unwrapped
  enum struct ____DragEventsProcessor__DragState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CanStartDrag = static_cast<int32_t>(0x1),
    __E_Dragging = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DragEventsProcessor__DragState_Unwrapped() const noexcept {
    return static_cast<____DragEventsProcessor__DragState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DragEventsProcessor__DragState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DragEventsProcessor__DragState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CanStartDrag value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DragEventsProcessor__DragState const CanStartDrag;

  /// @brief Field Dragging value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__DragEventsProcessor__DragState const Dragging;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DragEventsProcessor__DragState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5717 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DragEventsProcessor__DragState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DragEventsProcessor__DragState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DragEventsProcessor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DragEventsProcessor*
class CORDL_TYPE DragEventsProcessor : public ::System::Object {
public:
  // Declarations
  using DragState = ::UnityEngine::UIElements::__DragEventsProcessor__DragState;

  __declspec(property(get = get_dragAndDrop)) ::UnityEngine::UIElements::IDragAndDrop* dragAndDrop;

  __declspec(property(get = get_isEditorContext)) bool isEditorContext;

  /// @brief Field m_DragState, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragState, put = __cordl_internal_set_m_DragState)) ::UnityEngine::UIElements::__DragEventsProcessor__DragState m_DragState;

  /// @brief Field m_IsRegistered, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsRegistered, put = __cordl_internal_set_m_IsRegistered)) bool m_IsRegistered;

  /// @brief Field m_Start, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start)) ::UnityEngine::Vector3 m_Start;

  /// @brief Field m_Target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityEngine::UIElements::VisualElement* m_Target;

  __declspec(property(get = get_supportsDragEvents)) bool supportsDragEvents;

  __declspec(property(get = get_useDragEvents)) bool useDragEvents;

  /// @brief Method CanStartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method ClearDragAndDropUI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearDragAndDropUI(bool dragCancelled);

  /// @brief Method GetDropTarget, addr 0x49b2c90, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragEventsProcessor* GetDropTarget(::UnityEngine::Vector2 position);

  static inline ::UnityEngine::UIElements::DragEventsProcessor* New_ctor(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method OnDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method OnPointerCancelEvent, addr 0x49b2d88, size 0x130, virtual false, abstract: false, final false
  inline void OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCapturedOut, addr 0x49b2eb8, size 0x10c, virtual false, abstract: false, final false
  inline void OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x49b2a04, size 0xe8, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerLeaveEvent, addr 0x49b2d78, size 0x10, virtual false, abstract: false, final false
  inline void OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x49b2fc4, size 0x3a8, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUpEvent, addr 0x49b2aec, size 0x1a4, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method RegisterCallbacksFromTarget, addr 0x49b22fc, size 0x300, virtual false, abstract: false, final false
  inline void RegisterCallbacksFromTarget();

  /// @brief Method RegisterCallbacksFromTarget, addr 0x49b25fc, size 0x4, virtual false, abstract: false, final false
  inline void RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method StartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x49b2600, size 0x8, virtual false, abstract: false, final false
  inline void UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x49b2608, size 0x3fc, virtual false, abstract: false, final false
  inline void UnregisterCallbacksFromTarget(bool unregisterPanelEvents);

  /// @brief Method UpdateDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState const& __cordl_internal_get_m_DragState() const;

  constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState& __cordl_internal_get_m_DragState();

  constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

  constexpr bool& __cordl_internal_get_m_IsRegistered();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Start() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Start();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Target() const;

  constexpr void __cordl_internal_set_m_DragState(::UnityEngine::UIElements::__DragEventsProcessor__DragState value);

  constexpr void __cordl_internal_set_m_IsRegistered(bool value);

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x49b21c8, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method get_dragAndDrop, addr 0x49b2088, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop();

  /// @brief Method get_isEditorContext, addr 0x49b20a8, size 0x120, virtual true, abstract: false, final false
  inline bool get_isEditorContext();

  /// @brief Method get_supportsDragEvents, addr 0x49b2048, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsDragEvents();

  /// @brief Method get_useDragEvents, addr 0x49b2050, size 0x38, virtual false, abstract: false, final false
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

  /// @brief Field m_IsRegistered, offset: 0x10, size: 0x1, def value: None
  bool ___m_IsRegistered;

  /// @brief Field m_DragState, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::__DragEventsProcessor__DragState ___m_DragState;

  /// @brief Field m_Start, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Start;

  /// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Target;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragEventsProcessor, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_IsRegistered) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_DragState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Target) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DragEventsProcessor__DragState, "UnityEngine.UIElements", "DragEventsProcessor/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::DragEventsProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragEventsProcessor*, "UnityEngine.UIElements", "DragEventsProcessor");
