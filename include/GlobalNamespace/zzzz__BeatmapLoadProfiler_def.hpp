#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLoadProfiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapLoadProfiler)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLoadProfiler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapLoadProfiler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLoadProfiler*, "", "BeatmapLoadProfiler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLoadProfiler
class CORDL_TYPE BeatmapLoadProfiler : public ::System::Object {
public:
  // Declarations
  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method BeginLoad, addr 0x5c9f598, size 0x4, virtual false, abstract: false, final false
  static inline void BeginLoad(::StringW levelIdentity);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method EndLoadAndLog, addr 0x5c9f5a4, size 0x4, virtual false, abstract: false, final false
  static inline void EndLoadAndLog();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method MarkCacheOutcome, addr 0x5c9f5a0, size 0x4, virtual false, abstract: false, final false
  static inline void MarkCacheOutcome(bool wasHit, bool wasTaskAlreadyComplete);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method MarkStage, addr 0x5c9f59c, size 0x4, virtual false, abstract: false, final false
  static inline void MarkStage(::StringW stage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLoadProfiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLoadProfiler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLoadProfiler(BeatmapLoadProfiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLoadProfiler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLoadProfiler(BeatmapLoadProfiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23597 };

  /// @brief Field kEntitlementVersionStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kEntitlementVersionStage{ u"EntitlementVersion" };

  /// @brief Field kLoadBeatmapLevelDataStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadBeatmapLevelDataStage{ u"LoadBeatmapLevelData" };

  /// @brief Field kLoadLevelDataForTransformStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadLevelDataForTransformStage{ u"LoadLevelDataForTransform" };

  /// @brief Field kLoadSongAudioClipStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadSongAudioClipStage{ u"LoadSongAudioClip" };

  /// @brief Field kLogPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLogPrefix{ u"[BeatmapLoadTime]" };

  /// @brief Field kParseSaveDataStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kParseSaveDataStage{ u"ParseSaveData" };

  /// @brief Field kReadJsonFilesStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kReadJsonFilesStage{ u"ReadJsonFiles" };

  /// @brief Field kResolveVersionStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kResolveVersionStage{ u"ResolveVersion" };

  /// @brief Field kSniffVersionStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kSniffVersionStage{ u"SniffVersion" };

  /// @brief Field kTransformBeatmapDataStage offset 0xffffffff size 0x8
  static constexpr ::ConstString kTransformBeatmapDataStage{ u"TransformBeatmapData" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapLoadProfiler) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
