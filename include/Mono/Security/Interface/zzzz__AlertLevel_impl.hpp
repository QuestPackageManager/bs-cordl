#pragma once
// IWYU pragma private; include "Mono/Security/Interface/AlertLevel.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::AlertLevel::AlertLevel(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::AlertLevel::AlertLevel()   {
}
constexpr ::Mono::Security::Interface::AlertLevel  Mono::Security::Interface::AlertLevel::Warning{static_cast<uint8_t>(0x1u)};
constexpr ::Mono::Security::Interface::AlertLevel  Mono::Security::Interface::AlertLevel::Fatal{static_cast<uint8_t>(0x2u)};
