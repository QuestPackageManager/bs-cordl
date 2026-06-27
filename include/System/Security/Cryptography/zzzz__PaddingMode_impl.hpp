#pragma once
// IWYU pragma private; include "System/Security/Cryptography/PaddingMode.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::PaddingMode::PaddingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PaddingMode::PaddingMode()   {
}
constexpr ::System::Security::Cryptography::PaddingMode  System::Security::Cryptography::PaddingMode::None{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::PaddingMode  System::Security::Cryptography::PaddingMode::PKCS7{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::PaddingMode  System::Security::Cryptography::PaddingMode::Zeros{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::PaddingMode  System::Security::Cryptography::PaddingMode::ANSIX923{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::PaddingMode  System::Security::Cryptography::PaddingMode::ISO10126{static_cast<int32_t>(0x5)};
