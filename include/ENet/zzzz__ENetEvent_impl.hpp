#pragma once
#include "ENet/zzzz__EventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::ENet::EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "peer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "channelID", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packet", ty: "void*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetEvent::ENetEvent(::ENet::EventType type, void* peer, uint8_t channelID, uint32_t data, void* packet) noexcept {
  this->type = type;
  this->peer = peer;
  this->channelID = channelID;
  this->data = data;
  this->packet = packet;
}
// Ctor Parameters []
constexpr ::ENet::ENetEvent::ENetEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
