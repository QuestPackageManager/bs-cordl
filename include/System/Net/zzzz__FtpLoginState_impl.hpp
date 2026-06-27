#pragma once
// IWYU pragma private; include "System/Net/FtpLoginState.hpp"
#include "System/Net/zzzz__FtpLoginState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpLoginState::FtpLoginState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::FtpLoginState::FtpLoginState()   {
}
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::NotLoggedIn{static_cast<uint8_t>(0x0u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::LoggedIn{static_cast<uint8_t>(0x1u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::LoggedInButNeedsRelogin{static_cast<uint8_t>(0x2u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::ReloginFailed{static_cast<uint8_t>(0x3u)};
