#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBeatmapObjectSpawnMovementData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticBeatmapObjectSpawnMovementData)
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticBeatmapObjectSpawnMovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData);
// Type: ::StaticBeatmapObjectSpawnMovementData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StaticBeatmapObjectSpawnMovementData*
class CORDL_TYPE StaticBeatmapObjectSpawnMovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get2DNoteOffset, addr 0x1044a08, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, int32_t noteLinesCount, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method LineYPosForLineLayer, addr 0x1044d08, size 0x24, virtual false, abstract: false, final false
  static inline float_t LineYPosForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method get_layerHeight, addr 0x1044d2c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_layerHeight();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticBeatmapObjectSpawnMovementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData const&) = delete;

  /// @brief Field kBaseLinesYPos offset 0xffffffff size 0x4
  static constexpr float_t kBaseLinesYPos{ 0.25 };

  /// @brief Field kNoteLinesDistance offset 0xffffffff size 0x4
  static constexpr float_t kNoteLinesDistance{ 0.6 };

  /// @brief Field kObstacleVerticalOffset offset 0xffffffff size 0x4
  static constexpr float_t kObstacleVerticalOffset{ -0.15 };

  /// @brief Field kTopLinesYPos offset 0xffffffff size 0x4
  static constexpr float_t kTopLinesYPos{ 1.45 };

  /// @brief Field kUpperLinesYPos offset 0xffffffff size 0x4
  static constexpr float_t kUpperLinesYPos{ 0.85 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*, "", "StaticBeatmapObjectSpawnMovementData");
