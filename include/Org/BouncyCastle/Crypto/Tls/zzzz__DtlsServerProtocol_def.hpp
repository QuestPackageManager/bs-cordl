#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsServerProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsServerProtocol__ServerHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsServerProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsServerProtocol__ServerHandshakeState;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState);
// Type: ::ServerHandshakeState
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1235))
// CS Name: ::DtlsServerProtocol::ServerHandshakeState*
class CORDL_TYPE __DtlsServerProtocol__ServerHandshakeState : public ::System::Object {
public:
  // Declarations
  /// @brief Field server, offset 0x10, size 0x8
  __declspec(property(get = __get_server, put = __set_server))::Org::BouncyCastle::Crypto::Tls::TlsServer* server;

  /// @brief Field serverContext, offset 0x18, size 0x8
  __declspec(property(get = __get_serverContext, put = __set_serverContext))::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* serverContext;

  /// @brief Field tlsSession, offset 0x20, size 0x8
  __declspec(property(get = __get_tlsSession, put = __set_tlsSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* tlsSession;

  /// @brief Field sessionParameters, offset 0x28, size 0x8
  __declspec(property(get = __get_sessionParameters, put = __set_sessionParameters))::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters;

  /// @brief Field sessionParametersBuilder, offset 0x30, size 0x8
  __declspec(property(get = __get_sessionParametersBuilder, put = __set_sessionParametersBuilder))::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* sessionParametersBuilder;

  /// @brief Field offeredCipherSuites, offset 0x38, size 0x8
  __declspec(property(get = __get_offeredCipherSuites, put = __set_offeredCipherSuites))::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites;

  /// @brief Field offeredCompressionMethods, offset 0x40, size 0x8
  __declspec(property(get = __get_offeredCompressionMethods, put = __set_offeredCompressionMethods))::ArrayW<uint8_t, ::Array<uint8_t>*> offeredCompressionMethods;

  /// @brief Field clientExtensions, offset 0x48, size 0x8
  __declspec(property(get = __get_clientExtensions, put = __set_clientExtensions))::System::Collections::IDictionary* clientExtensions;

  /// @brief Field serverExtensions, offset 0x50, size 0x8
  __declspec(property(get = __get_serverExtensions, put = __set_serverExtensions))::System::Collections::IDictionary* serverExtensions;

  /// @brief Field resumedSession, offset 0x58, size 0x1
  __declspec(property(get = __get_resumedSession, put = __set_resumedSession)) bool resumedSession;

  /// @brief Field secure_renegotiation, offset 0x59, size 0x1
  __declspec(property(get = __get_secure_renegotiation, put = __set_secure_renegotiation)) bool secure_renegotiation;

  /// @brief Field allowCertificateStatus, offset 0x5a, size 0x1
  __declspec(property(get = __get_allowCertificateStatus, put = __set_allowCertificateStatus)) bool allowCertificateStatus;

  /// @brief Field expectSessionTicket, offset 0x5b, size 0x1
  __declspec(property(get = __get_expectSessionTicket, put = __set_expectSessionTicket)) bool expectSessionTicket;

  /// @brief Field keyExchange, offset 0x60, size 0x8
  __declspec(property(get = __get_keyExchange, put = __set_keyExchange))::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange;

  /// @brief Field serverCredentials, offset 0x68, size 0x8
  __declspec(property(get = __get_serverCredentials, put = __set_serverCredentials))::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials;

  /// @brief Field certificateRequest, offset 0x70, size 0x8
  __declspec(property(get = __get_certificateRequest, put = __set_certificateRequest))::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest;

  /// @brief Field clientCertificateType, offset 0x78, size 0x2
  __declspec(property(get = __get_clientCertificateType, put = __set_clientCertificateType)) int16_t clientCertificateType;

  /// @brief Field clientCertificate, offset 0x80, size 0x8
  __declspec(property(get = __get_clientCertificate, put = __set_clientCertificate))::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& __get_server();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServer*> const& __get_server() const;

  constexpr void __set_server(::Org::BouncyCastle::Crypto::Tls::TlsServer* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& __get_serverContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*> const& __get_serverContext() const;

  constexpr void __set_serverContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __get_tlsSession();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& __get_tlsSession() const;

  constexpr void __set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __get_sessionParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& __get_sessionParameters() const;

  constexpr void __set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*& __get_sessionParametersBuilder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*> const& __get_sessionParametersBuilder() const;

  constexpr void __set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_offeredCipherSuites();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_offeredCipherSuites() const;

  constexpr void __set_offeredCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_offeredCompressionMethods();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_offeredCompressionMethods() const;

  constexpr void __set_offeredCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::IDictionary*& __get_clientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_clientExtensions() const;

  constexpr void __set_clientExtensions(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IDictionary*& __get_serverExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_serverExtensions() const;

  constexpr void __set_serverExtensions(::System::Collections::IDictionary* value);

  constexpr bool& __get_resumedSession();

  constexpr bool const& __get_resumedSession() const;

  constexpr void __set_resumedSession(bool value);

  constexpr bool& __get_secure_renegotiation();

  constexpr bool const& __get_secure_renegotiation() const;

  constexpr void __set_secure_renegotiation(bool value);

  constexpr bool& __get_allowCertificateStatus();

  constexpr bool const& __get_allowCertificateStatus() const;

  constexpr void __set_allowCertificateStatus(bool value);

  constexpr bool& __get_expectSessionTicket();

  constexpr bool const& __get_expectSessionTicket() const;

  constexpr void __set_expectSessionTicket(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& __get_keyExchange();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const& __get_keyExchange() const;

  constexpr void __set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& __get_serverCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const& __get_serverCredentials() const;

  constexpr void __set_serverCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __get_certificateRequest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const& __get_certificateRequest() const;

  constexpr void __set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value);

  constexpr int16_t& __get_clientCertificateType();

  constexpr int16_t const& __get_clientCertificateType() const;

  constexpr void __set_clientCertificateType(int16_t value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __get_clientCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __get_clientCertificate() const;

  constexpr void __set_clientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* New_ctor();

  /// @brief Method .ctor, addr 0xf90bc0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsServerProtocol__ServerHandshakeState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsServerProtocol__ServerHandshakeState(__DtlsServerProtocol__ServerHandshakeState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsServerProtocol__ServerHandshakeState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsServerProtocol__ServerHandshakeState(__DtlsServerProtocol__ServerHandshakeState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsServerProtocol__ServerHandshakeState();

public:
  /// @brief Field server, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServer* ___server;

  /// @brief Field serverContext, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* ___serverContext;

  /// @brief Field tlsSession, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSession* ___tlsSession;

  /// @brief Field sessionParameters, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___sessionParameters;

  /// @brief Field sessionParametersBuilder, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* ___sessionParametersBuilder;

  /// @brief Field offeredCipherSuites, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___offeredCipherSuites;

  /// @brief Field offeredCompressionMethods, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___offeredCompressionMethods;

  /// @brief Field clientExtensions, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___clientExtensions;

  /// @brief Field serverExtensions, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___serverExtensions;

  /// @brief Field resumedSession, offset: 0x58, size: 0x1, def value: None
  bool ___resumedSession;

  /// @brief Field secure_renegotiation, offset: 0x59, size: 0x1, def value: None
  bool ___secure_renegotiation;

  /// @brief Field allowCertificateStatus, offset: 0x5a, size: 0x1, def value: None
  bool ___allowCertificateStatus;

  /// @brief Field expectSessionTicket, offset: 0x5b, size: 0x1, def value: None
  bool ___expectSessionTicket;

  /// @brief Field keyExchange, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* ___keyExchange;

  /// @brief Field serverCredentials, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* ___serverCredentials;

  /// @brief Field certificateRequest, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* ___certificateRequest;

  /// @brief Field clientCertificateType, offset: 0x78, size: 0x2, def value: None
  int16_t ___clientCertificateType;

  /// @brief Field clientCertificate, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___clientCertificate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, 0x88>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___server) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___tlsSession) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___sessionParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___sessionParametersBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___offeredCipherSuites) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___offeredCompressionMethods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientExtensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverExtensions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___resumedSession) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___secure_renegotiation) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___allowCertificateStatus) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___expectSessionTicket) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___keyExchange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverCredentials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___certificateRequest) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientCertificateType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientCertificate) == 0x80, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsServerProtocol
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1236))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsServerProtocol*
class CORDL_TYPE DtlsServerProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
  // Declarations
  using ServerHandshakeState = ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState;

  /// @brief Field mVerifyRequests, offset 0x18, size 0x1
  __declspec(property(get = __get_mVerifyRequests, put = __set_mVerifyRequests)) bool mVerifyRequests;

  __declspec(property(get = get_VerifyRequests, put = set_VerifyRequests)) bool VerifyRequests;

  constexpr bool& __get_mVerifyRequests();

  constexpr bool const& __get_mVerifyRequests() const;

  constexpr void __set_mVerifyRequests(bool value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0xf7130c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method get_VerifyRequests, addr 0xf71318, size 0x8, virtual true, abstract: false, final false
  inline bool get_VerifyRequests();

  /// @brief Method set_VerifyRequests, addr 0xf71320, size 0xc, virtual true, abstract: false, final false
  inline void set_VerifyRequests(bool value);

  /// @brief Method Accept, addr 0xf7132c, size 0x58c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* server, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport);

  /// @brief Method AbortServerHandshake, addr 0xf718b8, size 0x50, virtual true, abstract: false, final false
  inline void AbortServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer,
                                   uint8_t alertDescription);

  /// @brief Method ServerHandshake, addr 0xf71908, size 0xe18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                          ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer);

  /// @brief Method InvalidateSession, addr 0xf72720, size 0xc4, virtual true, abstract: false, final false
  inline void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state);

  /// @brief Method GenerateCertificateRequest, addr 0xf727e4, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                         ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method GenerateCertificateStatus, addr 0xf72868, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                        ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus);

  /// @brief Method GenerateNewSessionTicket, addr 0xf728ec, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state,
                                                                       ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);

  /// @brief Method GenerateServerHello, addr 0xf72970, size 0x764, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state);

  /// @brief Method NotifyClientCertificate, addr 0xf730d4, size 0x2e4, virtual true, abstract: false, final false
  inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientCertificate, addr 0xf733b8, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessCertificateVerify, addr 0xf73480, size 0x518, virtual true, abstract: false, final false
  inline void ProcessCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                       ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* prepareFinishHash);

  /// @brief Method ProcessClientHello, addr 0xf73998, size 0x6b0, virtual true, abstract: false, final false
  inline void ProcessClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessClientKeyExchange, addr 0xf74048, size 0xf8, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessClientSupplementalData, addr 0xf74140, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessClientSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ExpectCertificateVerifyMessage, addr 0xf7423c, size 0x78, virtual true, abstract: false, final false
  inline bool ExpectCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* state);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsServerProtocol(DtlsServerProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsServerProtocol(DtlsServerProtocol const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsServerProtocol();

public:
  /// @brief Field mVerifyRequests, offset: 0x18, size: 0x1, def value: None
  bool ___mVerifyRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol, ___mVerifyRequests) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol/ServerHandshakeState");
