#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IRuntimePanelComponent.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
inline void UnityEngine::UIElements::IRuntimePanelComponent::set_panel(::UnityEngine::UIElements::IPanel* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IRuntimePanelComponent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
