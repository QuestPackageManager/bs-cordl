#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberMultiplayerSessionManager.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(
    ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*)>(&::GlobalNamespace::BeatSaberMultiplayerSessionManager::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x31a1e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)()>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31a1ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::BeatSaberMultiplayerSessionManager::Init(::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>* playerStateManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<::GlobalNamespace::MultiplayerSessionType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerStateManager);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberMultiplayerSessionManager* GlobalNamespace::BeatSaberMultiplayerSessionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IBeatSaberMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*
GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__MultiplayerSessionType_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::MultiplayerSessionType>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>"
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*
GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionMessageProcessor_1___GlobalNamespace__NetworkMessageType_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<::GlobalNamespace::NetworkMessageType>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberMultiplayerSessionManager::BeatSaberMultiplayerSessionManager() {}
