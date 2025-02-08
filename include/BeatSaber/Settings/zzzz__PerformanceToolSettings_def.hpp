#pragma once
// IWYU pragma private; include "BeatSaber/Settings/PerformanceToolSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct PerformanceToolSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::PerformanceToolSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.PerformanceToolSettings
struct CORDL_TYPE PerformanceToolSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolSettings();

  // Ctor Parameters [CppParam { name: "recordFps", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "showFps", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "showMemory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saveScreenshot", ty: "bool", modifiers: "", def_value: None }]
  constexpr PerformanceToolSettings(bool recordFps, bool showFps, bool showMemory, bool saveScreenshot) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field recordFps, offset: 0x0, size: 0x1, def value: None
  bool recordFps;

  /// @brief Field showFps, offset: 0x1, size: 0x1, def value: None
  bool showFps;

  /// @brief Field showMemory, offset: 0x2, size: 0x1, def value: None
  bool showMemory;

  /// @brief Field saveScreenshot, offset: 0x3, size: 0x1, def value: None
  bool saveScreenshot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::PerformanceToolSettings, recordFps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::PerformanceToolSettings, showFps) == 0x1, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::PerformanceToolSettings, showMemory) == 0x2, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::PerformanceToolSettings, saveScreenshot) == 0x3, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::PerformanceToolSettings, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::PerformanceToolSettings, "BeatSaber.Settings", "PerformanceToolSettings");
