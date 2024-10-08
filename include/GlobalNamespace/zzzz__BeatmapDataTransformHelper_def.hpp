#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BeatmapDataTransformHelper)
namespace BeatSaber::Settings {
struct Settings;
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
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataTransformHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataTransformHelper);
// Type: ::BeatmapDataTransformHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataTransformHelper*
class CORDL_TYPE BeatmapDataTransformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateTransformedBeatmapData, addr 0x266c610, size 0x14c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded,
                                                                                      ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset,
                                                                                      ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions,
                                                                                      ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method IsObstaclesMergingNeeded, addr 0x266c84c, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataTransformHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataTransformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
