#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1298))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDHKeyExchange*
class CORDL_TYPE TlsDHKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __get_mTlsSigner, put = __set_mTlsSigner))::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Field mDHVerifier, offset 0x30, size 0x8
  __declspec(property(get = __get_mDHVerifier, put = __set_mDHVerifier))::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mDHParameters, offset 0x38, size 0x8
  __declspec(property(get = __get_mDHParameters, put = __set_mDHParameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters;

  /// @brief Field mServerPublicKey, offset 0x40, size 0x8
  __declspec(property(get = __get_mServerPublicKey, put = __set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mAgreementCredentials, offset 0x48, size 0x8
  __declspec(property(get = __get_mAgreementCredentials, put = __set_mAgreementCredentials))::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials;

  /// @brief Field mDHAgreePrivateKey, offset 0x50, size 0x8
  __declspec(property(get = __get_mDHAgreePrivateKey, put = __set_mDHAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset 0x58, size 0x8
  __declspec(property(get = __get_mDHAgreePublicKey, put = __set_mDHAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey;

  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __get_mTlsSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& __get_mTlsSigner() const;

  constexpr void __set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __get_mDHVerifier() const;

  constexpr void __set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __get_mDHParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __get_mDHParameters() const;

  constexpr void __set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_mServerPublicKey() const;

  constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*& __get_mAgreementCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> const& __get_mAgreementCredentials() const;

  constexpr void __set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __get_mDHAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __get_mDHAgreePrivateKey() const;

  constexpr void __set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*& __get_mDHAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> const& __get_mDHAgreePublicKey() const;

  constexpr void __set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method .ctor, addr 0xfa3b30, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                             ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method .ctor, addr 0xfa3bbc, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method Init, addr 0xfa3d00, size 0xc0, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method SkipServerCredentials, addr 0xfa3dc0, size 0x58, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCertificate, addr 0xfa3e18, size 0x3c4, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method get_RequiresServerKeyExchange, addr 0xfa41dc, size 0x28, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Method GenerateServerKeyExchange, addr 0xfa4204, size 0x15c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange, addr 0xfa44a4, size 0x118, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest, addr 0xfa4784, size 0xcc, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ProcessClientCredentials, addr 0xfa4850, size 0x118, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method GenerateClientKeyExchange, addr 0xfa4968, size 0x100, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientCertificate, addr 0xfa4b84, size 0x58, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientKeyExchange, addr 0xfa4bdc, size 0xb4, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret, addr 0xfa4c90, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDHKeyExchange(TlsDHKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDHKeyExchange(TlsDHKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDHKeyExchange();

public:
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
