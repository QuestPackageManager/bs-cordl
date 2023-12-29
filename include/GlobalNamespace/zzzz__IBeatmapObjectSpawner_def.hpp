#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IBeatmapObjectSpawner)
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapObjectSpawner);
// Type: ::IBeatmapObjectSpawner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4852))
// CS Name: ::IBeatmapObjectSpawner*
class CORDL_TYPE IBeatmapObjectSpawner {
public:
  // Declarations
  /// @brief Method ProcessObstacleData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessNoteData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessSliderData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapObjectSpawner(IBeatmapObjectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapObjectSpawner(IBeatmapObjectSpawner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectSpawner*, "", "IBeatmapObjectSpawner");
