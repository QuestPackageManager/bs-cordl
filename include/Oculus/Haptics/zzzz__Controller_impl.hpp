#pragma once
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Controller::Controller(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Controller::Controller() {}
constexpr ::Oculus::Haptics::Controller Oculus::Haptics::Controller::Left{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::Controller Oculus::Haptics::Controller::Right{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Haptics::Controller Oculus::Haptics::Controller::Both{ static_cast<int32_t>(0x2) };
