#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultDragAndDropClient_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerLeaveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState::__DragEventsProcessor__DragState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState::__DragEventsProcessor__DragState() {}
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState UnityEngine::UIElements::__DragEventsProcessor__DragState::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState UnityEngine::UIElements::__DragEventsProcessor__DragState::CanStartDrag{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState UnityEngine::UIElements::__DragEventsProcessor__DragState::Dragging{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_supportsDragEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0d2f8;

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
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e0b5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "get_useDragEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.get_isEditorContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e0d300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "get_isEditorContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2e09a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e0d6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "RegisterCallbacksFromTarget", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.RegisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2e0d420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                               "RegisterCallbacksFromTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0d6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(bool)>(
    &::UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2e0d6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.CanStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::CanStartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.StartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::StartDragArgs* (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::DragEventsProcessor::StartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.UpdateDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::DragEventsProcessor::UpdateDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.ClearDragAndDropUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)()>(
    &::UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerDownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e0da70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerDownEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerUpEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e0db04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerUpEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerLeaveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerLeaveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e0dbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerLeaveEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerLeaveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerCancelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e0dc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCancelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragEventsProcessor.OnPointerMoveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DragEventsProcessor::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2e0dc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerMoveEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::DragEventsProcessor::__get_m_IsRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::UIElements::DragEventsProcessor::__get_m_IsRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__set_m_IsRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsRegistered = value;
}
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState& UnityEngine::UIElements::DragEventsProcessor::__get_m_DragState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr ::UnityEngine::UIElements::__DragEventsProcessor__DragState const& UnityEngine::UIElements::DragEventsProcessor::__get_m_DragState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__set_m_DragState(::UnityEngine::UIElements::__DragEventsProcessor__DragState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragState = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::DragEventsProcessor::__get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::DragEventsProcessor::__get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__set_m_Start(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Start = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::DragEventsProcessor::__get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::DragEventsProcessor::__get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__set_m_Target(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DefaultDragAndDropClient*& UnityEngine::UIElements::DragEventsProcessor::__get_dragAndDropClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragAndDropClient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DefaultDragAndDropClient*> const& UnityEngine::UIElements::DragEventsProcessor::__get_dragAndDropClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragAndDropClient;
}
constexpr void UnityEngine::UIElements::DragEventsProcessor::__set_dragAndDropClient(::UnityEngine::UIElements::DefaultDragAndDropClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dragAndDropClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_supportsDragEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "get_supportsDragEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_useDragEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "get_useDragEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::get_isEditorContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "get_isEditorContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DragEventsProcessor* UnityEngine::UIElements::DragEventsProcessor::New_ctor(::UnityEngine::UIElements::VisualElement* target) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DragEventsProcessor*>(target));
}
inline void UnityEngine::UIElements::DragEventsProcessor::_ctor(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "RegisterCallbacksFromTarget", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::RegisterCallbacksFromTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "RegisterCallbacksFromTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
/// @param unregisterPanelEvents: bool (default: false)
inline void UnityEngine::UIElements::DragEventsProcessor::UnregisterCallbacksFromTarget(bool unregisterPanelEvents) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UnregisterCallbacksFromTarget",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unregisterPanelEvents);
}
inline bool UnityEngine::UIElements::DragEventsProcessor::CanStartDrag(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "CanStartDrag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs* UnityEngine::UIElements::DragEventsProcessor::StartDrag(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "StartDrag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs*, false>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::DragEventsProcessor::UpdateDrag(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "UpdateDrag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnDrop(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnDrop", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DragEventsProcessor::ClearDragAndDropUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(),
                                                                             "ClearDragAndDropUI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerDownEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerUpEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerLeaveEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerLeaveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerCancelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DragEventsProcessor::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragEventsProcessor*>::get(), "OnPointerMoveEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragEventsProcessor::DragEventsProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
