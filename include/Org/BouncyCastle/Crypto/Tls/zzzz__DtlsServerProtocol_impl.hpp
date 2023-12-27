#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf90bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___server;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServer*> const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___server;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_server(::Org::BouncyCastle::Crypto::Tls::TlsServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_serverContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_tlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsSession;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_tlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsSession)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_sessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_sessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_sessionParametersBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParametersBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_sessionParametersBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParametersBuilder;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParametersBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_offeredCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCipherSuites;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_offeredCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_offeredCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offeredCipherSuites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_offeredCompressionMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCompressionMethods;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_offeredCompressionMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCompressionMethods;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_offeredCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offeredCompressionMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_clientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_serverExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_resumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_resumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_resumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___resumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_secure_renegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secure_renegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_secure_renegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secure_renegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_secure_renegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___secure_renegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_allowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_allowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_allowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___allowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_expectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___expectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_expectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___expectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_expectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___expectSessionTicket = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_keyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyExchange;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_keyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyExchange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_serverCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_serverCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_certificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_certificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCertificateType;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCertificateType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_clientCertificateType(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___clientCertificateType = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__set_clientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>());
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState::__DtlsServerProtocol__ServerHandshakeState() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf7130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.get_VerifyRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf71318;

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
  constexpr static std::size_t addrs = 0xf71320;

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
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0xf7132c;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf718b8;

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
    ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake)> {
  constexpr static std::size_t size = 0xe18;
  constexpr static std::size_t addrs = 0xf71908;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf72720;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf727e4;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf72868;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf728ec;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0xf72970;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xf730d4;

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
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf733b8;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xf73480;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0xf73998;

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
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf74048;

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
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf74140;

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
    ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf7423c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), 21));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__get_mVerifyRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mVerifyRequests;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__get_mVerifyRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mVerifyRequests;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__set_mVerifyRequests(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mVerifyRequests = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol* Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>(secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(),
                                                                             "get_VerifyRequests", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::set_VerifyRequests(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "set_VerifyRequests",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* server,
                                                                                                                   ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "Accept", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsServer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, server, transport);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                     ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "AbortServerHandshake", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, recordLayer, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport*
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                    ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ServerHandshake", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, state, recordLayer);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "InvalidateSession", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                               ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "GenerateCertificateRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, certificateRequest);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                              ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "GenerateCertificateStatus", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, certificateStatus);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                             ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "GenerateNewSessionTicket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, newSessionTicket);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "GenerateServerHello", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                        ::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "NotifyClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ProcessClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                                         ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* prepareFinishHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ProcessCertificateVerify", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body, prepareFinishHash);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ProcessClientHello", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ProcessClientKeyExchange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ProcessClientSupplementalData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*>::get(), "ExpectCertificateVerifyMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::DtlsServerProtocol() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
