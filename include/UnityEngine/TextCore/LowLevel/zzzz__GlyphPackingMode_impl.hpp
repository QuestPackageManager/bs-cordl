#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphPackingMode.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::GlyphPackingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::GlyphPackingMode()   {
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestShortSideFit{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestLongSideFit{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestAreaFit{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::BottomLeftRule{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  UnityEngine::TextCore::LowLevel::GlyphPackingMode::ContactPointRule{static_cast<int32_t>(0x4)};
