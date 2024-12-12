#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerSongPackProviderManager.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "GlobalNamespace/zzzz__IServerSongPackProviderManager_def.hpp"
#include "GlobalNamespace/zzzz__IServerSongPackProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
inline ::GlobalNamespace::IServerSongPackProvider* GlobalNamespace::IServerSongPackProviderManager::GetServerSongPackProvider() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerSongPackProviderManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerSongPackProvider*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IServerSongPackProviderManager::RefreshAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerSongPackProviderManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IServerSongPackProviderManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IServerSongPackProviderManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
