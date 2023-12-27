#pragma once
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifierMask::GameplayModifierMask(uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierMask::GameplayModifierMask() {}
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::None{ static_cast<uint16_t>(0x0u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::BatteryEnergy{ static_cast<uint16_t>(0x1u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::NoFail{ static_cast<uint16_t>(0x2u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::InstaFail{ static_cast<uint16_t>(0x4u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::NoObstacles{ static_cast<uint16_t>(0x8u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::NoBombs{ static_cast<uint16_t>(0x10u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::FastNotes{ static_cast<uint16_t>(0x20u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::StrictAngles{ static_cast<uint16_t>(0x40u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::DisappearingArrows{ static_cast<uint16_t>(0x80u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::FasterSong{ static_cast<uint16_t>(0x100u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::SlowerSong{ static_cast<uint16_t>(0x200u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::NoArrows{ static_cast<uint16_t>(0x400u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::GhostNotes{ static_cast<uint16_t>(0x800u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::SuperFastSong{ static_cast<uint16_t>(0x1000u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::ProMode{ static_cast<uint16_t>(0x2000u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::ZenMode{ static_cast<uint16_t>(0x4000u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::SmallCubes{ static_cast<uint16_t>(0x8000u) };
constexpr ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMask::All{ static_cast<uint16_t>(0xffffu) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
