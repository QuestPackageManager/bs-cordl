#pragma once
// IWYU pragma private; include "TMPro/TMP_VertexDataUpdateFlags.hpp"
#include "TMPro/zzzz__TMP_VertexDataUpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_VertexDataUpdateFlags::TMP_VertexDataUpdateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_VertexDataUpdateFlags::TMP_VertexDataUpdateFlags()   {
}
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Vertices{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv0{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv2{static_cast<int32_t>(0x4)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Uv4{static_cast<int32_t>(0x8)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::Colors32{static_cast<int32_t>(0x10)};
constexpr ::TMPro::TMP_VertexDataUpdateFlags  TMPro::TMP_VertexDataUpdateFlags::All{static_cast<int32_t>(0xff)};
