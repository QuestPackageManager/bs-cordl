#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataTransformHelper)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataTransformHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataTransformHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataTransformHelper
class CORDL_TYPE BeatmapDataTransformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddTestBurstSlider, addr 0x37046a4, size 0x134, virtual false, abstract: false, final false
  static inline void AddTestBurstSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method AddTestSlider, addr 0x37047d8, size 0x19c, virtual false, abstract: false, final false
  static inline void AddTestSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                   ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headControlPointLength, int32_t tailRotation, int32_t tailLineIndex,
                                   ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote,
                                   bool hasTailNote, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method CreateTransformedBeatmapData, addr 0x370443c, size 0x168, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
                                                                                      ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset,
                                                                                      ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
                                                                                      ::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method IsObstaclesMergingNeeded, addr 0x3704698, size 0xc, virtual false, abstract: false, final false
  static inline bool IsObstaclesMergingNeeded(::StringW beatmapLevelId, bool screenDisplacementEffectsEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataTransformHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataTransformHelper(BeatmapDataTransformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataTransformHelper(BeatmapDataTransformHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDataTransformHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
