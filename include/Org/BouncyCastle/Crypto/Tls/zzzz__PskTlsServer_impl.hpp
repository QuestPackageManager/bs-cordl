#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PskTlsServer.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__PskTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPskIdentityManager_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x346ae4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*)>(&::Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x346aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetRsaEncryptionCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetRsaEncryptionCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x346aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetDHParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetDHParameters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x346aef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x346af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x346afc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x346b0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.CreatePskKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::CreatePskKeyExchange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x346b164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 71 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_get_mPskIdentityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentityManager;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* const& Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_get_mPskIdentityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentityManager;
}
constexpr void Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPskIdentityManager = value;
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pskIdentityManager);
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory, pskIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetRsaEncryptionCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetDHParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCipherSuites() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsServer::CreatePskKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* Org::BouncyCastle::Crypto::Tls::PskTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(pskIdentityManager));
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* Org::BouncyCastle::Crypto::Tls::PskTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(cipherFactory, pskIdentityManager));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::PskTlsServer::PskTlsServer() {}
