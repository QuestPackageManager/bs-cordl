#pragma once
// IWYU pragma private; include "Mono/Security/Interface/AlertDescription.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::AlertDescription::AlertDescription(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::AlertDescription::AlertDescription()   {
}
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::CloseNotify{static_cast<uint8_t>(0x0u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::UnexpectedMessage{static_cast<uint8_t>(0xau)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::BadRecordMAC{static_cast<uint8_t>(0x14u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::DecryptionFailed_RESERVED{static_cast<uint8_t>(0x15u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::RecordOverflow{static_cast<uint8_t>(0x16u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::DecompressionFailure{static_cast<uint8_t>(0x1eu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::HandshakeFailure{static_cast<uint8_t>(0x28u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::NoCertificate_RESERVED{static_cast<uint8_t>(0x29u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::BadCertificate{static_cast<uint8_t>(0x2au)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::UnsupportedCertificate{static_cast<uint8_t>(0x2bu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::CertificateRevoked{static_cast<uint8_t>(0x2cu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::CertificateExpired{static_cast<uint8_t>(0x2du)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::CertificateUnknown{static_cast<uint8_t>(0x2eu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::IlegalParameter{static_cast<uint8_t>(0x2fu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::UnknownCA{static_cast<uint8_t>(0x30u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::AccessDenied{static_cast<uint8_t>(0x31u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::DecodeError{static_cast<uint8_t>(0x32u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::DecryptError{static_cast<uint8_t>(0x33u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::ExportRestriction{static_cast<uint8_t>(0x3cu)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::ProtocolVersion{static_cast<uint8_t>(0x46u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::InsuficientSecurity{static_cast<uint8_t>(0x47u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::InternalError{static_cast<uint8_t>(0x50u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::UserCancelled{static_cast<uint8_t>(0x5au)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::NoRenegotiation{static_cast<uint8_t>(0x64u)};
constexpr ::Mono::Security::Interface::AlertDescription  Mono::Security::Interface::AlertDescription::UnsupportedExtension{static_cast<uint8_t>(0x6eu)};
