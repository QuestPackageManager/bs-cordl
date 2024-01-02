#pragma once
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
template <typename T> inline bool GlobalNamespace::IOVRAnchorComponent_1<T>::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::IOVRAnchorComponent_1<T>::get_IsEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param timeout: double_t (default: 0.0)
template <typename T> inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::IOVRAnchorComponent_1<T>::SetEnabledAsync(bool enable, double_t timeout) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, enable, timeout);
}
template <typename T> inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType GlobalNamespace::IOVRAnchorComponent_1<T>::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceComponentType, false>(this, ___internal_method);
}
template <typename T> inline uint64_t GlobalNamespace::IOVRAnchorComponent_1<T>::get_Handle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::IOVRAnchorComponent_1<T>::FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IOVRAnchorComponent_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, anchor);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
