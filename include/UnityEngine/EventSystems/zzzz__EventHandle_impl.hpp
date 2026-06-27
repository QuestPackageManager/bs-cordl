#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventHandle.hpp"
#include "UnityEngine/EventSystems/zzzz__EventHandle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::EventHandle::EventHandle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::EventHandle::EventHandle()   {
}
constexpr ::UnityEngine::EventSystems::EventHandle  UnityEngine::EventSystems::EventHandle::Unused{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventSystems::EventHandle  UnityEngine::EventSystems::EventHandle::Used{static_cast<int32_t>(0x1)};
