#pragma once
#include "IgnoranceCore/zzzz__IgnoranceCommandType_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandType_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceCommandPacket::IgnoranceCommandPacket(::IgnoranceCore::IgnoranceCommandType Type, uint32_t PeerId) noexcept {
  this->Type = Type;
  this->PeerId = PeerId;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceCommandPacket::IgnoranceCommandPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
