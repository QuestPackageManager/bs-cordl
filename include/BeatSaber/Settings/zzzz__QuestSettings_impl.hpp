#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QuestSettings.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::QuestSettings_SuggestedPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::QuestSettings_SuggestedPerformanceLevel() {}
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::Default{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel::Boost{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::QuestSettings_FoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::QuestSettings_FoveatedRenderingLevel() {}
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "cpuLevel", ty: "::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuLevel", ty:
// "::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingMenu", ty:
// "::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingGameplay", ty:
// "::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTrackedFoveatedRendering", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "dynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QuestSettings::QuestSettings(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel cpuLevel,
                                                              ::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel gpuLevel,
                                                              ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingMenu,
                                                              ::BeatSaber::Settings::QuestSettings_FoveatedRenderingLevel foveatedRenderingGameplay, bool eyeTrackedFoveatedRendering,
                                                              bool dynamicFoveatedRendering) noexcept {
  this->cpuLevel = cpuLevel;
  this->gpuLevel = gpuLevel;
  this->foveatedRenderingMenu = foveatedRenderingMenu;
  this->foveatedRenderingGameplay = foveatedRenderingGameplay;
  this->eyeTrackedFoveatedRendering = eyeTrackedFoveatedRendering;
  this->dynamicFoveatedRendering = dynamicFoveatedRendering;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QuestSettings::QuestSettings() {}
