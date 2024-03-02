#pragma once
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LastUsedBeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LastUsedBeatmapDataCache::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12b95e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreSameBeatmapDataCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LastUsedBeatmapDataCache::*)(
    ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreSameBeatmapDataCached)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x12b9604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreSameBeatmapDataCached", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreRequiredGameplayModifiersSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredGameplayModifiersSame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12b973c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreRequiredGameplayModifiersSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LastUsedBeatmapDataCache.AreRequiredPlayerSettingsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredPlayerSettingsSame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12b9758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreRequiredPlayerSettingsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LastUsedBeatmapDataCache::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                             ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                             ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData, beatmapKey, environmentInfo, gameplayModifiers, playerSpecificSettings);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreSameBeatmapDataCached(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                                ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreSameBeatmapDataCached", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapKey, environmentInfo, gameplayModifiers, playerSpecificSettings);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredGameplayModifiersSame(::GlobalNamespace::GameplayModifiers* first, ::GlobalNamespace::GameplayModifiers* second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreRequiredGameplayModifiersSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second);
}
inline bool GlobalNamespace::LastUsedBeatmapDataCache::AreRequiredPlayerSettingsSame(::GlobalNamespace::PlayerSpecificSettings* first, ::GlobalNamespace::PlayerSpecificSettings* second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LastUsedBeatmapDataCache>::get(), "AreRequiredPlayerSettingsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "cachedReadonlyBeatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_environmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "_gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("nullptr") }]
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
