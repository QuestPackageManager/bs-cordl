#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayer_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAvatarPacket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d1cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(),
                                                                               "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
    uint8_t, uint8_t, ::GlobalNamespace::IConnection*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::StringW, ::StringW, bool, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(&::GlobalNamespace::BeatSaberConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x31d1d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetGameSpecificPlayerIdentityData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatSaberPlayerIdentityPacketData (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetGameSpecificPlayerIdentityData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d1de0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetPlayerAvatarPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAvatarPacket* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31d1df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(),
                                                                               "GetPlayerAvatarPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdateIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::BeatSaberPlayerIdentityPacketData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdateIdentity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d1e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::PlayerAvatarPacket*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31d1e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAvatarPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.SetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::SetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d1e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "SetMultiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__playerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__playerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAvatars = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(),
                                                                             "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::_ctor(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                                                             uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection,
                                                             ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                            ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe,
                                                          publicEncryptionKey, random, compatibilityVersion);
}
inline ::GlobalNamespace::BeatSaberPlayerIdentityPacketData GlobalNamespace::BeatSaberConnectedPlayer::GetGameSpecificPlayerIdentityData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberPlayerIdentityPacketData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAvatarPacket* GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(),
                                                                             "GetPlayerAvatarPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAvatarPacket*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdateIdentity(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identityData);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar(::GlobalNamespace::PlayerAvatarPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAvatarPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::SetMultiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData playerAvatars) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayer*>::get(), "SetMultiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAvatars);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::New_ctor(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId, ::StringW userName,
    bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::StringW compatibilityVersion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberConnectedPlayer*>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner,
                                                                                                isMe, publicEncryptionKey, random, compatibilityVersion));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr GlobalNamespace::BeatSaberConnectedPlayer::operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::BeatSaberConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayer::BeatSaberConnectedPlayer() {}
