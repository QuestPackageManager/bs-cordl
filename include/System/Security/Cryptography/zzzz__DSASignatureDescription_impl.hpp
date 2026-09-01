#pragma once
// IWYU pragma private; include "System\Security\Cryptography\DSASignatureDescription.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureDescription::*)()>(&::System::Security::Cryptography::DSASignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b06f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DSASignatureDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSASignatureDescription* System::Security::Cryptography::DSASignatureDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureDescription*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureDescription::DSASignatureDescription() {}
