#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerSpectatingSpot.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.add_hasBeenRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_hasBeenRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e8994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                             { "add_hasBeenRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.remove_hasBeenRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_hasBeenRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e8a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                             { "remove_hasBeenRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.add_isObservedChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_isObservedChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e8b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "add_isObservedChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.remove_isObservedChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_isObservedChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e8bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "remove_isObservedChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.get_observable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IMultiplayerObservable* (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_observable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_observable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.set_observable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::GlobalNamespace::IMultiplayerObservable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::set_observable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "set_observable", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerObservable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.get_spotName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_spotName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59e8ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_spotName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.get_isMain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_isMain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_isMain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::Start)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59e8d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::OnDestroy)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x59e90bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.SetIsObserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(bool)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::SetIsObserved)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59e9268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "SetIsObserved", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.ReloadBasedOnPlayerCurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::ReloadBasedOnPlayerCurrentState)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x59e9288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "ReloadBasedOnPlayerCurrentState", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.HandlePlayerStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e93fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "HandlePlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.HandlePlayerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                           { "HandlePlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot.IMultiplayerSpectatingSpot_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::IMultiplayerSpectatingSpot_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e9408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "IMultiplayerSpectatingSpot.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__spectatingSpotManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpotManager;
}
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__spectatingSpotManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpotManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectatingSpotManager = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get_hasBeenRemovedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasBeenRemovedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get_hasBeenRemovedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasBeenRemovedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasBeenRemovedEvent = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get_isObservedChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isObservedChangedEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get_isObservedChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isObservedChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set_isObservedChangedEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isObservedChangedEvent = value;
}
constexpr ::GlobalNamespace::IMultiplayerObservable*& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__observable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observable_k__BackingField;
}
constexpr ::GlobalNamespace::IMultiplayerObservable* const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__observable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observable_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set__observable_k__BackingField(::GlobalNamespace::IMultiplayerObservable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____observable_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__playerFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_get__playerFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerFailed;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::__cordl_internal_set__playerFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerFailed = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                           { "add_hasBeenRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                           { "remove_hasBeenRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::add_isObservedChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "add_isObservedChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::remove_isObservedChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "remove_isObservedChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_observable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_observable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerObservable*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::set_observable(::GlobalNamespace::IMultiplayerObservable* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "set_observable", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerObservable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_spotName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_spotName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::get_isMain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "get_isMain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::SetIsObserved(bool isObserved) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "SetIsObserved", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isObserved);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::ReloadBasedOnPlayerCurrentState(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "ReloadBasedOnPlayerCurrentState", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "HandlePlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(),
                                                                                         { "HandlePlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::IMultiplayerSpectatingSpot_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>(), { "IMultiplayerSpectatingSpot.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSpectatingSpot"
constexpr GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::operator ::GlobalNamespace::IMultiplayerSpectatingSpot*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSpectatingSpot"
constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::i___GlobalNamespace__IMultiplayerSpectatingSpot() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::MultiplayerConnectedPlayerSpectatingSpot() {}
