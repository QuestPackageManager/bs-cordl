#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsClientProtocol.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsClientProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
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
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientProtocol;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClientProtocol
class CORDL_TYPE TlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::TlsProtocol {
public:
  // Declarations
  __declspec(property(get = get_Context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* Context;

  __declspec(property(get = get_ContextAdmin)) ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* ContextAdmin;

  __declspec(property(get = get_Peer)) ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Peer;

  /// @brief Field mAuthentication, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_mAuthentication, put = __cordl_internal_set_mAuthentication)) ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* mAuthentication;

  /// @brief Field mCertificateRequest, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificateRequest, put = __cordl_internal_set_mCertificateRequest)) ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* mCertificateRequest;

  /// @brief Field mCertificateStatus, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificateStatus, put = __cordl_internal_set_mCertificateStatus)) ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* mCertificateStatus;

  /// @brief Field mKeyExchange, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_mKeyExchange, put = __cordl_internal_set_mKeyExchange)) ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* mKeyExchange;

  /// @brief Field mSelectedSessionID, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_mSelectedSessionID, put = __cordl_internal_set_mSelectedSessionID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSelectedSessionID;

  /// @brief Field mTlsClient, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsClient, put = __cordl_internal_set_mTlsClient)) ::Org::BouncyCastle::Crypto::Tls::TlsClient* mTlsClient;

  /// @brief Field mTlsClientContext, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsClientContext, put = __cordl_internal_set_mTlsClientContext)) ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* mTlsClientContext;

  /// @brief Method CleanupHandshake, addr 0x2425698, size 0x24, virtual true, abstract: false, final false
  inline void CleanupHandshake();

  /// @brief Method Connect, addr 0x2425230, size 0x468, virtual true, abstract: false, final false
  inline void Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* tlsClient);

  /// @brief Method HandleHandshakeMessage, addr 0x24256d4, size 0x12a0, virtual true, abstract: false, final false
  inline void HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf);

  /// @brief Method HandleSupplementalData, addr 0x2426974, size 0x1b0, virtual true, abstract: false, final false
  inline void HandleSupplementalData(::System::Collections::IList* serverSupplementalData);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method ReceiveNewSessionTicketMessage, addr 0x2426b24, size 0xc0, virtual true, abstract: false, final false
  inline void ReceiveNewSessionTicketMessage(::System::IO::MemoryStream* buf);

  /// @brief Method ReceiveServerHelloMessage, addr 0x2426be4, size 0xea4, virtual true, abstract: false, final false
  inline void ReceiveServerHelloMessage(::System::IO::MemoryStream* buf);

  /// @brief Method SendCertificateVerifyMessage, addr 0x2427a88, size 0x8c, virtual true, abstract: false, final false
  inline void SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify);

  /// @brief Method SendClientHelloMessage, addr 0x2427b14, size 0x698, virtual true, abstract: false, final false
  inline void SendClientHelloMessage();

  /// @brief Method SendClientKeyExchangeMessage, addr 0x24281ac, size 0xe4, virtual true, abstract: false, final false
  inline void SendClientKeyExchangeMessage();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* const& __cordl_internal_get_mAuthentication() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& __cordl_internal_get_mAuthentication();

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* const& __cordl_internal_get_mCertificateRequest() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __cordl_internal_get_mCertificateRequest();

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* const& __cordl_internal_get_mCertificateStatus() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& __cordl_internal_get_mCertificateStatus();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* const& __cordl_internal_get_mKeyExchange() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& __cordl_internal_get_mKeyExchange();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSelectedSessionID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSelectedSessionID();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* const& __cordl_internal_get_mTlsClient() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& __cordl_internal_get_mTlsClient();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* const& __cordl_internal_get_mTlsClientContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& __cordl_internal_get_mTlsClientContext();

  constexpr void __cordl_internal_set_mAuthentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value);

  constexpr void __cordl_internal_set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value);

  constexpr void __cordl_internal_set_mCertificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value);

  constexpr void __cordl_internal_set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value);

  constexpr void __cordl_internal_set_mSelectedSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsClient* value);

  constexpr void __cordl_internal_set_mTlsClientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value);

  /// @brief Method .ctor, addr 0x2425200, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x2425218, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x24251e0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method get_Context, addr 0x24256bc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context();

  /// @brief Method get_ContextAdmin, addr 0x24256c4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin();

  /// @brief Method get_Peer, addr 0x24256cc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsClientProtocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsClientProtocol(TlsClientProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsClientProtocol(TlsClientProtocol const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1293 };

  /// @brief Field mTlsClient, offset: 0xa8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClient* ___mTlsClient;

  /// @brief Field mTlsClientContext, offset: 0xb0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* ___mTlsClientContext;

  /// @brief Field mSelectedSessionID, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSelectedSessionID;

  /// @brief Field mKeyExchange, offset: 0xc0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* ___mKeyExchange;

  /// @brief Field mAuthentication, offset: 0xc8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* ___mAuthentication;

  /// @brief Field mCertificateStatus, offset: 0xd0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* ___mCertificateStatus;

  /// @brief Field mCertificateRequest, offset: 0xd8, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* ___mCertificateRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mTlsClient) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mTlsClientContext) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mSelectedSessionID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mKeyExchange) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mAuthentication) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mCertificateStatus) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, ___mCertificateRequest) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, 0xe0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*, "Org.BouncyCastle.Crypto.Tls", "TlsClientProtocol");
