#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/ExecuteEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExecuteEvents)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
template <typename T1> class ExecuteEvents_EventFunction_1;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IDropHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class ExecuteEvents;
}
namespace UnityEngine::EventSystems {
template <typename T1> class ExecuteEvents_EventFunction_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::ExecuteEvents);
MARK_GEN_REF_PTR_T(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1);
// Dependencies System.MulticastDelegate
namespace UnityEngine::EventSystems {
// cpp template
template <typename T1>
// Is value type: false
// CS Name: UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T1>
class CORDL_TYPE ExecuteEvents_EventFunction_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteEvents_EventFunction_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents_EventFunction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteEvents_EventFunction_1(ExecuteEvents_EventFunction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents_EventFunction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteEvents_EventFunction_1(ExecuteEvents_EventFunction_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.ExecuteEvents
class CORDL_TYPE ExecuteEvents : public ::System::Object {
public:
  // Declarations
  template <typename T1> using EventFunction_1 = ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>;

  /// @brief Field s_BeginDragHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BeginDragHandler,
                      put = setStaticF_s_BeginDragHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* s_BeginDragHandler;

  /// @brief Field s_CancelHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CancelHandler,
                      put = setStaticF_s_CancelHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* s_CancelHandler;

  /// @brief Field s_DeselectHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DeselectHandler,
                      put = setStaticF_s_DeselectHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* s_DeselectHandler;

  /// @brief Field s_DragHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DragHandler,
                      put = setStaticF_s_DragHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* s_DragHandler;

  /// @brief Field s_DropHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DropHandler,
                      put = setStaticF_s_DropHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* s_DropHandler;

  /// @brief Field s_EndDragHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EndDragHandler,
                      put = setStaticF_s_EndDragHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* s_EndDragHandler;

  /// @brief Field s_InitializePotentialDragHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InitializePotentialDragHandler,
                      put = setStaticF_s_InitializePotentialDragHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*
      s_InitializePotentialDragHandler;

  /// @brief Field s_InternalTransformList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalTransformList,
                      put = setStaticF_s_InternalTransformList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* s_InternalTransformList;

  /// @brief Field s_MoveHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MoveHandler,
                      put = setStaticF_s_MoveHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* s_MoveHandler;

  /// @brief Field s_PointerClickHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerClickHandler,
                      put = setStaticF_s_PointerClickHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* s_PointerClickHandler;

  /// @brief Field s_PointerDownHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerDownHandler,
                      put = setStaticF_s_PointerDownHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* s_PointerDownHandler;

  /// @brief Field s_PointerEnterHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerEnterHandler,
                      put = setStaticF_s_PointerEnterHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* s_PointerEnterHandler;

  /// @brief Field s_PointerExitHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerExitHandler,
                      put = setStaticF_s_PointerExitHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* s_PointerExitHandler;

  /// @brief Field s_PointerMoveHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerMoveHandler,
                      put = setStaticF_s_PointerMoveHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* s_PointerMoveHandler;

  /// @brief Field s_PointerUpHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PointerUpHandler,
                      put = setStaticF_s_PointerUpHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* s_PointerUpHandler;

  /// @brief Field s_ScrollHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ScrollHandler,
                      put = setStaticF_s_ScrollHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* s_ScrollHandler;

  /// @brief Field s_SelectHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SelectHandler,
                      put = setStaticF_s_SelectHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* s_SelectHandler;

  /// @brief Field s_SubmitHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SubmitHandler,
                      put = setStaticF_s_SubmitHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* s_SubmitHandler;

  /// @brief Field s_UpdateSelectedHandler, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_UpdateSelectedHandler,
      put = setStaticF_s_UpdateSelectedHandler)) ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* s_UpdateSelectedHandler;

  /// @brief Method CanHandleEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool CanHandleEvent(::UnityEngine::GameObject* go);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool Execute(::UnityEngine::GameObject* target, ::UnityEngine::EventSystems::BaseEventData* eventData, ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* functor);

  /// @brief Method Execute, addr 0x6be74ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IBeginDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be7d6c, size 0xb0, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::ICancelHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be7b0c, size 0xb0, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IDeselectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be75ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be77ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IDropHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be76ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IEndDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be73ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be7bbc, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be72ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerClickHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be70ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerDownHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be6eac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerEnterHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be6fac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerExitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be6dac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be71ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IPointerUpHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be78ac, size 0x100, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IScrollHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be7a5c, size 0xb0, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::ISelectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be7cbc, size 0xb0, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::ISubmitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Execute, addr 0x6be79ac, size 0xb0, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method ExecuteHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityW<::UnityEngine::GameObject> ExecuteHierarchy(::UnityEngine::GameObject* root, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                                     ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* callbackFunction);

  /// @brief Method GetEventChain, addr 0x6be8494, size 0x198, virtual false, abstract: false, final false
  static inline void GetEventChain(::UnityEngine::GameObject* root, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>* eventChain);

  /// @brief Method GetEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::GameObject> GetEventHandler(::UnityEngine::GameObject* root);

  /// @brief Method GetEventList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetEventList(::UnityEngine::GameObject* go, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler*>* results);

  /// @brief Method ShouldSendToComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldSendToComponent(::UnityEngine::Component* component);

  /// @brief Method ValidateEventData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ValidateEventData(::UnityEngine::EventSystems::BaseEventData* data);

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* getStaticF_s_BeginDragHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* getStaticF_s_CancelHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* getStaticF_s_DeselectHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* getStaticF_s_DragHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* getStaticF_s_DropHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* getStaticF_s_EndDragHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* getStaticF_s_InitializePotentialDragHandler();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_InternalTransformList();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* getStaticF_s_MoveHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* getStaticF_s_PointerClickHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* getStaticF_s_PointerDownHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* getStaticF_s_PointerEnterHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* getStaticF_s_PointerExitHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* getStaticF_s_PointerMoveHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* getStaticF_s_PointerUpHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* getStaticF_s_ScrollHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* getStaticF_s_SelectHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* getStaticF_s_SubmitHandler();

  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* getStaticF_s_UpdateSelectedHandler();

  /// @brief Method get_beginDragHandler, addr 0x6be80a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* get_beginDragHandler();

  /// @brief Method get_cancelHandler, addr 0x6be8438, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* get_cancelHandler();

  /// @brief Method get_deselectHandler, addr 0x6be8324, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* get_deselectHandler();

  /// @brief Method get_dragHandler, addr 0x6be80fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* get_dragHandler();

  /// @brief Method get_dropHandler, addr 0x6be81b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* get_dropHandler();

  /// @brief Method get_endDragHandler, addr 0x6be8158, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* get_endDragHandler();

  /// @brief Method get_initializePotentialDrag, addr 0x6be8044, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* get_initializePotentialDrag();

  /// @brief Method get_moveHandler, addr 0x6be8380, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* get_moveHandler();

  /// @brief Method get_pointerClickHandler, addr 0x6be7fe8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* get_pointerClickHandler();

  /// @brief Method get_pointerDownHandler, addr 0x6be7f30, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* get_pointerDownHandler();

  /// @brief Method get_pointerEnterHandler, addr 0x6be7e78, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* get_pointerEnterHandler();

  /// @brief Method get_pointerExitHandler, addr 0x6be7ed4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* get_pointerExitHandler();

  /// @brief Method get_pointerMoveHandler, addr 0x6be7e1c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* get_pointerMoveHandler();

  /// @brief Method get_pointerUpHandler, addr 0x6be7f8c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* get_pointerUpHandler();

  /// @brief Method get_scrollHandler, addr 0x6be8210, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* get_scrollHandler();

  /// @brief Method get_selectHandler, addr 0x6be82c8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* get_selectHandler();

  /// @brief Method get_submitHandler, addr 0x6be83dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* get_submitHandler();

  /// @brief Method get_updateSelectedHandler, addr 0x6be826c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* get_updateSelectedHandler();

  static inline void setStaticF_s_BeginDragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* value);

  static inline void setStaticF_s_CancelHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* value);

  static inline void setStaticF_s_DeselectHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* value);

  static inline void setStaticF_s_DragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* value);

  static inline void setStaticF_s_DropHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* value);

  static inline void setStaticF_s_EndDragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* value);

  static inline void setStaticF_s_InitializePotentialDragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* value);

  static inline void setStaticF_s_InternalTransformList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  static inline void setStaticF_s_MoveHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* value);

  static inline void setStaticF_s_PointerClickHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* value);

  static inline void setStaticF_s_PointerDownHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* value);

  static inline void setStaticF_s_PointerEnterHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* value);

  static inline void setStaticF_s_PointerExitHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* value);

  static inline void setStaticF_s_PointerMoveHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* value);

  static inline void setStaticF_s_PointerUpHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* value);

  static inline void setStaticF_s_ScrollHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* value);

  static inline void setStaticF_s_SelectHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* value);

  static inline void setStaticF_s_SubmitHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* value);

  static inline void setStaticF_s_UpdateSelectedHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteEvents(ExecuteEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteEvents(ExecuteEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::ExecuteEvents, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::ExecuteEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::ExecuteEvents*, "UnityEngine.EventSystems", "ExecuteEvents");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1, "UnityEngine.EventSystems", "ExecuteEvents/EventFunction`1");
