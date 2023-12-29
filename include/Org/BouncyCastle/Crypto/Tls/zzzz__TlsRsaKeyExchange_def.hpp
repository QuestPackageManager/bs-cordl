#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaKeyExchange)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1318))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange*
class CORDL_TYPE TlsRsaKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mServerPublicKey, offset 0x28, size 0x8
  __declspec(property(get = __get_mServerPublicKey, put = __set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mRsaServerPublicKey, offset 0x30, size 0x8
  __declspec(property(get = __get_mRsaServerPublicKey, put = __set_mRsaServerPublicKey))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset 0x38, size 0x8
  __declspec(property(get = __get_mServerCredentials, put = __set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials;

  /// @brief Field mPremasterSecret, offset 0x40, size 0x8
  __declspec(property(get = __get_mPremasterSecret, put = __set_mPremasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> mPremasterSecret;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_mServerPublicKey() const;

  constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __get_mRsaServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __get_mRsaServerPublicKey() const;

  constexpr void __set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*& __get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*> const& __get_mServerCredentials() const;

  constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPremasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPremasterSecret() const;

  constexpr void __set_mPremasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange* New_ctor(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method .ctor addr 0xf3af4c size 0x18 virtual false final false
  inline void _ctor(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method SkipServerCredentials addr 0xf3af64 size 0x40 virtual true final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCredentials addr 0xf3afa4 size 0x168 virtual true final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerCertificate addr 0xf3b10c size 0x240 virtual true final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ValidateCertificateRequest addr 0xf3b34c size 0x9c virtual true final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ProcessClientCredentials addr 0xf3b3e8 size 0x8c virtual true final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method GenerateClientKeyExchange addr 0xf3b474 size 0x28 virtual true final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientKeyExchange addr 0xf3b49c size 0x118 virtual true final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret addr 0xf3b5b4 size 0x58 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method ValidateRsaPublicKey addr 0xf3b60c size 0x70 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsRsaKeyExchange(TlsRsaKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsRsaKeyExchange(TlsRsaKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsRsaKeyExchange();

public:
  /// @brief Field mServerPublicKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mServerPublicKey;

  /// @brief Field mRsaServerPublicKey, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* ___mServerCredentials;

  /// @brief Field mPremasterSecret, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPremasterSecret;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, ___mServerPublicKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, ___mRsaServerPublicKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, ___mServerCredentials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, ___mPremasterSecret) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsRsaKeyExchange");
