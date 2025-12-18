#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerAvatarVisualDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x319f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), "get_avatarsData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(
    ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319f9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), "get_avatarsData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*
BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(connectedPlayer));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::ConnectedPlayerAvatarVisualDataProvider() {}
