#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsServerProtocol.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24163f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_server(::Org::BouncyCastle::Crypto::Tls::TlsServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_serverContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_tlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSession;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_tlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsSession)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_sessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_sessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_sessionParametersBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParametersBuilder;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* const&
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_sessionParametersBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionParametersBuilder;
}
constexpr void
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParametersBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_offeredCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCipherSuites;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_offeredCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_offeredCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offeredCipherSuites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_offeredCompressionMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCompressionMethods;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_offeredCompressionMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offeredCompressionMethods;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_offeredCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offeredCompressionMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_clientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverExtensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_serverExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_resumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_resumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_resumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_secure_renegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure_renegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_secure_renegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secure_renegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_secure_renegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secure_renegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_allowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_allowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_allowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_expectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_expectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_expectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectSessionTicket = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_keyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyExchange;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_keyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyExchange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverCredentials;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_serverCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_serverCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_certificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateRequest;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_certificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientCertificateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCertificateType;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientCertificateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCertificateType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_clientCertificateType(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientCertificateType = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCertificate;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_get_clientCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::__cordl_internal_set_clientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState::DtlsServerProtocol_ServerHandshakeState() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f7474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.get_VerifyRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f7480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.set_VerifyRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::set_VerifyRequests)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f7488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsServer*, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::Accept)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x23f7494;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.AbortServerHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f7a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ServerHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake)> {
  constexpr static std::size_t size = 0xe04;
  constexpr static std::size_t addrs = 0x23f7a50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.InvalidateSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23f8854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23f8918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateCertificateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23f899c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateNewSessionTicket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23f8a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateServerHello
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x23f8aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.NotifyClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x23f9200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23f94d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessCertificateVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x23f959c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientHello
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x23f9a94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23fa130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientSupplementalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23fa224;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ExpectCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23fa31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 21));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__cordl_internal_get_mVerifyRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifyRequests;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__cordl_internal_get_mVerifyRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifyRequests;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__cordl_internal_set_mVerifyRequests(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mVerifyRequests = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::set_VerifyRequests(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* server,
                                                                                                                   ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, server, transport);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                     ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, uint8_t alertDescription) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, recordLayer, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport*
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                    ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, state, recordLayer);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                               ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, certificateRequest);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                              ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, certificateStatus);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                             ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, newSessionTicket);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                        ::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* prepareFinishHash) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body, prepareFinishHash);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol_ServerHandshakeState* state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol* Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::DtlsServerProtocol() {}
