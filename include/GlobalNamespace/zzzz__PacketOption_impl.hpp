#pragma once
// IWYU pragma private; include "GlobalNamespace/PacketOption.hpp"
#include "GlobalNamespace/zzzz__PacketOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PacketOption::PacketOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketOption::PacketOption() {}
constexpr ::GlobalNamespace::PacketOption GlobalNamespace::PacketOption::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PacketOption GlobalNamespace::PacketOption::Encrypted{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PacketOption GlobalNamespace::PacketOption::OnlyFirstDegreeConnections{ static_cast<int32_t>(0x2) };
