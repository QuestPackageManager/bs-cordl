#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberConnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatSaberConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::IBeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::IBeatSaberConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::IBeatSaberConnectedPlayer::get_multiplayerAvatarsData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::IBeatSaberConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::IBeatSaberConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
