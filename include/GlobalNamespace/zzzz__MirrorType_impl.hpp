#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorType.hpp"
#include "GlobalNamespace/zzzz__MirrorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MirrorType::MirrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorType::MirrorType() {}
constexpr ::GlobalNamespace::MirrorType GlobalNamespace::MirrorType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MirrorType GlobalNamespace::MirrorType::FakeMirror{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MirrorType GlobalNamespace::MirrorType::RenderedMirror{ static_cast<int32_t>(0x2) };
