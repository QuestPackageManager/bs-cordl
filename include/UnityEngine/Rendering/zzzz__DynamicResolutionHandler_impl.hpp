#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResolutionHandler.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionHandler_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerformDynamicRes_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::DynamicResScalePolicyType", modifiers: "", def_value: Some("{}") }, CppParam { name: "method", ty:
// "::UnityEngine::Rendering::PerformDynamicRes*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer::DynamicResolutionHandler_ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType type,
                                                                                                                       ::UnityEngine::Rendering::PerformDynamicRes* method) noexcept {
  this->type = type;
  this->method = method;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer::DynamicResolutionHandler_ScalerContainer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType::DynamicResolutionHandler_UpsamplerScheduleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType::DynamicResolutionHandler_UpsamplerScheduleType() {}
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType::BeforePost{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType::AfterDepthOfField{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType::AfterPost{ static_cast<int32_t>(0x2) };
