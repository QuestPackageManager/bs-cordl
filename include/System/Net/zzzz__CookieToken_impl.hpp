#pragma once
// IWYU pragma private; include "System/Net/CookieToken.hpp"
#include "System/Net/zzzz__CookieToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CookieToken::CookieToken(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CookieToken::CookieToken()   {
}
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Nothing{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::NameValuePair{static_cast<int32_t>(0x1)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::EndToken{static_cast<int32_t>(0x3)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::EndCookie{static_cast<int32_t>(0x4)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::End{static_cast<int32_t>(0x5)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Equals{static_cast<int32_t>(0x6)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Comment{static_cast<int32_t>(0x7)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::CommentUrl{static_cast<int32_t>(0x8)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::CookieName{static_cast<int32_t>(0x9)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Discard{static_cast<int32_t>(0xa)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Domain{static_cast<int32_t>(0xb)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Expires{static_cast<int32_t>(0xc)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::MaxAge{static_cast<int32_t>(0xd)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Path{static_cast<int32_t>(0xe)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Port{static_cast<int32_t>(0xf)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Secure{static_cast<int32_t>(0x10)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::HttpOnly{static_cast<int32_t>(0x11)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Unknown{static_cast<int32_t>(0x12)};
constexpr ::System::Net::CookieToken  System::Net::CookieToken::Version{static_cast<int32_t>(0x13)};
