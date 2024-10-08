#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QuestSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestSettings)
namespace BeatSaber::Settings {
struct __QuestSettings__FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct __QuestSettings__SuggestedPerformanceLevel;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct __QuestSettings__FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct __QuestSettings__SuggestedPerformanceLevel;
}
namespace BeatSaber::Settings {
struct QuestSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel);
MARK_VAL_T(::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel);
MARK_VAL_T(::BeatSaber::Settings::QuestSettings);
// Type: ::SuggestedPerformanceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QuestSettings::SuggestedPerformanceLevel
struct CORDL_TYPE __QuestSettings__SuggestedPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____QuestSettings__SuggestedPerformanceLevel_Unwrapped
  enum struct ____QuestSettings__SuggestedPerformanceLevel_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_PowerSavings = static_cast<int32_t>(0x1),
    __E_SustainedLow = static_cast<int32_t>(0x2),
    __E_SustainedHigh = static_cast<int32_t>(0x3),
    __E_Boost = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____QuestSettings__SuggestedPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<____QuestSettings__SuggestedPerformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestSettings__SuggestedPerformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __QuestSettings__SuggestedPerformanceLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boost value: static_cast<int32_t>(0x4)
  static ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel const Boost;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel const Default;

  /// @brief Field PowerSavings value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel const PowerSavings;

  /// @brief Field SustainedHigh value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel const SustainedHigh;

  /// @brief Field SustainedLow value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel const SustainedLow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17959 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::FoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QuestSettings::FoveatedRenderingLevel
struct CORDL_TYPE __QuestSettings__FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____QuestSettings__FoveatedRenderingLevel_Unwrapped
  enum struct ____QuestSettings__FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____QuestSettings__FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____QuestSettings__FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestSettings__FoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __QuestSettings__FoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel const Medium;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17960 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: BeatSaber.Settings::QuestSettings
// SizeInfo { instance_size: 20, native_size: 24, calculated_instance_size: 20, calculated_native_size: 34, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::BeatSaber.Settings::QuestSettings
struct CORDL_TYPE QuestSettings {
public:
  // Declarations
  using FoveatedRenderingLevel = ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel;

  using SuggestedPerformanceLevel = ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestSettings();

  // Ctor Parameters [CppParam { name: "cpuLevel", ty: "::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel", modifiers: "", def_value: None }, CppParam { name: "gpuLevel", ty:
  // "::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMenu", ty:
  // "::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingGameplay", ty:
  // "::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "eyeTrackedFoveatedRendering", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "dynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: None }]
  constexpr QuestSettings(::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel cpuLevel, ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel gpuLevel,
                          ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingMenu,
                          ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingGameplay, bool eyeTrackedFoveatedRendering, bool dynamicFoveatedRendering) noexcept;

  /// @brief Field cpuLevel, offset: 0x0, size: 0x4, def value: None
  ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel cpuLevel;

  /// @brief Field gpuLevel, offset: 0x4, size: 0x4, def value: None
  ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel gpuLevel;

  /// @brief Field foveatedRenderingMenu, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingMenu;

  /// @brief Field foveatedRenderingGameplay, offset: 0xc, size: 0x4, def value: None
  ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingGameplay;

  /// @brief Field eyeTrackedFoveatedRendering, offset: 0x10, size: 0x1, def value: None
  bool eyeTrackedFoveatedRendering;

  /// @brief Field dynamicFoveatedRendering, offset: 0x11, size: 0x1, def value: None
  bool dynamicFoveatedRendering;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QuestSettings, 0x14>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, cpuLevel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, gpuLevel) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, foveatedRenderingMenu) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, foveatedRenderingGameplay) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, eyeTrackedFoveatedRendering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QuestSettings, dynamicFoveatedRendering) == 0x11, "Offset mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel, "BeatSaber.Settings", "QuestSettings/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel, "BeatSaber.Settings", "QuestSettings/SuggestedPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QuestSettings, "BeatSaber.Settings", "QuestSettings");
