#pragma once
// IWYU pragma private; include "GlobalNamespace/LastUsedBeatmapDataCache.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LastUsedBeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LastUsedBeatmapDataCache::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x370e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreSameBeatmapDataCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LastUsedBeatmapDataCache::*)(::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::IEnvironmentInfo*,
                                                                                                             ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreSameBeatmapDataCached)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x370e270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                                                             { "AreSameBeatmapDataCached",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreRequiredGameplayModifiersSame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredGameplayModifiersSame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370e340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                            { "AreRequiredGameplayModifiersSame", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreRequiredPlayerSettingsSame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredPlayerSettingsSame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370e35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                            { "AreRequiredPlayerSettingsSame", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LastUsedBeatmapDataCache::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                             ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                             ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                              ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beatmapData, beatmapKey, environmentInfo, gameplayModifiers, playerSpecificSettings);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreSameBeatmapDataCached(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                                ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                                                           { "AreSameBeatmapDataCached",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, beatmapKey, environmentInfo, gameplayModifiers, playerSpecificSettings);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredGameplayModifiersSame(::GlobalNamespace::GameplayModifiers* first, ::GlobalNamespace::GameplayModifiers* second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                          { "AreRequiredGameplayModifiersSame", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredPlayerSettingsSame(::GlobalNamespace::PlayerSpecificSettings* first, ::GlobalNamespace::PlayerSpecificSettings* second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LastUsedBeatmapDataCache>(),
                          { "AreRequiredPlayerSettingsSame", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "cachedReadonlyBeatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_environmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LastUsedBeatmapDataCache::LastUsedBeatmapDataCache(::GlobalNamespace::IReadonlyBeatmapData* cachedReadonlyBeatmapData, ::GlobalNamespace::BeatmapKey _beatmapKey,
                                                                                ::GlobalNamespace::IEnvironmentInfo* _environmentInfo, ::GlobalNamespace::GameplayModifiers* _gameplayModifiers,
                                                                                ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings) noexcept {
  this->cachedReadonlyBeatmapData = cachedReadonlyBeatmapData;
  this->_beatmapKey = _beatmapKey;
  this->_environmentInfo = _environmentInfo;
  this->_gameplayModifiers = _gameplayModifiers;
  this->_playerSpecificSettings = _playerSpecificSettings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LastUsedBeatmapDataCache::LastUsedBeatmapDataCache() {}
