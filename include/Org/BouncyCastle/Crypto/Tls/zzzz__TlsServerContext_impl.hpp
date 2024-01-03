#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContext::operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerContext::i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
