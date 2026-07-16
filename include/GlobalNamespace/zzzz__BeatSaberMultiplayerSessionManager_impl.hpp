#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberMultiplayerSessionManager.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_5_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_4_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_2_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a6a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                             { "add_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a6ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                             { "remove_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.add_playerControllerDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::add_playerControllerDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a6ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                { "add_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.remove_playerControllerDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::remove_playerControllerDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a6c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                { "remove_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.RegisterGameSpecificEventHandlers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)()>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::RegisterGameSpecificEventHandlers)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32a6d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.UnregisterGameSpecificEventHandlers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)()>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::UnregisterGameSpecificEventHandlers)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32a6e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.HandlePlayerAvatarChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::HandlePlayerAvatarChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32a6edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                                                           { "HandlePlayerAvatarChanged", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager.HandlePlayerControllerDataChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::HandlePlayerControllerDataChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32a6f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                             { "HandlePlayerControllerDataChanged", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberMultiplayerSessionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)()>(&::GlobalNamespace::BeatSaberMultiplayerSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32a7004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::BeatSaberMultiplayerSessionManager.IMultiplayerSessionManager_BeatSaberConnectedPlayerManager_IBeatSaberConnectedPlayer_BeatSaberConnectedPlayer_BeatSaberPlayerIdentityPacketData__StartSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberMultiplayerSessionManager::*)(
    ::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberMultiplayerSessionManager::
        IMultiplayerSessionManager_BeatSaberConnectedPlayerManager_IBeatSaberConnectedPlayer_BeatSaberConnectedPlayer_BeatSaberPlayerIdentityPacketData__StartSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32a7050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                            { "IMultiplayerSessionManager<BeatSaberConnectedPlayerManager,IBeatSaberConnectedPlayer,BeatSaberConnectedPlayer,BeatSaberPlayerIdentityPacketData>.StartSession",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                ::i2c::type_of<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_get_playerAvatarChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_get_playerAvatarChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr void GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerAvatarChangedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_get_playerControllerDataChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerDataChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_get_playerControllerDataChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerDataChangedEvent;
}
constexpr void GlobalNamespace::BeatSaberMultiplayerSessionManager::__cordl_internal_set_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerControllerDataChangedEvent = value;
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                           { "add_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                           { "remove_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::add_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                           { "add_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::remove_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                              { "remove_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::RegisterGameSpecificEventHandlers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::UnregisterGameSpecificEventHandlers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::HandlePlayerAvatarChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                                                         { "HandlePlayerAvatarChanged", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::HandlePlayerControllerDataChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                                                           { "HandlePlayerControllerDataChanged", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberMultiplayerSessionManager::
    IMultiplayerSessionManager_BeatSaberConnectedPlayerManager_IBeatSaberConnectedPlayer_BeatSaberConnectedPlayer_BeatSaberPlayerIdentityPacketData__StartSession(
        ::GlobalNamespace::BeatSaberConnectedPlayerManager* connectedPlayerManager,
        ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>* multiplayerSessionInitializer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>(),
                          { "IMultiplayerSessionManager<BeatSaberConnectedPlayerManager,IBeatSaberConnectedPlayer,BeatSaberConnectedPlayer,BeatSaberPlayerIdentityPacketData>.StartSession",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                              ::i2c::type_of<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayerManager, multiplayerSessionInitializer);
}
inline ::GlobalNamespace::BeatSaberMultiplayerSessionManager* GlobalNamespace::BeatSaberMultiplayerSessionManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberMultiplayerSessionManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberMultiplayerSessionManager"
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IBeatSaberMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager_4<
    ::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
    ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*,::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                          ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
GlobalNamespace::BeatSaberMultiplayerSessionManager::
    i___GlobalNamespace__IMultiplayerSessionManager_4___GlobalNamespace__BeatSaberConnectedPlayerManager____GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_4<::GlobalNamespace::BeatSaberConnectedPlayerManager*, ::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                                     ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
GlobalNamespace::BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionManager_1___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::BeatSaberMultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,
                                                                                                                                 ::GlobalNamespace::IBeatSaberConnectedPlayer*>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType,::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::
    BeatSaberMultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionMessageProcessor_2___GlobalNamespace__NetworkMessageType___GlobalNamespace__IBeatSaberConnectedPlayer__() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberMultiplayerSessionManager::BeatSaberMultiplayerSessionManager() {}
