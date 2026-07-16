#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PskTlsClient.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__PskTlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPskIdentity_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x346ab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*)>(&::Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x346abac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x346ac1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient.GetCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)()>(&::Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetCipherSuites)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x346ac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient.GetKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetKeyExchange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x346aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient.GetAuthentication
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetAuthentication)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x346ad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsClient.CreatePskKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsClient::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsClient::CreatePskKeyExchange)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x346ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 65 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_get_mDHVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* const& Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_get_mDHVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDHVerifier = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*& Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_get_mPskIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* const& Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_get_mPskIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::PskTlsClient::__cordl_internal_set_mPskIdentity(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPskIdentity = value;
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pskIdentity);
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory, pskIdentity);
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsClient::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory, dhVerifier, pskIdentity);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetCipherSuites() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* Org::BouncyCastle::Crypto::Tls::PskTlsClient::GetAuthentication() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsClient::CreatePskKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* Org::BouncyCastle::Crypto::Tls::PskTlsClient::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(pskIdentity));
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* Org::BouncyCastle::Crypto::Tls::PskTlsClient::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(cipherFactory, pskIdentity));
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsClient* Org::BouncyCastle::Crypto::Tls::PskTlsClient::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::PskTlsClient*>(cipherFactory, dhVerifier, pskIdentity));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::PskTlsClient::PskTlsClient() {}
