#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditorEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(
    ::UnityEngine::UIElements::TextElement*, ::UnityEngine::TextEditingUtilities*)>(&::UnityEngine::UIElements::TextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x49fa598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextEditorEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextEditingUtilities*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler.ExecuteDefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49fa874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextEditorEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextEditorEventHandler*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_textElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_textElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr void UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextEditingUtilities*& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_editingUtilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr ::UnityEngine::TextEditingUtilities* const& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_editingUtilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr void UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editingUtilities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextEditorEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextEditingUtilities*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textElement, editingUtilities);
}
inline void UnityEngine::UIElements::TextEditorEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextEditorEventHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::TextEditorEventHandler* UnityEngine::UIElements::TextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextElement* textElement,
                                                                                                                    ::UnityEngine::TextEditingUtilities* editingUtilities) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextEditorEventHandler*>(textElement, editingUtilities));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextEditorEventHandler::TextEditorEventHandler() {}
