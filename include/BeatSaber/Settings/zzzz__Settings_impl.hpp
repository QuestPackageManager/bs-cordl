#pragma once
// IWYU pragma private; include "BeatSaber/Settings/Settings.hpp"
#include "BeatSaber/Settings/zzzz__AudioSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__CustomServerSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__DebugSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__PerformanceToolSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__RoomSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__SmoothCameraSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
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
// Ctor Parameters [CppParam { name: "room", ty: "::BeatSaber::Settings::RoomSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "controller", ty:
// "::BeatSaber::Settings::ControllerSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCamera", ty: "::BeatSaber::Settings::SmoothCameraSettings", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "audio", ty: "::BeatSaber::Settings::AudioSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "misc", ty: "::BeatSaber::Settings::MiscSettings",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "quality", ty: "::BeatSaber::Settings::QualitySettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "quest", ty:
// "::BeatSaber::Settings::QuestSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "window", ty: "::BeatSaber::Settings::WindowSettings", modifiers: "", def_value: Some("{}") },
// CppParam { name: "customServer", ty: "::BeatSaber::Settings::CustomServerSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "performanceTools", ty:
// "::BeatSaber::Settings::PerformanceToolSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "debug", ty: "::BeatSaber::Settings::DebugSettings", modifiers: "", def_value: Some("{}")
// }]
constexpr ::BeatSaber::Settings::Settings::Settings(::BeatSaber::Settings::RoomSettings room, ::BeatSaber::Settings::ControllerSettings controller,
                                                    ::BeatSaber::Settings::SmoothCameraSettings smoothCamera, ::BeatSaber::Settings::AudioSettings audio, ::BeatSaber::Settings::MiscSettings misc,
                                                    ::BeatSaber::Settings::QualitySettings quality, ::BeatSaber::Settings::QuestSettings quest, ::BeatSaber::Settings::WindowSettings window,
                                                    ::BeatSaber::Settings::CustomServerSettings customServer, ::BeatSaber::Settings::PerformanceToolSettings performanceTools,
                                                    ::BeatSaber::Settings::DebugSettings debug) noexcept {
  this->room = room;
  this->controller = controller;
  this->smoothCamera = smoothCamera;
  this->audio = audio;
  this->misc = misc;
  this->quality = quality;
  this->quest = quest;
  this->window = window;
  this->customServer = customServer;
  this->performanceTools = performanceTools;
  this->debug = debug;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::Settings::Settings() {}
