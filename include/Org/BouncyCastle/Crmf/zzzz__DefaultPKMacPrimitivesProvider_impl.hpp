#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/DefaultPKMacPrimitivesProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (
    ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36d80e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(),
                                                                                           { "CreateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (
    ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36d8160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(),
                                                                                           { "CreateMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)()>(&::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d81dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(),
                                                                                         { "CreateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method, digestAlg);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(),
                                                                                         { "CreateMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method, macAlg);
}
inline void Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
constexpr Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::operator ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::i___Org__BouncyCastle__Crmf__IPKMacPrimitivesProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::DefaultPKMacPrimitivesProvider() {}
