#pragma once
// IWYU pragma private; include "BeatSaber/Settings/WindowSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WindowSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct WindowSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::WindowSettings);
// Dependencies Unity.Mathematics.int2
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.WindowSettings
struct CORDL_TYPE WindowSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowSettings();

  // Ctor Parameters [CppParam { name: "fullscreen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
  constexpr WindowSettings(bool fullscreen, ::Unity::Mathematics::int2 resolution) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21849 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field fullscreen, offset: 0x0, size: 0x1, def value: None
  bool fullscreen;

  /// @brief Field resolution, offset: 0x4, size: 0x8, def value: None
  ::Unity::Mathematics::int2 resolution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::WindowSettings, fullscreen) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::WindowSettings, resolution) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::WindowSettings, 0xc>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::WindowSettings, "BeatSaber.Settings", "WindowSettings");
