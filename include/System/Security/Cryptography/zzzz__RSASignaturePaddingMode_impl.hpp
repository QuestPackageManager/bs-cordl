#pragma once
#include "System/Security/Cryptography/zzzz__RSASignaturePaddingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::RSASignaturePaddingMode::RSASignaturePaddingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSASignaturePaddingMode::RSASignaturePaddingMode() {}
constexpr ::System::Security::Cryptography::RSASignaturePaddingMode System::Security::Cryptography::RSASignaturePaddingMode::Pkcs1{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Cryptography::RSASignaturePaddingMode System::Security::Cryptography::RSASignaturePaddingMode::Pss{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
