#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager_3.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__KickPlayerPacket_def.hpp"
#include "GlobalNamespace/zzzz__LongRollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__PingPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDisconnectedPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerIdentityPacket_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSortOrderPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatePacket_def.hpp"
#include "GlobalNamespace/zzzz__PongPacket_def.hpp"
#include "GlobalNamespace/zzzz__SyncTimePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl,
                                                                                       TGameSpecificIdentityData>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl,
                                                                             TGameSpecificIdentityData>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "player", ty:
// "TConnectedPlayerImpl", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isClient_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: Some("{}") }]
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::
    ConnectedPlayerManager_3__InitializePlayerEncryption_d__116(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* __4__this,
                                                                TConnectedPlayerImpl player, bool _isClient_5__2,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->player = player;
  this->_isClient_5__2 = _isClient_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl,
                                                                                         TGameSpecificIdentityData>::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116() {}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_connectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_initializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_initializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_initializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___initializedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_disconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_disconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_disconnectedEvent(
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___disconnectedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_connectionFailedEvent(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectionFailedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerConnectedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_playerDisconnectedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerDisconnectedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_playerStateChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerStateChangedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerOrderChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerOrderChangedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerOrderChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerOrderChangedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_playerOrderChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerOrderChangedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerLatencyInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLatencyInitializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_playerLatencyInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLatencyInitializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_playerLatencyInitializedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerLatencyInitializedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_syncTimeInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTimeInitializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_syncTimeInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTimeInitializedEvent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_syncTimeInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___syncTimeInitializedEvent, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__startTicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__startTicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__startTicks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTicks = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::LongRollingAverage*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__syncTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTimeOffset;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::LongRollingAverage* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__syncTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTimeOffset;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__syncTimeOffset(::GlobalNamespace::LongRollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____syncTimeOffset, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::BGNet::Core::ITimeProvider* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____timeProvider, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____taskUtility, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnectionManager*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnectionManager* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectionManager, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayerFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerFactory;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayerFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerFactory;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connectedPlayerFactory(
    ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayerFactory, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__temporaryDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__temporaryDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__temporaryDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____temporaryDataWriter, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__temporaryEncryptedDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryEncryptedDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__temporaryEncryptedDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryEncryptedDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__temporaryEncryptedDataWriter(
    ::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____temporaryEncryptedDataWriter, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__reliableDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliableDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__reliableDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliableDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__reliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____reliableDataWriter, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__unreliableDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::NetDataWriter* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__unreliableDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableDataWriter;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____unreliableDataWriter, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::List_1<TConnectedPlayerImpl>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__players() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::List_1<TConnectedPlayerImpl>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__players() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__players(
    ::System::Collections::Generic::List_1<TConnectedPlayerImpl>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____players, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__localPlayerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__localPlayerState(
    ::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____localPlayerState, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionKeys;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionKeys;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____encryptionKeys, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionRandom;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionRandom;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____encryptionRandom, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerImpl& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerImpl const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__localPlayer(TConnectedPlayerImpl value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____localPlayer, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastConnectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastConnectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__lastConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastConnectionId = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPollTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollTime;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPollTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollTime;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__lastPollTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollTime = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPollFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollFrame;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPollFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollFrame;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__lastPollFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollFrame = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__lastPingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__lastPingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPingTime = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>*&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__messageSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* const&
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__messageSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__messageSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____messageSerializer, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_connectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_connectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_initializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_initializedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_initializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_initializedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_disconnectedEvent(
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_connectionFailedEvent(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_connectionFailedEvent(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerOrderChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerOrderChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerLatencyInitializedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerLatencyInitializedEvent(::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_syncTimeInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_syncTimeInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_syncTimeInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_syncTimeInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::StringW GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_compatibilityVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_compatibilityVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnectedOrConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnectedOrConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "get_isConnected",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayer GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "get_localPlayer",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int64_t GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "get_syncTime",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_syncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_syncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int64_t GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_runTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "get_runTime",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_ctor(
    ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
    ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* connectedPlayerFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility, connectionManager, connectedPlayerFactory);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleGameSpecificConnected() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleGameSpecificPlayerAdded(TConnectedPlayerImpl player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleGameSpecificPlayerIdentityUpdate(TGameSpecificIdentityData identityData,
                                                                                                                                                                 TConnectedPlayer iPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identityData, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::DisposeGameSpecificResources() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::PollUpdate(int32_t frameCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "PollUpdate",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameCount);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::PollLateUpdateOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "PollLateUpdateOptional", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RegisterSerializer(
    ::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UnregisterSerializer(
    ::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline T GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetConnectionManager() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetConnectionManager", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "Dispose",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "Disconnect",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::KickPlayer(::StringW userId,
                                                                                                                                     ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "KickPlayer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, disconnectedReason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetLocalPlayerState(::StringW state, bool setState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, setState);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetLocalPlayerSortIndex(int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SetLocalPlayerSortIndex", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortIndex);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player,
                                                                                                                                             int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SetPlayerSortIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, sortIndex);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::ResetLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "ResetLocalState",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "HandleConnected",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnectionConnected(::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleConnectionConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection,
                                                                                                                                           ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleConnectionDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, disconnectedReason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleNetworkReceive(::GlobalNamespace::IConnection* connection,
                                                                                                                                               ::LiteNetLib::Utils::NetDataReader* reader,
                                                                                                                                               ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleNetworkReceive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, reader, deliveryMethod);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Send(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "Send",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliable(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "SendUnreliable",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "SendToPlayer",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliableEncryptedToPlayer(T message,
                                                                                                                                                          ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableEncryptedToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableOnlyToFirstDegreeConnections", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliableFromPlayerToPlayer(
    T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableFromPlayerToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediately(::LiteNetLib::Utils::INetSerializable* message,
                                                                                                                                          bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "SendImmediately",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, onlyFirstDegree);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                                                                                         TConnectedPlayerImpl excludingPlayer,
                                                                                                                                                         bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendImmediatelyExcludingPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, excludingPlayer, onlyFirstDegree);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                                                                                  TConnectedPlayerImpl toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendImmediatelyToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, toPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                                                                                    TConnectedPlayerImpl fromPlayer,
                                                                                                                                                    bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendImmediatelyFromPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, onlyFirstDegree);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediatelyFromPlayerToPlayer(
    ::LiteNetLib::Utils::INetSerializable* message, TConnectedPlayerImpl fromPlayer, TConnectedPlayerImpl toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendImmediatelyFromPlayerToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendImmediatelyFromPlayerToPlayerUnreliable(T message,
                                                                                                                                                                      TConnectedPlayerImpl fromPlayer,
                                                                                                                                                                      TConnectedPlayerImpl toPlayer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendImmediatelyFromPlayerToPlayerUnreliable", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::FlushReliableQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "FlushReliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::FlushUnreliableQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "FlushUnreliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::LiteNetLib::Utils::NetDataWriter*
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::WriteOne(uint8_t senderId, uint8_t receiverId,
                                                                                                                       ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "WriteOne",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, senderId, receiverId, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::WriteOneEncrypted(
    ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState, uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "WriteOneEncrypted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, encryptionState, senderId, receiverId, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::LiteNetLib::Utils::NetDataWriter*
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::WriteOneOnlyToFirstDegreeConnections(uint8_t senderId,
                                                                                                                                                   ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "WriteOneOnlyToFirstDegreeConnections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, senderId, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Write(::LiteNetLib::Utils::NetDataWriter* writer,
                                                                                                                                ::LiteNetLib::Utils::INetSerializable* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "Write",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, packet);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleServerPlayerConnected(::GlobalNamespace::PlayerConnectedPacket* packet,
                                                                                                                                                      TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleServerPlayerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerConnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerIdentityUpdate(
    ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* packet, TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerIdentityUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::InitializePlayerEncryption(TConnectedPlayerImpl player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "InitializePlayerEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerStateUpdate(::GlobalNamespace::PlayerStatePacket* packet,
                                                                                                                                                  TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerStateUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStatePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleServerPlayerDisconnected(::GlobalNamespace::PlayerDisconnectedPacket* packet,
                                                                                                                                             TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleServerPlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDisconnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleKickPlayerPacket(::GlobalNamespace::KickPlayerPacket* packet,
                                                                                                                                                 TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleKickPlayerPacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::KickPlayerPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerSortOrderUpdate(::GlobalNamespace::PlayerSortOrderPacket* packet,
                                                                                                                                                      TConnectedPlayer iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerSortOrderUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSortOrderPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleSyncTimePacket(::GlobalNamespace::SyncTimePacket* packet,
                                                                                                                                               TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleSyncTimePacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncTimePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePing(::GlobalNamespace::PingPacket* packet, TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "HandlePing",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PingPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePong(::GlobalNamespace::PongPacket* packet, TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "HandlePong",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PongPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline uint8_t GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetNextConnectionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetNextConnectionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "RemoveAllPlayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RemovePlayer(TConnectedPlayerImpl player,
                                                                                                                                       ::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "RemovePlayer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, reason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::AddPlayer(TConnectedPlayerImpl player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "AddPlayer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerImpl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayer(uint8_t connectionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "GetPlayer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, connectionId);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayer(::GlobalNamespace::IConnection* connection,
                                                                                                                                                    uint8_t remoteConnectionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "GetPlayer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, connection, remoteConnectionId);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "GetPlayer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, userId);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetConnectedPlayer(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetConnectedPlayer", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, index);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::NotifyPlayerStateChangedEvent(TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "NotifyPlayerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), "Log",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::New_ctor(
    ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
    ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* connectedPlayerFactory) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(
      timeProvider, taskUtility, connectionManager, connectedPlayerFactory));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::IDisposable* GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::ConnectedPlayerManager_3() {}
