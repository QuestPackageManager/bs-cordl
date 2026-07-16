#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneSettingsApplicatorSO.ApplyWindowSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneSettingsApplicatorSO::*)(::by_ref<::BeatSaber::Settings::WindowSettings>)>(
    &::GlobalNamespace::StandaloneSettingsApplicatorSO::ApplyWindowSettings)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5900290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneSettingsApplicatorSO*>(), { ::i2c::class_of<::GlobalNamespace::StandaloneSettingsApplicatorSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneSettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneSettingsApplicatorSO::*)()>(&::GlobalNamespace::StandaloneSettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59003ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandaloneSettingsApplicatorSO::ApplyWindowSettings(::by_ref<::BeatSaber::Settings::WindowSettings> settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StandaloneSettingsApplicatorSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::StandaloneSettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneSettingsApplicatorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandaloneSettingsApplicatorSO* GlobalNamespace::StandaloneSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandaloneSettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneSettingsApplicatorSO::StandaloneSettingsApplicatorSO() {}
