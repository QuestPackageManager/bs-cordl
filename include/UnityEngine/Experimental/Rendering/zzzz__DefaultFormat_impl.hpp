#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat::DefaultFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat::DefaultFormat()   {
}
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat  UnityEngine::Experimental::Rendering::DefaultFormat::LDR{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat  UnityEngine::Experimental::Rendering::DefaultFormat::HDR{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat  UnityEngine::Experimental::Rendering::DefaultFormat::DepthStencil{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat  UnityEngine::Experimental::Rendering::DefaultFormat::Shadow{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Experimental::Rendering::DefaultFormat  UnityEngine::Experimental::Rendering::DefaultFormat::Video{static_cast<int32_t>(0x4)};
