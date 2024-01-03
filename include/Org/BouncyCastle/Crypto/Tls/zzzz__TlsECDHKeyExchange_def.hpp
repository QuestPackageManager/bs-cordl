#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDHKeyExchange)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1304))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsECDHKeyExchange*
class CORDL_TYPE TlsECDHKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __get_mTlsSigner, put = __set_mTlsSigner))::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Field mNamedCurves, offset 0x30, size 0x8
  __declspec(property(get = __get_mNamedCurves, put = __set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mClientECPointFormats, offset 0x38, size 0x8
  __declspec(property(get = __get_mClientECPointFormats, put = __set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset 0x40, size 0x8
  __declspec(property(get = __get_mServerECPointFormats, put = __set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mServerPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __get_mServerPublicKey, put = __set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mAgreementCredentials, offset 0x50, size 0x8
  __declspec(property(get = __get_mAgreementCredentials, put = __set_mAgreementCredentials))::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials;

  /// @brief Field mECAgreePrivateKey, offset 0x58, size 0x8
  __declspec(property(get = __get_mECAgreePrivateKey, put = __set_mECAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset 0x60, size 0x8
  __declspec(property(get = __get_mECAgreePublicKey, put = __set_mECAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey;

  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __get_mTlsSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& __get_mTlsSigner() const;

  constexpr void __set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mNamedCurves() const;

  constexpr void __set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mClientECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mClientECPointFormats() const;

  constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mServerECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mServerECPointFormats() const;

  constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_mServerPublicKey() const;

  constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*& __get_mAgreementCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> const& __get_mAgreementCredentials() const;

  constexpr void __set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_mECAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_mECAgreePrivateKey() const;

  constexpr void __set_mECAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __get_mECAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __get_mECAgreePublicKey() const;

  constexpr void __set_mECAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                               ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method .ctor, addr 0xfa9f1c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method Init, addr 0xfaa06c, size 0xc0, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method SkipServerCredentials, addr 0xfaa12c, size 0x54, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCertificate, addr 0xfaa1c0, size 0x3b0, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method get_RequiresServerKeyExchange, addr 0xfaa6ac, size 0x2c, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Method GenerateServerKeyExchange, addr 0xfaa6d8, size 0x164, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange, addr 0xfaa83c, size 0x120, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest, addr 0xfaa9e8, size 0xe0, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ProcessClientCredentials, addr 0xfaaac8, size 0x114, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method GenerateClientKeyExchange, addr 0xfaabdc, size 0x110, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientCertificate, addr 0xfaacec, size 0x54, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientKeyExchange, addr 0xfaad40, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret, addr 0xfaae08, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsECDHKeyExchange(TlsECDHKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsECDHKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsECDHKeyExchange(TlsECDHKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsECDHKeyExchange();

public:
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
