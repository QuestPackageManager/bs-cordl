#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpKeyExchange)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Client;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Server;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpKeyExchange
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1326))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSrpKeyExchange*
class CORDL_TYPE TlsSrpKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
  // Declarations
  /// @brief Field mTlsSigner, offset 0x28, size 0x8
  __declspec(property(get = __get_mTlsSigner, put = __set_mTlsSigner))::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner;

  /// @brief Field mGroupVerifier, offset 0x30, size 0x8
  __declspec(property(get = __get_mGroupVerifier, put = __set_mGroupVerifier))::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* mGroupVerifier;

  /// @brief Field mIdentity, offset 0x38, size 0x8
  __declspec(property(get = __get_mIdentity, put = __set_mIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPassword, offset 0x40, size 0x8
  __declspec(property(get = __get_mPassword, put = __set_mPassword))::ArrayW<uint8_t, ::Array<uint8_t>*> mPassword;

  /// @brief Field mServerPublicKey, offset 0x48, size 0x8
  __declspec(property(get = __get_mServerPublicKey, put = __set_mServerPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey;

  /// @brief Field mSrpGroup, offset 0x50, size 0x8
  __declspec(property(get = __get_mSrpGroup, put = __set_mSrpGroup))::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mSrpGroup;

  /// @brief Field mSrpClient, offset 0x58, size 0x8
  __declspec(property(get = __get_mSrpClient, put = __set_mSrpClient))::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* mSrpClient;

  /// @brief Field mSrpServer, offset 0x60, size 0x8
  __declspec(property(get = __get_mSrpServer, put = __set_mSrpServer))::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* mSrpServer;

  /// @brief Field mSrpPeerCredentials, offset 0x68, size 0x8
  __declspec(property(get = __get_mSrpPeerCredentials, put = __set_mSrpPeerCredentials))::Org::BouncyCastle::Math::BigInteger* mSrpPeerCredentials;

  /// @brief Field mSrpVerifier, offset 0x70, size 0x8
  __declspec(property(get = __get_mSrpVerifier, put = __set_mSrpVerifier))::Org::BouncyCastle::Math::BigInteger* mSrpVerifier;

  /// @brief Field mSrpSalt, offset 0x78, size 0x8
  __declspec(property(get = __get_mSrpSalt, put = __set_mSrpSalt))::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpSalt;

  /// @brief Field mServerCredentials, offset 0x80, size 0x8
  __declspec(property(get = __get_mServerCredentials, put = __set_mServerCredentials))::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials;

  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __get_mTlsSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& __get_mTlsSigner() const;

  constexpr void __set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*& __get_mGroupVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*> const& __get_mGroupVerifier() const;

  constexpr void __set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mIdentity() const;

  constexpr void __set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPassword();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPassword() const;

  constexpr void __set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_mServerPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_mServerPublicKey() const;

  constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& __get_mSrpGroup();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> const& __get_mSrpGroup() const;

  constexpr void __set_mSrpGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*& __get_mSrpClient();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*> const& __get_mSrpClient() const;

  constexpr void __set_mSrpClient(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* value);

  constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*& __get_mSrpServer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*> const& __get_mSrpServer() const;

  constexpr void __set_mSrpServer(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_mSrpPeerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_mSrpPeerCredentials() const;

  constexpr void __set_mSrpPeerCredentials(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_mSrpVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_mSrpVerifier() const;

  constexpr void __set_mSrpVerifier(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mSrpSalt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mSrpSalt() const;

  constexpr void __set_mSrpSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& __get_mServerCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*> const& __get_mServerCredentials() const;

  constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value);

  /// @brief Method CreateSigner addr 0xfb7004 size 0xfc virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateSigner(int32_t keyExchange);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor addr 0xfb7100 size 0x94 virtual false final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method .ctor addr 0xfb7194 size 0xc4 virtual false final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters);

  /// @brief Method .ctor addr 0xfb7258 size 0xf8 virtual false final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                    ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters);

  /// @brief Method Init addr 0xfb7350 size 0xc0 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method SkipServerCredentials addr 0xfb7410 size 0x50 virtual true final false
  inline void SkipServerCredentials();

  /// @brief Method ProcessServerCertificate addr 0xfb7460 size 0x278 virtual true final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerCredentials addr 0xfb76d8 size 0x174 virtual true final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method get_RequiresServerKeyExchange addr 0xfb784c size 0x8 virtual true final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Method GenerateServerKeyExchange addr 0xfb7854 size 0x534 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method ProcessServerKeyExchange addr 0xfb7d88 size 0x538 virtual true final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method ValidateCertificateRequest addr 0xfb82c0 size 0x40 virtual true final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  /// @brief Method ProcessClientCredentials addr 0xfb8300 size 0x40 virtual true final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method GenerateClientKeyExchange addr 0xfb8340 size 0x114 virtual true final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method ProcessClientKeyExchange addr 0xfb84cc size 0x1d4 virtual true final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method GeneratePremasterSecret addr 0xfb873c size 0x118 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method InitVerifyer addr 0xfb8854 size 0x1d0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters);

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpKeyExchange(TlsSrpKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpKeyExchange(TlsSrpKeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpKeyExchange();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpKeyExchange");
