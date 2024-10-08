#pragma once
// IWYU pragma private; include "BeatSaber/Settings/MiscSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MiscSettings)
namespace BeatSaber::Settings {
struct __MiscSettings__ResponseLevel;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct __MiscSettings__ResponseLevel;
}
namespace BeatSaber::Settings {
struct MiscSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::__MiscSettings__ResponseLevel);
MARK_VAL_T(::BeatSaber::Settings::MiscSettings);
// Type: ::ResponseLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::MiscSettings::ResponseLevel
struct CORDL_TYPE __MiscSettings__ResponseLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MiscSettings__ResponseLevel_Unwrapped
  enum struct ____MiscSettings__ResponseLevel_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Long = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MiscSettings__ResponseLevel_Unwrapped() const noexcept {
    return static_cast<____MiscSettings__ResponseLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MiscSettings__ResponseLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MiscSettings__ResponseLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Instant value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__MiscSettings__ResponseLevel const Instant;

  /// @brief Field Long value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__MiscSettings__ResponseLevel const Long;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__MiscSettings__ResponseLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__MiscSettings__ResponseLevel, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: BeatSaber.Settings::MiscSettings
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::BeatSaber.Settings::MiscSettings
struct CORDL_TYPE MiscSettings {
public:
  // Declarations
  using ResponseLevel = ::BeatSaber::Settings::__MiscSettings__ResponseLevel;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscSettings();

  // Ctor Parameters [CppParam { name: "language", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pauseButtonResponse", ty:
  // "::BeatSaber::Settings::__MiscSettings__ResponseLevel", modifiers: "", def_value: None }]
  constexpr MiscSettings(::StringW language, ::BeatSaber::Settings::__MiscSettings__ResponseLevel pauseButtonResponse) noexcept;

  /// @brief Field language, offset: 0x0, size: 0x8, def value: None
  ::StringW language;

  /// @brief Field pauseButtonResponse, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Settings::__MiscSettings__ResponseLevel pauseButtonResponse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::MiscSettings, 0x10>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::MiscSettings, language) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::MiscSettings, pauseButtonResponse) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__MiscSettings__ResponseLevel, "BeatSaber.Settings", "MiscSettings/ResponseLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::MiscSettings, "BeatSaber.Settings", "MiscSettings");
