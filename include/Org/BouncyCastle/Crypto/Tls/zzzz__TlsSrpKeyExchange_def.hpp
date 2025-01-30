#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSrpKeyExchange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpKeyExchange)
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Client;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Server;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
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
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpKeyExchange
class CORDL_TYPE TlsSrpKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Field mGroupVerifier, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroupVerifier, put = __cordl_internal_set_mGroupVerifier)) ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* mGroupVerifier;

  /// @brief Field mIdentity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mIdentity, put = __cordl_internal_set_mIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPassword, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mPassword, put = __cordl_internal_set_mPassword)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPassword;

  /// @brief Field mServerCredentials, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerCredentials, put = __cordl_internal_set_mServerCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials;

  /// @brief Field mServerPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerPublicKey, put = __cordl_internal_set_mServerPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mSrpClient, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpClient, put = __cordl_internal_set_mSrpClient)) ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* mSrpClient;

  /// @brief Field mSrpGroup, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpGroup, put = __cordl_internal_set_mSrpGroup)) ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mSrpGroup;

  /// @brief Field mSrpPeerCredentials, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpPeerCredentials, put = __cordl_internal_set_mSrpPeerCredentials)) ::Org::BouncyCastle::Math::BigInteger* mSrpPeerCredentials;

  /// @brief Field mSrpSalt, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpSalt, put = __cordl_internal_set_mSrpSalt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpSalt;

  /// @brief Field mSrpServer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpServer, put = __cordl_internal_set_mSrpServer)) ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* mSrpServer;

  /// @brief Field mSrpVerifier, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpVerifier, put = __cordl_internal_set_mSrpVerifier)) ::Org::BouncyCastle::Math::BigInteger* mSrpVerifier;

  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsSigner, put = __cordl_internal_set_mTlsSigner)) ::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Method CreateSigner, addr 0x243a8e4, size 0xec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateSigner(int32_t keyExchange);

  /// @brief Method GenerateClientKeyExchange, addr 0x243bba8, size 0x114, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GeneratePremasterSecret, addr 0x243bf94, size 0x110, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateServerKeyExchange, addr 0x243b0e8, size 0x538, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method Init, addr 0x243ac0c, size 0xc0, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method InitVerifyer, addr 0x243c0a4, size 0x1d0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method ProcessClientCredentials, addr 0x243bb70, size 0x38, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x243bd34, size 0x1cc, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x243ad14, size 0x260, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerCredentials, addr 0x243af74, size 0x16c, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerKeyExchange, addr 0x243b620, size 0x518, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method SkipServerCredentials, addr 0x243accc, size 0x48, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method ValidateCertificateRequest, addr 0x243bb38, size 0x38, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* const& __cordl_internal_get_mGroupVerifier() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*& __cordl_internal_get_mGroupVerifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPassword() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPassword();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* const& __cordl_internal_get_mServerCredentials() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& __cordl_internal_get_mServerCredentials();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_mServerPublicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mServerPublicKey();

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* const& __cordl_internal_get_mSrpClient() const;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*& __cordl_internal_get_mSrpClient();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* const& __cordl_internal_get_mSrpGroup() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& __cordl_internal_get_mSrpGroup();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_mSrpPeerCredentials() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mSrpPeerCredentials();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSrpSalt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSrpSalt();

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* const& __cordl_internal_get_mSrpServer() const;

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*& __cordl_internal_get_mSrpServer();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_mSrpVerifier() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mSrpVerifier();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* const& __cordl_internal_get_mTlsSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __cordl_internal_get_mTlsSigner();

  constexpr void __cordl_internal_set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* value);

  constexpr void __cordl_internal_set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value);

  constexpr void __cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_mSrpClient(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* value);

  constexpr void __cordl_internal_set_mSrpGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value);

  constexpr void __cordl_internal_set_mSrpPeerCredentials(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mSrpSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSrpServer(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* value);

  constexpr void __cordl_internal_set_mSrpVerifier(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  /// @brief Method .ctor, addr 0x243aa5c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor, addr 0x243ab18, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters);

  /// @brief Method .ctor, addr 0x243a9d0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method get_RequiresServerKeyExchange, addr 0x243b0e0, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpKeyExchange(TlsSrpKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpKeyExchange(TlsSrpKeyExchange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1326 };

  /// @brief Field mTlsSigner, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSigner* ___mTlsSigner;

  /// @brief Field mGroupVerifier, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* ___mGroupVerifier;

  /// @brief Field mIdentity, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mIdentity;

  /// @brief Field mPassword, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPassword;

  /// @brief Field mServerPublicKey, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mServerPublicKey;

  /// @brief Field mSrpGroup, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* ___mSrpGroup;

  /// @brief Field mSrpClient, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* ___mSrpClient;

  /// @brief Field mSrpServer, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* ___mSrpServer;

  /// @brief Field mSrpPeerCredentials, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mSrpPeerCredentials;

  /// @brief Field mSrpVerifier, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mSrpVerifier;

  /// @brief Field mSrpSalt, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSrpSalt;

  /// @brief Field mServerCredentials, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* ___mServerCredentials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mTlsSigner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mGroupVerifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mIdentity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mPassword) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mServerPublicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpClient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpServer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpPeerCredentials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpVerifier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mSrpSalt) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, ___mServerCredentials) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpKeyExchange");
