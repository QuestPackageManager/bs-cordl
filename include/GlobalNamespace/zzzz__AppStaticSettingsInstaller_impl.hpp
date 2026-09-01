#pragma once
// IWYU pragma private; include "GlobalNamespace\AppStaticSettingsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppStaticSettingsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppStaticSettingsInstaller::*)()>(&::GlobalNamespace::AppStaticSettingsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x376d0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppStaticSettingsInstaller*>(), { ::i2c::class_of<::GlobalNamespace::AppStaticSettingsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppStaticSettingsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppStaticSettingsInstaller::*)()>(&::GlobalNamespace::AppStaticSettingsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x376d134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppStaticSettingsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& GlobalNamespace::AppStaticSettingsInstaller::__cordl_internal_get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& GlobalNamespace::AppStaticSettingsInstaller::__cordl_internal_get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::AppStaticSettingsInstaller::__cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appStaticSettings = value;
}
inline void GlobalNamespace::AppStaticSettingsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AppStaticSettingsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AppStaticSettingsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppStaticSettingsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppStaticSettingsInstaller* GlobalNamespace::AppStaticSettingsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppStaticSettingsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppStaticSettingsInstaller::AppStaticSettingsInstaller() {}
