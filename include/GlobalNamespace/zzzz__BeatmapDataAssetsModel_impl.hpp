#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataAssetsModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataAssetsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetBeatmapLevelDataAssetFilenameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelDataAssetFilenameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x371ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelDataAssetFilenameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetBeatmapLevelAssetFilenameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelAssetFilenameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x371ca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelAssetFilenameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetBeatmapLevelPackAssetFilename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelPackAssetFilename)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x371cad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelPackAssetFilename", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetBeatmapLevelDataAssetNameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelDataAssetNameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x371cb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelDataAssetNameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetAssetBundleNameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapLevelDataVersion)>(
    &::GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleNameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x371cb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
                                                { "GetAssetBundleNameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetAssetBundleNameWithVersionForBeatmapLevelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapLevelDataVersion, int32_t)>(
    &::GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleNameWithVersionForBeatmapLevelData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x371cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
            { "GetAssetBundleNameWithVersionForBeatmapLevelData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.GetAssetBundleStreamingAssetsPathForBeatmapLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapLevelDataVersion)>(
    &::GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleStreamingAssetsPathForBeatmapLevelId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x371cd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
                                         { "GetAssetBundleStreamingAssetsPathForBeatmapLevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.AssetBundleStreamingAssetsPathForAssetBundleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::AssetBundleStreamingAssetsPathForAssetBundleName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x371cdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "AssetBundleStreamingAssetsPathForAssetBundleName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataAssetsModel::setStaticF_kBeatmapLevelsDataStreamingAssetsPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBeatmapLevelsDataStreamingAssetsPath", ::GlobalNamespace::BeatmapDataAssetsModel*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::getStaticF_kBeatmapLevelsDataStreamingAssetsPath() {
  return ::cordl_internals::getStaticField<::StringW, "kBeatmapLevelsDataStreamingAssetsPath", ::GlobalNamespace::BeatmapDataAssetsModel*>();
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelDataAssetFilenameForBeatmapLevel(::StringW levelID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelDataAssetFilenameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelID);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelAssetFilenameForBeatmapLevel(::StringW levelID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelAssetFilenameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelID);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelPackAssetFilename(::StringW packId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelPackAssetFilename", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, packId);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetBeatmapLevelDataAssetNameForBeatmapLevel(::StringW levelID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "GetBeatmapLevelDataAssetNameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelID);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleNameForBeatmapLevel(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
                                              { "GetAssetBundleNameForBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelID, version);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleNameWithVersionForBeatmapLevelData(::StringW levelId, ::GlobalNamespace::BeatmapLevelDataVersion dataVersion,
                                                                                                           int32_t bundleVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
          { "GetAssetBundleNameWithVersionForBeatmapLevelData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelId, dataVersion, bundleVersion);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::GetAssetBundleStreamingAssetsPathForBeatmapLevelId(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(),
                                       { "GetAssetBundleStreamingAssetsPathForBeatmapLevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelID, version);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::AssetBundleStreamingAssetsPathForAssetBundleName(::StringW assetBundleName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAssetsModel*>(), { "AssetBundleStreamingAssetsPathForAssetBundleName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, assetBundleName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataAssetsModel::BeatmapDataAssetsModel() {}
