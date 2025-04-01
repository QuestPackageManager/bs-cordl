#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataTransformHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataTransformHelper
class CORDL_TYPE BeatmapDataTransformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddTestBurstSlider, addr 0x26aacc0, size 0x104, virtual false, abstract: false, final false
  static inline void AddTestBurstSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method AddTestSlider, addr 0x26aadc4, size 0x1a8, virtual false, abstract: false, final false
  static inline void AddTestSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                   ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headControlPointLength, int32_t tailRotation, int32_t tailLineIndex,
                                   ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote,
                                   bool hasTailNote, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method CreateTransformedBeatmapData, addr 0x26aaa78, size 0x14c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
                                                                                      ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset,
                                                                                      ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
                                                                                      ::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method IsObstaclesMergingNeeded, addr 0x26aacb4, size 0xc, virtual false, abstract: false, final false
  static inline bool IsObstaclesMergingNeeded(::GlobalNamespace::BeatmapLevel* beatmapLevel, bool screenDisplacementEffectsEnabled);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataTransformHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataTransformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
