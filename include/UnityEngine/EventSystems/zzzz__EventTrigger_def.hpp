#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventTrigger)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class __EventTrigger__Entry;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class __EventTrigger__TriggerEvent;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
namespace UnityEngine::EventSystems {
class IDropHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventTrigger;
}
namespace UnityEngine::EventSystems {
class __EventTrigger__Entry;
}
namespace UnityEngine::EventSystems {
class __EventTrigger__TriggerEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::EventTrigger);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__EventTrigger__Entry);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__EventTrigger__TriggerEvent);
// Type: ::TriggerEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 5235 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13165))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13192)) CS Name: ::EventTrigger::TriggerEvent*
class CORDL_TYPE __EventTrigger__TriggerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::BaseEventData*> {
public:
  // Declarations
  static inline ::UnityEngine::EventSystems::__EventTrigger__TriggerEvent* New_ctor();

  /// @brief Method .ctor addr 0x2d98904 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EventTrigger__TriggerEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventTrigger__TriggerEvent(__EventTrigger__TriggerEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventTrigger__TriggerEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventTrigger__TriggerEvent(__EventTrigger__TriggerEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrigger__TriggerEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__EventTrigger__TriggerEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::Entry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13195)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13193))
// CS Name: ::EventTrigger::Entry*
class CORDL_TYPE __EventTrigger__Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventID, offset 0x10, size 0x4
  __declspec(property(get = __get_eventID, put = __set_eventID))::UnityEngine::EventSystems::EventTriggerType eventID;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::UnityEngine::EventSystems::__EventTrigger__TriggerEvent* callback;

  constexpr ::UnityEngine::EventSystems::EventTriggerType& __get_eventID();

  constexpr ::UnityEngine::EventSystems::EventTriggerType const& __get_eventID() const;

  constexpr void __set_eventID(::UnityEngine::EventSystems::EventTriggerType value);

  constexpr ::UnityEngine::EventSystems::__EventTrigger__TriggerEvent*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__EventTrigger__TriggerEvent*> const& __get_callback() const;

  constexpr void __set_callback(::UnityEngine::EventSystems::__EventTrigger__TriggerEvent* value);

  static inline ::UnityEngine::EventSystems::__EventTrigger__Entry* New_ctor();

  /// @brief Method .ctor addr 0x2d9894c size 0x6c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EventTrigger__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventTrigger__Entry(__EventTrigger__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventTrigger__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventTrigger__Entry(__EventTrigger__Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrigger__Entry();

public:
  /// @brief Field eventID, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::EventTriggerType ___eventID;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__EventTrigger__TriggerEvent* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__EventTrigger__Entry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::EventTrigger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13194))
// CS Name: ::UnityEngine.EventSystems::EventTrigger*
class CORDL_TYPE EventTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Entry = ::UnityEngine::EventSystems::__EventTrigger__Entry;

  using TriggerEvent = ::UnityEngine::EventSystems::__EventTrigger__TriggerEvent;

  /// @brief Field m_Delegates, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Delegates, put = __set_m_Delegates))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* m_Delegates;

  __declspec(property(get = get_delegates, put = set_delegates))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* delegates;

  __declspec(property(get = get_triggers, put = set_triggers))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* triggers;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDropHandler"
  constexpr operator ::UnityEngine::EventSystems::IDropHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>*& __get_m_Delegates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>*> const& __get_m_Delegates() const;

  constexpr void __set_m_Delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* value);

  /// @brief Method get_delegates addr 0x2d986b0 size 0x4 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* get_delegates();

  /// @brief Method set_delegates addr 0x2d98734 size 0x8 virtual false final false
  inline void set_delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* value);

  static inline ::UnityEngine::EventSystems::EventTrigger* New_ctor();

  /// @brief Method .ctor addr 0x2d9873c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_triggers addr 0x2d986b4 size 0x80 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* get_triggers();

  /// @brief Method set_triggers addr 0x2d98744 size 0x8 virtual false final false
  inline void set_triggers(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* value);

  /// @brief Method Execute addr 0x2d9874c size 0xec virtual false final false
  inline void Execute(::UnityEngine::EventSystems::EventTriggerType id, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerEnter addr 0x2d98838 size 0xc virtual true final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit addr 0x2d98844 size 0xc virtual true final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag addr 0x2d98850 size 0xc virtual true final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrop addr 0x2d9885c size 0xc virtual true final false
  inline void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown addr 0x2d98868 size 0xc virtual true final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp addr 0x2d98874 size 0xc virtual true final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerClick addr 0x2d98880 size 0xc virtual true final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect addr 0x2d9888c size 0xc virtual true final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDeselect addr 0x2d98898 size 0xc virtual true final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnScroll addr 0x2d988a4 size 0xc virtual true final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnMove addr 0x2d988b0 size 0xc virtual true final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnUpdateSelected addr 0x2d988bc size 0xc virtual true final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnInitializePotentialDrag addr 0x2d988c8 size 0xc virtual true final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag addr 0x2d988d4 size 0xc virtual true final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndDrag addr 0x2d988e0 size 0xc virtual true final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit addr 0x2d988ec size 0xc virtual true final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnCancel addr 0x2d988f8 size 0xc virtual true final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrigger(EventTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrigger(EventTrigger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrigger();

public:
  /// @brief Field m_Delegates, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__EventTrigger__Entry*>* ___m_Delegates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTrigger, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger*, "UnityEngine.EventSystems", "EventTrigger");
NEED_NO_BOX(::UnityEngine::EventSystems::__EventTrigger__Entry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__EventTrigger__Entry*, "UnityEngine.EventSystems", "EventTrigger/Entry");
NEED_NO_BOX(::UnityEngine::EventSystems::__EventTrigger__TriggerEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__EventTrigger__TriggerEvent*, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");
