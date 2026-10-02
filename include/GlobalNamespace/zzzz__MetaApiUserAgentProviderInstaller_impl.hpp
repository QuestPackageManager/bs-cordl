#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaApiUserAgentProviderInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MetaApiUserAgentProviderInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaApiUserAgentProviderInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaApiUserAgentProviderInstaller::*)()>(&::GlobalNamespace::MetaApiUserAgentProviderInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a00ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaApiUserAgentProviderInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaApiUserAgentProviderInstaller::*)()>(&::GlobalNamespace::MetaApiUserAgentProviderInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a00b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaApiUserAgentProviderInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaApiUserAgentProviderInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaApiUserAgentProviderInstaller* GlobalNamespace::MetaApiUserAgentProviderInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaApiUserAgentProviderInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaApiUserAgentProviderInstaller::MetaApiUserAgentProviderInstaller() {}
