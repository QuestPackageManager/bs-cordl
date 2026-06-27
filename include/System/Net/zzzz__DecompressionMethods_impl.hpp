#pragma once
// IWYU pragma private; include "System/Net/DecompressionMethods.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::DecompressionMethods::DecompressionMethods(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::DecompressionMethods::DecompressionMethods()   {
}
constexpr ::System::Net::DecompressionMethods  System::Net::DecompressionMethods::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::DecompressionMethods  System::Net::DecompressionMethods::GZip{static_cast<int32_t>(0x1)};
constexpr ::System::Net::DecompressionMethods  System::Net::DecompressionMethods::Deflate{static_cast<int32_t>(0x2)};
