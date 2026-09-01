#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsDHVerifier.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(), 0 }));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::Accept(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dhParameters);
}
