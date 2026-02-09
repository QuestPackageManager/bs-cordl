#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontFeatureLookupFlags.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontFeatureLookupFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::FontFeatureLookupFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::FontFeatureLookupFlags()   {
}
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::IgnoreLigatures{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::IgnoreSpacingAdjustments{static_cast<int32_t>(0x100)};
