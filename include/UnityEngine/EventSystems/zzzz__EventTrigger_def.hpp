#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventTrigger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDropHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventTrigger)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
namespace UnityEngine::EventSystems {
class EventTrigger_Entry;
}
namespace UnityEngine::EventSystems {
class EventTrigger_TriggerEvent;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventTrigger;
}
namespace UnityEngine::EventSystems {
class EventTrigger_Entry;
}
namespace UnityEngine::EventSystems {
class EventTrigger_TriggerEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::EventTrigger);
MARK_REF_PTR_T(::UnityEngine::EventSystems::EventTrigger_Entry);
MARK_REF_PTR_T(::UnityEngine::EventSystems::EventTrigger_TriggerEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.EventTrigger/TriggerEvent
class CORDL_TYPE EventTrigger_TriggerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::BaseEventData*> {
public:
  // Declarations
  static inline ::UnityEngine::EventSystems::EventTrigger_TriggerEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4ae6b44, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrigger_TriggerEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger_TriggerEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrigger_TriggerEvent(EventTrigger_TriggerEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger_TriggerEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrigger_TriggerEvent(EventTrigger_TriggerEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15207 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTrigger_TriggerEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies System.Object, UnityEngine.EventSystems.EventTriggerType
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.EventTrigger/Entry
class CORDL_TYPE EventTrigger_Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::UnityEngine::EventSystems::EventTrigger_TriggerEvent* callback;

  /// @brief Field eventID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eventID, put = __cordl_internal_set_eventID)) ::UnityEngine::EventSystems::EventTriggerType eventID;

  static inline ::UnityEngine::EventSystems::EventTrigger_Entry* New_ctor();

  constexpr ::UnityEngine::EventSystems::EventTrigger_TriggerEvent* const& __cordl_internal_get_callback() const;

  constexpr ::UnityEngine::EventSystems::EventTrigger_TriggerEvent*& __cordl_internal_get_callback();

  constexpr ::UnityEngine::EventSystems::EventTriggerType const& __cordl_internal_get_eventID() const;

  constexpr ::UnityEngine::EventSystems::EventTriggerType& __cordl_internal_get_eventID();

  constexpr void __cordl_internal_set_callback(::UnityEngine::EventSystems::EventTrigger_TriggerEvent* value);

  constexpr void __cordl_internal_set_eventID(::UnityEngine::EventSystems::EventTriggerType value);

  /// @brief Method .ctor, addr 0x4ae6b8c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrigger_Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger_Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrigger_Entry(EventTrigger_Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger_Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrigger_Entry(EventTrigger_Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15208 };

  /// @brief Field eventID, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::EventTriggerType ___eventID;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventTrigger_TriggerEvent* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventTrigger_Entry, ___eventID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventTrigger_Entry, ___callback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTrigger_Entry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.IBeginDragHandler, UnityEngine.EventSystems.ICancelHandler, UnityEngine.EventSystems.IDeselectHandler, UnityEngine.EventSystems.IDragHandler,
// UnityEngine.EventSystems.IDropHandler, UnityEngine.EventSystems.IEndDragHandler, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IInitializePotentialDragHandler,
// UnityEngine.EventSystems.IMoveHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.IPointerDownHandler, UnityEngine.EventSystems.IPointerEnterHandler,
// UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.EventSystems.IPointerUpHandler, UnityEngine.EventSystems.IScrollHandler, UnityEngine.EventSystems.ISelectHandler,
// UnityEngine.EventSystems.ISubmitHandler, UnityEngine.EventSystems.IUpdateSelectedHandler, UnityEngine.MonoBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.EventTrigger
class CORDL_TYPE EventTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Entry = ::UnityEngine::EventSystems::EventTrigger_Entry;

  using TriggerEvent = ::UnityEngine::EventSystems::EventTrigger_TriggerEvent;

  __declspec(property(get = get_delegates, put = set_delegates)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* delegates;

  /// @brief Field m_Delegates, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delegates,
                      put = __cordl_internal_set_m_Delegates)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* m_Delegates;

  __declspec(property(get = get_triggers, put = set_triggers)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* triggers;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDropHandler"
  constexpr operator ::UnityEngine::EventSystems::IDropHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

  /// @brief Method Execute, addr 0x4ae6994, size 0xe4, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::EventSystems::EventTriggerType id, ::UnityEngine::EventSystems::BaseEventData* eventData);

  static inline ::UnityEngine::EventSystems::EventTrigger* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x4ae6b14, size 0xc, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnCancel, addr 0x4ae6b38, size 0xc, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDeselect, addr 0x4ae6ad8, size 0xc, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDrag, addr 0x4ae6a90, size 0xc, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrop, addr 0x4ae6a9c, size 0xc, virtual true, abstract: false, final false
  inline void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndDrag, addr 0x4ae6b20, size 0xc, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x4ae6b08, size 0xc, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnMove, addr 0x4ae6af0, size 0xc, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnPointerClick, addr 0x4ae6ac0, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x4ae6aa8, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x4ae6a78, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x4ae6a84, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x4ae6ab4, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScroll, addr 0x4ae6ae4, size 0xc, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x4ae6acc, size 0xc, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x4ae6b2c, size 0xc, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnUpdateSelected, addr 0x4ae6afc, size 0xc, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* const& __cordl_internal_get_m_Delegates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*& __cordl_internal_get_m_Delegates();

  constexpr void __cordl_internal_set_m_Delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* value);

  /// @brief Method .ctor, addr 0x4ae6984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_delegates, addr 0x4ae6900, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* get_delegates();

  /// @brief Method get_triggers, addr 0x4ae6904, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* get_triggers();

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDropHandler"
  constexpr ::UnityEngine::EventSystems::IDropHandler* i___UnityEngine__EventSystems__IDropHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept;

  /// @brief Method set_delegates, addr 0x4ae697c, size 0x8, virtual false, abstract: false, final false
  inline void set_delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* value);

  /// @brief Method set_triggers, addr 0x4ae698c, size 0x8, virtual false, abstract: false, final false
  inline void set_triggers(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrigger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrigger(EventTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrigger(EventTrigger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15209 };

  /// @brief Field m_Delegates, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* ___m_Delegates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventTrigger, ___m_Delegates) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTrigger, 0x28>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger*, "UnityEngine.EventSystems", "EventTrigger");
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger_Entry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger_Entry*, "UnityEngine.EventSystems", "EventTrigger/Entry");
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger_TriggerEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger_TriggerEvent*, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");
