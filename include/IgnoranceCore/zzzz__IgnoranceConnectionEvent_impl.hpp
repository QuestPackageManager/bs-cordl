#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceConnectionEvent.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::IgnoranceCore::IgnoranceConnectionEvent::IgnoranceConnectionEvent(uint8_t EventType, uint16_t Port, uint32_t NativePeerId, ::StringW IP) noexcept {
  this->EventType = EventType;
  this->Port = Port;
  this->NativePeerId = NativePeerId;
  this->IP = IP;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceConnectionEvent::IgnoranceConnectionEvent() {}
