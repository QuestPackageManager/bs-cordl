#pragma once
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
// Type: ::BeatmapEventTypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEventTypeExtensions*
class CORDL_TYPE BeatmapEventTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsCoreLightIntensityChangeEvent, addr 0x10353a0, size 0x1c, virtual false, abstract: false, final false
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

  /// @brief Field kColorBoost value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::BasicBeatmapEventType const kColorBoost;

  /// @brief Field kCompressExpand value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::BasicBeatmapEventType const kCompressExpand;

  /// @brief Field kLegacyEarlySpawnRotation value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::BasicBeatmapEventType const kLegacyEarlySpawnRotation;

  /// @brief Field kLegacyLateSpawnRotation value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::BasicBeatmapEventType const kLegacyLateSpawnRotation;

  /// @brief Field kLights1 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights1;

  /// @brief Field kLights2 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights2;

  /// @brief Field kLights3 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights3;

  /// @brief Field kLights4 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights4;

  /// @brief Field kLights5 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::BasicBeatmapEventType const kLights5;

  /// @brief Field kRotateRings value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::BasicBeatmapEventType const kRotateRings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventTypeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTypeExtensions*, "", "BeatmapEventTypeExtensions");
