#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ICursorManager.hpp"
#include "UnityEngine/UIElements/zzzz__ICursorManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
inline void UnityEngine::UIElements::ICursorManager::SetCursor(::UnityEngine::UIElements::Cursor cursor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ICursorManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursor);
}
inline void UnityEngine::UIElements::ICursorManager::ResetCursor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ICursorManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
