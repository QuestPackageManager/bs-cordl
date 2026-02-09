#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RijndaelManagedTransformMode.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode::RijndaelManagedTransformMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode::RijndaelManagedTransformMode()   {
}
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode  System::Security::Cryptography::RijndaelManagedTransformMode::Encrypt{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode  System::Security::Cryptography::RijndaelManagedTransformMode::Decrypt{static_cast<int32_t>(0x1)};
