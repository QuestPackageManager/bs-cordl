#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsClientProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsClientProtocol__ClientHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsClientProtocol__ClientHandshakeState;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState);
// Type: ::ClientHandshakeState
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1223))
// CS Name: ::DtlsClientProtocol::ClientHandshakeState*
class CORDL_TYPE __DtlsClientProtocol__ClientHandshakeState : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x10, size 0x8
  __declspec(property(get = __get_client, put = __set_client))::Org::BouncyCastle::Crypto::Tls::TlsClient* client;

  /// @brief Field clientContext, offset 0x18, size 0x8
  __declspec(property(get = __get_clientContext, put = __set_clientContext))::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* clientContext;

  /// @brief Field tlsSession, offset 0x20, size 0x8
  __declspec(property(get = __get_tlsSession, put = __set_tlsSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* tlsSession;

  /// @brief Field sessionParameters, offset 0x28, size 0x8
  __declspec(property(get = __get_sessionParameters, put = __set_sessionParameters))::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters;

  /// @brief Field sessionParametersBuilder, offset 0x30, size 0x8
  __declspec(property(get = __get_sessionParametersBuilder, put = __set_sessionParametersBuilder))::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* sessionParametersBuilder;

  /// @brief Field offeredCipherSuites, offset 0x38, size 0x8
  __declspec(property(get = __get_offeredCipherSuites, put = __set_offeredCipherSuites))::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites;

  /// @brief Field clientExtensions, offset 0x40, size 0x8
  __declspec(property(get = __get_clientExtensions, put = __set_clientExtensions))::System::Collections::IDictionary* clientExtensions;

  /// @brief Field serverExtensions, offset 0x48, size 0x8
  __declspec(property(get = __get_serverExtensions, put = __set_serverExtensions))::System::Collections::IDictionary* serverExtensions;

  /// @brief Field selectedSessionID, offset 0x50, size 0x8
  __declspec(property(get = __get_selectedSessionID, put = __set_selectedSessionID))::ArrayW<uint8_t, ::Array<uint8_t>*> selectedSessionID;

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

  /// @brief Field authentication, offset 0x68, size 0x8
  __declspec(property(get = __get_authentication, put = __set_authentication))::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* authentication;

  /// @brief Field certificateStatus, offset 0x70, size 0x8
  __declspec(property(get = __get_certificateStatus, put = __set_certificateStatus))::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus;

  /// @brief Field certificateRequest, offset 0x78, size 0x8
  __declspec(property(get = __get_certificateRequest, put = __set_certificateRequest))::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest;

  /// @brief Field clientCredentials, offset 0x80, size 0x8
  __declspec(property(get = __get_clientCredentials, put = __set_clientCredentials))::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& __get_client();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClient*> const& __get_client() const;

  constexpr void __set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& __get_clientContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*> const& __get_clientContext() const;

  constexpr void __set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value);

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

  constexpr ::System::Collections::IDictionary*& __get_clientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_clientExtensions() const;

  constexpr void __set_clientExtensions(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IDictionary*& __get_serverExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_serverExtensions() const;

  constexpr void __set_serverExtensions(::System::Collections::IDictionary* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_selectedSessionID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_selectedSessionID() const;

  constexpr void __set_selectedSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

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

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& __get_authentication();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*> const& __get_authentication() const;

  constexpr void __set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& __get_certificateStatus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*> const& __get_certificateStatus() const;

  constexpr void __set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __get_certificateRequest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const& __get_certificateRequest() const;

  constexpr void __set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& __get_clientCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const& __get_clientCredentials() const;

  constexpr void __set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* New_ctor();

  /// @brief Method .ctor, addr 0xf695b0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsClientProtocol__ClientHandshakeState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsClientProtocol__ClientHandshakeState(__DtlsClientProtocol__ClientHandshakeState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsClientProtocol__ClientHandshakeState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsClientProtocol__ClientHandshakeState(__DtlsClientProtocol__ClientHandshakeState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsClientProtocol__ClientHandshakeState();

public:
  /// @brief Field client, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClient* ___client;

  /// @brief Field clientContext, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* ___clientContext;

  /// @brief Field tlsSession, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSession* ___tlsSession;

  /// @brief Field sessionParameters, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___sessionParameters;

  /// @brief Field sessionParametersBuilder, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* ___sessionParametersBuilder;

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, 0x88>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___clientContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___tlsSession) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___sessionParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___sessionParametersBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___offeredCipherSuites) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___clientExtensions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___serverExtensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___selectedSessionID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___resumedSession) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___secure_renegotiation) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___allowCertificateStatus) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___expectSessionTicket) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___keyExchange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___authentication) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___certificateStatus) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___certificateRequest) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, ___clientCredentials) == 0x80, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsClientProtocol
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1224))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsClientProtocol*
class CORDL_TYPE DtlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
  // Declarations
  using ClientHandshakeState = ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState;

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0xf68eac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method Connect, addr 0xf68eb0, size 0x700, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* client, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport);

  /// @brief Method AbortClientHandshake, addr 0xf6970c, size 0x50, virtual true, abstract: false, final false
  inline void AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer,
                                   uint8_t alertDescription);

  /// @brief Method ClientHandshake, addr 0xf6975c, size 0x1390, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                          ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer);

  /// @brief Method GenerateCertificateVerify, addr 0xf6b53c, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                        ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify);

  /// @brief Method GenerateClientHello, addr 0xf6b5c0, size 0x5e0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                  ::Org::BouncyCastle::Crypto::Tls::TlsClient* client);

  /// @brief Method GenerateClientKeyExchange, addr 0xf6bba0, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state);

  /// @brief Method InvalidateSession, addr 0xf6bc8c, size 0xc4, virtual true, abstract: false, final false
  inline void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state);

  /// @brief Method ProcessCertificateRequest, addr 0xf6bd50, size 0x14c, virtual true, abstract: false, final false
  inline void ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessCertificateStatus, addr 0xf6be9c, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessHelloVerifyRequest, addr 0xf6bf64, size 0x18c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessNewSessionTicket, addr 0xf6c0f0, size 0x108, virtual true, abstract: false, final false
  inline void ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerCertificate, addr 0xf6c1f8, size 0x224, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerHello, addr 0xf6c41c, size 0xca4, virtual true, abstract: false, final false
  inline void ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerKeyExchange, addr 0xf6d0c0, size 0xf8, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ProcessServerSupplementalData, addr 0xf6d1b8, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method ReportServerVersion, addr 0xf6d2b4, size 0x144, virtual true, abstract: false, final false
  inline void ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* server_version);

  /// @brief Method PatchClientHelloWithCookie, addr 0xf6b0fc, size 0x130, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PatchClientHelloWithCookie(::ArrayW<uint8_t, ::Array<uint8_t>*> clientHelloBody, ::ArrayW<uint8_t, ::Array<uint8_t>*> cookie);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsClientProtocol(DtlsClientProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsClientProtocol(DtlsClientProtocol const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsClientProtocol();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol/ClientHandshakeState");
