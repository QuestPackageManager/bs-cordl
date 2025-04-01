#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QuestSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestSettings)
namespace BeatSaber::Settings {
struct QuestSettings_FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct QuestSettings_SuggestedPerformanceLevel;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct QuestSettings_FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct QuestSettings_SuggestedPerformanceLevel;
}
namespace BeatSaber::Settings {
struct QuestSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel);
MARK_VAL_T(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel);
MARK_VAL_T(::BeatSaber::Settings::QuestSettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QuestSettings/SuggestedPerformanceLevel
struct CORDL_TYPE QuestSettings_SuggestedPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QuestSettings_SuggestedPerformanceLevel_Unwrapped
  enum struct __QuestSettings_SuggestedPerformanceLevel_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_PowerSavings = static_cast<int32_t>(0x1),
    __E_SustainedLow = static_cast<int32_t>(0x2),
    __E_SustainedHigh = static_cast<int32_t>(0x3),
    __E_Boost = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QuestSettings_SuggestedPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<__QuestSettings_SuggestedPerformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestSettings_SuggestedPerformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QuestSettings_SuggestedPerformanceLevel(int32_t value__) noexcept;

  /// @brief Field Boost value: I32(4)
  static ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel const Boost;

  /// @brief Field Default value: I32(0)
  static ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel const Default;

  /// @brief Field PowerSavings value: I32(1)
  static ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel const PowerSavings;

  /// @brief Field SustainedHigh value: I32(3)
  static ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel const SustainedHigh;

  /// @brief Field SustainedLow value: I32(2)
  static ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel const SustainedLow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QuestSettings/FoveatedRenderingLevel
struct CORDL_TYPE QuestSettings_FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QuestSettings_FoveatedRenderingLevel_Unwrapped
  enum struct __QuestSettings_FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QuestSettings_FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<__QuestSettings_FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestSettings_FoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QuestSettings_FoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: I32(4)
  static ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: I32(1)
  static ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: I32(2)
  static ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel const Medium;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18028 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies BeatSaber.Settings.QuestSettings::FoveatedRenderingLevel, BeatSaber.Settings.QuestSettings::SuggestedPerformanceLevel
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QuestSettings
struct CORDL_TYPE QuestSettings {
public:
  // Declarations
  using FoveatedRenderingLevel = ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel;

  using SuggestedPerformanceLevel = ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestSettings();

  // Ctor Parameters [CppParam { name: "cpuLevel", ty: "::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel", modifiers: "", def_value: None }, CppParam { name: "gpuLevel", ty:
  // "::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMenu", ty:
  // "::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingGameplay", ty:
  // "::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "eyeTrackedFoveatedRendering", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "dynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: None }]
  constexpr QuestSettings(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel cpuLevel, ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel gpuLevel,
                          ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingMenu, ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingGameplay,
                          bool eyeTrackedFoveatedRendering, bool dynamicFoveatedRendering) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18029 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field cpuLevel, offset: 0x0, size: 0x4, def value: None
  ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel cpuLevel;

  /// @brief Field gpuLevel, offset: 0x4, size: 0x4, def value: None
  ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel gpuLevel;

  /// @brief Field foveatedRenderingMenu, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingMenu;

  /// @brief Field foveatedRenderingGameplay, offset: 0xc, size: 0x4, def value: None
  ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingGameplay;

  /// @brief Field eyeTrackedFoveatedRendering, offset: 0x10, size: 0x1, def value: None
  bool eyeTrackedFoveatedRendering;

  /// @brief Field dynamicFoveatedRendering, offset: 0x11, size: 0x1, def value: None
  bool dynamicFoveatedRendering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QuestSettings, cpuLevel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, gpuLevel) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, foveatedRenderingMenu) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, foveatedRenderingGameplay) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, eyeTrackedFoveatedRendering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, dynamicFoveatedRendering) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QuestSettings, 0x14>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel, "BeatSaber.Settings", "QuestSettings/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel, "BeatSaber.Settings", "QuestSettings/SuggestedPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QuestSettings, "BeatSaber.Settings", "QuestSettings");
