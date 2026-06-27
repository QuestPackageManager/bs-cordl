#pragma once
// IWYU pragma private; include "Internal/Cryptography/Pal/GeneralNameType.hpp"
#include "Internal/Cryptography/Pal/zzzz__GeneralNameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Internal::Cryptography::Pal::GeneralNameType::GeneralNameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::Pal::GeneralNameType::GeneralNameType()   {
}
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::OtherName{static_cast<int32_t>(0x0)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Rfc822Name{static_cast<int32_t>(0x1)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Email{static_cast<int32_t>(0x1)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DnsName{static_cast<int32_t>(0x2)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::X400Address{static_cast<int32_t>(0x3)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DirectoryName{static_cast<int32_t>(0x4)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::EdiPartyName{static_cast<int32_t>(0x5)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::UniformResourceIdentifier{static_cast<int32_t>(0x6)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::IPAddress{static_cast<int32_t>(0x7)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::RegisteredId{static_cast<int32_t>(0x8)};
