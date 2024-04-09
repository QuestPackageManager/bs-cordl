#pragma once
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::operator ::GlobalNamespace::INetworkPlayer*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::i___GlobalNamespace__INetworkPlayer() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_get__playerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_get__playerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_set__playerModel(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel,
                                                                                                                                        ::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>(playerModel, connectedPlayer));
}
template <typename T>
inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerModel, connectedPlayer);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_userId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_userName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_isMe() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_isMe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_sortIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_sortIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_currentPartySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_currentPartySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_selectionMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_selectionMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_configuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_configuration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_isMyPartyOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_isMyPartyOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_connectedPlayer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_connectedPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canJoin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canJoin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Join() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Join",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_requiresPassword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_requiresPassword",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Join(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Join",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_isWaitingOnJoin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_isWaitingOnJoin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canInvite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canInvite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Invite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Invite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_isWaitingOnInvite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_isWaitingOnInvite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canKick() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canKick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Kick() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Kick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canLeave() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canLeave",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Leave() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Leave",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canBlock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canBlock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Block() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Block",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::get_canUnblock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "get_canUnblock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::Unblock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "Unblock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::SendJoinResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "SendJoinResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accept);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::SendInviteResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(), "SendInviteResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accept);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>::__NetworkPlayerModel_1__NetworkPlayer() {}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T>
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*
GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::StringW& GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::StringW& GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__cordl_internal_set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>* GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>*>());
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig<T>::__NetworkPlayerModel_1__JoinMatchmakingPartyConfig() {}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>"
template <typename T>
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*
GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW_T__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<T>>*>(static_cast<void*>(this));
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>* GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>*>());
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1__StartClientPartyConfig<T>::__NetworkPlayerModel_1__StartClientPartyConfig() {}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::operator ::GlobalNamespace::INetworkPlayer*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayer"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::i___GlobalNamespace__INetworkPlayer() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayer*>(static_cast<void*>(this));
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__playerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__playerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerModel;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__playerModel(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::StringW& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
template <typename T> constexpr ::StringW const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask = value;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__currentPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__currentPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayerCount;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__currentPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPlayerCount = value;
}
template <typename T> constexpr float_t& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__lastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
template <typename T> constexpr float_t const& GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_get__lastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__cordl_internal_set__lastUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUpdateTime = value;
}
template <typename T>
inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*
GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::New_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                    ::GlobalNamespace::GameplayServerConfiguration configuration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>(playerModel, code, selectionMask, configuration));
}
template <typename T>
inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::_ctor(::GlobalNamespace::NetworkPlayerModel_1<T>* playerModel, ::StringW code,
                                                                             ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerModel, code, selectionMask, configuration);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Update(int32_t currentPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPlayerCount);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::INetworkPlayer_get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "INetworkPlayer.get_userId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_code() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_code",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::INetworkPlayer_get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(),
                                               "INetworkPlayer.get_userName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_serverName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_serverName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_isMe() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_isMe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_currentPartySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_currentPartySize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_selectionMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_selectionMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_configuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_configuration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_connectedPlayer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_connectedPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_isMyPartyOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_isMyPartyOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_hasTimedOut() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_hasTimedOut",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canJoin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canJoin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Join() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Join",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_requiresPassword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_requiresPassword",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Join(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Join",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_isWaitingOnJoin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_isWaitingOnJoin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canInvite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canInvite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Invite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Invite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_isWaitingOnInvite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_isWaitingOnInvite",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canKick() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canKick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Kick() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Kick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canLeave() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canLeave",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Leave() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Leave",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canBlock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canBlock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Block() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Block",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::get_canUnblock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "get_canUnblock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::Unblock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "Unblock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::SendJoinResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "SendJoinResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accept);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::SendInviteResponse(bool accept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>::get(), "SendInviteResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accept);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>::__NetworkPlayerModel_1__NetworkServer() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<T>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "",
// def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IAuthenticationTokenProvider*> __t__builder, ::UnityW<T> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56<T>::__NetworkPlayerModel_1___InitAuthenticationTokenProvider_d__56() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>(__1__state));
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                  "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                  "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1___GetPartyPlayers_d__57<T>::__NetworkPlayerModel_1___GetPartyPlayers_d__57() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>&
GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*> const&
GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::__List_1__Enumerator<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>(__1__state));
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                  "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                  "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1___GetOtherPlayers_d__58<T>::__NetworkPlayerModel_1___GetOtherPlayers_d__58() {}
template <typename T> constexpr bool& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_clearCurrentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCurrentList;
}
template <typename T> constexpr bool const& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_clearCurrentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCurrentList;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_set_clearCurrentList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearCurrentList = value;
}
template <typename T> constexpr ::UnityW<T>& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::UnityW<T> const& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_set___4__this(::UnityW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_localSelectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localSelectionMask;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_localSelectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localSelectionMask;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_set_localSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localSelectionMask = value;
}
template <typename T> constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_localConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localConfiguration;
}
template <typename T>
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_get_localConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localConfiguration;
}
template <typename T> constexpr void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__cordl_internal_set_localConfiguration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localConfiguration = value;
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>* GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>*>());
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_Refresh_b__0(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>* servers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>*>::get(), "<Refresh>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, servers);
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::_Refresh_b__1(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>*>::get(), "<Refresh>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1____c__DisplayClass59_0<T>::__NetworkPlayerModel_1____c__DisplayClass59_0() {}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1____c<T>::setStaticF___9(::GlobalNamespace::__NetworkPlayerModel_1____c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get>(
      std::forward<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1____c<T>* GlobalNamespace::__NetworkPlayerModel_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1____c<T>::setStaticF___9__71_0(::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*, "<>9__71_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*>(value));
}
template <typename T> inline ::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>* GlobalNamespace::__NetworkPlayerModel_1____c<T>::getStaticF___9__71_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*, "<>9__71_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get>();
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1____c<T>* GlobalNamespace::__NetworkPlayerModel_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>());
}
template <typename T> inline void GlobalNamespace::__NetworkPlayerModel_1____c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline int32_t GlobalNamespace::__NetworkPlayerModel_1____c<T>::_PlayerOrderChanged_b__71_0(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* a,
                                                                                            ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayerModel_1____c<T>*>::get(), "<PlayerOrderChanged>b__71_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1____c<T>::__NetworkPlayerModel_1____c() {}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
template <typename T> constexpr GlobalNamespace::NetworkPlayerModel_1<T>::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
template <typename T> constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::NetworkPlayerModel_1<T>::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
template <typename T> constexpr ::GlobalNamespace::IPlatformUserModel*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__platformUserModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__platformUserModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformUserModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
template <typename T>
constexpr void
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authenticationTokenProviderTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*> const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__localPlayer(::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partySizeChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partySizeChangedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partySizeChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyRefreshingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyRefreshingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partyRefreshingEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyRefreshingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_partyChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_joinRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_joinRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_inviteRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get_inviteRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
template <typename T> constexpr void GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__partyPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPlayers;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__partyPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPlayers;
}
template <typename T>
constexpr void
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__partyPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>*& GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__publicServers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicServers;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>*> const&
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_get__publicServers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicServers;
}
template <typename T>
constexpr void
GlobalNamespace::NetworkPlayerModel_1<T>::__cordl_internal_set__publicServers(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicServers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "get_authenticationTokenProviderTask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "add_partyRefreshingEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "remove_partyRefreshingEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::get_localPlayerIsPartyOwner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::get_hasNetworkingFailed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_secret() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_code() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::NetworkPlayerModel_1<T>::get_partyOwnerId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::NetworkPlayerModel_1<T>::get_currentPartySize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::get_publicServers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                                                             "get_publicServers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::NetworkPlayerModel_1<T>::get_connectionManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                                                             "get_connectionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo* newInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "HandlePlatformUserInfoDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newInfo);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> template <typename T2> inline bool GlobalNamespace::NetworkPlayerModel_1<T>::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, config);
}
/// @param secret: ::StringW (default: nullptr)
/// @param code: ::StringW (default: nullptr)
template <typename T>
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                         ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret,
                                                                                                                         ::StringW code) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<T>*, false>(this, ___internal_method, selectionMask, configuration, secret, code);
}
template <typename T>
inline ::GlobalNamespace::IConnectionInitParams_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                     ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<T>*, false>(this, ___internal_method, selectionMask, configuration);
}
template <typename T>
inline void GlobalNamespace::NetworkPlayerModel_1<T>::RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask,
                                                                           ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                                                           ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                           ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* GlobalNamespace::NetworkPlayerModel_1<T>::InitAuthenticationTokenProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                                                             "InitAuthenticationTokenProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::GetPartyPlayers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::NetworkPlayerModel_1<T>::GetOtherPlayers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePlayersChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                                                             "HandlePlayersChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "HandleInviteRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "HandleJoinRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "HandlePartyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerModel);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::ResetMasterServerReachability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(),
                                                                             "ResetMasterServerReachability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Connected() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NetworkPlayerModel_1__NetworkPlayer<T>*, false>(this, ___internal_method, userId);
}
template <typename T> inline ::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>* GlobalNamespace::NetworkPlayerModel_1<T>::GetServer(::StringW code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), "GetServer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NetworkPlayerModel_1__NetworkServer<T>*, false>(this, ___internal_method, code);
}
template <typename T> inline ::GlobalNamespace::NetworkPlayerModel_1<T>* GlobalNamespace::NetworkPlayerModel_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NetworkPlayerModel_1<T>*>());
}
template <typename T> inline void GlobalNamespace::NetworkPlayerModel_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayerModel_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::NetworkPlayerModel_1<T>::NetworkPlayerModel_1() {}
