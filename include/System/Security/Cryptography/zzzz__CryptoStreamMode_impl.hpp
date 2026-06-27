#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStreamMode.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CryptoStreamMode::CryptoStreamMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoStreamMode::CryptoStreamMode()   {
}
constexpr ::System::Security::Cryptography::CryptoStreamMode  System::Security::Cryptography::CryptoStreamMode::Read{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::CryptoStreamMode  System::Security::Cryptography::CryptoStreamMode::Write{static_cast<int32_t>(0x1)};
