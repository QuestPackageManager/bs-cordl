#pragma once
// IWYU pragma private; include "BeatSaber/Settings/CustomServerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CustomServerSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct CustomServerSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::CustomServerSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.CustomServerSettings
struct CORDL_TYPE CustomServerSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomServerSettings();

  // Ctor Parameters [CppParam { name: "useCustomEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceGameLiftEnvironment", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr CustomServerSettings(bool useCustomEnvironment, bool forceGameLiftEnvironment, ::StringW hostName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field useCustomEnvironment, offset: 0x0, size: 0x1, def value: None
  bool useCustomEnvironment;

  /// @brief Field forceGameLiftEnvironment, offset: 0x1, size: 0x1, def value: None
  bool forceGameLiftEnvironment;

  /// @brief Field hostName, offset: 0x8, size: 0x8, def value: None
  ::StringW hostName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::CustomServerSettings, useCustomEnvironment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::CustomServerSettings, forceGameLiftEnvironment) == 0x1, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::CustomServerSettings, hostName) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::CustomServerSettings, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::CustomServerSettings, "BeatSaber.Settings", "CustomServerSettings");
