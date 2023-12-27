#pragma once
#include "UnityEngine/zzzz__MaterialGlobalIlluminationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags::MaterialGlobalIlluminationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags::MaterialGlobalIlluminationFlags() {}
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags UnityEngine::MaterialGlobalIlluminationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags UnityEngine::MaterialGlobalIlluminationFlags::RealtimeEmissive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags UnityEngine::MaterialGlobalIlluminationFlags::BakedEmissive{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags UnityEngine::MaterialGlobalIlluminationFlags::EmissiveIsBlack{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::MaterialGlobalIlluminationFlags UnityEngine::MaterialGlobalIlluminationFlags::AnyEmissive{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
