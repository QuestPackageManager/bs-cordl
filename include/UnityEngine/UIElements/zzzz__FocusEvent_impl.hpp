#pragma once
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FocusEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::FocusEvent::PreDispatch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e6d580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEvent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusEvent::*)()>(&::UnityEngine::UIElements::FocusEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e6d628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::FocusEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEvent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline ::UnityEngine::UIElements::FocusEvent* UnityEngine::UIElements::FocusEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::FocusEvent*>());
}
inline void UnityEngine::UIElements::FocusEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusEvent::FocusEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
