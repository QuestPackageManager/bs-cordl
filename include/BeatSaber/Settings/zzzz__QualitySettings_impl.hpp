#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QualitySettings.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings_MainEffectOption::QualitySettings_MainEffectOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings_MainEffectOption::QualitySettings_MainEffectOption() {}
constexpr ::BeatSaber::Settings::QualitySettings_MainEffectOption BeatSaber::Settings::QualitySettings_MainEffectOption::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QualitySettings_MainEffectOption BeatSaber::Settings::QualitySettings_MainEffectOption::Game{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::QualitySettings_MainEffectOption BeatSaber::Settings::QualitySettings_MainEffectOption::LightBaking{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings_BloomQuality::QualitySettings_BloomQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings_BloomQuality::QualitySettings_BloomQuality() {}
constexpr ::BeatSaber::Settings::QualitySettings_BloomQuality BeatSaber::Settings::QualitySettings_BloomQuality::Game{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QualitySettings_BloomQuality BeatSaber::Settings::QualitySettings_BloomQuality::LightBaking{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality::QualitySettings_MirrorQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality::QualitySettings_MirrorQuality() {}
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality BeatSaber::Settings::QualitySettings_MirrorQuality::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality BeatSaber::Settings::QualitySettings_MirrorQuality::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality BeatSaber::Settings::QualitySettings_MirrorQuality::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::QualitySettings_MirrorQuality BeatSaber::Settings::QualitySettings_MirrorQuality::High{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings_ObstacleQuality::QualitySettings_ObstacleQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings_ObstacleQuality::QualitySettings_ObstacleQuality() {}
constexpr ::BeatSaber::Settings::QualitySettings_ObstacleQuality BeatSaber::Settings::QualitySettings_ObstacleQuality::Low{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::QualitySettings_ObstacleQuality BeatSaber::Settings::QualitySettings_ObstacleQuality::Medium{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::QualitySettings_ObstacleQuality BeatSaber::Settings::QualitySettings_ObstacleQuality::High{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "menuVRResolutionScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "targetFramerate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vSyncCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxQueuedFrames", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainEffect", ty:
// "::BeatSaber::Settings::QualitySettings_MainEffectOption", modifiers: "", def_value: Some("{}") }, CppParam { name: "bloom", ty: "::BeatSaber::Settings::QualitySettings_BloomQuality", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "mirror", ty: "::BeatSaber::Settings::QualitySettings_MirrorQuality", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstacles", ty:
// "::BeatSaber::Settings::QualitySettings_ObstacleQuality", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "smokeGraphics", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "burnMarkTrails", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings::QualitySettings(float_t renderViewportScale, float_t vrResolutionScale, float_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel,
                                                                  int32_t targetFramerate, int32_t vSyncCount, int32_t maxQueuedFrames,
                                                                  ::BeatSaber::Settings::QualitySettings_MainEffectOption mainEffect, ::BeatSaber::Settings::QualitySettings_BloomQuality bloom,
                                                                  ::BeatSaber::Settings::QualitySettings_MirrorQuality mirror, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacles,
                                                                  bool screenDisplacementEffects, bool smokeGraphics, bool burnMarkTrails, int32_t maxShockwaveParticles,
                                                                  int32_t maxNumberOfCutSoundEffects) noexcept {
  this->renderViewportScale = renderViewportScale;
  this->vrResolutionScale = vrResolutionScale;
  this->menuVRResolutionScaleMultiplier = menuVRResolutionScaleMultiplier;
  this->antiAliasingLevel = antiAliasingLevel;
  this->targetFramerate = targetFramerate;
  this->vSyncCount = vSyncCount;
  this->maxQueuedFrames = maxQueuedFrames;
  this->mainEffect = mainEffect;
  this->bloom = bloom;
  this->mirror = mirror;
  this->obstacles = obstacles;
  this->screenDisplacementEffects = screenDisplacementEffects;
  this->smokeGraphics = smokeGraphics;
  this->burnMarkTrails = burnMarkTrails;
  this->maxShockwaveParticles = maxShockwaveParticles;
  this->maxNumberOfCutSoundEffects = maxNumberOfCutSoundEffects;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings::QualitySettings() {}
