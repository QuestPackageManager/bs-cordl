#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementScheduledItem.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
inline void UnityEngine::UIElements::IVisualElementScheduledItem::Resume() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduledItem*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IVisualElementScheduledItem::Pause() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduledItem*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IVisualElementScheduledItem::ExecuteLater(int64_t delayMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduledItem*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delayMs);
}
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::IVisualElementScheduledItem::StartingIn(int64_t delayMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduledItem*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*, false>(this, ___internal_method, delayMs);
}
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::IVisualElementScheduledItem::Every(int64_t intervalMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduledItem*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*, false>(this, ___internal_method, intervalMs);
}
