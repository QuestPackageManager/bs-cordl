#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/XOCBeatGamesHealthCheckStatusValue.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesHealthCheckStatusValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue::XOCBeatGamesHealthCheckStatusValue(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue::XOCBeatGamesHealthCheckStatusValue() {}
constexpr ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue::__UnknownValue{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue::DOWN{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue::UP{ static_cast<int32_t>(0x2) };
