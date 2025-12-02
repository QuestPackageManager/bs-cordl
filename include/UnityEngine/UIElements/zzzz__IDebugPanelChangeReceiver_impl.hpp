#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDebugPanelChangeReceiver.hpp"
#include "UnityEngine/UIElements/zzzz__IDebugPanelChangeReceiver_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDebugPanelChangeReceiver.OnVisualElementChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IDebugPanelChangeReceiver::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::IDebugPanelChangeReceiver::OnVisualElementChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IDebugPanelChangeReceiver::OnVisualElementChange(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::VersionChangeType changeType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, changeType);
}
