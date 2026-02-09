#pragma once
// IWYU pragma private; include "System/Net/HttpStatusCode.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpStatusCode::HttpStatusCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpStatusCode::HttpStatusCode()   {
}
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Continue{static_cast<int32_t>(0x64)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::SwitchingProtocols{static_cast<int32_t>(0x65)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Processing{static_cast<int32_t>(0x66)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::EarlyHints{static_cast<int32_t>(0x67)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::OK{static_cast<int32_t>(0xc8)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Created{static_cast<int32_t>(0xc9)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Accepted{static_cast<int32_t>(0xca)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NonAuthoritativeInformation{static_cast<int32_t>(0xcb)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NoContent{static_cast<int32_t>(0xcc)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::ResetContent{static_cast<int32_t>(0xcd)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::PartialContent{static_cast<int32_t>(0xce)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::MultiStatus{static_cast<int32_t>(0xcf)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::AlreadyReported{static_cast<int32_t>(0xd0)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::IMUsed{static_cast<int32_t>(0xe2)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::MultipleChoices{static_cast<int32_t>(0x12c)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Ambiguous{static_cast<int32_t>(0x12c)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::MovedPermanently{static_cast<int32_t>(0x12d)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Moved{static_cast<int32_t>(0x12d)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Found{static_cast<int32_t>(0x12e)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Redirect{static_cast<int32_t>(0x12e)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::SeeOther{static_cast<int32_t>(0x12f)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RedirectMethod{static_cast<int32_t>(0x12f)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NotModified{static_cast<int32_t>(0x130)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::UseProxy{static_cast<int32_t>(0x131)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Unused{static_cast<int32_t>(0x132)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::TemporaryRedirect{static_cast<int32_t>(0x133)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RedirectKeepVerb{static_cast<int32_t>(0x133)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::PermanentRedirect{static_cast<int32_t>(0x134)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::BadRequest{static_cast<int32_t>(0x190)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Unauthorized{static_cast<int32_t>(0x191)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::PaymentRequired{static_cast<int32_t>(0x192)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Forbidden{static_cast<int32_t>(0x193)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NotFound{static_cast<int32_t>(0x194)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::MethodNotAllowed{static_cast<int32_t>(0x195)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NotAcceptable{static_cast<int32_t>(0x196)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::ProxyAuthenticationRequired{static_cast<int32_t>(0x197)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RequestTimeout{static_cast<int32_t>(0x198)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Conflict{static_cast<int32_t>(0x199)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Gone{static_cast<int32_t>(0x19a)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::LengthRequired{static_cast<int32_t>(0x19b)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::PreconditionFailed{static_cast<int32_t>(0x19c)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RequestEntityTooLarge{static_cast<int32_t>(0x19d)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RequestUriTooLong{static_cast<int32_t>(0x19e)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::UnsupportedMediaType{static_cast<int32_t>(0x19f)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RequestedRangeNotSatisfiable{static_cast<int32_t>(0x1a0)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::ExpectationFailed{static_cast<int32_t>(0x1a1)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::MisdirectedRequest{static_cast<int32_t>(0x1a5)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::UnprocessableEntity{static_cast<int32_t>(0x1a6)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::Locked{static_cast<int32_t>(0x1a7)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::FailedDependency{static_cast<int32_t>(0x1a8)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::UpgradeRequired{static_cast<int32_t>(0x1aa)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::PreconditionRequired{static_cast<int32_t>(0x1ac)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::TooManyRequests{static_cast<int32_t>(0x1ad)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::RequestHeaderFieldsTooLarge{static_cast<int32_t>(0x1af)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::UnavailableForLegalReasons{static_cast<int32_t>(0x1c3)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::InternalServerError{static_cast<int32_t>(0x1f4)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NotImplemented{static_cast<int32_t>(0x1f5)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::BadGateway{static_cast<int32_t>(0x1f6)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::ServiceUnavailable{static_cast<int32_t>(0x1f7)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::GatewayTimeout{static_cast<int32_t>(0x1f8)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::HttpVersionNotSupported{static_cast<int32_t>(0x1f9)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::VariantAlsoNegotiates{static_cast<int32_t>(0x1fa)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::InsufficientStorage{static_cast<int32_t>(0x1fb)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::LoopDetected{static_cast<int32_t>(0x1fc)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NotExtended{static_cast<int32_t>(0x1fe)};
constexpr ::System::Net::HttpStatusCode  System::Net::HttpStatusCode::NetworkAuthenticationRequired{static_cast<int32_t>(0x1ff)};
