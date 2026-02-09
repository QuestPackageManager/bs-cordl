#pragma once
// IWYU pragma private; include "System/Net/CookieVariant.hpp"
#include "System/Net/zzzz__CookieVariant_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CookieVariant::CookieVariant(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CookieVariant::CookieVariant()   {
}
constexpr ::System::Net::CookieVariant  System::Net::CookieVariant::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CookieVariant  System::Net::CookieVariant::Plain{static_cast<int32_t>(0x1)};
constexpr ::System::Net::CookieVariant  System::Net::CookieVariant::Rfc2109{static_cast<int32_t>(0x2)};
constexpr ::System::Net::CookieVariant  System::Net::CookieVariant::Rfc2965{static_cast<int32_t>(0x3)};
constexpr ::System::Net::CookieVariant  System::Net::CookieVariant::Default{static_cast<int32_t>(0x2)};
