#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DtlsClientProtocol.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34440e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___client = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientContext = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_tlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSession;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_tlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tlsSession = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_sessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_sessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionParameters = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_sessionParametersBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParametersBuilder;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* const&
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_sessionParametersBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParametersBuilder;
}
constexpr void
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionParametersBuilder = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_offeredCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCipherSuites;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_offeredCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_offeredCipherSuites(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offeredCipherSuites = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_clientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientExtensions = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_serverExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_serverExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_serverExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverExtensions = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_selectedSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedSessionID;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_selectedSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedSessionID;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_selectedSessionID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedSessionID = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_resumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_resumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_resumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_secure_renegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure_renegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_secure_renegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure_renegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_secure_renegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secure_renegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_allowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_allowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_allowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_expectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_expectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_expectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectSessionTicket = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_keyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyExchange;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_keyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyExchange = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_authentication() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authentication;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_authentication() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authentication;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authentication = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_certificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateStatus;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_certificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateStatus = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_certificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateRequest;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_certificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateRequest = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCredentials;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* const& Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_get_clientCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::__cordl_internal_set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientCredentials = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState::DtlsClientProtocol_ClientHandshakeState() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34439a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient*, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x34439a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.AbortClientHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*,
                                                                                                                      ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3444228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ClientHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake)> {
  constexpr static std::size_t size = 0x12d8;
  constexpr static std::size_t addrs = 0x3444278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateCertificateVerify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3445fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientHello
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::TlsClient*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x3446044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3446638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.InvalidateSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x344672c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x34467f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3446944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessHelloVerifyRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3446a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessNewSessionTicket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3446bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3446cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerHello
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello)> {
  constexpr static std::size_t size = 0xc6c;
  constexpr static std::size_t addrs = 0x3446f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3447b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerSupplementalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3447c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ReportServerVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*,
                                                                                                                      ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3447d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.PatchClientHelloWithCookie
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3445b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                             { "PatchClientHelloWithCookie", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* client,
                                                                                                                    ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*>(this, ___internal_method, client, transport);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                     ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, uint8_t alertDescription) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, recordLayer, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport*
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                    ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*>(this, ___internal_method, state, recordLayer);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                                       ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, state, certificateVerify);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                                 ::Org::BouncyCastle::Crypto::Tls::TlsClient* client) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, state, client);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                                       ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate*
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                              ::ArrayW<uint8_t> body) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                    ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* server_version) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, server_version);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie(::ArrayW<uint8_t> clientHelloBody, ::ArrayW<uint8_t> cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(),
                                                           { "PatchClientHelloWithCookie", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, clientHelloBody, cookie);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol* Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::DtlsClientProtocol() {}
