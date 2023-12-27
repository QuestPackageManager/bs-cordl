#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerPlayerStartState::MultiplayerPlayerStartState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerStartState::MultiplayerPlayerStartState() {}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState GlobalNamespace::MultiplayerPlayerStartState::InSync{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerPlayerStartState GlobalNamespace::MultiplayerPlayerStartState::Late{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
