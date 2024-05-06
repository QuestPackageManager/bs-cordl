#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDheKeyExchange
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsECDheKeyExchange*
class CORDL_TYPE TlsECDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange {
public:
  // Declarations
  /// @brief Field mServerCredentials, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials;

  /// @brief Method GenerateServerKeyExchange, addr 0x120a8ac, size 0x404, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method InitVerifyer, addr 0x120b2b4, size 0x1d0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method ProcessClientCredentials, addr 0x120b228, size 0x8c, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessServerCredentials, addr 0x120a744, size 0x168, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerKeyExchange, addr 0x120ae88, size 0x304, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest, addr 0x120b18c, size 0x9c, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*> const& __cordl_internal_get_mServerCredentials() const;

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value);

  /// @brief Method .ctor, addr 0x120a73c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

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

  /// @brief Field mServerCredentials, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* ___mServerCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange, ___mServerCredentials) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsECDheKeyExchange");
