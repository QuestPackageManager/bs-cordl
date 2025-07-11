#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a190a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_useDragEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_useDragEvents)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a190ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "get_useDragEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_dragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_dragAndDrop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a190e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "get_dragAndDrop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_isEditorContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4a19104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4a19224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a19658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "RegisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x4a19358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "RegisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a1965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(bool)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x4a19664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.CanStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::CanStartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.StartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::StartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UpdateDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UpdateDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.ClearDragAndDropUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(bool)>(
    &::UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerDownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a19a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerDownEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerUpEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4a19b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerUpEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerLeaveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerLeaveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a19dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerLeaveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerLeaveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerCancelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4a19de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCancelEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerCapturedOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerCapturedOut)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4a19f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCapturedOut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureOutEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerMoveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x4a1a020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerMoveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.GetDropTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragEventsProcessor* (
    ::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::DragEventsProcessor::GetDropTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a19cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "GetDropTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_useDragEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "get_useDragEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragEventsProcessor::get_dragAndDrop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "get_dragAndDrop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDrop*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::_ctor(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "RegisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "RegisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(bool unregisterPanelEvents) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unregisterPanelEvents);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::CanStartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::DragEventsProcessor::StartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UpdateDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnDrop(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI(bool dragCancelled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragCancelled);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerDownEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerUpEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerLeaveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerLeaveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCancelEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCapturedOut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureOutEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerMoveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::DragEventsProcessor* UnityEngine::UIElements::DragEventsProcessor::GetDropTarget(::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "GetDropTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragEventsProcessor*, false>(this, ___internal_method, position);
}
inline ::UnityEngine::UIElements::DragEventsProcessor* UnityEngine::UIElements::DragEventsProcessor::New_ctor(::UnityEngine::UIElements::VisualElement* target) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DragEventsProcessor*>(target));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragEventsProcessor::DragEventsProcessor() {}
