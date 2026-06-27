#pragma once
// IWYU pragma private; include "System/ParsingError.hpp"
#include "System/zzzz__ParsingError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParsingError::ParsingError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ParsingError::ParsingError()   {
}
constexpr ::System::ParsingError  System::ParsingError::None{static_cast<int32_t>(0x0)};
constexpr ::System::ParsingError  System::ParsingError::BadFormat{static_cast<int32_t>(0x1)};
constexpr ::System::ParsingError  System::ParsingError::BadScheme{static_cast<int32_t>(0x2)};
constexpr ::System::ParsingError  System::ParsingError::BadAuthority{static_cast<int32_t>(0x3)};
constexpr ::System::ParsingError  System::ParsingError::EmptyUriString{static_cast<int32_t>(0x4)};
constexpr ::System::ParsingError  System::ParsingError::LastRelativeUriOkErrIndex{static_cast<int32_t>(0x4)};
constexpr ::System::ParsingError  System::ParsingError::SchemeLimit{static_cast<int32_t>(0x5)};
constexpr ::System::ParsingError  System::ParsingError::SizeLimit{static_cast<int32_t>(0x6)};
constexpr ::System::ParsingError  System::ParsingError::MustRootedPath{static_cast<int32_t>(0x7)};
constexpr ::System::ParsingError  System::ParsingError::BadHostName{static_cast<int32_t>(0x8)};
constexpr ::System::ParsingError  System::ParsingError::NonEmptyHost{static_cast<int32_t>(0x9)};
constexpr ::System::ParsingError  System::ParsingError::BadPort{static_cast<int32_t>(0xa)};
constexpr ::System::ParsingError  System::ParsingError::BadAuthorityTerminator{static_cast<int32_t>(0xb)};
constexpr ::System::ParsingError  System::ParsingError::CannotCreateRelative{static_cast<int32_t>(0xc)};
