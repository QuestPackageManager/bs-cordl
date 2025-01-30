#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBigAvatarInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBigAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBigAvatarInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(
    &::GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x3bcec28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBigAvatarInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(
    &::GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bcf03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberManager_InitData*& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__saberManagerInitData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManagerInitData;
}
constexpr ::GlobalNamespace::SaberManager_InitData* const& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__saberManagerInitData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManagerInitData;
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_set__saberManagerInitData(::GlobalNamespace::SaberManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManagerInitData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBigAvatarInstaller* GlobalNamespace::MultiplayerBigAvatarInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerBigAvatarInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBigAvatarInstaller::MultiplayerBigAvatarInstaller() {}
