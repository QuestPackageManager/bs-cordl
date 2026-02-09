#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CipherMode.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CipherMode::CipherMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CipherMode::CipherMode()   {
}
constexpr ::System::Security::Cryptography::CipherMode  System::Security::Cryptography::CipherMode::CBC{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::CipherMode  System::Security::Cryptography::CipherMode::ECB{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::CipherMode  System::Security::Cryptography::CipherMode::OFB{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::CipherMode  System::Security::Cryptography::CipherMode::CFB{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::CipherMode  System::Security::Cryptography::CipherMode::CTS{static_cast<int32_t>(0x5)};
