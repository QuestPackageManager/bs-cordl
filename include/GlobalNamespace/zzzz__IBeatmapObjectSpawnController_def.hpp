#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapObjectSpawnController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBeatmapObjectSpawnController)
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapObjectSpawnController);
// Type: ::IBeatmapObjectSpawnController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapObjectSpawnController*
class CORDL_TYPE IBeatmapObjectSpawnController {
public:
  // Declarations
  __declspec(property(get = get_beatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_verticalLayerDistance)) float_t verticalLayerDistance;

  /// @brief Method Get2DNoteOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer);

  /// @brief Method add_didInitEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method get_beatmapObjectSpawnMovementData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData();

  /// @brief Method get_isInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isInitialized();

  /// @brief Method get_jumpDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_jumpDistance();

  /// @brief Method get_jumpDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpOffsetY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_jumpOffsetY();

  /// @brief Method get_moveDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_moveDuration();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteLinesCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_noteLinesCount();

  /// @brief Method get_noteLinesDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_noteLinesDistance();

  /// @brief Method get_verticalLayerDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_verticalLayerDistance();

  /// @brief Method remove_didInitEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didInitEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapObjectSpawnController(IBeatmapObjectSpawnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectSpawnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapObjectSpawnController(IBeatmapObjectSpawnController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectSpawnController*, "", "IBeatmapObjectSpawnController");
