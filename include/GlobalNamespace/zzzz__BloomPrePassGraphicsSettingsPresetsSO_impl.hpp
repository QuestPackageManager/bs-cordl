#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassGraphicsSettingsPresetsSO.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::*)()>(
    &::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37316b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::__cordl_internal_get_bloomPrePassEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassEffect;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::__cordl_internal_get_bloomPrePassEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassEffect;
}
constexpr void GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::__cordl_internal_set_bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomPrePassEffect = value;
}
inline void GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset* GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset::BloomPrePassGraphicsSettingsPresetsSO_Preset() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO.get_presets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> (::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::*)()>(
    &::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), { "get_presets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO.get_namedPresets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::*)()>(
    &::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::*)()>(&::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37316a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>& GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::__cordl_internal_get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> const& GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::__cordl_internal_get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::__cordl_internal_set__presets(::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presets = value;
}
inline ::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*> GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::get_presets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), { "get_presets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO_Preset*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*> GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::get_namedPresets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO::BloomPrePassGraphicsSettingsPresetsSO() {}
