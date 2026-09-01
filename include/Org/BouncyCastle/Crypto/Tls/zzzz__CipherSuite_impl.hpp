#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\CipherSuite.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CipherSuite_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CipherSuite.IsScsv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::CipherSuite::IsScsv)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x343cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CipherSuite*>(), { "IsScsv", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CipherSuite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CipherSuite::*)()>(&::Org::BouncyCastle::Crypto::Tls::CipherSuite::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x343cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CipherSuite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::CipherSuite::IsScsv(int32_t cipherSuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CipherSuite*>(), { "IsScsv", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite);
}
inline void Org::BouncyCastle::Crypto::Tls::CipherSuite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CipherSuite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::CipherSuite* Org::BouncyCastle::Crypto::Tls::CipherSuite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CipherSuite*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CipherSuite::CipherSuite() {}
