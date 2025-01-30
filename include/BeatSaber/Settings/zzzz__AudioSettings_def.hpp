#pragma once
// IWYU pragma private; include "BeatSaber/Settings/AudioSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct AudioSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::AudioSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.AudioSettings
struct CORDL_TYPE AudioSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettings();

  // Ctor Parameters [CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ambientVolumeScale", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "latency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overrideLatency", ty: "bool", modifiers: "", def_value: None }]
  constexpr AudioSettings(float_t volume, float_t ambientVolumeScale, float_t latency, bool overrideLatency) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field volume, offset: 0x0, size: 0x4, def value: None
  float_t volume;

  /// @brief Field ambientVolumeScale, offset: 0x4, size: 0x4, def value: None
  float_t ambientVolumeScale;

  /// @brief Field latency, offset: 0x8, size: 0x4, def value: None
  float_t latency;

  /// @brief Field overrideLatency, offset: 0xc, size: 0x1, def value: None
  bool overrideLatency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::AudioSettings, volume) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::AudioSettings, ambientVolumeScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::AudioSettings, latency) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::AudioSettings, overrideLatency) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::AudioSettings, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::AudioSettings, "BeatSaber.Settings", "AudioSettings");
