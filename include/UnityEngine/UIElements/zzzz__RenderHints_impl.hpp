#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RenderHints.hpp"
#include "UnityEngine/UIElements/zzzz__RenderHints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::RenderHints::RenderHints(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RenderHints::RenderHints()   {
}
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::GroupTransform{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::BoneTransform{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::ClipWithScissors{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::MaskContainer{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DynamicColor{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyOffset{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyGroupTransform{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyBoneTransform{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyClipWithScissors{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyMaskContainer{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyDynamicColor{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::UIElements::RenderHints  UnityEngine::UIElements::RenderHints::DirtyAll{static_cast<int32_t>(0x3e0)};
