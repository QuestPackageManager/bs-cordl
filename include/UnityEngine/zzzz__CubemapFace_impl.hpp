#pragma once
// IWYU pragma private; include "UnityEngine/CubemapFace.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CubemapFace::CubemapFace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CubemapFace::CubemapFace()   {
}
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveX{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeX{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveY{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeY{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveZ{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeZ{static_cast<int32_t>(0x5)};
