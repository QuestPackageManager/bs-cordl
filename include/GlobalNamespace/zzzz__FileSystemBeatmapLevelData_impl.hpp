#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemBeatmapLevelData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__FileDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(&::GlobalNamespace::FileSystemBeatmapLevelData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_songAudioClipPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(&::GlobalNamespace::FileSystemBeatmapLevelData::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_songAudioClipPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(&::GlobalNamespace::FileSystemBeatmapLevelData::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileSystemBeatmapLevelData::*)(
    ::StringW, ::StringW, ::StringW,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                                                            ::GlobalNamespace::FileDifficultyBeatmap*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetAudioDataStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataStringAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3726428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "GetAudioDataStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x37264e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3726600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetAudioDataString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(&::GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x37266a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "GetAudioDataString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3726720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x372673c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3726758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FileDifficultyBeatmap* (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3726590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                           { "GetDifficultyBeatmap", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3726770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                             { "IBeatmapLevelData.GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3726774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                             { "IBeatmapLevelData.GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3726778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                             { "IBeatmapLevelData.GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372677c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                             { "IBeatmapLevelData.GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3726780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                             { "IBeatmapLevelData.ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClipPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClipPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipPath;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioClipPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipPath = value;
}
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataPath;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioDataPath = value;
}
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::FileDifficultyBeatmap*>*&
GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::FileDifficultyBeatmap*>* const&
GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__difficultyBeatmaps(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyBeatmaps = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClip = value;
}
inline int32_t GlobalNamespace::FileSystemBeatmapLevelData::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::get_songAudioClipPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_songAudioClipPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void
GlobalNamespace::FileSystemBeatmapLevelData::_ctor(::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
                                                   ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                                                                ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                                                          ::GlobalNamespace::FileDifficultyBeatmap*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, audioClipPath, audioDataPath, difficultyBeatmaps);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataStringAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "GetAudioDataStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "GetAudioDataString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(), { "GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::FileSystemBeatmapLevelData::ContainsBeatmapData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::FileDifficultyBeatmap* GlobalNamespace::FileSystemBeatmapLevelData::GetDifficultyBeatmap(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "GetDifficultyBeatmap", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FileDifficultyBeatmap*>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                           { "IBeatmapLevelData.GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                           { "IBeatmapLevelData.GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                                                         { "IBeatmapLevelData.GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                           { "IBeatmapLevelData.GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_ContainsBeatmapData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemBeatmapLevelData*>(),
                                                           { "IBeatmapLevelData.ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::FileSystemBeatmapLevelData* GlobalNamespace::FileSystemBeatmapLevelData::New_ctor(
    ::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*
        difficultyBeatmaps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileSystemBeatmapLevelData*>(name, audioClipPath, audioDataPath, difficultyBeatmaps));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr GlobalNamespace::FileSystemBeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::FileSystemBeatmapLevelData::i___GlobalNamespace__IBeatmapLevelData() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr GlobalNamespace::FileSystemBeatmapLevelData::operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* GlobalNamespace::FileSystemBeatmapLevelData::i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemBeatmapLevelData::FileSystemBeatmapLevelData() {}
