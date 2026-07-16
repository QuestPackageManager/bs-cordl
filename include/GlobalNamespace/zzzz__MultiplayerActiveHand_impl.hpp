#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerActiveHand.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerActiveHand::MultiplayerActiveHand(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerActiveHand::MultiplayerActiveHand() {}
constexpr ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::MultiplayerActiveHand::None{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::MultiplayerActiveHand::Left{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::MultiplayerActiveHand::Right{ static_cast<uint8_t>(0x2u) };
