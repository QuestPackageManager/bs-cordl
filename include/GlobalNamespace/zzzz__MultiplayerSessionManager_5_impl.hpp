#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionManager_5.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_5_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_2_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_5_def.hpp"
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
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                         TGameSpecificIdentityData>::MultiplayerSessionManager_5_ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                         TGameSpecificIdentityData>::MultiplayerSessionManager_5_ConnectionState() {}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>
    GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Disconnected{
      static_cast<int32_t>(0x0)
    };
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>
    GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Connecting{
      static_cast<int32_t>(0x1)
    };
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>
    GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Connected{
      static_cast<int32_t>(0x2)
    };
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>
    GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Disconnecting{
      static_cast<int32_t>(0x3)
    };
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::setStaticF___9(
    ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value) {
  ::cordl_internals::setStaticField<
      ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get>(
      std::forward<::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(value));
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get>();
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::setStaticF___9__100_0(
    ::System::Func_2<TConnectedPlayer, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TConnectedPlayer, int32_t>*, "<>9__100_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_5___c<
                                        TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get>(
      std::forward<::System::Func_2<TConnectedPlayer, int32_t>*>(value));
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::System::Func_2<TConnectedPlayer, int32_t>*
GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::getStaticF___9__100_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<TConnectedPlayer, int32_t>*, "<>9__100_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_5___c<
                                               TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get>();
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t
GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_TryUpdateConnectedPlayer_b__100_0(
    TConnectedPlayer p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "<TryUpdateConnectedPlayer>b__100_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<
                      ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                             TGameSpecificIdentityData>::MultiplayerSessionManager_5___c() {}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW& GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                        TGameSpecificIdentityData>::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::StringW const& GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                              TGameSpecificIdentityData>::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                  TGameSpecificIdentityData>::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___userId, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer,
                                                                                                                                  TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                               TGameSpecificIdentityData>::_GetPlayerByUserId_b__0(TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer,
                                                                                                                                  TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "<GetPlayerByUserId>b__0", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::New_ctor() {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<
          ::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                               TGameSpecificIdentityData>::MultiplayerSessionManager_5___c__DisplayClass94_0() {}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>*&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::__cordl_internal_get__packetSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__packetSerializer()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__packetSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____packetSerializer, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::List_1<TConnectedPlayer>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                                  TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::List_1<TConnectedPlayer>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayers()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connectedPlayers(
    ::System::Collections::Generic::List_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayers, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                              TGameSpecificIdentityData>::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__localPlayerState()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__localPlayerState(
    ::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____localPlayerState, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__maxPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr int32_t const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__maxPlayerCount()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__maxPlayerCount(
    int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPlayerCount = value;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__connectionState()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__connectionState(
    ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::Queue_1<int32_t>*&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__freeSortIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get__freeSortIndices()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set__freeSortIndices(
    ::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____freeSortIndices, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action*&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_connectedEvent()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_connectedEvent(
    ::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::__cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectionFailedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                              TGameSpecificIdentityData>::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                    TGameSpecificIdentityData>::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerConnectedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                              TGameSpecificIdentityData>::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                    TGameSpecificIdentityData>::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerDisconnectedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                              TGameSpecificIdentityData>::__cordl_internal_get_playerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                    TGameSpecificIdentityData>::__cordl_internal_get_playerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___playerStateChangedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                              TGameSpecificIdentityData>::__cordl_internal_get_connectionOwnerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<TConnectedPlayer>* const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                    TGameSpecificIdentityData>::__cordl_internal_get_connectionOwnerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___connectionOwnerStateChangedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                                                   TGameSpecificIdentityData>::__cordl_internal_get_disconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_disconnectedEvent()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_disconnectedEvent(
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___disconnectedEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action*&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_pollUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::System::Action* const&
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_get_pollUpdateEvent()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::__cordl_internal_set_pollUpdateEvent(
    ::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___pollUpdateEvent, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayer& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                         TGameSpecificIdentityData>::__cordl_internal_get__connectionOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayer const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                               TGameSpecificIdentityData>::__cordl_internal_get__connectionOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set__connectionOwner_k__BackingField(TConnectedPlayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectionOwner_k__BackingField, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerSessionManager& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                       TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr TConnectedPlayerSessionManager const& GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                                                             TGameSpecificIdentityData>::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                            TGameSpecificIdentityData>::__cordl_internal_set__connectedPlayerManager(TConnectedPlayerSessionManager value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayerManager, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_connectedEvent(
    ::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_connectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_connectedEvent(
    ::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_connectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_connectionFailedEvent(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_connectionFailedEvent(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerConnectedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerConnectedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerDisconnectedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerDisconnectedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_playerStateChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_playerStateChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_connectionOwnerStateChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_connectionOwnerStateChangedEvent(
    ::System::Action_1<TConnectedPlayer>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_disconnectedEvent(
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_disconnectedEvent(
    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::add_pollUpdateEvent(
    ::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "add_pollUpdateEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::remove_pollUpdateEvent(
    ::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "remove_pollUpdateEvent", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayer
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_connectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::set_connectionOwner(
    TConnectedPlayer value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "set_connectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isSpectating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isSpectating", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnectingOrConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnectingOrConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>*
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>*, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int64_t GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_syncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_isSyncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_isSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayer
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerSessionManager
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerSessionManager, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::get_maxPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "get_maxPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::OnApplicationPause(bool pauseStatus) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RegisterSerializer(
    TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UnregisterSerializer(
    TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RegisterCallback(
    TMessageType serializerType, ::System::Action_2<T, TConnectedPlayer>* callback, ::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "RegisterCallback", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, TConnectedPlayer>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, callback, constructor);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UnregisterCallback(
    TMessageType serializerType) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "UnregisterCallback", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMessageType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::StartSession(
    TConnectedPlayerSessionManager connectedPlayerManager, ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>* multiplayerSessionInitializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "StartSession", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayerSessionManager>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayerManager, multiplayerSessionInitializer);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::RegisterGameSpecificEventHandlers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      59)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetMaxPlayerCount(
    int32_t maxPlayerCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SetMaxPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxPlayerCount);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::EndSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "EndSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UnregisterGameSpecificEventHandlers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      60)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "Disconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::Send(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "Send", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendToPlayer(
    T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliable(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliable", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliableEncryptedToPlayer(
    T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableEncryptedToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                         TGameSpecificIdentityData>::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableOnlyToFirstDegreeConnections", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
template <typename T>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SendUnreliableFromPlayerToPlayer(
    T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SendUnreliableFromPlayerToPlayer", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleDisconnected(
    ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleConnectionFailed(
    ::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandleSyncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandleSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerConnected(
    TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerConnected", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerDisconnected(
    TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerDisconnected", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerStateChanged(
    TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerStateChanged", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerOrderChanged(
    TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerOrderChanged", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::HandlePlayerLatencyInitialized(
    TConnectedPlayer player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "HandlePlayerLatencyInitialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayer
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetPlayerByUserId(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetPlayerByUserId", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer, false>(this, ___internal_method, userId);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayer
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetConnectedPlayer(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetConnectedPlayer", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer, false>(this, ___internal_method, i);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::SetLocalPlayerState(::StringW state,
                                                                                                                                                                                   bool hasState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, hasState);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::KickPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "KickPlayer", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::LocalPlayerHasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "LocalPlayerHasState", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::UpdateConnectionState(
    ::GlobalNamespace::UpdateConnectionStateReason updateReason, ::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "UpdateConnectionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UpdateConnectionStateReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateReason, disconnectedReason, connectionFailedReason);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::TryUpdateConnectedPlayer(
    TConnectedPlayer player, bool isPlayerConnected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "TryUpdateConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player, isPlayerConnected);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline bool GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::ShouldKickPlayer(
    ::GlobalNamespace::IConnectedPlayer* player, ::ByRef<::GlobalNamespace::DisconnectedReason> reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "ShouldKickPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::DisconnectedReason>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player, reason);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline int32_t
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::GetNextAvailableSortIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      "GetNextAvailableSortIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
      ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::New_ctor() {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                       TGameSpecificIdentityData>::operator ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::i___GlobalNamespace__IMultiplayerSessionManager_1_TConnectedPlayer_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType,TConnectedPlayer>"
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                       TGameSpecificIdentityData>::operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType,TConnectedPlayer>"
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*
GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                             TGameSpecificIdentityData>::i___GlobalNamespace__IMultiplayerSessionMessageProcessor_2_TMessageType_TConnectedPlayer_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                         TGameSpecificIdentityData>::MultiplayerSessionManager_5() {}
