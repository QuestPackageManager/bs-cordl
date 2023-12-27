#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsKeyExchange)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsKeyExchange
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1170))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsKeyExchange*
class CORDL_TYPE TlsKeyExchange {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method SkipServerCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method get_RequiresServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Method GenerateServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method SkipServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SkipServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method SkipClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SkipClientCredentials();

  /// @brief Method ProcessClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method GenerateClientKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  // Ctor Parameters [CppParam { name: "", ty: "TlsKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsKeyExchange(TlsKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsKeyExchange(TlsKeyExchange const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsKeyExchange");
