#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSrpGroupVerifier.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>(), 0 }));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, group);
}
