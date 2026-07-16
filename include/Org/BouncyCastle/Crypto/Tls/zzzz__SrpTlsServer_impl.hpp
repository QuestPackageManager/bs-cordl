#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SrpTlsServer.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SrpTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x346f1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x346f238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetDsaSignerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x346f248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetRsaSignerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x346f284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x346f2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.ProcessClientExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x346f338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetSelectedCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x346f36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x346f494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x346f580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.CreateSrpKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x346f63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 71 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mSrpIdentityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentityManager;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mSrpIdentityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentityManager;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_set_mSrpIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSrpIdentityManager = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mSrpIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mSrpIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSrpIdentity = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mLoginParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLoginParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_get_mLoginParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLoginParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__cordl_internal_set_mLoginParameters(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mLoginParameters = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srpIdentityManager);
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory, srpIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientExtensions);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(srpIdentityManager));
}
inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(cipherFactory, srpIdentityManager));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::SrpTlsServer() {}
