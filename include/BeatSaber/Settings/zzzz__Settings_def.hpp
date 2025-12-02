#pragma once
// IWYU pragma private; include "BeatSaber/Settings/Settings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__AudioSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__CustomServerSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__DebugSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__PerformanceToolSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__RoomSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__SmoothCameraSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Settings)
// Forward declare root types
namespace BeatSaber::Settings {
struct Settings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::Settings);
// Dependencies BeatSaber.Settings.AudioSettings, BeatSaber.Settings.ControllerSettings, BeatSaber.Settings.CustomServerSettings, BeatSaber.Settings.DebugSettings, BeatSaber.Settings.MiscSettings,
// BeatSaber.Settings.PerformanceToolSettings, BeatSaber.Settings.QualitySettings, BeatSaber.Settings.QuestSettings, BeatSaber.Settings.RoomSettings, BeatSaber.Settings.SmoothCameraSettings,
// BeatSaber.Settings.WindowSettings
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.Settings
struct CORDL_TYPE Settings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Settings();

  // Ctor Parameters [CppParam { name: "room", ty: "::BeatSaber::Settings::RoomSettings", modifiers: "", def_value: None }, CppParam { name: "controller", ty:
  // "::BeatSaber::Settings::ControllerSettings", modifiers: "", def_value: None }, CppParam { name: "smoothCamera", ty: "::BeatSaber::Settings::SmoothCameraSettings", modifiers: "", def_value: None
  // }, CppParam { name: "audio", ty: "::BeatSaber::Settings::AudioSettings", modifiers: "", def_value: None }, CppParam { name: "misc", ty: "::BeatSaber::Settings::MiscSettings", modifiers: "",
  // def_value: None }, CppParam { name: "quality", ty: "::BeatSaber::Settings::QualitySettings", modifiers: "", def_value: None }, CppParam { name: "quest", ty:
  // "::BeatSaber::Settings::QuestSettings", modifiers: "", def_value: None }, CppParam { name: "window", ty: "::BeatSaber::Settings::WindowSettings", modifiers: "", def_value: None }, CppParam {
  // name: "customServer", ty: "::BeatSaber::Settings::CustomServerSettings", modifiers: "", def_value: None }, CppParam { name: "performanceTools", ty:
  // "::BeatSaber::Settings::PerformanceToolSettings", modifiers: "", def_value: None }, CppParam { name: "debug", ty: "::BeatSaber::Settings::DebugSettings", modifiers: "", def_value: None }]
  constexpr Settings(::BeatSaber::Settings::RoomSettings room, ::BeatSaber::Settings::ControllerSettings controller, ::BeatSaber::Settings::SmoothCameraSettings smoothCamera,
                     ::BeatSaber::Settings::AudioSettings audio, ::BeatSaber::Settings::MiscSettings misc, ::BeatSaber::Settings::QualitySettings quality, ::BeatSaber::Settings::QuestSettings quest,
                     ::BeatSaber::Settings::WindowSettings window, ::BeatSaber::Settings::CustomServerSettings customServer, ::BeatSaber::Settings::PerformanceToolSettings performanceTools,
                     ::BeatSaber::Settings::DebugSettings debug) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xf0 };

  /// @brief Field room, offset: 0x0, size: 0x10, def value: None
  ::BeatSaber::Settings::RoomSettings room;

  /// @brief Field controller, offset: 0x10, size: 0x24, def value: None
  ::BeatSaber::Settings::ControllerSettings controller;

  /// @brief Field smoothCamera, offset: 0x34, size: 0x2c, def value: None
  ::BeatSaber::Settings::SmoothCameraSettings smoothCamera;

  /// @brief Field audio, offset: 0x60, size: 0x10, def value: None
  ::BeatSaber::Settings::AudioSettings audio;

  /// @brief Field misc, offset: 0x70, size: 0x10, def value: None
  ::BeatSaber::Settings::MiscSettings misc;

  /// @brief Field quality, offset: 0x80, size: 0x38, def value: None
  ::BeatSaber::Settings::QualitySettings quality;

  /// @brief Field quest, offset: 0xb8, size: 0x14, def value: None
  ::BeatSaber::Settings::QuestSettings quest;

  /// @brief Field window, offset: 0xcc, size: 0xc, def value: None
  ::BeatSaber::Settings::WindowSettings window;

  /// @brief Field customServer, offset: 0xd8, size: 0x10, def value: None
  ::BeatSaber::Settings::CustomServerSettings customServer;

  /// @brief Field performanceTools, offset: 0xe8, size: 0x4, def value: None
  ::BeatSaber::Settings::PerformanceToolSettings performanceTools;

  /// @brief Field debug, offset: 0xec, size: 0x2, def value: None
  ::BeatSaber::Settings::DebugSettings debug;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::Settings, room) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, smoothCamera) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, audio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, misc) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, quality) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, quest) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, window) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, customServer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, performanceTools) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::Settings, debug) == 0xec, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::Settings, 0xf0>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::Settings, "BeatSaber.Settings", "Settings");
