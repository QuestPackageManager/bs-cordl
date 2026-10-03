#pragma once
// IWYU pragma private; include "UnityEngine/Audio/UpdateArguments.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__UpdateArguments_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
// Ctor Parameters [CppParam { name: "ControlContext", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FirstElement", ty:
// "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::UpdateArguments::UpdateArguments(::UnityEngine::Audio::ControlHeader* ControlContext, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* FirstElement,
                                                                 ::Unity::Audio::Handle Self) noexcept {
  this->ControlContext = ControlContext;
  this->FirstElement = FirstElement;
  this->Self = Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::UpdateArguments::UpdateArguments() {}
