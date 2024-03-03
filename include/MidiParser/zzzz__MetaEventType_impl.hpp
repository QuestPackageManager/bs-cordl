#pragma once
#include "MidiParser/zzzz__MetaEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MidiParser::MetaEventType::MetaEventType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MidiParser::MetaEventType::MetaEventType() {}
constexpr ::MidiParser::MetaEventType MidiParser::MetaEventType::Tempo{ static_cast<uint8_t>(0x51u) };
