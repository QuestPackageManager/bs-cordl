#pragma once
// IWYU pragma private; include "UnityEngine/Events/PersistentListenerMode.hpp"
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Events::PersistentListenerMode::PersistentListenerMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::PersistentListenerMode::PersistentListenerMode()   {
}
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::EventDefined{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::Void{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::Object{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::Int{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::Float{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::String{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Events::PersistentListenerMode  UnityEngine::Events::PersistentListenerMode::Bool{static_cast<int32_t>(0x6)};
