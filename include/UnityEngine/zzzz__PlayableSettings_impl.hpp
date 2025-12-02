#pragma once
// IWYU pragma private; include "UnityEngine/PlayableSettings.hpp"
#include "UnityEngine/zzzz__PlayableSettings_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioContainerElement_def.hpp"
// Ctor Parameters [CppParam { name: "_element_k__BackingField", ty: "::UnityW<::UnityEngine::Audio::AudioContainerElement>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_scheduledTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pitchOffset_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_volumeOffset_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_triggerTimeOffset_k__BackingField", ty: "double_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::PlayableSettings::PlayableSettings(::UnityW<::UnityEngine::Audio::AudioContainerElement> _element_k__BackingField, double_t _scheduledTime_k__BackingField,
                                                            float_t _pitchOffset_k__BackingField, float_t _volumeOffset_k__BackingField, double_t _triggerTimeOffset_k__BackingField) noexcept {
  this->_element_k__BackingField = _element_k__BackingField;
  this->_scheduledTime_k__BackingField = _scheduledTime_k__BackingField;
  this->_pitchOffset_k__BackingField = _pitchOffset_k__BackingField;
  this->_volumeOffset_k__BackingField = _volumeOffset_k__BackingField;
  this->_triggerTimeOffset_k__BackingField = _triggerTimeOffset_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayableSettings::PlayableSettings() {}
