#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EditorPanelRootElement.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRootElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EditorPanelRootElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EditorPanelRootElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EditorPanelRootElement::*)()>(
    &::UnityEngine::UIElements::EditorPanelRootElement::_ctor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6bede88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EditorPanelRootElement*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EditorPanelRootElement.OnEventCompletedAtAnyTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EditorPanelRootElement::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::EditorPanelRootElement::OnEventCompletedAtAnyTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6befccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EditorPanelRootElement*>::get(), "OnEventCompletedAtAnyTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EditorPanelRootElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EditorPanelRootElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EditorPanelRootElement::OnEventCompletedAtAnyTarget(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EditorPanelRootElement*>::get(), "OnEventCompletedAtAnyTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::EditorPanelRootElement* UnityEngine::UIElements::EditorPanelRootElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EditorPanelRootElement*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EditorPanelRootElement::EditorPanelRootElement() {}
