#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\IPKMacPrimitivesProvider.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider.CreateDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (
    ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateDigest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider.CreateMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (
    ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateMac)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method, digestAlg);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method, macAlg);
}
