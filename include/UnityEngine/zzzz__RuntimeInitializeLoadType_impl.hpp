#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeInitializeLoadType.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RuntimeInitializeLoadType::RuntimeInitializeLoadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeInitializeLoadType::RuntimeInitializeLoadType()   {
}
constexpr ::UnityEngine::RuntimeInitializeLoadType  UnityEngine::RuntimeInitializeLoadType::AfterSceneLoad{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RuntimeInitializeLoadType  UnityEngine::RuntimeInitializeLoadType::BeforeSceneLoad{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RuntimeInitializeLoadType  UnityEngine::RuntimeInitializeLoadType::AfterAssembliesLoaded{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RuntimeInitializeLoadType  UnityEngine::RuntimeInitializeLoadType::BeforeSplashScreen{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::RuntimeInitializeLoadType  UnityEngine::RuntimeInitializeLoadType::SubsystemRegistration{static_cast<int32_t>(0x4)};
