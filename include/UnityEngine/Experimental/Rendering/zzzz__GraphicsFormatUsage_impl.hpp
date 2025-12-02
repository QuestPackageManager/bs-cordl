#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsFormatUsage.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage::GraphicsFormatUsage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage::GraphicsFormatUsage() {}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::Sample{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::Linear{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::Sparse{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::Render{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::Blend{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::GetPixels{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::SetPixels{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::SetPixels32{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::ReadPixels{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::LoadStore{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::MSAA2x{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::MSAA4x{ static_cast<int32_t>(0x1000) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::MSAA8x{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage UnityEngine::Experimental::Rendering::GraphicsFormatUsage::StencilSampling{ static_cast<int32_t>(0x10000) };
