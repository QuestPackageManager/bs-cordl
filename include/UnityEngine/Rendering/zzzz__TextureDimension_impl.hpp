#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureDimension.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::TextureDimension::TextureDimension(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureDimension::TextureDimension()   {
}
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Any{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Tex2D{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Tex3D{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Cube{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::Tex2DArray{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::TextureDimension  UnityEngine::Rendering::TextureDimension::CubeArray{static_cast<int32_t>(0x6)};
