#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsPskKeyExchange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsPskKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
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
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
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
class TlsPskKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsPskKeyExchange
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsPskKeyExchange*
class CORDL_TYPE TlsPskKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Field mClientECPointFormats, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientECPointFormats, put = __cordl_internal_set_mClientECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mDHAgreePrivateKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHAgreePrivateKey,
                      put = __cordl_internal_set_mDHAgreePrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHAgreePublicKey, put = __cordl_internal_set_mDHAgreePublicKey)) ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey;

  /// @brief Field mDHParameters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHParameters, put = __cordl_internal_set_mDHParameters)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters;

  /// @brief Field mDHVerifier, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mDHVerifier, put = __cordl_internal_set_mDHVerifier)) ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mECAgreePrivateKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mECAgreePrivateKey,
                      put = __cordl_internal_set_mECAgreePrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mECAgreePublicKey, put = __cordl_internal_set_mECAgreePublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey;

  /// @brief Field mNamedCurves, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mNamedCurves, put = __cordl_internal_set_mNamedCurves)) ::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mPremasterSecret, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_mPremasterSecret, put = __cordl_internal_set_mPremasterSecret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPremasterSecret;

  /// @brief Field mPsk, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mPsk, put = __cordl_internal_set_mPsk)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPsk;

  /// @brief Field mPskIdentity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentity, put = __cordl_internal_set_mPskIdentity)) ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* mPskIdentity;

  /// @brief Field mPskIdentityHint, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentityHint, put = __cordl_internal_set_mPskIdentityHint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPskIdentityHint;

  /// @brief Field mPskIdentityManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentityManager, put = __cordl_internal_set_mPskIdentityManager)) ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* mPskIdentityManager;

  /// @brief Field mRsaServerPublicKey, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_mRsaServerPublicKey, put = __cordl_internal_set_mRsaServerPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials;

  /// @brief Field mServerECPointFormats, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerECPointFormats, put = __cordl_internal_set_mServerECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mServerPublicKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerPublicKey, put = __cordl_internal_set_mServerPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Method GenerateClientKeyExchange, addr 0x23ff9b4, size 0x478, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GenerateOtherSecret, addr 0x24006bc, size 0x13c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateOtherSecret(int32_t pskLength);

  /// @brief Method GeneratePremasterSecret, addr 0x2400588, size 0x134, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateServerKeyExchange, addr 0x23ff0fc, size 0x338, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method ProcessClientCredentials, addr 0x23ff97c, size 0x38, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x2400218, size 0x370, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x23ff4bc, size 0x254, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerCredentials, addr 0x23fef9c, size 0x160, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerKeyExchange, addr 0x23ff730, size 0x188, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method SkipServerCredentials, addr 0x23fef50, size 0x4c, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ValidateCertificateRequest, addr 0x23ff944, size 0x38, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ValidateRsaPublicKey, addr 0x24007f8, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mClientECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mClientECPointFormats();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __cordl_internal_get_mDHAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __cordl_internal_get_mDHAgreePrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*& __cordl_internal_get_mDHAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> const& __cordl_internal_get_mDHAgreePublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_mDHParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __cordl_internal_get_mDHParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __cordl_internal_get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __cordl_internal_get_mDHVerifier() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mECAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __cordl_internal_get_mECAgreePrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __cordl_internal_get_mECAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __cordl_internal_get_mECAgreePublicKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mNamedCurves() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mNamedCurves();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPremasterSecret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPremasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPsk() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPsk();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*& __cordl_internal_get_mPskIdentity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*> const& __cordl_internal_get_mPskIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPskIdentityHint() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPskIdentityHint();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& __cordl_internal_get_mPskIdentityManager();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*> const& __cordl_internal_get_mPskIdentityManager() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_mRsaServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_mRsaServerPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*> const& __cordl_internal_get_mServerCredentials() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mServerECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mServerECPointFormats();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_mServerPublicKey() const;

  constexpr void __cordl_internal_set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* value);

  constexpr void __cordl_internal_set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr void __cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr void __cordl_internal_set_mECAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mECAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

  constexpr void __cordl_internal_set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mPremasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPsk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPskIdentity(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* value);

  constexpr void __cordl_internal_set_mPskIdentityHint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* value);

  constexpr void __cordl_internal_set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* value);

  constexpr void __cordl_internal_set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x23fedc4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters,
                    ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method .ctor, addr 0x23fee88, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method get_RequiresServerKeyExchange, addr 0x23ff710, size 0x20, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsPskKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsPskKeyExchange(TlsPskKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsPskKeyExchange(TlsPskKeyExchange const&) = delete;

  /// @brief Field mPskIdentity, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* ___mPskIdentity;

  /// @brief Field mPskIdentityManager, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* ___mPskIdentityManager;

  /// @brief Field mDHVerifier, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* ___mDHVerifier;

  /// @brief Field mDHParameters, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___mDHParameters;

  /// @brief Field mNamedCurves, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mNamedCurves;

  /// @brief Field mClientECPointFormats, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mServerECPointFormats;

  /// @brief Field mPskIdentityHint, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPskIdentityHint;

  /// @brief Field mPsk, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPsk;

  /// @brief Field mDHAgreePrivateKey, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ___mDHAgreePublicKey;

  /// @brief Field mECAgreePrivateKey, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset: 0x88, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ___mECAgreePublicKey;

  /// @brief Field mServerPublicKey, offset: 0x90, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mServerPublicKey;

  /// @brief Field mRsaServerPublicKey, offset: 0x98, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset: 0xa0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* ___mServerCredentials;

  /// @brief Field mPremasterSecret, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPremasterSecret;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1317 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mPskIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mPskIdentityManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mDHVerifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mDHParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mNamedCurves) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mClientECPointFormats) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mServerECPointFormats) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mPskIdentityHint) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mPsk) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mDHAgreePrivateKey) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mDHAgreePublicKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mECAgreePrivateKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mECAgreePublicKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mServerPublicKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mRsaServerPublicKey) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mServerCredentials) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, ___mPremasterSecret) == 0xa8, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsPskKeyExchange");
