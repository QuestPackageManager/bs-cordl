#pragma once
// IWYU pragma private; include "GlobalNamespace\LobbyDataModelInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyDataModelInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDataModelInstaller::*)()>(&::GlobalNamespace::LobbyDataModelInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x59fd860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyDataModelInstaller*>(), { ::i2c::class_of<::GlobalNamespace::LobbyDataModelInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDataModelInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDataModelInstaller::*)()>(&::GlobalNamespace::LobbyDataModelInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fdc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyDataModelInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LobbyDataModelInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LobbyDataModelInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDataModelInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyDataModelInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyDataModelInstaller* GlobalNamespace::LobbyDataModelInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyDataModelInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyDataModelInstaller::LobbyDataModelInstaller() {}
