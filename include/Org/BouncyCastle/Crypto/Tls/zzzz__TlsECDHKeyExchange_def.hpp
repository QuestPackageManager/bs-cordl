#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDHKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
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
class TlsECDHKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDHKeyExchange
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsECDHKeyExchange*
class CORDL_TYPE TlsECDHKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Field mAgreementCredentials, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mAgreementCredentials,
                      put = __cordl_internal_set_mAgreementCredentials))::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials;

  /// @brief Field mClientECPointFormats, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientECPointFormats, put = __cordl_internal_set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mECAgreePrivateKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mECAgreePrivateKey, put = __cordl_internal_set_mECAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mECAgreePublicKey, put = __cordl_internal_set_mECAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey;

  /// @brief Field mNamedCurves, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mNamedCurves, put = __cordl_internal_set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mServerECPointFormats, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerECPointFormats, put = __cordl_internal_set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mServerPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerPublicKey, put = __cordl_internal_set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsSigner, put = __cordl_internal_set_mTlsSigner))::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Method GenerateClientKeyExchange, addr 0x101ba3c, size 0x110, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GeneratePremasterSecret, addr 0x101bc68, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateServerKeyExchange, addr 0x101b538, size 0x164, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method Init, addr 0x101aecc, size 0xc0, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                               ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method ProcessClientCertificate, addr 0x101bb4c, size 0x54, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientCredentials, addr 0x101b928, size 0x114, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x101bba0, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x101b020, size 0x3b0, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerKeyExchange, addr 0x101b69c, size 0x120, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method SkipServerCredentials, addr 0x101af8c, size 0x54, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ValidateCertificateRequest, addr 0x101b848, size 0xe0, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*& __cordl_internal_get_mAgreementCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> const& __cordl_internal_get_mAgreementCredentials() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mClientECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mClientECPointFormats();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mECAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __cordl_internal_get_mECAgreePrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_mECAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __cordl_internal_get_mECAgreePublicKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mNamedCurves() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mNamedCurves();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mServerECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mServerECPointFormats();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_mServerPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __cordl_internal_get_mTlsSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& __cordl_internal_get_mTlsSigner() const;

  constexpr void __cordl_internal_set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* value);

  constexpr void __cordl_internal_set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mECAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mECAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  constexpr void __cordl_internal_set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  /// @brief Method .ctor, addr 0x101ad7c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method get_RequiresServerKeyExchange, addr 0x101b50c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsECDHKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsECDHKeyExchange(TlsECDHKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsECDHKeyExchange(TlsECDHKeyExchange const&) = delete;

  /// @brief Field mTlsSigner, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSigner* ___mTlsSigner;

  /// @brief Field mNamedCurves, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mNamedCurves;

  /// @brief Field mClientECPointFormats, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mServerECPointFormats;

  /// @brief Field mServerPublicKey, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mServerPublicKey;

  /// @brief Field mAgreementCredentials, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* ___mAgreementCredentials;

  /// @brief Field mECAgreePrivateKey, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mECAgreePublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mTlsSigner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mNamedCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mClientECPointFormats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mServerECPointFormats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mServerPublicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mAgreementCredentials) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mECAgreePrivateKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange, ___mECAgreePublicKey) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsECDHKeyExchange");
