#pragma once
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
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsPskKeyExchange
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1317))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsPskKeyExchange*
class CORDL_TYPE TlsPskKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mPskIdentity, offset 0x28, size 0x8
  __declspec(property(get = __get_mPskIdentity, put = __set_mPskIdentity))::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* mPskIdentity;

  /// @brief Field mPskIdentityManager, offset 0x30, size 0x8
  __declspec(property(get = __get_mPskIdentityManager, put = __set_mPskIdentityManager))::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* mPskIdentityManager;

  /// @brief Field mDHVerifier, offset 0x38, size 0x8
  __declspec(property(get = __get_mDHVerifier, put = __set_mDHVerifier))::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier;

  /// @brief Field mDHParameters, offset 0x40, size 0x8
  __declspec(property(get = __get_mDHParameters, put = __set_mDHParameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters;

  /// @brief Field mNamedCurves, offset 0x48, size 0x8
  __declspec(property(get = __get_mNamedCurves, put = __set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mClientECPointFormats, offset 0x50, size 0x8
  __declspec(property(get = __get_mClientECPointFormats, put = __set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset 0x58, size 0x8
  __declspec(property(get = __get_mServerECPointFormats, put = __set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mPskIdentityHint, offset 0x60, size 0x8
  __declspec(property(get = __get_mPskIdentityHint, put = __set_mPskIdentityHint))::ArrayW<uint8_t, ::Array<uint8_t>*> mPskIdentityHint;

  /// @brief Field mPsk, offset 0x68, size 0x8
  __declspec(property(get = __get_mPsk, put = __set_mPsk))::ArrayW<uint8_t, ::Array<uint8_t>*> mPsk;

  /// @brief Field mDHAgreePrivateKey, offset 0x70, size 0x8
  __declspec(property(get = __get_mDHAgreePrivateKey, put = __set_mDHAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey;

  /// @brief Field mDHAgreePublicKey, offset 0x78, size 0x8
  __declspec(property(get = __get_mDHAgreePublicKey, put = __set_mDHAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey;

  /// @brief Field mECAgreePrivateKey, offset 0x80, size 0x8
  __declspec(property(get = __get_mECAgreePrivateKey, put = __set_mECAgreePrivateKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey;

  /// @brief Field mECAgreePublicKey, offset 0x88, size 0x8
  __declspec(property(get = __get_mECAgreePublicKey, put = __set_mECAgreePublicKey))::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey;

  /// @brief Field mServerPublicKey, offset 0x90, size 0x8
  __declspec(property(get = __get_mServerPublicKey, put = __set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mRsaServerPublicKey, offset 0x98, size 0x8
  __declspec(property(get = __get_mRsaServerPublicKey, put = __set_mRsaServerPublicKey))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey;

  /// @brief Field mServerCredentials, offset 0xa0, size 0x8
  __declspec(property(get = __get_mServerCredentials, put = __set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials;

  /// @brief Field mPremasterSecret, offset 0xa8, size 0x8
  __declspec(property(get = __get_mPremasterSecret, put = __set_mPremasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> mPremasterSecret;

  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*& __get_mPskIdentity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*> const& __get_mPskIdentity() const;

  constexpr void __set_mPskIdentity(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& __get_mPskIdentityManager();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*> const& __get_mPskIdentityManager() const;

  constexpr void __set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __get_mDHVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __get_mDHVerifier() const;

  constexpr void __set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __get_mDHParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __get_mDHParameters() const;

  constexpr void __set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mNamedCurves() const;

  constexpr void __set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mClientECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mClientECPointFormats() const;

  constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mServerECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mServerECPointFormats() const;

  constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPskIdentityHint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPskIdentityHint() const;

  constexpr void __set_mPskIdentityHint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPsk();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPsk() const;

  constexpr void __set_mPsk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __get_mDHAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const& __get_mDHAgreePrivateKey() const;

  constexpr void __set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*& __get_mDHAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> const& __get_mDHAgreePublicKey() const;

  constexpr void __set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_mECAgreePrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_mECAgreePrivateKey() const;

  constexpr void __set_mECAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& __get_mECAgreePublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const& __get_mECAgreePublicKey() const;

  constexpr void __set_mECAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value);

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

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method .ctor addr 0xfaf688 size 0xcc virtual false final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters,
                    ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                              ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method .ctor addr 0xfaf754 size 0xcc virtual false final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* pskIdentity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientECPointFormats,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> serverECPointFormats);

  /// @brief Method SkipServerCredentials addr 0xfaf820 size 0x54 virtual true final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCredentials addr 0xfaf874 size 0x168 virtual true final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method GenerateServerKeyExchange addr 0xfaf9dc size 0x338 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method ProcessServerCertificate addr 0xfafd9c size 0x26c virtual true final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method get_RequiresServerKeyExchange addr 0xfb0008 size 0x20 virtual true final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange addr 0xfb0028 size 0x190 virtual true final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest addr 0xfb0244 size 0x40 virtual true final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ProcessClientCredentials addr 0xfb0284 size 0x40 virtual true final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method GenerateClientKeyExchange addr 0xfb02c4 size 0x480 virtual true final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientKeyExchange addr 0xfb0b38 size 0x37c virtual true final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret addr 0xfb0eb4 size 0x12c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateOtherSecret addr 0xfb0fe0 size 0x144 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateOtherSecret(int32_t pskLength);

  /// @brief Method ValidateRsaPublicKey addr 0xfb1124 size 0x70 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsPskKeyExchange(TlsPskKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsPskKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsPskKeyExchange(TlsPskKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsPskKeyExchange();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange, 0xb0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsPskKeyExchange");
