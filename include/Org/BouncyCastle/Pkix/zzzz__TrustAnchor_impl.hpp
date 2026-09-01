#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\TrustAnchor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__NameConstraints_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(::Org::BouncyCastle::X509::X509Certificate*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35ef0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(
    ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x35ef1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x35ef2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_TrustedCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_TrustedCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_TrustedCert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::get_CA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CAName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::get_CAName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CAName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CAPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_CAPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CAPublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.setNameConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::TrustAnchor::setNameConstraints)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35ef12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "setNameConstraints", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_GetNameConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::get_GetNameConstraints)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35ef3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_GetNameConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x35ef454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_pubKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_pubKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKey;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_pubKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubKey = value;
}
constexpr ::StringW& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_caName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caName;
}
constexpr ::StringW const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_caName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caName;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_caName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caName = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_caPrincipal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caPrincipal;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_caPrincipal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caPrincipal;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_caPrincipal(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caPrincipal = value;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_trustedCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedCert;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_trustedCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedCert;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_trustedCert(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedCert = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_ncBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ncBytes;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_ncBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ncBytes;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_ncBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ncBytes = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints*& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_nc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nc;
}
constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints* const& Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_get_nc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nc;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__cordl_internal_set_nc(::Org::BouncyCastle::Asn1::X509::NameConstraints* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nc = value;
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert, ::ArrayW<uint8_t> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trustedCert, nameConstraints);
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                        ::ArrayW<uint8_t> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caPrincipal, pubKey, nameConstraints);
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caName, pubKey, nameConstraints);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::Pkix::TrustAnchor::get_TrustedCert() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_TrustedCert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Pkix::TrustAnchor::get_CA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::TrustAnchor::get_CAName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CAName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkix::TrustAnchor::get_CAPublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_CAPublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::setNameConstraints(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "setNameConstraints", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::TrustAnchor::get_GetNameConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), { "get_GetNameConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::TrustAnchor::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert, ::ArrayW<uint8_t> nameConstraints) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::TrustAnchor*>(trustedCert, nameConstraints));
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal,
                                                                                              ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t> nameConstraints) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::TrustAnchor*>(caPrincipal, pubKey, nameConstraints));
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                              ::ArrayW<uint8_t> nameConstraints) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::TrustAnchor*>(caName, pubKey, nameConstraints));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::TrustAnchor::TrustAnchor() {}
