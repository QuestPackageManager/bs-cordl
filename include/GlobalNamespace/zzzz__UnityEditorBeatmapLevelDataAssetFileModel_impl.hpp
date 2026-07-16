#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEditorBeatmapLevelDataAssetFileModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityEditorBeatmapLevelDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel.LoadBeatmapLevelDataFromAssetDatabase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelDataSO> (*)(::StringW)>(
    &::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelDataFromAssetDatabase)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3751480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                           { "LoadBeatmapLevelDataFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel.LoadBeatmapLevelFromAssetDatabase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelSO> (*)(::StringW)>(
    &::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelFromAssetDatabase)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x37514f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                           { "LoadBeatmapLevelFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel.LoadBeatmapLevelPackFromAssetDatabase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelPackSO> (*)(::StringW)>(
    &::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelPackFromAssetDatabase)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3751570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                           { "LoadBeatmapLevelPackFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelDataFromAssetDatabase(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                         { "LoadBeatmapLevelDataFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelDataSO>>(nullptr, ___internal_method, levelId);
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelFromAssetDatabase(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                         { "LoadBeatmapLevelFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelSO>>(nullptr, ___internal_method, levelId);
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadBeatmapLevelPackFromAssetDatabase(::StringW packId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                         { "LoadBeatmapLevelPackFromAssetDatabase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>(nullptr, ___internal_method, packId);
}
template <typename T> inline ::ArrayW<T> GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadAllAssetsFromAssetDatabase() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(), { "LoadAllAssetsFromAssetDatabase", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template <typename T> inline T GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::LoadUniqueAssetFromAssetDatabase(::StringW filename) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*>(),
                                                                                              { "LoadUniqueAssetFromAssetDatabase", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, filename);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel::UnityEditorBeatmapLevelDataAssetFileModel() {}
