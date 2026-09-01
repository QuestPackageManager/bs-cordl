#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerSyncStateManager_5.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::setStaticF___9(
    ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*, "<>9",
                                    ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(
      std::forward<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(value));
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*, "<>9",
                                           ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>();
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::setStaticF___9__37_0(
    ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*, "<>9__37_0",
                                    ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(
      std::forward<::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*>(value));
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*, "<>9__37_0",
                                           ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>();
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_HandlePlayerConnected_b__37_0(
    ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                              { "<HandlePlayerConnected>b__37_0", {}, { ::i2c::type_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>());
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::MultiplayerSyncStateManager_5___c() {}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__multiplayerSessionManager(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__localState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localState;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__localState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localState;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__localState(
    ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localState = value;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__connectedPlayerStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__connectedPlayerStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__connectedPlayerStates(
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayerStates = value;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__disconnectedPlayerStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__disconnectedPlayerStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__disconnectedPlayerStates(
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedPlayerStates = value;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_multiplayerSessionManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "get_multiplayerSessionManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "get_localState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_connectedPlayerCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "get_connectedPlayerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_disconnectedPlayerCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "get_disconnectedPlayerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_syncTime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaUpdateFrequencyMs() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_fullStateUpdateFrequencyMs() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localBufferSize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_remoteBufferSize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IPacketPool_1<TSerializable>* GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_serializablePool() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TSerializable>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaSerializablePool() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::NetworkMessageType GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_messageType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkMessageType>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::NetworkMessageType GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaMessageType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkMessageType>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::LateUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline TState GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Interpolate(TState a, int64_t timeA, TState b, int64_t timeB,
                                                                                                                                         int64_t time) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, a, timeA, b, timeB, time);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline TState GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Smooth(TState a, TState b, float_t smoooth) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, a, b, smoooth);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::ClearBufferedStates() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "ClearBufferedStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::TryCreateLocalState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { "TryCreateLocalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandlePlayerConnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "HandlePlayerConnected", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "HandlePlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandleSyncPacket(TSerializable packet,
                                                                                                                                            ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "HandleSyncPacket", {}, { ::i2c::type_of<TSerializable>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandleSyncDeltaPacket(TDeltaSerializable packet,
                                                                                                                                                 ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "HandleSyncDeltaPacket", {}, { ::i2c::type_of<TDeltaSerializable>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncState(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "GetSyncState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, i);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "GetSyncStateForPlayer", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetDisconnectedSyncState(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(),
                                                           { "GetDisconnectedSyncState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, i);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>());
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::MultiplayerSyncStateManager_5() {}
