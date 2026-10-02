#pragma once
// IWYU pragma private; include "UnityEngine/Audio/MessageArguments.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__MessageArguments_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
// Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MessageData", ty:
// "::UnityEngine::Audio::ProcessorInstance_Message*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "StatusReturn", ty: "::UnityEngine::Audio::ProcessorInstance_Response", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::MessageArguments::MessageArguments(::UnityEngine::Audio::ControlHeader* Context, ::UnityEngine::Audio::ProcessorInstance_Message* MessageData,
                                                                   ::Unity::Audio::Handle Self, ::UnityEngine::Audio::ProcessorInstance_Response StatusReturn) noexcept {
  this->Context = Context;
  this->MessageData = MessageData;
  this->Self = Self;
  this->StatusReturn = StatusReturn;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::MessageArguments::MessageArguments() {}
