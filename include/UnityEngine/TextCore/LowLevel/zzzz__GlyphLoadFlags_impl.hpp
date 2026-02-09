#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphLoadFlags.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags::GlyphLoadFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags::GlyphLoadFlags()   {
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_SCALE{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_HINTING{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_RENDER{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_BITMAP{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_FORCE_AUTOHINT{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_MONOCHROME{static_cast<int32_t>(0x1000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_AUTOHINT{static_cast<int32_t>(0x8000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COLOR{static_cast<int32_t>(0x100000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COMPUTE_METRICS{static_cast<int32_t>(0x200000)};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_BITMAP_METRICS_ONLY{static_cast<int32_t>(0x400000)};
