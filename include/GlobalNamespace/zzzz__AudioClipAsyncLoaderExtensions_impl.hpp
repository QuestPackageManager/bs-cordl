#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioClipAsyncLoaderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoaderExtensions_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoaderExtensions.LoadPreview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (*)(::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::BeatmapLevel*)>(
        &::GlobalNamespace::AudioClipAsyncLoaderExtensions::LoadPreview)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3720840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                                { "LoadPreview", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoaderExtensions.UnloadPreview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::AudioClipAsyncLoaderExtensions::UnloadPreview)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x37208ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                                { "UnloadPreview", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoaderExtensions.LoadSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (*)(::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::IBeatmapLevelData*)>(
        &::GlobalNamespace::AudioClipAsyncLoaderExtensions::LoadSong)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3720998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                                { "LoadSong", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoaderExtensions.UnloadSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::AudioClipAsyncLoaderExtensions::UnloadSong)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x371f120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                                { "UnloadSong", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoaderExtensions::LoadPreview(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader,
                                                                                                                                            ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                                           { "LoadPreview", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(nullptr, ___internal_method, asyncLoader, beatmapLevel);
}
inline void GlobalNamespace::AudioClipAsyncLoaderExtensions::UnloadPreview(::GlobalNamespace::AudioClipAsyncLoader* _, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                              { "UnloadPreview", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoaderExtensions::LoadSong(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader,
                                                                                                                                         ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                              { "LoadSong", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(nullptr, ___internal_method, asyncLoader, beatmapLevelData);
}
inline void GlobalNamespace::AudioClipAsyncLoaderExtensions::UnloadSong(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoaderExtensions*>(),
                                              { "UnloadSong", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncLoader, beatmapLevelData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoaderExtensions::AudioClipAsyncLoaderExtensions() {}
