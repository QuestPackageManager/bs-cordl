#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsECDheKeyExchange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDheKeyExchange)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDheKeyExchange;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsECDheKeyExchange");
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange
class CORDL_TYPE TlsECDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange {
public:
  // Declarations
  /// @brief Field mServerCredentials, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials;

  /// @brief Method GenerateServerKeyExchange, addr 0x34824bc, size 0x428, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> GenerateServerKeyExchange();

  /// @brief Method InitVerifyer, addr 0x3482ee4, size 0x1e0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves,
                                                                                ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats);

  /// @brief Method ProcessClientCredentials, addr 0x3482e5c, size 0x88, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessServerCredentials, addr 0x3482360, size 0x15c, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerKeyExchange, addr 0x3482abc, size 0x304, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest, addr 0x3482dc0, size 0x9c, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* const& __cordl_internal_get_mServerCredentials() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value);

  /// @brief Method .ctor, addr 0x3482358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats,
                    ::ArrayW<uint8_t> serverECPointFormats);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsECDheKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsECDheKeyExchange(TlsECDheKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsECDheKeyExchange(TlsECDheKeyExchange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1305 };

  /// @brief Field mServerCredentials, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* ___mServerCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange, ___mServerCredentials) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange) == 0x70, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
