#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/RefreshMask.hpp"
#include "UnityEngine/ProBuilder/zzzz__RefreshMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::RefreshMask::RefreshMask(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::RefreshMask::RefreshMask() {}
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::UV{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::Colors{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::Normals{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::Tangents{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::Collisions{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::Bounds{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::ProBuilder::RefreshMask UnityEngine::ProBuilder::RefreshMask::All{ static_cast<int32_t>(0x1f) };
