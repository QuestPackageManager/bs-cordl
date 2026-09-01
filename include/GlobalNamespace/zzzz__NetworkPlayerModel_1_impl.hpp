#pragma once
// IWYU pragma private; include "GlobalNamespace\NetworkPlayerModel_1.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_get__playerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_get__playerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_set__playerModel(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerModel = value;
}
template <typename T> constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
template <typename T> constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
template <typename T>
inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerModel, connectedPlayer);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_isMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_sortIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_sortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_currentPartySize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_currentPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_selectionMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_configuration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_isMyPartyOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_isMyPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_connectedPlayer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_connectedPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canJoin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canJoin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Join() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Join", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_requiresPassword() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_requiresPassword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Join(::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Join", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_isWaitingOnJoin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_isWaitingOnJoin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canInvite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Invite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Invite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_isWaitingOnInvite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_isWaitingOnInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canKick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canKick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Kick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Kick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canLeave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canLeave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Leave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Leave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::get_canUnblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "get_canUnblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::Unblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "Unblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::SendJoinResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "SendJoinResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::SendInviteResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), { "SendInviteResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
template <typename T>
inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel,
                                                                                                                                  ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(playerModel, connectedPlayer));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::operator ::GlobalNamespace::INetworkPlayer*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::i___GlobalNamespace__INetworkPlayer() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>::NetworkPlayerModel_1_NetworkPlayer() {}
template <typename T> constexpr ::StringW& GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secret = value;
}
template <typename T> constexpr ::StringW& GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::__cordl_internal_set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___code = value;
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>* GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T>
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*
GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_JoinMatchmakingPartyConfig<T>::NetworkPlayerModel_1_JoinMatchmakingPartyConfig() {}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>* GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T>
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*
GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_StartClientPartyConfig<T>::NetworkPlayerModel_1_StartClientPartyConfig() {}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__playerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__playerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__playerModel(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerModel = value;
}
template <typename T> constexpr ::StringW& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____code = value;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask = value;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__currentPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__currentPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__currentPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPlayerCount = value;
}
template <typename T> constexpr float_t& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__lastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
template <typename T> constexpr float_t const& GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_get__lastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::__cordl_internal_set__lastUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUpdateTime = value;
}
template <typename T>
inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code,
                                                                          ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerModel, code, selectionMask, configuration);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Update(int32_t currentPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Update", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPlayerCount);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::INetworkPlayer_get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "INetworkPlayer.get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_code() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_code", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::INetworkPlayer_get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "INetworkPlayer.get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_serverName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_serverName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_isMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_currentPartySize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_currentPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_selectionMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_configuration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_connectedPlayer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_connectedPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_isMyPartyOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_isMyPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_hasTimedOut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_hasTimedOut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canJoin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canJoin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Join() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Join", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_requiresPassword() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_requiresPassword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Join(::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Join", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_isWaitingOnJoin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_isWaitingOnJoin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canInvite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Invite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Invite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_isWaitingOnInvite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_isWaitingOnInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canKick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canKick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Kick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Kick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canLeave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canLeave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Leave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Leave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::get_canUnblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "get_canUnblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::Unblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "Unblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::SendJoinResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "SendJoinResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::SendInviteResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(), { "SendInviteResponse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accept);
}
template <typename T>
inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*
GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                 ::GlobalNamespace::GameplayServerConfiguration configuration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(playerModel, code, selectionMask, configuration));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::operator ::GlobalNamespace::INetworkPlayer*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::i___GlobalNamespace__INetworkPlayer() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>::NetworkPlayerModel_1_NetworkServer() {}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1___c<T>::setStaticF___9(::GlobalNamespace::NetworkPlayerModel_1___c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::NetworkPlayerModel_1___c<T>*, "<>9", ::GlobalNamespace::NetworkPlayerModel_1___c<T>*>(
      std::forward<::GlobalNamespace::NetworkPlayerModel_1___c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1___c<T>* GlobalNamespace::NetworkPlayerModel_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::NetworkPlayerModel_1___c<T>*, "<>9", ::GlobalNamespace::NetworkPlayerModel_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1___c<T>::setStaticF___9__74_0(::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>*, "<>9__74_0", ::GlobalNamespace::NetworkPlayerModel_1___c<T>*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>*>(value));
}
template <typename T> inline ::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* GlobalNamespace::NetworkPlayerModel_1___c<T>::getStaticF___9__74_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>*, "<>9__74_0", ::GlobalNamespace::NetworkPlayerModel_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline int32_t GlobalNamespace::NetworkPlayerModel_1___c<T>::_PlayerOrderChanged_b__74_0(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* a,
                                                                                         ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1___c<T>*>(),
                          { "<PlayerOrderChanged>b__74_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(), ::i2c::type_of<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1___c<T>* GlobalNamespace::NetworkPlayerModel_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1___c<T>::NetworkPlayerModel_1___c() {}
template <typename T> constexpr bool& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_clearCurrentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCurrentList;
}
template <typename T> constexpr bool const& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_clearCurrentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCurrentList;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_set_clearCurrentList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearCurrentList = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_localSelectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localSelectionMask;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_localSelectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localSelectionMask;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_set_localSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localSelectionMask = value;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_localConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localConfiguration;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_get_localConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localConfiguration;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::__cordl_internal_set_localConfiguration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localConfiguration = value;
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::_Refresh_b__0(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>* servers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>*>(),
                                                           { "<Refresh>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, servers);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::_Refresh_b__1(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>*>(),
                                                                                         { "<Refresh>b__1", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>* GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1___c__DisplayClass62_0<T>::NetworkPlayerModel_1___c__DisplayClass62_0() {}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>&
GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*> const&
GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1__GetOtherPlayers_d__61<T>::NetworkPlayerModel_1__GetOtherPlayers_d__61() {}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1__GetPartyPlayers_d__60<T>::NetworkPlayerModel_1__GetPartyPlayers_d__60() {}
template <typename T> constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
template <typename T> constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
template <typename T>
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
template <typename T>
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
template <typename T>
constexpr void
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____authenticationTokenProviderTask = value;
}
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__localPlayer(::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayer = value;
}
template <typename T> constexpr bool& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__networkingFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkingFailed;
}
template <typename T> constexpr bool const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__networkingFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkingFailed;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__networkingFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkingFailed = value;
}
template <typename T> constexpr bool& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__masterServerUnreachable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterServerUnreachable;
}
template <typename T> constexpr bool const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__masterServerUnreachable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterServerUnreachable;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__masterServerUnreachable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____masterServerUnreachable = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__currentPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__currentPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__currentPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPlayerCount = value;
}
template <typename T> constexpr ::System::Action_1<int32_t>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partySizeChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partySizeChangedEvent;
}
template <typename T> constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partySizeChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partySizeChangedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partySizeChangedEvent = value;
}
template <typename T> constexpr ::System::Action*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyRefreshingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
template <typename T> constexpr ::System::Action* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyRefreshingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partyRefreshingEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partyRefreshingEvent = value;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partyChangedEvent = value;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_joinRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_joinRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___joinRequestedEvent = value;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_inviteRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_inviteRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inviteRequestedEvent = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__partyPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPlayers;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__partyPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPlayers;
}
template <typename T>
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyPlayers = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__publicServers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicServers;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__publicServers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicServers;
}
template <typename T>
constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__publicServers(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicServers = value;
}
template <typename T> constexpr float_t& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__lastServerRefresh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastServerRefresh;
}
template <typename T> constexpr float_t const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__lastServerRefresh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastServerRefresh;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__lastServerRefresh(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastServerRefresh = value;
}
template <typename T> constexpr bool& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__isRefreshing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRefreshing;
}
template <typename T> constexpr bool const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__isRefreshing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRefreshing;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__isRefreshing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRefreshing = value;
}
template <typename T> constexpr bool& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__filterChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterChanged;
}
template <typename T> constexpr bool const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__filterChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterChanged;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__filterChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterChanged = value;
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* GlobalNamespace::NetworkPlayerModel_1<T>::get_authenticationTokenProviderTask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "get_authenticationTokenProviderTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "add_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "remove_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::get_localPlayerIsPartyOwner() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::get_hasNetworkingFailed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_secret() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_code() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_partyOwnerId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::NetworkPlayerModel_1<T>::get_currentPartySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::get_publicServers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "get_publicServers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::NetworkPlayerModel_1<T>::get_connectionManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "get_connectionManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> template <typename T2> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 62 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config);
}
template <typename T>
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                         ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret,
                                                                                                                         ::StringW code) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<T>*>(this, ___internal_method, selectionMask, configuration, secret, code);
}
template <typename T>
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                     ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<T>*>(this, ___internal_method, selectionMask, configuration);
}
template <typename T>
inline void GlobalNamespace::NetworkPlayerModel_1<T>::RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask,
                                                                           ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                                                           ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                           ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* GlobalNamespace::NetworkPlayerModel_1<T>::InitAuthenticationTokenProvider() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "InitAuthenticationTokenProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::GetPartyPlayers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::GetOtherPlayers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePlayersChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "HandlePlayersChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "HandleInviteRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "HandleJoinRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "HandlePartyChanged", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerModel);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::ResetMasterServerReachability() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "ResetMasterServerReachability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Connected() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerConnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerDisconnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerStateChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerOrderChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetPlayer(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "GetPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkPlayerModel_1_NetworkPlayer<T>*>(this, ___internal_method, userId);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetServer(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { "GetServer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkPlayerModel_1_NetworkServer<T>*>(this, ___internal_method, code);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerModel_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerModel_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1<T>::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::NetworkPlayerModel_1<T>::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>::NetworkPlayerModel_1() {}
