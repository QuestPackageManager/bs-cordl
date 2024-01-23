#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDheKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
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
class TlsDHVerifier;
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
class TlsDheKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDheKeyExchange
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1298))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1299))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDheKeyExchange*
class CORDL_TYPE TlsDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange {
public:
  // Declarations
  /// @brief Field mServerCredentials, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*> const& __cordl_internal_get_mServerCredentials() const;

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method .ctor, addr 0xfa4e4c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method .ctor, addr 0xfa4edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method ProcessServerCredentials, addr 0xfa4ee4, size 0x16c, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method GenerateServerKeyExchange, addr 0xfa5050, size 0x44c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange, addr 0xfa549c, size 0x2d8, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method InitVerifyer, addr 0xfa5774, size 0x1d0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  // Ctor Parameters [CppParam { name: "", ty: "TlsDheKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDheKeyExchange(TlsDheKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDheKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDheKeyExchange(TlsDheKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDheKeyExchange();

public:
  /// @brief Field mServerCredentials, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* ___mServerCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange, ___mServerCredentials) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsDheKeyExchange");
