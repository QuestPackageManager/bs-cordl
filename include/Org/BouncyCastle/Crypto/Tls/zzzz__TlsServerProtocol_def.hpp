#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsServerProtocol)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerProtocol;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol);
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerProtocol
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1323))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsServerProtocol*
class CORDL_TYPE TlsServerProtocol : public ::Org::BouncyCastle::Crypto::Tls::TlsProtocol {
public:
  // Declarations
  /// @brief Field mTlsServer, offset 0xa8, size 0x8
  __declspec(property(get = __get_mTlsServer, put = __set_mTlsServer))::Org::BouncyCastle::Crypto::Tls::TlsServer* mTlsServer;

  /// @brief Field mTlsServerContext, offset 0xb0, size 0x8
  __declspec(property(get = __get_mTlsServerContext, put = __set_mTlsServerContext))::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* mTlsServerContext;

  /// @brief Field mKeyExchange, offset 0xb8, size 0x8
  __declspec(property(get = __get_mKeyExchange, put = __set_mKeyExchange))::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* mKeyExchange;

  /// @brief Field mServerCredentials, offset 0xc0, size 0x8
  __declspec(property(get = __get_mServerCredentials, put = __set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsCredentials* mServerCredentials;

  /// @brief Field mCertificateRequest, offset 0xc8, size 0x8
  __declspec(property(get = __get_mCertificateRequest, put = __set_mCertificateRequest))::Org::BouncyCastle::Crypto::Tls::CertificateRequest* mCertificateRequest;

  /// @brief Field mClientCertificateType, offset 0xd0, size 0x2
  __declspec(property(get = __get_mClientCertificateType, put = __set_mClientCertificateType)) int16_t mClientCertificateType;

  /// @brief Field mPrepareFinishHash, offset 0xd8, size 0x8
  __declspec(property(get = __get_mPrepareFinishHash, put = __set_mPrepareFinishHash))::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mPrepareFinishHash;

  __declspec(property(get = get_Context))::Org::BouncyCastle::Crypto::Tls::TlsContext* Context;

  __declspec(property(get = get_ContextAdmin))::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* ContextAdmin;

  __declspec(property(get = get_Peer))::Org::BouncyCastle::Crypto::Tls::TlsPeer* Peer;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& __get_mTlsServer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServer*> const& __get_mTlsServer() const;

  constexpr void __set_mTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsServer* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& __get_mTlsServerContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*> const& __get_mTlsServerContext() const;

  constexpr void __set_mTlsServerContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& __get_mKeyExchange();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const& __get_mKeyExchange() const;

  constexpr void __set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& __get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const& __get_mServerCredentials() const;

  constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __get_mCertificateRequest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const& __get_mCertificateRequest() const;

  constexpr void __set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value);

  constexpr int16_t& __get_mClientCertificateType();

  constexpr int16_t const& __get_mClientCertificateType() const;

  constexpr void __set_mClientCertificateType(int16_t value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& __get_mPrepareFinishHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> const& __get_mPrepareFinishHash() const;

  constexpr void __set_mPrepareFinishHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf3c5fc size 0x24 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf3c620 size 0x24 virtual false final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf3c644 size 0x24 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method Accept addr 0xf3c668 size 0x308 virtual true final false
  inline void Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* tlsServer);

  /// @brief Method CleanupHandshake addr 0xf3c970 size 0x24 virtual true final false
  inline void CleanupHandshake();

  /// @brief Method get_Context addr 0xf3c994 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context();

  /// @brief Method get_ContextAdmin addr 0xf3c99c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin();

  /// @brief Method get_Peer addr 0xf3c9a4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer();

  /// @brief Method HandleHandshakeMessage addr 0xf3c9ac size 0xcdc virtual true final false
  inline void HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf);

  /// @brief Method HandleAlertWarningMessage addr 0xf3da54 size 0x174 virtual true final false
  inline void HandleAlertWarningMessage(uint8_t alertDescription);

  /// @brief Method NotifyClientCertificate addr 0xf3dbc8 size 0x2cc virtual true final false
  inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ReceiveCertificateMessage addr 0xf3e1d0 size 0x8c virtual true final false
  inline void ReceiveCertificateMessage(::System::IO::MemoryStream* buf);

  /// @brief Method ReceiveCertificateVerifyMessage addr 0xf3e25c size 0x4fc virtual true final false
  inline void ReceiveCertificateVerifyMessage(::System::IO::MemoryStream* buf);

  /// @brief Method ReceiveClientHelloMessage addr 0xf3ee54 size 0x658 virtual true final false
  inline void ReceiveClientHelloMessage(::System::IO::MemoryStream* buf);

  /// @brief Method ReceiveClientKeyExchangeMessage addr 0xf3f8f4 size 0x2dc virtual true final false
  inline void ReceiveClientKeyExchangeMessage(::System::IO::MemoryStream* buf);

  /// @brief Method SendCertificateRequestMessage addr 0xf3fbd0 size 0x90 virtual true final false
  inline void SendCertificateRequestMessage(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method SendCertificateStatusMessage addr 0xf3fc60 size 0x90 virtual true final false
  inline void SendCertificateStatusMessage(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus);

  /// @brief Method SendNewSessionTicketMessage addr 0xf3fcf0 size 0xc4 virtual true final false
  inline void SendNewSessionTicketMessage(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);

  /// @brief Method SendServerHelloMessage addr 0xf3fdb4 size 0x874 virtual true final false
  inline void SendServerHelloMessage();

  /// @brief Method SendServerHelloDoneMessage addr 0xf408e4 size 0xc8 virtual true final false
  inline void SendServerHelloDoneMessage();

  /// @brief Method SendServerKeyExchangeMessage addr 0xf40a10 size 0x88 virtual true final false
  inline void SendServerKeyExchangeMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> serverKeyExchange);

  /// @brief Method ExpectCertificateVerifyMessage addr 0xf40a98 size 0x80 virtual true final false
  inline bool ExpectCertificateVerifyMessage();

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsServerProtocol(TlsServerProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsServerProtocol(TlsServerProtocol const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsServerProtocol();

public:
  /// @brief Field mTlsServer, offset: 0xa8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServer* ___mTlsServer;

  /// @brief Field mTlsServerContext, offset: 0xb0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* ___mTlsServerContext;

  /// @brief Field mKeyExchange, offset: 0xb8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* ___mKeyExchange;

  /// @brief Field mServerCredentials, offset: 0xc0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* ___mServerCredentials;

  /// @brief Field mCertificateRequest, offset: 0xc8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* ___mCertificateRequest;

  /// @brief Field mClientCertificateType, offset: 0xd0, size: 0x2, def value: None
  int16_t ___mClientCertificateType;

  /// @brief Field mPrepareFinishHash, offset: 0xd8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* ___mPrepareFinishHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, 0xe0>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mTlsServer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mTlsServerContext) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mKeyExchange) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mServerCredentials) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mCertificateRequest) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mClientCertificateType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, ___mPrepareFinishHash) == 0xd8, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*, "Org.BouncyCastle.Crypto.Tls", "TlsServerProtocol");
