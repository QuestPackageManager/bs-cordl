#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QuestSettings.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::__QuestSettings__SuggestedPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::__QuestSettings__SuggestedPerformanceLevel() {}
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::Default{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel::Boost{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::__QuestSettings__FoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::__QuestSettings__FoveatedRenderingLevel() {}
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "cpuLevel", ty: "::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuLevel", ty:
// "::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingMenu", ty:
// "::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingGameplay", ty:
// "::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTrackedFoveatedRendering", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "dynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QuestSettings::QuestSettings(::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel cpuLevel,
                                                              ::BeatSaber::Settings::__QuestSettings__SuggestedPerformanceLevel gpuLevel,
                                                              ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingMenu,
                                                              ::BeatSaber::Settings::__QuestSettings__FoveatedRenderingLevel foveatedRenderingGameplay, bool eyeTrackedFoveatedRendering,
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
