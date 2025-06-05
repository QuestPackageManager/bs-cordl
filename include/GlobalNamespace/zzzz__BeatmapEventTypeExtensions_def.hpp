#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventTypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEventTypeExtensions)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventTypeExtensions);
// Dependencies BasicBeatmapEventType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventTypeExtensions
class CORDL_TYPE BeatmapEventTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsCoreLightIntensityChangeEvent, addr 0x2242d94, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCoreLightIntensityChangeEvent(::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17051 };

  /// @brief Field kColorBoost value: I32(5)
  static ::GlobalNamespace::BasicBeatmapEventType const kColorBoost;

  /// @brief Field kCompressExpand value: I32(9)
  static ::GlobalNamespace::BasicBeatmapEventType const kCompressExpand;

  /// @brief Field kLegacyEarlySpawnRotation value: I32(14)
  static ::GlobalNamespace::BasicBeatmapEventType const kLegacyEarlySpawnRotation;

  /// @brief Field kLegacyLateSpawnRotation value: I32(15)
  static ::GlobalNamespace::BasicBeatmapEventType const kLegacyLateSpawnRotation;

  /// @brief Field kLights1 value: I32(0)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights1;

  /// @brief Field kLights2 value: I32(1)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights2;

  /// @brief Field kLights3 value: I32(2)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights3;

  /// @brief Field kLights4 value: I32(3)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights4;

  /// @brief Field kLights5 value: I32(4)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights5;

  /// @brief Field kNoteJumpMovementSpeedChange value: I32(1000)
  static ::GlobalNamespace::BasicBeatmapEventType const kNoteJumpMovementSpeedChange;

  /// @brief Field kRotateRings value: I32(8)
  static ::GlobalNamespace::BasicBeatmapEventType const kRotateRings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventTypeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTypeExtensions*, "", "BeatmapEventTypeExtensions");
