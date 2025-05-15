#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SmoothCameraSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SmoothCameraSettings)
// Forward declare root types
namespace BeatSaber::Settings {
struct SmoothCameraSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::SmoothCameraSettings);
// Dependencies Unity.Mathematics.float3
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.SmoothCameraSettings
struct CORDL_TYPE SmoothCameraSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCameraSettings();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "smoothPosition", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "smoothRotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "thirdPersonEnabled", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "thirdPersonPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "thirdPersonRotation", ty:
  // "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
  constexpr SmoothCameraSettings(bool enabled, float_t fov, float_t smoothPosition, float_t smoothRotation, bool thirdPersonEnabled, ::Unity::Mathematics::float3 thirdPersonPosition,
                                 ::Unity::Mathematics::float3 thirdPersonRotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field fov, offset: 0x4, size: 0x4, def value: None
  float_t fov;

  /// @brief Field smoothPosition, offset: 0x8, size: 0x4, def value: None
  float_t smoothPosition;

  /// @brief Field smoothRotation, offset: 0xc, size: 0x4, def value: None
  float_t smoothRotation;

  /// @brief Field thirdPersonEnabled, offset: 0x10, size: 0x1, def value: None
  bool thirdPersonEnabled;

  /// @brief Field thirdPersonPosition, offset: 0x14, size: 0xc, def value: None
  ::Unity::Mathematics::float3 thirdPersonPosition;

  /// @brief Field thirdPersonRotation, offset: 0x20, size: 0xc, def value: None
  ::Unity::Mathematics::float3 thirdPersonRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, fov) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, smoothPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, smoothRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, thirdPersonEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, thirdPersonPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SmoothCameraSettings, thirdPersonRotation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::SmoothCameraSettings, 0x2c>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::SmoothCameraSettings, "BeatSaber.Settings", "SmoothCameraSettings");
