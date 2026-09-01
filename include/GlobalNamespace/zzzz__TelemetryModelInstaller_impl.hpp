#pragma once
// IWYU pragma private; include "GlobalNamespace\TelemetryModelInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TelemetryModelInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TelemetryModelInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TelemetryModelInstaller::*)()>(&::GlobalNamespace::TelemetryModelInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3779e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TelemetryModelInstaller*>(), { ::i2c::class_of<::GlobalNamespace::TelemetryModelInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TelemetryModelInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TelemetryModelInstaller::*)()>(&::GlobalNamespace::TelemetryModelInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3779ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TelemetryModelInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TelemetryModelInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TelemetryModelInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TelemetryModelInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TelemetryModelInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TelemetryModelInstaller* GlobalNamespace::TelemetryModelInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TelemetryModelInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TelemetryModelInstaller::TelemetryModelInstaller() {}
