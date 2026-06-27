#pragma once
// IWYU pragma private; include "Mono/CertificateImportFlags.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::CertificateImportFlags::CertificateImportFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::CertificateImportFlags::CertificateImportFlags()   {
}
constexpr ::Mono::CertificateImportFlags  Mono::CertificateImportFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Mono::CertificateImportFlags  Mono::CertificateImportFlags::DisableNativeBackend{static_cast<int32_t>(0x1)};
constexpr ::Mono::CertificateImportFlags  Mono::CertificateImportFlags::DisableAutomaticFallback{static_cast<int32_t>(0x2)};
