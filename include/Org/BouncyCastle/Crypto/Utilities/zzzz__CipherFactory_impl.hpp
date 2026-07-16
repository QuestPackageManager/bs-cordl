#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/CipherFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__CipherFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::CipherFactory::*)()>(&::Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3497ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateContentCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x3497ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(),
                                                                                           { "CreateContentCipher",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::BufferedBlockCipher* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x3498220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(),
                                                                                           { "CreateCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Utilities::CipherFactory::setStaticF_rc2Ekb(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Ekb", ::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Utilities::CipherFactory::getStaticF_rc2Ekb() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Ekb", ::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>();
}
inline void Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* encKey,
                                                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(),
                          { "CreateContentCipher",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, forEncryption, encKey, encryptionAlgID);
}
inline ::Org::BouncyCastle::Crypto::BufferedBlockCipher* Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>(),
                                                                                         { "CreateCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::Utilities::CipherFactory* Org::BouncyCastle::Crypto::Utilities::CipherFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CipherFactory() {}
