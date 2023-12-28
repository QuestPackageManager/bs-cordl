#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataTransformHelper)
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataTransformHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataTransformHelper);
// Type: ::BeatmapDataTransformHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4133))
// CS Name: ::BeatmapDataTransformHelper*
class CORDL_TYPE BeatmapDataTransformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedBeatmapData addr 0x223b9d8 size 0x198 virtual false final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel,
                                                                                      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
                                                                                      ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset,
                                                                                      ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
                                                                                      ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel);

  /// @brief Method AddTestBurstSlider addr 0x223bc68 size 0xec virtual false final false
  static inline void AddTestBurstSlider(float_t time, float_t duration, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                        int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount,
                                        float_t squishAmount, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method AddTestSlider addr 0x223bd54 size 0x188 virtual false final false
  static inline void AddTestSlider(float_t time, float_t duration, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                   float_t headControlPointLength, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                   float_t tailControlPointLength, bool hasHeadNote, bool hasTailNote, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method IsObstaclesMergingNeeded addr 0x223bc5c size 0xc virtual false final false
  static inline bool IsObstaclesMergingNeeded(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, bool screenDisplacementEffectsEnabled);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataTransformHelper(BeatmapDataTransformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataTransformHelper(BeatmapDataTransformHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataTransformHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataTransformHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataTransformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
