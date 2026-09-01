#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerResultsPyramidViewAvatarInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(
    &::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x59e4ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(
    &::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e4de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
inline void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller* GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::MultiplayerResultsPyramidViewAvatarInstaller() {}
