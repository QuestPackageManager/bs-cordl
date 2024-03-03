#pragma once
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IRuntimePanelComponent.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IRuntimePanelComponent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::IRuntimePanelComponent::set_panel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IRuntimePanelComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IRuntimePanelComponent*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IRuntimePanelComponent::set_panel(::UnityEngine::UIElements::IPanel* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IRuntimePanelComponent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
