#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyType.hpp"
#include "UnityEngine/zzzz__MaterialPropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MaterialPropertyType::MaterialPropertyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MaterialPropertyType::MaterialPropertyType() {}
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::Float{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::Int{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::Vector{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::Matrix{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::Texture{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::ConstantBuffer{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::MaterialPropertyType UnityEngine::MaterialPropertyType::ComputeBuffer{ static_cast<int32_t>(0x6) };
