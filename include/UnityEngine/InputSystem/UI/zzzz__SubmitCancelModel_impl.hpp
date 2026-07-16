#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/SubmitCancelModel.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__SubmitCancelModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::BaseEventData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty:
// "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel::SubmitCancelModel(::UnityEngine::EventSystems::BaseEventData* eventData, ::UnityEngine::InputSystem::InputDevice* device) noexcept {
  this->eventData = eventData;
  this->device = device;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel::SubmitCancelModel() {}
