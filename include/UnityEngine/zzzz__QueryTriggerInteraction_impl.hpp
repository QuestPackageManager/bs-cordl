#pragma once
// IWYU pragma private; include "UnityEngine/QueryTriggerInteraction.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::QueryTriggerInteraction::QueryTriggerInteraction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::QueryTriggerInteraction::QueryTriggerInteraction()   {
}
constexpr ::UnityEngine::QueryTriggerInteraction  UnityEngine::QueryTriggerInteraction::UseGlobal{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::QueryTriggerInteraction  UnityEngine::QueryTriggerInteraction::Ignore{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::QueryTriggerInteraction  UnityEngine::QueryTriggerInteraction::Collide{static_cast<int32_t>(0x2)};
