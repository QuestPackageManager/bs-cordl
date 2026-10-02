#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorFunction.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorFunction::ProcessorFunction(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorFunction::ProcessorFunction() {}
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::Process{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::Update{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::OutputProcessEarly{ static_cast<uint32_t>(0x3u) };
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::OutputProcess{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::OutputProcessEnd{ static_cast<uint32_t>(0x5u) };
constexpr ::UnityEngine::Audio::ProcessorFunction UnityEngine::Audio::ProcessorFunction::OutputRemoved{ static_cast<uint32_t>(0x6u) };
