#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelRootElement.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRootElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRootElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRootElement::*)()>(&::UnityEngine::UIElements::PanelRootElement::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bedd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRootElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PanelRootElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRootElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelRootElement* UnityEngine::UIElements::PanelRootElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PanelRootElement*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelRootElement::PanelRootElement() {}
