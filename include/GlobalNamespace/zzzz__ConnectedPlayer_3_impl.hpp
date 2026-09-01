#pragma once
// IWYU pragma private; include "GlobalNamespace\ConnectedPlayer_3.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayer_3_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__LongRollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerIdentityPacket_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSortOrderPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatePacket_def.hpp"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isMe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isMe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__isMe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMe = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__compatibilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__compatibilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compatibilityVersion;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__compatibilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compatibilityVersion = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*&
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* const&
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__manager(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manager = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnection*& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnection* const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connection(::GlobalNamespace::IConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connection = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerImpl& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerImpl const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__parent(TConnectedPlayerImpl value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionId = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__remoteConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr uint8_t const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__remoteConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__remoteConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteConnectionId = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortIndex = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__isConnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnected = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::DisconnectedReason const&
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedReason = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isKicked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr bool const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__isKicked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__isKicked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isKicked = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerState = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicEncryptionKey = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__random(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*&
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const&
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__encryptionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__encryptionState(
    ::GlobalNamespace::EncryptionUtility_IEncryptionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionState = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::LongRollingAverage*& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::LongRollingAverage* const& GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____latency = value;
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::IConnection* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_connection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline uint8_t GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectionId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_connectionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline uint8_t GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_remoteConnectionId() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_remoteConnectionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isKicked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_isKicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_disconnectedReason() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_disconnectedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_sortIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_sortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::StringW GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::StringW GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_isMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_hasValidLatency() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_hasValidLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int64_t GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_currentLatency() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_currentLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int64_t GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_offsetSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::ArrayW<uint8_t> GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_publicEncryptionKey() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_publicEncryptionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::ArrayW<uint8_t> GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_random() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_random", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isDirectConnection() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_isDirectConnection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_encryptionState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_encryptionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::StringW GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_compatibilityVersion() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_ctor(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, uint8_t remoteConnectionId,
    ::GlobalNamespace::IConnection* connection, TConnectedPlayerImpl parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey,
    ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                               ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IConnection*>(),
                                                               ::i2c::type_of<TConnectedPlayerImpl>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe,
                                                   publicEncryptionKey, random, compatibilityVersion);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerConnectedPacket* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayerConnectedPacket() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "GetPlayerConnectedPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerConnectedPacket*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayerIdentityPacket() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "GetPlayerIdentityPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TGameSpecificIdentityData GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetGameSpecificPlayerIdentityData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<TGameSpecificIdentityData>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerStatePacket* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayerStatePacket() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "GetPlayerStatePacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStatePacket*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerSortOrderPacket* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayerSortOrderPacket() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "GetPlayerSortOrderPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSortOrderPacket*>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "Disconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UpdateLatency(int64_t latency) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "UpdateLatency", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, latency);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UpdateSortIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "UpdateSortIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetKicked() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), { "SetKicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UpdateIdentity(::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "UpdateIdentity", {}, { ::i2c::type_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UpdateState(::GlobalNamespace::PlayerStatePacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "UpdateState", {}, { ::i2c::type_of<::GlobalNamespace::PlayerStatePacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetEncryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "SetEncryptionState", {}, { ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionState);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HasState(::StringW state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "HasState", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetPlayerState(::GlobalNamespace::PlayerStateHash playerState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(),
                                                           { "SetPlayerState", {}, { ::i2c::type_of<::GlobalNamespace::PlayerStateHash>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerState);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::StringW GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::New_ctor(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, uint8_t remoteConnectionId,
    ::GlobalNamespace::IConnection* connection, TConnectedPlayerImpl parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey,
    ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(
                          manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe, publicEncryptionKey, random, compatibilityVersion));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ConnectedPlayer_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::ConnectedPlayer_3() {}
