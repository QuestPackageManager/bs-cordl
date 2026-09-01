#pragma once
// IWYU pragma private; include "GlobalNamespace\MainMenuAdditionalComponentsInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuAdditionalComponentsInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainMenuAdditionalComponentsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuAdditionalComponentsInstaller::*)()>(
    &::GlobalNamespace::MainMenuAdditionalComponentsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59fdc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuAdditionalComponentsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuAdditionalComponentsInstaller::*)()>(&::GlobalNamespace::MainMenuAdditionalComponentsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fdcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainMenuAdditionalComponentsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuAdditionalComponentsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainMenuAdditionalComponentsInstaller* GlobalNamespace::MainMenuAdditionalComponentsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainMenuAdditionalComponentsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuAdditionalComponentsInstaller::MainMenuAdditionalComponentsInstaller() {}
