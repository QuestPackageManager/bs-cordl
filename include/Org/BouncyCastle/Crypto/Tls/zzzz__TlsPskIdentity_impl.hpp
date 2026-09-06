#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsPskIdentity.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPskIdentity_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity.SkipIdentityHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::SkipIdentityHint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity.NotifyIdentityHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::NotifyIdentityHint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity.GetPskIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::GetPskIdentity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity.GetPsk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::GetPsk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::SkipIdentityHint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::NotifyIdentityHint(::ArrayW<uint8_t> psk_identity_hint) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, psk_identity_hint);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::GetPskIdentity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsPskIdentity::GetPsk() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
