#pragma once
// IWYU pragma private; include "BeatSaber/Settings/DebugSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DebugSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct DebugSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::DebugSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.DebugSettings
struct CORDL_TYPE DebugSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugSettings();

  // Ctor Parameters [CppParam { name: "showBeatmapLevelVersion", ty: "bool", modifiers: "", def_value: None }]
  constexpr DebugSettings(bool showBeatmapLevelVersion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field showBeatmapLevelVersion, offset: 0x0, size: 0x1, def value: None
  bool showBeatmapLevelVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::DebugSettings, showBeatmapLevelVersion) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::DebugSettings, 0x1>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::DebugSettings, "BeatSaber.Settings", "DebugSettings");
