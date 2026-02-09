#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/FEATURES.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::FEATURES::FEATURES(uint64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::FEATURES::FEATURES()   {
}
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::NONE{static_cast<uint64_t>(0x0u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_RENDER{static_cast<uint64_t>(0x1u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FOREGROUND_RENDER{static_cast<uint64_t>(0x2u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::COMPLEX_CLIP_PLANE{static_cast<uint64_t>(0x4u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::BACKGROUND_DEPTH_RENDER{static_cast<uint64_t>(0x8u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OVERRIDE_POST_PROCESSING{static_cast<uint64_t>(0x10u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::FIX_FOREGROUND_ALPHA{static_cast<uint64_t>(0x20u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::GROUND_CLIP_PLANE{static_cast<uint64_t>(0x40u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::RELEASE_CONTROL{static_cast<uint64_t>(0x8000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::OPTIMIZED_RENDER{static_cast<uint64_t>(0x10000000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::INTERLACED_RENDER{static_cast<uint64_t>(0x20000000u)};
constexpr ::LIV::SDK::Unity::FEATURES  LIV::SDK::Unity::FEATURES::DEBUG_CLIP_PLANE{static_cast<uint64_t>(0x1000000000000u)};
