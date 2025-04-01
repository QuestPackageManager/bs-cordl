#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataLightsExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataLightsExtensions)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataLightsExtensions;
}
namespace GlobalNamespace {
class BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataLightsExtensions);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataLightsExtensions/LightSwitchEventEffectDataValues
class CORDL_TYPE BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues(BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues(BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17046 };

  /// @brief Field kFadeA offset 0xffffffff size 0x4
  static constexpr int32_t kFadeA{ static_cast<int32_t>(0x4) };

  /// @brief Field kFadeB offset 0xffffffff size 0x4
  static constexpr int32_t kFadeB{ static_cast<int32_t>(0x8) };

  /// @brief Field kFadeW offset 0xffffffff size 0x4
  static constexpr int32_t kFadeW{ static_cast<int32_t>(0xc) };

  /// @brief Field kFlashAndFadeToBlack offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlack{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kFlashAndFadeToBlackA offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackA{ static_cast<int32_t>(0x3) };

  /// @brief Field kFlashAndFadeToBlackB offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackB{ static_cast<int32_t>(0x7) };

  /// @brief Field kFlashAndFadeToBlackW offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackW{ static_cast<int32_t>(0xb) };

  /// @brief Field kHighlightA offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightA{ static_cast<int32_t>(0x2) };

  /// @brief Field kHighlightB offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightB{ static_cast<int32_t>(0x6) };

  /// @brief Field kHighlightW offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightW{ static_cast<int32_t>(0xa) };

  /// @brief Field kOff offset 0xffffffff size 0x4
  static constexpr int32_t kOff{ static_cast<int32_t>(0x0) };

  /// @brief Field kOnA offset 0xffffffff size 0x4
  static constexpr int32_t kOnA{ static_cast<int32_t>(0x1) };

  /// @brief Field kOnB offset 0xffffffff size 0x4
  static constexpr int32_t kOnB{ static_cast<int32_t>(0x5) };

  /// @brief Field kOnW offset 0xffffffff size 0x4
  static constexpr int32_t kOnW{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataLightsExtensions
class CORDL_TYPE BeatmapEventDataLightsExtensions : public ::System::Object {
public:
  // Declarations
  using LightSwitchEventEffectDataValues = ::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues;

  /// @brief Method GetLightColorTypeFromEventDataValue, addr 0x223f26c, size 0x24, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentColorType GetLightColorTypeFromEventDataValue(int32_t beatmapEventValue);

  /// @brief Method HasFixedDurationLightSwitchEventDataValue, addr 0x223f2c8, size 0x38, virtual false, abstract: false, final false
  static inline bool HasFixedDurationLightSwitchEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HasFixedDurationLightSwitchEventDataValue, addr 0x223f300, size 0x24, virtual false, abstract: false, final false
  static inline bool HasFixedDurationLightSwitchEventDataValue(int32_t beatmapEventValue);

  /// @brief Method HasLightFadeEventDataValue, addr 0x223f290, size 0x38, virtual false, abstract: false, final false
  static inline bool HasLightFadeEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method LightColorTypeFromEventDataValue, addr 0x223f234, size 0x38, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentColorType LightColorTypeFromEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataLightsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataLightsExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataLightsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataLightsExtensions*, "", "BeatmapEventDataLightsExtensions");
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues*, "", "BeatmapEventDataLightsExtensions/LightSwitchEventEffectDataValues");
