#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/RENDERING_PIPELINE.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE::RENDERING_PIPELINE(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE::RENDERING_PIPELINE()   {
}
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::UNDEFINED{static_cast<uint32_t>(0x0u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::FORWARD{static_cast<uint32_t>(0x1u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::DEFERRED{static_cast<uint32_t>(0x2u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::VERTEX_LIT{static_cast<uint32_t>(0x3u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::UNIVERSAL{static_cast<uint32_t>(0x4u)};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  LIV::SDK::Unity::RENDERING_PIPELINE::HIGH_DEFINITION{static_cast<uint32_t>(0x5u)};
