#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingTarget.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingTarget_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindingTarget::*)(
    ::UnityEngine::UIElements::VisualElement*, ::ByRef<::UnityEngine::UIElements::BindingId>)>(&::UnityEngine::UIElements::BindingTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a652b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingTarget>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindingTarget::_ctor(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingTarget>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, bindingId);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingId", ty:
// "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingTarget::BindingTarget(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::BindingId bindingId) noexcept {
  this->element = element;
  this->bindingId = bindingId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingTarget::BindingTarget() {}
