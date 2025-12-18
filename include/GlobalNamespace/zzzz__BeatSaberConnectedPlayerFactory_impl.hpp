#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateLocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           ::StringW, ::StringW, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateLocalPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31d1eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateDirectlyConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           uint8_t, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateDirectlyConnectedPlayer)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x31d1f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateRemoteConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           uint8_t, ::GlobalNamespace::PlayerConnectedPacket*, ::GlobalNamespace::BeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateRemoteConnectedPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x31d21c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateRemoteConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerConnectedPacket*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayerFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31d22ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateLocalPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    ::StringW userId, ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random,
    ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                            ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*, false>(this, ___internal_method, manager, userId, userName, isConnectionOwner, publicEncryptionKey, random,
                                                                                                  compatibilityVersion);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateDirectlyConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, ::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                            ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*, false>(this, ___internal_method, manager, connectionId, connection);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateRemoteConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, ::GlobalNamespace::PlayerConnectedPacket* packet, ::GlobalNamespace::BeatSaberConnectedPlayer* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(), "CreateRemoteConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                            ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerConnectedPacket*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*, false>(this, ___internal_method, manager, connectionId, packet, parent);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerFactory* GlobalNamespace::BeatSaberConnectedPlayerFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>());
}
/// @brief Convert operator to
/// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr GlobalNamespace::BeatSaberConnectedPlayerFactory::operator ::GlobalNamespace::IConnectedPlayerFactory_3<
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept {
  return static_cast<
      ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
GlobalNamespace::BeatSaberConnectedPlayerFactory::
    i___GlobalNamespace__IConnectedPlayerFactory_3___GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept {
  return static_cast<
      ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(
      static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerFactory::BeatSaberConnectedPlayerFactory() {}
