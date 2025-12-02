#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceTimestampType.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestampType::RichPresenceTimestampType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestampType::RichPresenceTimestampType() {}
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestampType OculusStudios::Platform::Core::RichPresenceTimestampType::countdown{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestampType OculusStudios::Platform::Core::RichPresenceTimestampType::countup{ static_cast<int32_t>(0x1) };
