#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::TlsServer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1172))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsServer*
class CORDL_TYPE TlsServer {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsServerContext* context);

  /// @brief Method NotifyClientVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method NotifyFallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyFallback(bool isFallback);

  /// @brief Method NotifyOfferedCipherSuites, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites);

  /// @brief Method NotifyOfferedCompressionMethods, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> offeredCompressionMethods);

  /// @brief Method ProcessClientExtensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions);

  /// @brief Method GetServerVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetServerVersion();

  /// @brief Method GetSelectedCipherSuite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetSelectedCipherSuite();

  /// @brief Method GetSelectedCompressionMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t GetSelectedCompressionMethod();

  /// @brief Method GetServerExtensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IDictionary* GetServerExtensions();

  /// @brief Method GetServerSupplementalData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IList* GetServerSupplementalData();

  /// @brief Method GetCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetCertificateStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* GetCertificateStatus();

  /// @brief Method GetKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetCertificateRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* GetCertificateRequest();

  /// @brief Method ProcessClientSupplementalData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessClientSupplementalData(::System::Collections::IList* clientSupplementalData);

  /// @brief Method NotifyClientCertificate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method GetNewSessionTicket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* GetNewSessionTicket();

  // Ctor Parameters [CppParam { name: "", ty: "TlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsServer(TlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsServer(TlsServer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsServer*, "Org.BouncyCastle.Crypto.Tls", "TlsServer");
