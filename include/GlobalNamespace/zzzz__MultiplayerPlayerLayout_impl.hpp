#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerLayout.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerPlayerLayout::MultiplayerPlayerLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerLayout::MultiplayerPlayerLayout() {}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerPlayerLayout::NotDetermined{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerPlayerLayout::Circle{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerPlayerLayout::Duel{ static_cast<int32_t>(0x2) };
