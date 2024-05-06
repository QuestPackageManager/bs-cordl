#pragma once
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__ValidateCommandEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.get_isClicking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::get_isClicking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3573444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "get_isClicking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.set_isClicking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(bool)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::set_isClicking)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x357344c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "set_isClicking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(
    ::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3573480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.ExecuteDefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x3573500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3573abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnFocus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnBlur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::BlurEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3573c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnBlur", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseDown)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x3573c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseUpEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseUp)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x357404c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseMoveEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseMove)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x35741b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.ProcessDragMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseMoveEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ProcessDragMove)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3575284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "ProcessDragMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.MoveDistanceQualifiesForDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::MoveDistanceQualifiesForDrag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3575260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(),
                                                 "MoveDistanceQualifiesForDrag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnKeyDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x35742fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnKeyDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnValidateCommandEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(
    ::UnityEngine::UIElements::ValidateCommandEvent*)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x3574904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnValidateCommandEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ValidateCommandEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnExecuteCommandEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::ExecuteCommandEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x3574c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnExecuteCommandEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ExecuteCommandEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.PreDrawCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::StringW)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PreDrawCursor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x35753b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "PreDrawCursor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.PostDrawCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PostDrawCursor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35756f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "PostDrawCursor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changed;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changed;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_Changed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Changed = value;
}
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Dragged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragged;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Dragged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragged;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_Dragged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dragged = value;
}
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_DragToPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragToPosition;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_DragToPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragToPosition;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_DragToPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragToPosition = value;
}
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_SelectAllOnMouseUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnMouseUp;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_SelectAllOnMouseUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnMouseUp;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_SelectAllOnMouseUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectAllOnMouseUp = value;
}
constexpr ::StringW& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_PreDrawCursorText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreDrawCursorText;
}
constexpr ::StringW const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_PreDrawCursorText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreDrawCursorText;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_PreDrawCursorText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreDrawCursorText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_IsClicking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_IsClicking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_IsClicking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsClicking = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ClickStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ClickStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickStartPosition;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_ClickStartPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClickStartPosition = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ImguiEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ImguiEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ImguiEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::UIElements::KeyboardTextEditorEventHandler::get_isClicking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(),
                                                                             "get_isClicking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::set_isClicking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "set_isClicking",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::KeyboardTextEditorEventHandler* UnityEngine::UIElements::KeyboardTextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine,
                                                                                                                                    ::UnityEngine::UIElements::ITextInputField* textInputField) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(editorEngine, textInputField));
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, editorEngine, textInputField);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus(::UnityEngine::UIElements::FocusEvent* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnFocus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur(::UnityEngine::UIElements::BlurEvent* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnBlur", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnMouseMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::ProcessDragMove(::UnityEngine::UIElements::MouseMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "ProcessDragMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::KeyboardTextEditorEventHandler::MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(),
                                               "MoveDistanceQualifiesForDrag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start, current);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnKeyDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnValidateCommandEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ValidateCommandEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "OnExecuteCommandEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ExecuteCommandEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::PreDrawCursor(::StringW newText) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(), "PreDrawCursor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newText);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::PostDrawCursor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>::get(),
                                                                             "PostDrawCursor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::KeyboardTextEditorEventHandler() {}
