#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\ExecuteEvents.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__ExecuteEvents_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ExecuteEvents_def.hpp"
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
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template <typename T1> inline void UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T1> inline void UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::Invoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, eventData);
}
template <typename T1>
inline ::System::IAsyncResult* UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::BeginInvoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, handler, eventData, callback, object);
}
template <typename T1> inline void UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T1>
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>* UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>*>(object, method));
}
// Ctor Parameters []
template <typename T1> constexpr ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T1>::ExecuteEvents_EventFunction_1() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerMoveHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerEnterHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerExitHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerDownHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerUpHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerClickHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                            { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1bbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IBeginDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1bcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1bdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IEndDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1bef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDropHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1bff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IScrollHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1c0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                            { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ISelectHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1c250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDeselectHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e1c300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IMoveHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1c400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ISubmitHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1c4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ICancelHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerMoveHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerMoveHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerMoveHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerEnterHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerEnterHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerEnterHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerExitHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerExitHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerExitHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerDownHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerDownHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerDownHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerUpHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerUpHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerUpHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerClickHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_pointerClickHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerClickHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_initializePotentialDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_initializePotentialDrag)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_initializePotentialDrag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_beginDragHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_beginDragHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_beginDragHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_dragHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_dragHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_dragHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_endDragHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_endDragHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_endDragHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_dropHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_dropHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_dropHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_scrollHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_scrollHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_scrollHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_updateSelectedHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_updateSelectedHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_updateSelectedHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_selectHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_selectHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1ca0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_selectHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_deselectHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_deselectHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1ca68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_deselectHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_moveHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_moveHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1cac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_moveHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_submitHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_submitHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1cb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_submitHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_cancelHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_cancelHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_cancelHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.GetEventChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::GetEventChain)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6e1cbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                         { "GetEventChain", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerMoveHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*, "s_PointerMoveHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerMoveHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*, "s_PointerMoveHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerEnterHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*, "s_PointerEnterHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerEnterHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*, "s_PointerEnterHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerExitHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*, "s_PointerExitHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerExitHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*, "s_PointerExitHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerDownHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*, "s_PointerDownHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerDownHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*, "s_PointerDownHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerUpHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*, "s_PointerUpHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerUpHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*, "s_PointerUpHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerClickHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*, "s_PointerClickHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerClickHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*, "s_PointerClickHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_InitializePotentialDragHandler(
    ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*, "s_InitializePotentialDragHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*
UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_InitializePotentialDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*,
                                           "s_InitializePotentialDragHandler", ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_BeginDragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*, "s_BeginDragHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_BeginDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*, "s_BeginDragHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*, "s_DragHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*, "s_DragHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_EndDragHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*, "s_EndDragHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_EndDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*, "s_EndDragHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DropHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*, "s_DropHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DropHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*, "s_DropHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_ScrollHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*, "s_ScrollHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_ScrollHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*, "s_ScrollHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_UpdateSelectedHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*, "s_UpdateSelectedHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*
UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_UpdateSelectedHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*, "s_UpdateSelectedHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_SelectHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*, "s_SelectHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_SelectHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*, "s_SelectHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DeselectHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*, "s_DeselectHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DeselectHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*, "s_DeselectHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_MoveHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*, "s_MoveHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_MoveHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*, "s_MoveHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_SubmitHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*, "s_SubmitHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_SubmitHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*, "s_SubmitHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_CancelHandler(::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*, "s_CancelHandler",
                                    ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_CancelHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*, "s_CancelHandler",
                                           ::UnityEngine::EventSystems::ExecuteEvents*>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_InternalTransformList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "s_InternalTransformList", ::UnityEngine::EventSystems::ExecuteEvents*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_InternalTransformList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "s_InternalTransformList", ::UnityEngine::EventSystems::ExecuteEvents*>();
}
template <typename T> inline T UnityEngine::EventSystems::ExecuteEvents::ValidateEventData(::UnityEngine::EventSystems::BaseEventData* data) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                           { "ValidateEventData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, data);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerMoveHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerEnterHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerEnterHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerExitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerExitHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerDownHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerDownHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerUpHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerUpHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerClickHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IPointerClickHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                          { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IBeginDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IBeginDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IEndDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IEndDragHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDropHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDropHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IScrollHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IScrollHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                       { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ISelectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ISelectHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDeselectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IDeselectHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::IMoveHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ISubmitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ISubmitHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ICancelHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                              { "Execute", {}, { ::i2c::type_of<::UnityEngine::EventSystems::ICancelHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, eventData);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerMoveHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerMoveHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerEnterHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerEnterHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerExitHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerExitHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerDownHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerDownHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerUpHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerUpHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerClickHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_pointerClickHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*
UnityEngine::EventSystems::ExecuteEvents::get_initializePotentialDrag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_initializePotentialDrag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_beginDragHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_beginDragHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_dragHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_dragHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_endDragHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_endDragHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_dropHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_dropHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_scrollHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_scrollHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_updateSelectedHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_updateSelectedHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_selectHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_selectHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_deselectHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_deselectHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_moveHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_moveHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_submitHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_submitHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_cancelHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(), { "get_cancelHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::ExecuteEvents::GetEventChain(::UnityEngine::GameObject* root, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>* eventChain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                          { "GetEventChain", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, root, eventChain);
}
template <typename T>
inline bool UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::GameObject* target, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                              ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* functor) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                           { "Execute",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>(),
                                                               ::i2c::type_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, eventData, functor);
}
template <typename T>
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::ExecuteEvents::ExecuteHierarchy(::UnityEngine::GameObject* root, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                                                                      ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* callbackFunction) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                           { "ExecuteHierarchy",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>(),
                                                               ::i2c::type_of<::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, root, eventData, callbackFunction);
}
template <typename T> inline bool UnityEngine::EventSystems::ExecuteEvents::ShouldSendToComponent(::UnityEngine::Component* component) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                                                              { "ShouldSendToComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component);
}
template <typename T>
inline void UnityEngine::EventSystems::ExecuteEvents::GetEventList(::UnityEngine::GameObject* go, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler*>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                          { "GetEventList",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, results);
}
template <typename T> inline bool UnityEngine::EventSystems::ExecuteEvents::CanHandleEvent(::UnityEngine::GameObject* go) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                                                              { "CanHandleEvent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go);
}
template <typename T> inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::ExecuteEvents::GetEventHandler(::UnityEngine::GameObject* root) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ExecuteEvents*>(),
                                                                                              { "GetEventHandler", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, root);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents() {}
