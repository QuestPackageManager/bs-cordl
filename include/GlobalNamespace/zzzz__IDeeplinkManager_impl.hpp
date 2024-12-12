#pragma once
// IWYU pragma private; include "GlobalNamespace/IDeeplinkManager.hpp"
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
inline void GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDeeplinkManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDeeplinkManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::IDeeplinkManager::get_currentDeeplink() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDeeplinkManager*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Deeplink*, false>(this, ___internal_method);
}
