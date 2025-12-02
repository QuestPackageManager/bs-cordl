#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStateManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStateManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerStateManager.InitializeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerStateManager::*)(
    ::GlobalNamespace::MultiplayerSessionType, ::GlobalNamespace::IMultiplayerSessionManager*)>(&::GlobalNamespace::PlayerStateManager::InitializeState)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x31b4024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerStateManager*>::get(), "InitializeState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerSessionType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerStateManager::*)()>(&::GlobalNamespace::PlayerStateManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31b4284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerStateManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerStateManager::InitializeState(::GlobalNamespace::MultiplayerSessionType multiplayerSessionType,
                                                                 ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerStateManager*>::get(), "InitializeState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerSessionType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionType, multiplayerSessionManager);
}
inline void GlobalNamespace::PlayerStateManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerStateManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerStateManager* GlobalNamespace::PlayerStateManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerStateManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>"
constexpr GlobalNamespace::PlayerStateManager::operator ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*
GlobalNamespace::PlayerStateManager::i___GlobalNamespace__IMultiplayerSessionManager_1_IPlayerStateManager___GlobalNamespace__MultiplayerSessionType_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerStateManager::PlayerStateManager() {}
