#pragma once
// IWYU pragma private; include "BeatSaber/Settings/ControllerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__SelectedProfile_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct ControllerSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::ControllerSettings);
// Dependencies BeatSaber.Settings.SelectedProfile, Unity.Mathematics.float3
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.ControllerSettings
struct CORDL_TYPE ControllerSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerSettings();

  // Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None }, CppParam { name: "hapticFeedback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "selectedProfile", ty: "::BeatSaber::Settings::SelectedProfile", modifiers:
  // "", def_value: None }]
  constexpr ControllerSettings(::Unity::Mathematics::float3 position, ::Unity::Mathematics::float3 rotation, bool hapticFeedback, ::BeatSaber::Settings::SelectedProfile selectedProfile) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21808 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 position;

  /// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 rotation;

  /// @brief Field hapticFeedback, offset: 0x18, size: 0x1, def value: None
  bool hapticFeedback;

  /// @brief Field selectedProfile, offset: 0x1c, size: 0x8, def value: None
  ::BeatSaber::Settings::SelectedProfile selectedProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, hapticFeedback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, selectedProfile) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::ControllerSettings, 0x24>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::ControllerSettings, "BeatSaber.Settings", "ControllerSettings");
