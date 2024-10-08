#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataAssetsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataAssetsModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataAssetsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataAssetsModel);
// Type: ::BeatmapDataAssetsModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataAssetsModel*
class CORDL_TYPE BeatmapDataAssetsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field kBeatmapLevelsDataStreamingAssetsPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kBeatmapLevelsDataStreamingAssetsPath, put = setStaticF_kBeatmapLevelsDataStreamingAssetsPath)) ::StringW kBeatmapLevelsDataStreamingAssetsPath;

  /// @brief Method AssetBundleStreamingAssetsPathForAssetBundleName, addr 0x267de80, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW AssetBundleStreamingAssetsPathForAssetBundleName(::StringW assetBundleName);

  /// @brief Method GetAssetBundleNameForBeatmapLevel, addr 0x267dc88, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBundleNameForBeatmapLevel(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion version);

  /// @brief Method GetAssetBundleNameWithVersionForBeatmapLevelData, addr 0x267dcfc, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBundleNameWithVersionForBeatmapLevelData(::StringW levelId, ::GlobalNamespace::BeatmapLevelDataVersion dataVersion, int32_t bundleVersion);

  /// @brief Method GetAssetBundleStreamingAssetsPathForBeatmapLevelId, addr 0x267ddd4, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBundleStreamingAssetsPathForBeatmapLevelId(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion version);

  /// @brief Method GetBeatmapLevelAssetFilenameForBeatmapLevel, addr 0x267dba4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBeatmapLevelAssetFilenameForBeatmapLevel(::StringW levelID);

  /// @brief Method GetBeatmapLevelDataAssetFilenameForBeatmapLevel, addr 0x267db58, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBeatmapLevelDataAssetFilenameForBeatmapLevel(::StringW levelID);

  /// @brief Method GetBeatmapLevelDataAssetNameForBeatmapLevel, addr 0x267dc3c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBeatmapLevelDataAssetNameForBeatmapLevel(::StringW levelID);

  /// @brief Method GetBeatmapLevelPackAssetFilename, addr 0x267dbf0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBeatmapLevelPackAssetFilename(::StringW packId);

  static inline ::StringW getStaticF_kBeatmapLevelsDataStreamingAssetsPath();

  static inline void setStaticF_kBeatmapLevelsDataStreamingAssetsPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataAssetsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataAssetsModel(BeatmapDataAssetsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataAssetsModel(BeatmapDataAssetsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataAssetsModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataAssetsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
