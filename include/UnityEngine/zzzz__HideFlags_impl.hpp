#pragma once
// IWYU pragma private; include "UnityEngine/HideFlags.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HideFlags::HideFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::HideFlags::HideFlags()   {
}
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideInHierarchy{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideInInspector{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInEditor{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::NotEditable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInBuild{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontUnloadUnusedAsset{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSave{static_cast<int32_t>(0x34)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideAndDontSave{static_cast<int32_t>(0x3d)};
