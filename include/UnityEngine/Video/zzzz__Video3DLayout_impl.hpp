#pragma once
// IWYU pragma private; include "UnityEngine/Video/Video3DLayout.hpp"
#include "UnityEngine/Video/zzzz__Video3DLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::Video3DLayout::Video3DLayout(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::Video3DLayout::Video3DLayout()   {
}
constexpr ::UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::No3D{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::SideBySide3D{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::OverUnder3D{static_cast<int32_t>(0x2)};
