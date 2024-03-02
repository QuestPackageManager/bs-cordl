#pragma once
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteCutDirection::NoteCutDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutDirection::NoteCutDirection() {}
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::Up{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::Down{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::Left{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::Right{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::UpLeft{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::UpRight{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::DownLeft{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::DownRight{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::Any{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirection::None{ static_cast<int32_t>(0x9) };
