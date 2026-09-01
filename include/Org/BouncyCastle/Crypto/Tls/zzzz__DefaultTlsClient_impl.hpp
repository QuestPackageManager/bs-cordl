#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DefaultTlsClient.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x343f030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x343f084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x343f150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.GetCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::GetCipherSuites)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x343f15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.GetKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::GetKeyExchange)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x343f1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.CreateDHKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateDHKeyExchange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x343f32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.CreateDheKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateDheKeyExchange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x343f3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.CreateECDHKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateECDHKeyExchange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x343f42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.CreateECDheKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateECDheKeyExchange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x343f4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient.CreateRsaKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateRsaKeyExchange)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x343f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 69 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::__cordl_internal_get_mDHVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::__cordl_internal_get_mDHVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::__cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDHVerifier = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherFactory, dhVerifier);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::GetCipherSuites() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::GetKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateDHKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateDheKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateECDHKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateECDheKeyExchange(int32_t keyExchange) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method, keyExchange);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::CreateRsaKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(cipherFactory));
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                                      ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*>(cipherFactory, dhVerifier));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient::DefaultTlsClient() {}
