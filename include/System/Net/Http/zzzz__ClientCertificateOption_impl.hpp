#pragma once
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::ClientCertificateOption::ClientCertificateOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Http::ClientCertificateOption::ClientCertificateOption() {}
constexpr ::System::Net::Http::ClientCertificateOption System::Net::Http::ClientCertificateOption::Manual{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Http::ClientCertificateOption System::Net::Http::ClientCertificateOption::Automatic{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
