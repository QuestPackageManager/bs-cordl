#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsCompression.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsCompression.Compress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsCompression::Compress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsCompression.Decompress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsCompression::Decompress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsCompression::Compress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsCompression::Decompress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
