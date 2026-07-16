#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsRsaUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsRsaUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities.GenerateEncryptedPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*,
                                                                             ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::GenerateEncryptedPreMasterSecret)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x3487b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(),
                                                             { "GenerateEncryptedPreMasterSecret",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities.SafeDecryptPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*,
                                                                             ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::SafeDecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x34897e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(),
                                                             { "SafeDecryptPreMasterSecret",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3489bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::GenerateEncryptedPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                           ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaServerPublicKey,
                                                                                                           ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(),
                                                           { "GenerateEncryptedPreMasterSecret",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, rsaServerPublicKey, output);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::SafeDecryptPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                     ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaServerPrivateKey,
                                                                                                     ::ArrayW<uint8_t> encryptedPreMasterSecret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(),
                                                           { "SafeDecryptPreMasterSecret",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, rsaServerPrivateKey, encryptedPreMasterSecret);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities* Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities::TlsRsaUtilities() {}
