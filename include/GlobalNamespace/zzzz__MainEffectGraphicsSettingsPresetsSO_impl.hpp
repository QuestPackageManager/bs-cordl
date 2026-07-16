#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::*)()>(
    &::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372d02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::__cordl_internal_get_mainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffect;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::__cordl_internal_get_mainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffect;
}
constexpr void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::__cordl_internal_set_mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainEffect = value;
}
inline void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset* GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset::MainEffectGraphicsSettingsPresetsSO_Preset() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO.get_presets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*> (::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(
    &::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), { "get_presets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO.get_namedPresets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(
    &::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(&::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>& GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__cordl_internal_get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*> const& GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__cordl_internal_get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__cordl_internal_set__presets(::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presets = value;
}
inline ::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*> GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), { "get_presets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO_Preset*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*> GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*>>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::MainEffectGraphicsSettingsPresetsSO() {}
