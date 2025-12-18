#pragma once
// IWYU pragma private; include "BeatSaber/Settings/MiscSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MiscSettings)
namespace BeatSaber::Settings {
struct MiscSettings_ResponseLevel;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct MiscSettings_ResponseLevel;
}
namespace BeatSaber::Settings {
struct MiscSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::MiscSettings_ResponseLevel);
MARK_VAL_T(::BeatSaber::Settings::MiscSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.MiscSettings/ResponseLevel
struct CORDL_TYPE MiscSettings_ResponseLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MiscSettings_ResponseLevel_Unwrapped
  enum struct __MiscSettings_ResponseLevel_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Long = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MiscSettings_ResponseLevel_Unwrapped() const noexcept {
    return static_cast<__MiscSettings_ResponseLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscSettings_ResponseLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MiscSettings_ResponseLevel(int32_t value__) noexcept;

  /// @brief Field Instant value: I32(0)
  static ::BeatSaber::Settings::MiscSettings_ResponseLevel const Instant;

  /// @brief Field Long value: I32(1)
  static ::BeatSaber::Settings::MiscSettings_ResponseLevel const Long;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::MiscSettings_ResponseLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::MiscSettings_ResponseLevel, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies BeatSaber.Settings.MiscSettings::ResponseLevel
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.MiscSettings
struct CORDL_TYPE MiscSettings {
public:
  // Declarations
  using ResponseLevel = ::BeatSaber::Settings::MiscSettings_ResponseLevel;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscSettings();

  // Ctor Parameters [CppParam { name: "language", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pauseButtonResponse", ty: "::BeatSaber::Settings::MiscSettings_ResponseLevel",
  // modifiers: "", def_value: None }]
  constexpr MiscSettings(::StringW language, ::BeatSaber::Settings::MiscSettings_ResponseLevel pauseButtonResponse) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field language, offset: 0x0, size: 0x8, def value: None
  ::StringW language;

  /// @brief Field pauseButtonResponse, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Settings::MiscSettings_ResponseLevel pauseButtonResponse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::MiscSettings, language) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::MiscSettings, pauseButtonResponse) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::MiscSettings, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::MiscSettings_ResponseLevel, "BeatSaber.Settings", "MiscSettings/ResponseLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::MiscSettings, "BeatSaber.Settings", "MiscSettings");
