#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsServerContextImpl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContext_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x348bf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl.get_IsServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348bff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(), 17 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                        ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom, securityParameters);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*
Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(secureRandom, securityParameters));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::i___Org__BouncyCastle__Crypto__Tls__TlsServerContext() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::TlsServerContextImpl() {}
