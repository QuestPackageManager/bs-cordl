#pragma once
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TouchScreenTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(
    ::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3ab1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.PollTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2e3ab24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                                 "PollTouchScreenKeyboard", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.DoPollTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2e3ad80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                                 "DoPollTouchScreenKeyboard", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.ExecuteDefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2e3b4a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_TouchKeyboardPoller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardPoller;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const&
UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_TouchKeyboardPoller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardPoller;
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TouchKeyboardPoller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_LastPointerDownTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerDownTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_LastPointerDownTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerDownTarget;
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_LastPointerDownTarget(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastPointerDownTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::setStaticF_s_KeyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TouchScreenKeyboard*, "s_KeyboardOnScreen",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get>(
      std::forward<::UnityEngine::TouchScreenKeyboard*>(value));
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::getStaticF_s_KeyboardOnScreen() {
  return ::cordl_internals::getStaticField<::UnityEngine::TouchScreenKeyboard*, "s_KeyboardOnScreen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get>();
}
inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine,
                                                                                                                                          ::UnityEngine::UIElements::ITextInputField* textInputField) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(editorEngine, textInputField));
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, editorEngine, textInputField);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(), "PollTouchScreenKeyboard",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                               "DoPollTouchScreenKeyboard", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(), "ExecuteDefaultActionAtTarget", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::TouchScreenTextEditorEventHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
