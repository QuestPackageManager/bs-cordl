#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberDisconnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__DisconnectedPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberDisconnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)(::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31d2ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberDisconnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d2aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberDisconnectedPlayer*>::get(),
                                                                               "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerAvatarsData_k__BackingField = value;
}
inline void GlobalNamespace::BeatSaberDisconnectedPlayer::_ctor(::StringW userId, ::StringW userName, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberDisconnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, userName, sortIndex);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::BeatSaberDisconnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberDisconnectedPlayer*>::get(),
                                                                             "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberDisconnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::New_ctor(::StringW userId, ::StringW userName, int32_t sortIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(userId, userName, sortIndex));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr GlobalNamespace::BeatSaberDisconnectedPlayer::operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::BeatSaberDisconnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberDisconnectedPlayer::BeatSaberDisconnectedPlayer() {}
