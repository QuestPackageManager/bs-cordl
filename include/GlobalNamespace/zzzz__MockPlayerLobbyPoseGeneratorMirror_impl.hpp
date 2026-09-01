#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerLobbyPoseGeneratorMirror.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorMirror_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataPacket_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::NodePoseSyncStateManager*)>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x59ce500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ce6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Dispose)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59ce6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59ce794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.FindPlayerToMirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::FindPlayerToMirror)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x59ce858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), { "FindPlayerToMirror", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.HandleOptionalAvatarDataReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)(
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::HandleOptionalAvatarDataReceived)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59cebd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
            { "HandleOptionalAvatarDataReceived", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_set__nodePoseSyncStateManager(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodePoseSyncStateManager = value;
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_get__mirroredPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_get__mirroredPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredPlayer;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__cordl_internal_set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredPlayer = value;
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                       ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, nodePoseSyncStateManager);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::FindPlayerToMirror() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(), { "FindPlayerToMirror", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket,
                                                                                                  ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(),
                       { "HandleOptionalAvatarDataReceived", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionalAvatarDataPacket, player);
}
inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*
GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                              ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(multiplayerSessionManager, nodePoseSyncStateManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::MockPlayerLobbyPoseGeneratorMirror() {}
