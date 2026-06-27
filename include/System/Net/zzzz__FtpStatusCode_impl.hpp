#pragma once
// IWYU pragma private; include "System/Net/FtpStatusCode.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpStatusCode::FtpStatusCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::FtpStatusCode::FtpStatusCode()   {
}
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::Undefined{static_cast<int32_t>(0x0)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::RestartMarker{static_cast<int32_t>(0x6e)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServiceTemporarilyNotAvailable{static_cast<int32_t>(0x78)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::DataAlreadyOpen{static_cast<int32_t>(0x7d)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::OpeningData{static_cast<int32_t>(0x96)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandOK{static_cast<int32_t>(0xc8)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandExtraneous{static_cast<int32_t>(0xca)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::DirectoryStatus{static_cast<int32_t>(0xd4)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileStatus{static_cast<int32_t>(0xd5)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::SystemType{static_cast<int32_t>(0xd7)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::SendUserCommand{static_cast<int32_t>(0xdc)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ClosingControl{static_cast<int32_t>(0xdd)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ClosingData{static_cast<int32_t>(0xe2)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::EnteringPassive{static_cast<int32_t>(0xe3)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::LoggedInProceed{static_cast<int32_t>(0xe6)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServerWantsSecureSession{static_cast<int32_t>(0xea)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileActionOK{static_cast<int32_t>(0xfa)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::PathnameCreated{static_cast<int32_t>(0x101)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::SendPasswordCommand{static_cast<int32_t>(0x14b)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::NeedLoginAccount{static_cast<int32_t>(0x14c)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileCommandPending{static_cast<int32_t>(0x15e)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServiceNotAvailable{static_cast<int32_t>(0x1a5)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::CantOpenData{static_cast<int32_t>(0x1a9)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ConnectionClosed{static_cast<int32_t>(0x1aa)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFileUnavailableOrBusy{static_cast<int32_t>(0x1c2)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionAbortedLocalProcessingError{static_cast<int32_t>(0x1c3)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenInsufficientSpace{static_cast<int32_t>(0x1c4)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandSyntaxError{static_cast<int32_t>(0x1f4)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ArgumentSyntaxError{static_cast<int32_t>(0x1f5)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandNotImplemented{static_cast<int32_t>(0x1f6)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::BadCommandSequence{static_cast<int32_t>(0x1f7)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::NotLoggedIn{static_cast<int32_t>(0x212)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::AccountNeeded{static_cast<int32_t>(0x214)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFileUnavailable{static_cast<int32_t>(0x226)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionAbortedUnknownPageType{static_cast<int32_t>(0x227)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileActionAborted{static_cast<int32_t>(0x228)};
constexpr ::System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFilenameNotAllowed{static_cast<int32_t>(0x229)};
