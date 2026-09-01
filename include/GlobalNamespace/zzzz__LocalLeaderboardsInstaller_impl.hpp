#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalLeaderboardsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsInstaller::*)()>(&::GlobalNamespace::LocalLeaderboardsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3775f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsInstaller*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsInstaller::*)()>(&::GlobalNamespace::LocalLeaderboardsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3775ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO>& GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_get__localLeaderboardsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsSettings;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> const& GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_get__localLeaderboardsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsSettings;
}
constexpr void GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_set__localLeaderboardsSettings(::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localLeaderboardsSettings = value;
}
inline void GlobalNamespace::LocalLeaderboardsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsInstaller* GlobalNamespace::LocalLeaderboardsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsInstaller::LocalLeaderboardsInstaller() {}
