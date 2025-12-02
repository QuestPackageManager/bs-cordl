#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidUIModeType.hpp"
#include "UnityEngine/Android/zzzz__AndroidUIModeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidUIModeType::AndroidUIModeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidUIModeType::AndroidUIModeType() {}
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Normal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Desk{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Car{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Television{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Appliance{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::Watch{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Android::AndroidUIModeType UnityEngine::Android::AndroidUIModeType::VrHeadset{ static_cast<int32_t>(0x7) };
