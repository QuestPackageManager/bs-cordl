#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\AbstractTlsCipherFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory.CreateCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher* (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3435204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3435240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                           int32_t encryptionAlgorithm, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(this, ___internal_method, context, encryptionAlgorithm, macAlgorithm);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::i___Org__BouncyCastle__Crypto__Tls__TlsCipherFactory() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::AbstractTlsCipherFactory() {}
