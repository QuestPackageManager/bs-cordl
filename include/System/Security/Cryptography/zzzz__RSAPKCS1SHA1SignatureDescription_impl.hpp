#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SHA1SignatureDescription.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SHA1SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::*)()>(
    &::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b04a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription* System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::RSAPKCS1SHA1SignatureDescription() {}
