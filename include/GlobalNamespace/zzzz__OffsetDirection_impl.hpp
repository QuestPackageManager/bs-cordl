#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetDirection.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OffsetDirection::OffsetDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetDirection::OffsetDirection() {}
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::Up{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::Down{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::Left{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::Right{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::UpLeft{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::UpRight{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::DownLeft{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::DownRight{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirection::None{ static_cast<int32_t>(0x9) };
