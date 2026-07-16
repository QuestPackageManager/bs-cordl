#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CompressionMethod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CompressionMethod_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CompressionMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CompressionMethod::*)()>(&::Org::BouncyCastle::Crypto::Tls::CompressionMethod::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x343b794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CompressionMethod*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::CompressionMethod::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CompressionMethod*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::CompressionMethod* Org::BouncyCastle::Crypto::Tls::CompressionMethod::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CompressionMethod*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CompressionMethod::CompressionMethod() {}
