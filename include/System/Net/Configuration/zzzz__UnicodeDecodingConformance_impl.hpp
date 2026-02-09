#pragma once
// IWYU pragma private; include "System/Net/Configuration/UnicodeDecodingConformance.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::UnicodeDecodingConformance::UnicodeDecodingConformance(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::UnicodeDecodingConformance::UnicodeDecodingConformance()   {
}
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  System::Net::Configuration::UnicodeDecodingConformance::Auto{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  System::Net::Configuration::UnicodeDecodingConformance::Strict{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  System::Net::Configuration::UnicodeDecodingConformance::Compat{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  System::Net::Configuration::UnicodeDecodingConformance::Loose{static_cast<int32_t>(0x3)};
