#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DtlsHandshakeRetransmit.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit.ReceivedHandshakeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(), 0 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, epoch, buf, off, len);
}
