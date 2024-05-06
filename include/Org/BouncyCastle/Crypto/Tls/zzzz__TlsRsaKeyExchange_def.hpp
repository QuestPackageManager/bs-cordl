#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
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
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange*
class CORDL_TYPE TlsRsaKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mPremasterSecret, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mPremasterSecret, put = __cordl_internal_set_mPremasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> mPremasterSecret;

  /// @brief Field mRsaServerPublicKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mRsaServerPublicKey, put = __cordl_internal_set_mRsaServerPublicKey))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials;

  /// @brief Field mServerPublicKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerPublicKey, put = __cordl_internal_set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Method GenerateClientKeyExchange, addr 0x1210ec8, size 0x28, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GeneratePremasterSecret, addr 0x1211008, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange* New_ctor(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ProcessClientCredentials, addr 0x1210e3c, size 0x8c, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x1210ef0, size 0x118, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x1210b60, size 0x240, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerCredentials, addr 0x12109f8, size 0x168, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method SkipServerCredentials, addr 0x12109b8, size 0x40, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ValidateCertificateRequest, addr 0x1210da0, size 0x9c, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ValidateRsaPublicKey, addr 0x1211060, size 0x70, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPremasterSecret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPremasterSecret();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_mRsaServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_mRsaServerPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*> const& __cordl_internal_get_mServerCredentials() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_mServerPublicKey() const;

  constexpr void __cordl_internal_set_mPremasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* value);

  constexpr void __cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x12109a0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* supportedSignatureAlgorithms);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsRsaKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsRsaKeyExchange(TlsRsaKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsRsaKeyExchange(TlsRsaKeyExchange const&) = delete;

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
