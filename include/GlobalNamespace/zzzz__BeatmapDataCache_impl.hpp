#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataCache.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache_CacheKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataCache_CacheKey::*)(
    ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*,
    ::GlobalNamespace::BeatmapLevelDataVersion, bool)>(&::GlobalNamespace::BeatmapDataCache_CacheKey::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x37111bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache_CacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapDataCache_CacheKey::*)(::GlobalNamespace::BeatmapDataCache_CacheKey)>(
    &::GlobalNamespace::BeatmapDataCache_CacheKey::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x37110f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCache_CacheKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache_CacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapDataCache_CacheKey::*)(::System::Object*)>(&::GlobalNamespace::BeatmapDataCache_CacheKey::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3711208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), { ::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache_CacheKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataCache_CacheKey::*)()>(&::GlobalNamespace::BeatmapDataCache_CacheKey::GetHashCode)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x371129c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), { ::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), 2 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataCache_CacheKey::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                              ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                              ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, bool screenDisplacementEffects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beatmapKey, environmentInfo, gameplayModifiers, playerSpecificSettings, beatmapLevelDataVersion,
                                                   screenDisplacementEffects);
}
inline bool GlobalNamespace::BeatmapDataCache_CacheKey::Equals(::GlobalNamespace::BeatmapDataCache_CacheKey other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCache_CacheKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BeatmapDataCache_CacheKey::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BeatmapDataCache_CacheKey::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataCache_CacheKey>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>"
constexpr GlobalNamespace::BeatmapDataCache_CacheKey::operator ::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>* GlobalNamespace::BeatmapDataCache_CacheKey::i___System__IEquatable_1___GlobalNamespace__BeatmapDataCache_CacheKey_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_environmentInfo", ty:
// "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_leftHanded", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_effectsFilterPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_screenDisplacementEffects", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevelDataVersion", ty:
// "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey::BeatmapDataCache_CacheKey(::GlobalNamespace::BeatmapKey _beatmapKey, ::GlobalNamespace::IEnvironmentInfo* _environmentInfo,
                                                                                  ::GlobalNamespace::GameplayModifiers* _gameplayModifiers, bool _leftHanded,
                                                                                  ::GlobalNamespace::EnvironmentEffectsFilterPreset _effectsFilterPreset, bool _screenDisplacementEffects,
                                                                                  ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion) noexcept {
  this->_beatmapKey = _beatmapKey;
  this->_environmentInfo = _environmentInfo;
  this->_gameplayModifiers = _gameplayModifiers;
  this->_leftHanded = _leftHanded;
  this->_effectsFilterPreset = _effectsFilterPreset;
  this->_screenDisplacementEffects = _screenDisplacementEffects;
  this->_beatmapLevelDataVersion = _beatmapLevelDataVersion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey::BeatmapDataCache_CacheKey() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataCache::*)(
    ::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>, ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*)>(&::GlobalNamespace::BeatmapDataCache::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37110a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>>(),
                                                                                               ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache.AreSameBeatmapDataCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapDataCache::*)(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>)>(
    &::GlobalNamespace::BeatmapDataCache::AreSameBeatmapDataCached)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x37110c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache*>(),
                                                             { "AreSameBeatmapDataCached", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*& GlobalNamespace::BeatmapDataCache::__cordl_internal_get_transformedBeatmapDataTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapDataTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* const& GlobalNamespace::BeatmapDataCache::__cordl_internal_get_transformedBeatmapDataTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapDataTask;
}
constexpr void GlobalNamespace::BeatmapDataCache::__cordl_internal_set_transformedBeatmapDataTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transformedBeatmapDataTask = value;
}
constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey& GlobalNamespace::BeatmapDataCache::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey const& GlobalNamespace::BeatmapDataCache::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void GlobalNamespace::BeatmapDataCache::__cordl_internal_set__key(::GlobalNamespace::BeatmapDataCache_CacheKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
inline void GlobalNamespace::BeatmapDataCache::_ctor(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key,
                                                     ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* transformedBeatmapDataTask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>>(),
                                                                                             ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, transformedBeatmapDataTask);
}
inline bool GlobalNamespace::BeatmapDataCache::AreSameBeatmapDataCached(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCache*>(), { "AreSameBeatmapDataCached", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::GlobalNamespace::BeatmapDataCache* GlobalNamespace::BeatmapDataCache::New_ctor(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key,
                                                                                        ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* transformedBeatmapDataTask) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataCache*>(key, transformedBeatmapDataTask));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataCache::BeatmapDataCache() {}
