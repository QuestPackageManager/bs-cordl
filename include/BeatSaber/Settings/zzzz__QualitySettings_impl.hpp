#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QualitySettings.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QualitySettings__MainEffectOption::__QualitySettings__MainEffectOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QualitySettings__MainEffectOption::__QualitySettings__MainEffectOption() {}
constexpr ::BeatSaber::Settings::__QualitySettings__MainEffectOption BeatSaber::Settings::__QualitySettings__MainEffectOption::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QualitySettings__MainEffectOption BeatSaber::Settings::__QualitySettings__MainEffectOption::Game{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__QualitySettings__MainEffectOption BeatSaber::Settings::__QualitySettings__MainEffectOption::LightBaking{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QualitySettings__BloomQuality::__QualitySettings__BloomQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QualitySettings__BloomQuality::__QualitySettings__BloomQuality() {}
constexpr ::BeatSaber::Settings::__QualitySettings__BloomQuality BeatSaber::Settings::__QualitySettings__BloomQuality::Game{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QualitySettings__BloomQuality BeatSaber::Settings::__QualitySettings__BloomQuality::LightBaking{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality::__QualitySettings__MirrorQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality::__QualitySettings__MirrorQuality() {}
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality BeatSaber::Settings::__QualitySettings__MirrorQuality::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality BeatSaber::Settings::__QualitySettings__MirrorQuality::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality BeatSaber::Settings::__QualitySettings__MirrorQuality::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__QualitySettings__MirrorQuality BeatSaber::Settings::__QualitySettings__MirrorQuality::High{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__QualitySettings__ObstacleQuality::__QualitySettings__ObstacleQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__QualitySettings__ObstacleQuality::__QualitySettings__ObstacleQuality() {}
constexpr ::BeatSaber::Settings::__QualitySettings__ObstacleQuality BeatSaber::Settings::__QualitySettings__ObstacleQuality::Low{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__QualitySettings__ObstacleQuality BeatSaber::Settings::__QualitySettings__ObstacleQuality::Medium{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__QualitySettings__ObstacleQuality BeatSaber::Settings::__QualitySettings__ObstacleQuality::High{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "menuVRResolutionScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "targetFramerate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vSyncCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxQueuedFrames", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainEffect", ty:
// "::BeatSaber::Settings::__QualitySettings__MainEffectOption", modifiers: "", def_value: Some("{}") }, CppParam { name: "bloom", ty: "::BeatSaber::Settings::__QualitySettings__BloomQuality",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "mirror", ty: "::BeatSaber::Settings::__QualitySettings__MirrorQuality", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "obstacles", ty: "::BeatSaber::Settings::__QualitySettings__ObstacleQuality", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "smokeGraphics", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthTexture", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "burnMarkTrails", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::QualitySettings::QualitySettings(float_t renderViewportScale, float_t vrResolutionScale, float_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel,
                                                                  int32_t targetFramerate, int32_t vSyncCount, int32_t maxQueuedFrames,
                                                                  ::BeatSaber::Settings::__QualitySettings__MainEffectOption mainEffect, ::BeatSaber::Settings::__QualitySettings__BloomQuality bloom,
                                                                  ::BeatSaber::Settings::__QualitySettings__MirrorQuality mirror, ::BeatSaber::Settings::__QualitySettings__ObstacleQuality obstacles,
                                                                  bool screenDisplacementEffects, bool smokeGraphics, bool depthTexture, bool burnMarkTrails, int32_t maxShockwaveParticles,
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
  this->depthTexture = depthTexture;
  this->burnMarkTrails = burnMarkTrails;
  this->maxShockwaveParticles = maxShockwaveParticles;
  this->maxNumberOfCutSoundEffects = maxNumberOfCutSoundEffects;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::QualitySettings::QualitySettings() {}
