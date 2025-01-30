#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QualitySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace BeatSaber::Settings {
struct QualitySettings_BloomQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings_MainEffectOption;
}
namespace BeatSaber::Settings {
struct QualitySettings_MirrorQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings_ObstacleQuality;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct QualitySettings_BloomQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings_MainEffectOption;
}
namespace BeatSaber::Settings {
struct QualitySettings_MirrorQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings_ObstacleQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::QualitySettings_BloomQuality);
MARK_VAL_T(::BeatSaber::Settings::QualitySettings_MainEffectOption);
MARK_VAL_T(::BeatSaber::Settings::QualitySettings_MirrorQuality);
MARK_VAL_T(::BeatSaber::Settings::QualitySettings_ObstacleQuality);
MARK_VAL_T(::BeatSaber::Settings::QualitySettings);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QualitySettings/MainEffectOption
struct CORDL_TYPE QualitySettings_MainEffectOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QualitySettings_MainEffectOption_Unwrapped
  enum struct __QualitySettings_MainEffectOption_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Game = static_cast<int32_t>(0x1),
    __E_LightBaking = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QualitySettings_MainEffectOption_Unwrapped() const noexcept {
    return static_cast<__QualitySettings_MainEffectOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings_MainEffectOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QualitySettings_MainEffectOption(int32_t value__) noexcept;

  /// @brief Field Game value: I32(1)
  static ::BeatSaber::Settings::QualitySettings_MainEffectOption const Game;

  /// @brief Field LightBaking value: I32(2)
  static ::BeatSaber::Settings::QualitySettings_MainEffectOption const LightBaking;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::QualitySettings_MainEffectOption const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QualitySettings_MainEffectOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings_MainEffectOption, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QualitySettings/BloomQuality
struct CORDL_TYPE QualitySettings_BloomQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QualitySettings_BloomQuality_Unwrapped
  enum struct __QualitySettings_BloomQuality_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x0),
    __E_LightBaking = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QualitySettings_BloomQuality_Unwrapped() const noexcept {
    return static_cast<__QualitySettings_BloomQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings_BloomQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QualitySettings_BloomQuality(int32_t value__) noexcept;

  /// @brief Field Game value: I32(0)
  static ::BeatSaber::Settings::QualitySettings_BloomQuality const Game;

  /// @brief Field LightBaking value: I32(1)
  static ::BeatSaber::Settings::QualitySettings_BloomQuality const LightBaking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QualitySettings_BloomQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings_BloomQuality, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QualitySettings/MirrorQuality
struct CORDL_TYPE QualitySettings_MirrorQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QualitySettings_MirrorQuality_Unwrapped
  enum struct __QualitySettings_MirrorQuality_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QualitySettings_MirrorQuality_Unwrapped() const noexcept {
    return static_cast<__QualitySettings_MirrorQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings_MirrorQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QualitySettings_MirrorQuality(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::BeatSaber::Settings::QualitySettings_MirrorQuality const High;

  /// @brief Field Low value: I32(1)
  static ::BeatSaber::Settings::QualitySettings_MirrorQuality const Low;

  /// @brief Field Medium value: I32(2)
  static ::BeatSaber::Settings::QualitySettings_MirrorQuality const Medium;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::QualitySettings_MirrorQuality const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QualitySettings_MirrorQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings_MirrorQuality, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QualitySettings/ObstacleQuality
struct CORDL_TYPE QualitySettings_ObstacleQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QualitySettings_ObstacleQuality_Unwrapped
  enum struct __QualitySettings_ObstacleQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QualitySettings_ObstacleQuality_Unwrapped() const noexcept {
    return static_cast<__QualitySettings_ObstacleQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings_ObstacleQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QualitySettings_ObstacleQuality(int32_t value__) noexcept;

  /// @brief Field High value: I32(2)
  static ::BeatSaber::Settings::QualitySettings_ObstacleQuality const High;

  /// @brief Field Low value: I32(0)
  static ::BeatSaber::Settings::QualitySettings_ObstacleQuality const Low;

  /// @brief Field Medium value: I32(1)
  static ::BeatSaber::Settings::QualitySettings_ObstacleQuality const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QualitySettings_ObstacleQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings_ObstacleQuality, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies BeatSaber.Settings.QualitySettings::BloomQuality, BeatSaber.Settings.QualitySettings::MainEffectOption, BeatSaber.Settings.QualitySettings::MirrorQuality,
// BeatSaber.Settings.QualitySettings::ObstacleQuality
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.QualitySettings
struct CORDL_TYPE QualitySettings {
public:
  // Declarations
  using BloomQuality = ::BeatSaber::Settings::QualitySettings_BloomQuality;

  using MainEffectOption = ::BeatSaber::Settings::QualitySettings_MainEffectOption;

  using MirrorQuality = ::BeatSaber::Settings::QualitySettings_MirrorQuality;

  using ObstacleQuality = ::BeatSaber::Settings::QualitySettings_ObstacleQuality;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings();

  // Ctor Parameters [CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "menuVRResolutionScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "targetFramerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vSyncCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "maxQueuedFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mainEffect", ty: "::BeatSaber::Settings::QualitySettings_MainEffectOption", modifiers: "", def_value: None },
  // CppParam { name: "bloom", ty: "::BeatSaber::Settings::QualitySettings_BloomQuality", modifiers: "", def_value: None }, CppParam { name: "mirror", ty:
  // "::BeatSaber::Settings::QualitySettings_MirrorQuality", modifiers: "", def_value: None }, CppParam { name: "obstacles", ty: "::BeatSaber::Settings::QualitySettings_ObstacleQuality", modifiers:
  // "", def_value: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smokeGraphics", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "depthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "burnMarkTrails", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QualitySettings(float_t renderViewportScale, float_t vrResolutionScale, float_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel, int32_t targetFramerate, int32_t vSyncCount,
                            int32_t maxQueuedFrames, ::BeatSaber::Settings::QualitySettings_MainEffectOption mainEffect, ::BeatSaber::Settings::QualitySettings_BloomQuality bloom,
                            ::BeatSaber::Settings::QualitySettings_MirrorQuality mirror, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacles, bool screenDisplacementEffects,
                            bool smokeGraphics, bool depthTexture, bool burnMarkTrails, int32_t maxShockwaveParticles, int32_t maxNumberOfCutSoundEffects) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field renderViewportScale, offset: 0x0, size: 0x4, def value: None
  float_t renderViewportScale;

  /// @brief Field vrResolutionScale, offset: 0x4, size: 0x4, def value: None
  float_t vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x8, size: 0x4, def value: None
  float_t menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0xc, size: 0x4, def value: None
  int32_t antiAliasingLevel;

  /// @brief Field targetFramerate, offset: 0x10, size: 0x4, def value: None
  int32_t targetFramerate;

  /// @brief Field vSyncCount, offset: 0x14, size: 0x4, def value: None
  int32_t vSyncCount;

  /// @brief Field maxQueuedFrames, offset: 0x18, size: 0x4, def value: None
  int32_t maxQueuedFrames;

  /// @brief Field mainEffect, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::Settings::QualitySettings_MainEffectOption mainEffect;

  /// @brief Field bloom, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::Settings::QualitySettings_BloomQuality bloom;

  /// @brief Field mirror, offset: 0x24, size: 0x4, def value: None
  ::BeatSaber::Settings::QualitySettings_MirrorQuality mirror;

  /// @brief Field obstacles, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacles;

  /// @brief Field screenDisplacementEffects, offset: 0x2c, size: 0x1, def value: None
  bool screenDisplacementEffects;

  /// @brief Field smokeGraphics, offset: 0x2d, size: 0x1, def value: None
  bool smokeGraphics;

  /// @brief Field depthTexture, offset: 0x2e, size: 0x1, def value: None
  bool depthTexture;

  /// @brief Field burnMarkTrails, offset: 0x2f, size: 0x1, def value: None
  bool burnMarkTrails;

  /// @brief Field maxShockwaveParticles, offset: 0x30, size: 0x4, def value: None
  int32_t maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0x34, size: 0x4, def value: None
  int32_t maxNumberOfCutSoundEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::QualitySettings, renderViewportScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, vrResolutionScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, menuVRResolutionScaleMultiplier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, antiAliasingLevel) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, targetFramerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, vSyncCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxQueuedFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, mainEffect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, bloom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, mirror) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, obstacles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, screenDisplacementEffects) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, smokeGraphics) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, depthTexture) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, burnMarkTrails) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxShockwaveParticles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxNumberOfCutSoundEffects) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings_BloomQuality, "BeatSaber.Settings", "QualitySettings/BloomQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings_MainEffectOption, "BeatSaber.Settings", "QualitySettings/MainEffectOption");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings_MirrorQuality, "BeatSaber.Settings", "QualitySettings/MirrorQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings_ObstacleQuality, "BeatSaber.Settings", "QualitySettings/ObstacleQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings, "BeatSaber.Settings", "QualitySettings");
