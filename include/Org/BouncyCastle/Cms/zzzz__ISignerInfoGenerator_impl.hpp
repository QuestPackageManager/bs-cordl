#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\ISignerInfoGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__ISignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::ISignerInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (
    ::Org::BouncyCastle::Cms::ISignerInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::ISignerInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::ISignerInfoGenerator::Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                                                                          ::ArrayW<uint8_t> calculatedDigest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(this, ___internal_method, contentType, digestAlgorithm, calculatedDigest);
}
