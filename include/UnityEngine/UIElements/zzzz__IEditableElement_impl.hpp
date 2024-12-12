#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEditableElement.hpp"
#include "UnityEngine/UIElements/zzzz__IEditableElement_def.hpp"
#include "System/zzzz__Action_def.hpp"
inline ::System::Action* UnityEngine::UIElements::IEditableElement::get_editingStarted() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IEditableElement*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::UIElements::IEditableElement::get_editingEnded() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IEditableElement*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
