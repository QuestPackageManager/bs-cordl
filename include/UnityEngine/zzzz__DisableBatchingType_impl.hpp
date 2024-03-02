#pragma once
#include "UnityEngine/zzzz__DisableBatchingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DisableBatchingType::DisableBatchingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DisableBatchingType::DisableBatchingType() {}
constexpr ::UnityEngine::DisableBatchingType UnityEngine::DisableBatchingType::False{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::DisableBatchingType UnityEngine::DisableBatchingType::True{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::DisableBatchingType UnityEngine::DisableBatchingType::WhenLODFading{ static_cast<int32_t>(0x2) };
