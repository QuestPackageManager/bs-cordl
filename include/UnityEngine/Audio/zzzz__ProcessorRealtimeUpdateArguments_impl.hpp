#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorRealtimeUpdateArguments.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorRealtimeUpdateArguments_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
// Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty:
// "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorRealtimeUpdateArguments::ProcessorRealtimeUpdateArguments(::UnityEngine::Audio::RealtimeAccess Access,
                                                                                                   ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head,
                                                                                                   ::Unity::Audio::Handle Self) noexcept {
  this->Access = Access;
  this->Head = Head;
  this->Self = Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorRealtimeUpdateArguments::ProcessorRealtimeUpdateArguments() {}
