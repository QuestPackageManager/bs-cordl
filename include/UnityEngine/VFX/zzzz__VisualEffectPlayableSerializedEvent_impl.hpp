#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectPlayableSerializedEvent.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributes_impl.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
// Ctor Parameters [CppParam { name: "editorColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "timeSpace", ty: "::UnityEngine::VFX::PlayableTimeSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::UnityEngine::VFX::Utility::ExposedProperty*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eventAttributes", ty: "::UnityEngine::VFX::EventAttributes", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent::VisualEffectPlayableSerializedEvent(::UnityEngine::Color editorColor, double_t time, ::UnityEngine::VFX::PlayableTimeSpace timeSpace,
                                                                                                       ::UnityEngine::VFX::Utility::ExposedProperty* name,
                                                                                                       ::UnityEngine::VFX::EventAttributes eventAttributes) noexcept {
  this->editorColor = editorColor;
  this->time = time;
  this->timeSpace = timeSpace;
  this->name = name;
  this->eventAttributes = eventAttributes;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent::VisualEffectPlayableSerializedEvent() {}
