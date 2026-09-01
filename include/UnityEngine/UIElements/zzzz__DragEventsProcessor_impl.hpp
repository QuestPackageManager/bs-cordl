#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DragEventsProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerLeaveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState::DragEventsProcessor_DragState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState::DragEventsProcessor_DragState() {}
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState UnityEngine::UIElements::DragEventsProcessor_DragState::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState UnityEngine::UIElements::DragEventsProcessor_DragState::CanStartDrag{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState UnityEngine::UIElements::DragEventsProcessor_DragState::Dragging{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_supportsDragEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(&::UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d8a6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_useDragEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(&::UnityEngine::UIElements::DragEventsProcessor::get_useDragEvents)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d8a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "get_useDragEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_dragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_dragAndDrop)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d8a714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "get_dragAndDrop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_isEditorContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(&::UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6d8a72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6d8a84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d8acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                             { "RegisterCallbacksFromTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)()>(&::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6d8a98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "RegisterCallbacksFromTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d8acd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                             { "UnregisterCallbacksFromTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(bool)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x6d8ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "UnregisterCallbacksFromTarget", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.CanStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::CanStartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.StartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::StartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::DragEventsProcessor::UpdateDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::DragEventsProcessor::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.ClearDragAndDropUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(bool)>(&::UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d8b130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6d8b1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerLeaveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerLeaveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d8b484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerLeaveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerLeaveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6d8b494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerCapturedOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerCapturedOut)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d8b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerCapturedOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6d8b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                           { "OnPointerMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.GetDropTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragEventsProcessor* (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::DragEventsProcessor::GetDropTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d8b398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "GetDropTarget", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_IsRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_IsRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_set_m_IsRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsRegistered = value;
}
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_DragState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr ::UnityEngine::UIElements::DragEventsProcessor_DragState const& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_DragState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_set_m_DragState(::UnityEngine::UIElements::DragEventsProcessor_DragState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragState = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_set_m_Start(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Start = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Target = value;
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_useDragEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "get_useDragEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragEventsProcessor::get_dragAndDrop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "get_dragAndDrop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDrop*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::_ctor(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "RegisterCallbacksFromTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "RegisterCallbacksFromTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                           { "UnregisterCallbacksFromTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(bool unregisterPanelEvents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "UnregisterCallbacksFromTarget", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unregisterPanelEvents);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::CanStartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::DragEventsProcessor::StartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UpdateDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnDrop(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI(bool dragCancelled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragCancelled);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerLeaveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerLeaveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerCapturedOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(),
                                                                                         { "OnPointerMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::DragEventsProcessor* UnityEngine::UIElements::DragEventsProcessor::GetDropTarget(::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragEventsProcessor*>(), { "GetDropTarget", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragEventsProcessor*>(this, ___internal_method, position);
}
inline ::UnityEngine::UIElements::DragEventsProcessor* UnityEngine::UIElements::DragEventsProcessor::New_ctor(::UnityEngine::UIElements::VisualElement* target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DragEventsProcessor*>(target));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragEventsProcessor::DragEventsProcessor() {}
