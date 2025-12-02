#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionManager_2.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_2_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_2_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::MultiplayerSessionManager_2_ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::MultiplayerSessionManager_2_ConnectionState() {}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>
    GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::Disconnected{ static_cast<int32_t>(0x0) };
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>
    GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::Connecting{ static_cast<int32_t>(0x1) };
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>
    GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::Connected{ static_cast<int32_t>(0x2) };
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>
    GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>::Disconnecting{ static_cast<int32_t>(0x3) };
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::setStaticF___9(::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get>(
      std::forward<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>(value));
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>* GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get>();
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::setStaticF___9__104_0(::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*, "<>9__104_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*>(value));
}
template <typename TMessageType, typename TSessionType>
inline ::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::getStaticF___9__104_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*, "<>9__104_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get>();
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline int32_t GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::_TryUpdateConnectedPlayer_b__104_0(::GlobalNamespace::IConnectedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>::get(), "<TryUpdateConnectedPlayer>b__104_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>* GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TSessionType> constexpr ::GlobalNamespace::MultiplayerSessionManager_2___c<TMessageType, TSessionType>::MultiplayerSessionManager_2___c() {}
template <typename TMessageType, typename TSessionType>
constexpr ::StringW& GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
template <typename TMessageType, typename TSessionType>
constexpr ::StringW const& GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___userId, value);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline bool GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::_GetPlayerByUserId_b__0(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>*>::get(), "<GetPlayerByUserId>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>*
GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2___c__DisplayClass98_0<TMessageType, TSessionType>::MultiplayerSessionManager_2___c__DisplayClass98_0() {}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>*&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__playerStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerStateManager;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__playerStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerStateManager;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__playerStateManager(
    ::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____playerStateManager, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, ::GlobalNamespace::IConnectedPlayer*>*&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__packetSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, ::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__packetSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__packetSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, ::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____packetSerializer, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
template <typename TMessageType, typename TSessionType>
constexpr void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayers, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__localPlayerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____localPlayerState, value);
}
template <typename TMessageType, typename TSessionType> constexpr int32_t& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__maxPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
template <typename TMessageType, typename TSessionType>
constexpr int32_t const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__maxPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
template <typename TMessageType, typename TSessionType> constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__maxPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPlayerCount = value;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType>&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType> const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__connectionState(
    ::GlobalNamespace::MultiplayerSessionManager_2_ConnectionState<TMessageType, TSessionType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__freeSortIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__freeSortIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__freeSortIndices(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____freeSortIndices, value);
}
template <typename TMessageType, typename TSessionType> constexpr ::System::Action*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_connectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectionFailedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerConnectedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerDisconnectedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerAvatarChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerAvatarChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerAvatarChangedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_playerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerStateChangedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectionOwnerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_connectionOwnerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectionOwnerStateChangedEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_disconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_disconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___disconnectedEvent, value);
}
template <typename TMessageType, typename TSessionType> constexpr ::System::Action*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_pollUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr ::System::Action* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get_pollUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set_pollUpdateEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___pollUpdateEvent, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectionOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectionOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__connectionOwner_k__BackingField(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectionOwner_k__BackingField, value);
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::ConnectedPlayerManager*& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::ConnectedPlayerManager* const& GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
template <typename TMessageType, typename TSessionType>
constexpr void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::__cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayerManager, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::Init(::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>* playerStateManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerStateManager);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "add_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "remove_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "add_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "add_disconnectedEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                  "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::add_pollUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "add_pollUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::remove_pollUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "remove_pollUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_connectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_connectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::set_connectionOwner(::GlobalNamespace::IConnectedPlayer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "set_connectionOwner",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isSpectating() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isSpectating", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isConnectingOrConnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isConnectingOrConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isConnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isConnecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isDisconnecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_connectedPlayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline int32_t GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_connectedPlayerCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline int64_t GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_syncTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_syncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_isSyncTimeInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_isSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_localPlayer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_connectedPlayerManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager*, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline int32_t GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::get_maxPlayerCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "get_maxPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::Start() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::LateUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "LateUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::OnApplicationPause(bool pauseStatus) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
template <typename TMessageType, typename TSessionType>
inline void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::RegisterSerializer(TMessageType serializerType,
                                                                                             ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "RegisterSerializer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType, typename TSessionType>
inline void
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::UnregisterSerializer(TMessageType serializerType,
                                                                                               ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "UnregisterSerializer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::RegisterCallback(TMessageType serializerType,
                                                                                                       ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback,
                                                                                                       ::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "RegisterCallback",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, callback, constructor);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::UnregisterCallback(TMessageType serializerType) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "UnregisterCallback", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::StartSession(TSessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "StartSession", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSessionType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionType, connectedPlayerManager);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SetMaxPlayerCount(int32_t maxPlayerCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "SetMaxPlayerCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxPlayerCount);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::EndSession() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "EndSession",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::Disconnect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "Disconnect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> template <typename T> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::Send(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "Send",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "SendToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TMessageType, typename TSessionType> template <typename T> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SendUnreliable(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "SendUnreliable", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "SendUnreliableEncryptedToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "SendUnreliableOnlyToFirstDegreeConnections", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TSessionType>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer,
                                                                                                                       ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "SendUnreliableFromPlayerToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandleInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandleConnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandleDisconnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandleConnectionFailed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandleSyncTimeInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "HandleSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerConnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerDisconnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerStateChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerAvatarChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerAvatarChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerOrderChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::HandlePlayerLatencyInitialized(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "HandlePlayerLatencyInitialized",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::GetPlayerByUserId(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "GetPlayerByUserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, userId);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::GetConnectedPlayer(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "GetConnectedPlayer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, i);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::SetLocalPlayerState(::StringW state, bool hasState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "SetLocalPlayerState",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, hasState);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::KickPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "KickPlayer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
template <typename TMessageType, typename TSessionType> inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::LocalPlayerHasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), "LocalPlayerHasState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
template <typename TMessageType, typename TSessionType>
inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::UpdateConnectionState(::GlobalNamespace::UpdateConnectionStateReason updateReason,
                                                                                                            ::GlobalNamespace::DisconnectedReason disconnectedReason,
                                                                                                            ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "UpdateConnectionState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UpdateConnectionStateReason>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateReason, disconnectedReason, connectionFailedReason);
}
template <typename TMessageType, typename TSessionType>
inline bool GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::TryUpdateConnectedPlayer(::GlobalNamespace::IConnectedPlayer* player, bool isPlayerConnected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "TryUpdateConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player, isPlayerConnected);
}
template <typename TMessageType, typename TSessionType> inline int32_t GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::GetNextAvailableSortIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(),
                                               "GetNextAvailableSortIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType> inline void GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TSessionType>
inline ::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>"
template <typename TMessageType, typename TSessionType>
constexpr GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::operator ::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>"
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>*
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::i___GlobalNamespace__IMultiplayerSessionManager_1_TSessionType_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
template <typename TMessageType, typename TSessionType>
constexpr GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::i___GlobalNamespace__IMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>"
template <typename TMessageType, typename TSessionType>
constexpr GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>"
template <typename TMessageType, typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*
GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::i___GlobalNamespace__IMultiplayerSessionMessageProcessor_1_TMessageType_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TMessageType, typename TSessionType> constexpr ::GlobalNamespace::MultiplayerSessionManager_2<TMessageType, TSessionType>::MultiplayerSessionManager_2() {}
