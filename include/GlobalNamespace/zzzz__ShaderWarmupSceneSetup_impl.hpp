#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderWarmupSceneSetup.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&::GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59108a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupSceneSetup*>(), { ::i2c::class_of<::GlobalNamespace::ShaderWarmupSceneSetup*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&::GlobalNamespace::ShaderWarmupSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5910984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupSceneSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_get__sharedWarmupColorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedWarmupColorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_get__sharedWarmupColorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedWarmupColorScheme;
}
constexpr void GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_set__sharedWarmupColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sharedWarmupColorScheme = value;
}
inline void GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ShaderWarmupSceneSetup*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShaderWarmupSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupSceneSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShaderWarmupSceneSetup* GlobalNamespace::ShaderWarmupSceneSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderWarmupSceneSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderWarmupSceneSetup::ShaderWarmupSceneSetup() {}
