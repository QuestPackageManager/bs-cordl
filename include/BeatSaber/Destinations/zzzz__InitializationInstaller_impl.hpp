#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\InitializationInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/Destinations/zzzz__InitializationInstaller_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::InitializationInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitializationInstaller::*)()>(&::BeatSaber::Destinations::InitializationInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3281b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitializationInstaller*>(), { ::i2c::class_of<::BeatSaber::Destinations::InitializationInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitializationInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitializationInstaller::*)()>(&::BeatSaber::Destinations::InitializationInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3281be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitializationInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::InitializationInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Destinations::InitializationInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Destinations::InitializationInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitializationInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::InitializationInstaller* BeatSaber::Destinations::InitializationInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::InitializationInstaller*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitializationInstaller::InitializationInstaller() {}
