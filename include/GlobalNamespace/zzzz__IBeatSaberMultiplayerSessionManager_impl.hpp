#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberMultiplayerSessionManager.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_4_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_2_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatSaberMultiplayerSessionManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatSaberMultiplayerSessionManager::*)(
    ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(&::GlobalNamespace::IBeatSaberMultiplayerSessionManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatSaberMultiplayerSessionManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatSaberMultiplayerSessionManager::*)(
    ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(&::GlobalNamespace::IBeatSaberMultiplayerSessionManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(), 1));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatSaberMultiplayerSessionManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::IBeatSaberMultiplayerSessionManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @brief Convert operator to
/// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr GlobalNamespace::IBeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager_4<
    ::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
    ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                          ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
GlobalNamespace::IBeatSaberMultiplayerSessionManager::
    i___GlobalNamespace__IMultiplayerSessionManager_4___GlobalNamespace__BeatSaberConnectedPlayerManager____GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::IBeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
GlobalNamespace::IBeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::IBeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,
                                                                                                                                  ::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::
    IBeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionMessageProcessor_2___GlobalNamespace__NetworkMessageType___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
