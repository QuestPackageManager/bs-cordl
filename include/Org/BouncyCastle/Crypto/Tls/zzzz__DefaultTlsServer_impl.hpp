#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DefaultTlsServer.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x343ffb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343ffb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetDsaSignerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetDsaSignerCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x343ffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetECDsaSignerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetECDsaSignerCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x343fffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetRsaEncryptionCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetRsaEncryptionCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3440038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetRsaSignerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetRsaSignerCredentials)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3440074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetDHParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetDHParameters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34400b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x344010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3440184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.GetKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x34402c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.CreateDHKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateDHKeyExchange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x344041c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.CreateDheKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateDheKeyExchange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x34404b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.CreateECDHKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateECDHKeyExchange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x344054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.CreateECDheKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateECDheKeyExchange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34405dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer.CreateRsaKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateRsaKeyExchange)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x344066c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 78 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetDsaSignerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetECDsaSignerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetRsaEncryptionCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetRsaSignerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetDHParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetCipherSuites() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::GetKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateDHKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateDheKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateECDHKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateECDheKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::CreateRsaKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*>(cipherFactory));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer::DefaultTlsServer() {}
