#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/AlgorithmIdentifierFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__AlgorithmIdentifierFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory.GenerateEncryptionAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x3497468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(),
                            { "GenerateEncryptionAlgID",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3497ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IDEA_CBC", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_IDEA_CBC() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IDEA_CBC", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>();
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CAST5_CBC", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_CAST5_CBC() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CAST5_CBC", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>();
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_rc2Table(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Table", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_rc2Table() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Table", ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*
Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(),
                          { "GenerateEncryptionAlgID",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(nullptr, ___internal_method, encryptionOID, keySize, random);
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::AlgorithmIdentifierFactory() {}
