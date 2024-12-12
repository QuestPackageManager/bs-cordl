#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsClientProtocol.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsClientProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol_ClientHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters_Builder;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol_ClientHandshakeState;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsClientProtocol/ClientHandshakeState
class CORDL_TYPE DtlsClientProtocol_ClientHandshakeState : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowCertificateStatus, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_allowCertificateStatus, put = __cordl_internal_set_allowCertificateStatus)) bool allowCertificateStatus;

  /// @brief Field authentication, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_authentication, put = __cordl_internal_set_authentication)) ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* authentication;

  /// @brief Field certificateRequest, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateRequest, put = __cordl_internal_set_certificateRequest)) ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest;

  /// @brief Field certificateStatus, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateStatus, put = __cordl_internal_set_certificateStatus)) ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus;

  /// @brief Field client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client)) ::Org::BouncyCastle::Crypto::Tls::TlsClient* client;

  /// @brief Field clientContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientContext, put = __cordl_internal_set_clientContext)) ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* clientContext;

  /// @brief Field clientCredentials, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_clientCredentials, put = __cordl_internal_set_clientCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials;

  /// @brief Field clientExtensions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_clientExtensions, put = __cordl_internal_set_clientExtensions)) ::System::Collections::IDictionary* clientExtensions;

  /// @brief Field expectSessionTicket, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get_expectSessionTicket, put = __cordl_internal_set_expectSessionTicket)) bool expectSessionTicket;

  /// @brief Field keyExchange, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_keyExchange, put = __cordl_internal_set_keyExchange)) ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange;

  /// @brief Field offeredCipherSuites, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_offeredCipherSuites, put = __cordl_internal_set_offeredCipherSuites)) ::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites;

  /// @brief Field resumedSession, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_resumedSession, put = __cordl_internal_set_resumedSession)) bool resumedSession;

  /// @brief Field secure_renegotiation, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_secure_renegotiation, put = __cordl_internal_set_secure_renegotiation)) bool secure_renegotiation;

  /// @brief Field selectedSessionID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedSessionID, put = __cordl_internal_set_selectedSessionID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> selectedSessionID;

  /// @brief Field serverExtensions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serverExtensions, put = __cordl_internal_set_serverExtensions)) ::System::Collections::IDictionary* serverExtensions;

  /// @brief Field sessionParameters, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionParameters, put = __cordl_internal_set_sessionParameters)) ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters;

  /// @brief Field sessionParametersBuilder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionParametersBuilder,
                      put = __cordl_internal_set_sessionParametersBuilder)) ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* sessionParametersBuilder;

  /// @brief Field tlsSession, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsSession, put = __cordl_internal_set_tlsSession)) ::Org::BouncyCastle::Crypto::Tls::TlsSession* tlsSession;

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* New_ctor();

  constexpr bool const& __cordl_internal_get_allowCertificateStatus() const;

  constexpr bool& __cordl_internal_get_allowCertificateStatus();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* const& __cordl_internal_get_authentication() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& __cordl_internal_get_authentication();

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& __cordl_internal_get_certificateRequest() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __cordl_internal_get_certificateRequest();

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* const& __cordl_internal_get_certificateStatus() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& __cordl_internal_get_certificateStatus();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* const& __cordl_internal_get_client() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& __cordl_internal_get_client();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* const& __cordl_internal_get_clientContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& __cordl_internal_get_clientContext();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* const& __cordl_internal_get_clientCredentials() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& __cordl_internal_get_clientCredentials();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_clientExtensions() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_clientExtensions();

  constexpr bool const& __cordl_internal_get_expectSessionTicket() const;

  constexpr bool& __cordl_internal_get_expectSessionTicket();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& __cordl_internal_get_keyExchange() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& __cordl_internal_get_keyExchange();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_offeredCipherSuites() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_offeredCipherSuites();

  constexpr bool const& __cordl_internal_get_resumedSession() const;

  constexpr bool& __cordl_internal_get_resumedSession();

  constexpr bool const& __cordl_internal_get_secure_renegotiation() const;

  constexpr bool& __cordl_internal_get_secure_renegotiation();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_selectedSessionID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_selectedSessionID();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_serverExtensions() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_serverExtensions();

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& __cordl_internal_get_sessionParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __cordl_internal_get_sessionParameters();

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* const& __cordl_internal_get_sessionParametersBuilder() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*& __cordl_internal_get_sessionParametersBuilder();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* const& __cordl_internal_get_tlsSession() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __cordl_internal_get_tlsSession();

  constexpr void __cordl_internal_set_allowCertificateStatus(bool value);

  constexpr void __cordl_internal_set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value);

  constexpr void __cordl_internal_set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value);

  constexpr void __cordl_internal_set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value);

  constexpr void __cordl_internal_set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient* value);

  constexpr void __cordl_internal_set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value);

  constexpr void __cordl_internal_set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value);

  constexpr void __cordl_internal_set_clientExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_expectSessionTicket(bool value);

  constexpr void __cordl_internal_set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value);

  constexpr void __cordl_internal_set_offeredCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_resumedSession(bool value);

  constexpr void __cordl_internal_set_secure_renegotiation(bool value);

  constexpr void __cordl_internal_set_selectedSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_serverExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  constexpr void __cordl_internal_set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* value);

  constexpr void __cordl_internal_set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value);

  /// @brief Method .ctor, addr 0x23ed470, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsClientProtocol_ClientHandshakeState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol_ClientHandshakeState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsClientProtocol_ClientHandshakeState(DtlsClientProtocol_ClientHandshakeState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol_ClientHandshakeState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsClientProtocol_ClientHandshakeState(DtlsClientProtocol_ClientHandshakeState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1223 };

  /// @brief Field client, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClient* ___client;

  /// @brief Field clientContext, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* ___clientContext;

  /// @brief Field tlsSession, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSession* ___tlsSession;

  /// @brief Field sessionParameters, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___sessionParameters;

  /// @brief Field sessionParametersBuilder, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* ___sessionParametersBuilder;

  /// @brief Field offeredCipherSuites, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___offeredCipherSuites;

  /// @brief Field clientExtensions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___clientExtensions;

  /// @brief Field serverExtensions, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___serverExtensions;

  /// @brief Field selectedSessionID, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___selectedSessionID;

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

  /// @brief Field authentication, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* ___authentication;

  /// @brief Field certificateStatus, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* ___certificateStatus;

  /// @brief Field certificateRequest, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* ___certificateRequest;

  /// @brief Field clientCredentials, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* ___clientCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___clientContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___tlsSession) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___sessionParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___sessionParametersBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___offeredCipherSuites) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___clientExtensions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___serverExtensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___selectedSessionID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___resumedSession) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___secure_renegotiation) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___allowCertificateStatus) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___expectSessionTicket) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___keyExchange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___authentication) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___certificateStatus) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___certificateRequest) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, ___clientCredentials) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies Org.BouncyCastle.Crypto.Tls.DtlsProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsClientProtocol
class CORDL_TYPE DtlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
  // Declarations
  using ClientHandshakeState = ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState;

  /// @brief Method AbortClientHandshake, addr 0x23ed5c4, size 0x50, virtual true, abstract: false, final false
  inline void AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer,
                                   uint8_t alertDescription);

  /// @brief Method ClientHandshake, addr 0x23ed614, size 0x1378, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ClientHandshake(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                          ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer);

  /// @brief Method Connect, addr 0x23ecd94, size 0x6dc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* client, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport);

  /// @brief Method GenerateCertificateVerify, addr 0x23ef3bc, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                        ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify);

  /// @brief Method GenerateClientHello, addr 0x23ef440, size 0x5d8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                  ::Org::BouncyCastle::Crypto::Tls::TlsClient* client);

  /// @brief Method GenerateClientKeyExchange, addr 0x23efa18, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state);

  /// @brief Method InvalidateSession, addr 0x23efb04, size 0xc4, virtual true, abstract: false, final false
  inline void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method PatchClientHelloWithCookie, addr 0x23eef88, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PatchClientHelloWithCookie(::ArrayW<uint8_t, ::Array<uint8_t>*> clientHelloBody, ::ArrayW<uint8_t, ::Array<uint8_t>*> cookie);

  /// @brief Method ProcessCertificateRequest, addr 0x23efbc8, size 0x140, virtual true, abstract: false, final false
  inline void ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessCertificateStatus, addr 0x23efd08, size 0xbc, virtual true, abstract: false, final false
  inline void ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessHelloVerifyRequest, addr 0x23efdc4, size 0x180, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessNewSessionTicket, addr 0x23eff44, size 0x104, virtual true, abstract: false, final false
  inline void ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerCertificate, addr 0x23f0048, size 0x220, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerHello, addr 0x23f0268, size 0xca8, virtual true, abstract: false, final false
  inline void ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerKeyExchange, addr 0x23f0f10, size 0xf4, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerSupplementalData, addr 0x23f1004, size 0xf8, virtual true, abstract: false, final false
  inline void ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ReportServerVersion, addr 0x23f10fc, size 0x13c, virtual true, abstract: false, final false
  inline void ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* server_version);

  /// @brief Method .ctor, addr 0x23ecd90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsClientProtocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsClientProtocol(DtlsClientProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsClientProtocol(DtlsClientProtocol const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol/ClientHandshakeState");
