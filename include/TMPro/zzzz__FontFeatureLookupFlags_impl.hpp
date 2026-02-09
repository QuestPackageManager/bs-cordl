#pragma once
// IWYU pragma private; include "TMPro/FontFeatureLookupFlags.hpp"
#include "TMPro/zzzz__FontFeatureLookupFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontFeatureLookupFlags::FontFeatureLookupFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::FontFeatureLookupFlags::FontFeatureLookupFlags()   {
}
constexpr ::TMPro::FontFeatureLookupFlags  TMPro::FontFeatureLookupFlags::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::FontFeatureLookupFlags  TMPro::FontFeatureLookupFlags::IgnoreLigatures{static_cast<int32_t>(0x4)};
constexpr ::TMPro::FontFeatureLookupFlags  TMPro::FontFeatureLookupFlags::IgnoreSpacingAdjustments{static_cast<int32_t>(0x100)};
