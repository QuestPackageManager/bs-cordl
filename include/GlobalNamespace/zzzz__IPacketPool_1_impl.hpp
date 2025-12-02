#pragma once
// IWYU pragma private; include "GlobalNamespace/IPacketPool_1.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
template <typename T> inline T GlobalNamespace::IPacketPool_1<T>::Obtain() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPacketPool_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::IPacketPool_1<T>::Release(T t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPacketPool_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr GlobalNamespace::IPacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr ::GlobalNamespace::IPacketPool* GlobalNamespace::IPacketPool_1<T>::i___GlobalNamespace__IPacketPool() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
