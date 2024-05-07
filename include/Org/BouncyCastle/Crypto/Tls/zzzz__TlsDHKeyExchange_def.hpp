#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDHKeyExchange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDHKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
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
class TlsDHVerifier;
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
class TlsDHKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHKeyExchange
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDHKeyExchange*
class CORDL_TYPE TlsDHKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Field mAgreementCredentials, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mAgreementCredentials,
                      put = __cordl_internal_set_mAgreementCredentials))::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials;

  /// @brief Field mDHAgreePrivateKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHAgreePrivateKey, put = __cordl_internal_set_mDHAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHAgreePublicKey, put = __cordl_internal_set_mDHAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey;

  /// @brief Field mDHParameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHParameters, put = __cordl_internal_set_mDHParameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters;

  /// @brief Field mDHVerifier, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHVerifier, put = __cordl_internal_set_mDHVerifier))::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mServerPublicKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerPublicKey, put = __cordl_internal_set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsSigner, put = __cordl_internal_set_mTlsSigner))::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Method GenerateClientKeyExchange, addr 0x1204174, size 0x100, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GeneratePremasterSecret, addr 0x120449c, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateServerKeyExchange, addr 0x1203a10, size 0x15c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method Init, addr 0x120350c, size 0xc0, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                             ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method ProcessClientCertificate, addr 0x1204390, size 0x58, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientCredentials, addr 0x120405c, size 0x118, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x12043e8, size 0xb4, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x1203624, size 0x3c4, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerKeyExchange, addr 0x1203cb0, size 0x118, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method SkipServerCredentials, addr 0x12035cc, size 0x58, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ValidateCertificateRequest, addr 0x1203f90, size 0xcc, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*& __cordl_internal_get_mAgreementCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> const& __cordl_internal_get_mAgreementCredentials() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __cordl_internal_get_mDHAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __cordl_internal_get_mDHAgreePrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*& __cordl_internal_get_mDHAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> const& __cordl_internal_get_mDHAgreePublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_mDHParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __cordl_internal_get_mDHParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __cordl_internal_get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __cordl_internal_get_mDHVerifier() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_mServerPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __cordl_internal_get_mTlsSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& __cordl_internal_get_mTlsSigner() const;

  constexpr void __cordl_internal_set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* value);

  constexpr void __cordl_internal_set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* value);

  constexpr void __cordl_internal_set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr void __cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr void __cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  /// @brief Method .ctor, addr 0x120333c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method .ctor, addr 0x12033c8, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method get_RequiresServerKeyExchange, addr 0x12039e8, size 0x28, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDHKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDHKeyExchange(TlsDHKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDHKeyExchange(TlsDHKeyExchange const&) = delete;

  /// @brief Field mTlsSigner, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSigner* ___mTlsSigner;

  /// @brief Field mDHVerifier, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* ___mDHVerifier;

  /// @brief Field mDHParameters, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___mDHParameters;

  /// @brief Field mServerPublicKey, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mServerPublicKey;

  /// @brief Field mAgreementCredentials, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* ___mAgreementCredentials;

  /// @brief Field mDHAgreePrivateKey, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ___mDHAgreePublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mTlsSigner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mDHVerifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mDHParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mServerPublicKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mAgreementCredentials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mDHAgreePrivateKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange, ___mDHAgreePublicKey) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsDHKeyExchange");
