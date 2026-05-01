#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventSource.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::EventSource::EventSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventSource::EventSource() {}
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Unspecified{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Keyboard{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Gamepad{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Mouse{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Pen{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::EventSource::Touch{ static_cast<int32_t>(0x5) };
