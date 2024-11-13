#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IBeatmapObjectSpawner)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapObjectSpawner);
// Type: ::IBeatmapObjectSpawner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapObjectSpawner*
class CORDL_TYPE IBeatmapObjectSpawner {
public:
  // Declarations
  /// @brief Method ProcessNoteData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapObjectSpawner(IBeatmapObjectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapObjectSpawner(IBeatmapObjectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4071 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectSpawner*, "", "IBeatmapObjectSpawner");
