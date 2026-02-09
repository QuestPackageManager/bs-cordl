#pragma once
// IWYU pragma private; include "System/Net/Configuration/UnicodeEncodingConformance.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::UnicodeEncodingConformance::UnicodeEncodingConformance(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::UnicodeEncodingConformance::UnicodeEncodingConformance()   {
}
constexpr ::System::Net::Configuration::UnicodeEncodingConformance  System::Net::Configuration::UnicodeEncodingConformance::Auto{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Configuration::UnicodeEncodingConformance  System::Net::Configuration::UnicodeEncodingConformance::Strict{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Configuration::UnicodeEncodingConformance  System::Net::Configuration::UnicodeEncodingConformance::Compat{static_cast<int32_t>(0x2)};
