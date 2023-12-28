#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDHUtilities)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1300))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDHUtilities*
class CORDL_TYPE TlsDHUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field draft_ffdhe2432_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe2432_p, put = setStaticF_draft_ffdhe2432_p))::StringW draft_ffdhe2432_p;

  /// @brief Field draft_ffdhe2432, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe2432, put = setStaticF_draft_ffdhe2432))::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe2432;

  /// @brief Field draft_ffdhe3072_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe3072_p, put = setStaticF_draft_ffdhe3072_p))::StringW draft_ffdhe3072_p;

  /// @brief Field draft_ffdhe3072, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe3072, put = setStaticF_draft_ffdhe3072))::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe3072;

  /// @brief Field draft_ffdhe4096_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe4096_p, put = setStaticF_draft_ffdhe4096_p))::StringW draft_ffdhe4096_p;

  /// @brief Field draft_ffdhe4096, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe4096, put = setStaticF_draft_ffdhe4096))::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe4096;

  /// @brief Field draft_ffdhe6144_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe6144_p, put = setStaticF_draft_ffdhe6144_p))::StringW draft_ffdhe6144_p;

  /// @brief Field draft_ffdhe6144, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe6144, put = setStaticF_draft_ffdhe6144))::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe6144;

  /// @brief Field draft_ffdhe8192_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe8192_p, put = setStaticF_draft_ffdhe8192_p))::StringW draft_ffdhe8192_p;

  /// @brief Field draft_ffdhe8192, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe8192, put = setStaticF_draft_ffdhe8192))::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe8192;

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline void setStaticF_draft_ffdhe2432_p(::StringW value);

  static inline ::StringW getStaticF_draft_ffdhe2432_p();

  static inline void setStaticF_draft_ffdhe2432(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe2432();

  static inline void setStaticF_draft_ffdhe3072_p(::StringW value);

  static inline ::StringW getStaticF_draft_ffdhe3072_p();

  static inline void setStaticF_draft_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe3072();

  static inline void setStaticF_draft_ffdhe4096_p(::StringW value);

  static inline ::StringW getStaticF_draft_ffdhe4096_p();

  static inline void setStaticF_draft_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe4096();

  static inline void setStaticF_draft_ffdhe6144_p(::StringW value);

  static inline ::StringW getStaticF_draft_ffdhe6144_p();

  static inline void setStaticF_draft_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe6144();

  static inline void setStaticF_draft_ffdhe8192_p(::StringW value);

  static inline ::StringW getStaticF_draft_ffdhe8192_p();

  static inline void setStaticF_draft_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe8192();

  /// @brief Method FromHex addr 0xfa5944 size 0xa0 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method FromSafeP addr 0xfa59e4 size 0xc8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromSafeP(::StringW hexP);

  /// @brief Method AddNegotiatedDheGroupsClientExtension addr 0xfa5aac size 0x14c virtual false final false
  static inline void AddNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> dheGroups);

  /// @brief Method AddNegotiatedDheGroupsServerExtension addr 0xfa5ca4 size 0x14c virtual false final false
  static inline void AddNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions, uint8_t dheGroup);

  /// @brief Method GetNegotiatedDheGroupsClientExtension addr 0xfa5e48 size 0xd0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetNegotiatedDheGroupsServerExtension addr 0xfa5fc8 size 0xd4 virtual false final false
  static inline int16_t GetNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateNegotiatedDheGroupsClientExtension addr 0xfa5bf8 size 0xac virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> dheGroups);

  /// @brief Method CreateNegotiatedDheGroupsServerExtension addr 0xfa5df0 size 0x58 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup);

  /// @brief Method ReadNegotiatedDheGroupsClientExtension addr 0xfa5f18 size 0xb0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadNegotiatedDheGroupsServerExtension addr 0xfa609c size 0x58 virtual false final false
  static inline uint8_t ReadNegotiatedDheGroupsServerExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method GetParametersForDHEGroup addr 0xfa60f4 size 0xfc virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetParametersForDHEGroup(int16_t dheGroup);

  /// @brief Method ContainsDheCipherSuites addr 0xfa61f0 size 0xb0 virtual false final false
  static inline bool ContainsDheCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> cipherSuites);

  /// @brief Method IsDheCipherSuite addr 0xfa62a0 size 0x13c virtual false final false
  static inline bool IsDheCipherSuite(int32_t cipherSuite);

  /// @brief Method AreCompatibleParameters addr 0xfa63dc size 0x90 virtual false final false
  static inline bool AreCompatibleParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* b);

  /// @brief Method CalculateDHBasicAgreement addr 0xfa4db8 size 0x94 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* publicKey,
                                                                               ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKey);

  /// @brief Method GenerateDHKeyPair addr 0xfa646c size 0xbc virtual false final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateDHKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);

  /// @brief Method GenerateEphemeralClientKeyExchange addr 0xfa4a68 size 0x11c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
  GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::System::IO::Stream* output);

  /// @brief Method GenerateEphemeralServerKeyExchange addr 0xfa4360 size 0x144 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
  GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::System::IO::Stream* output);

  /// @brief Method ReadDHParameter addr 0xfa46e4 size 0xa0 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadDHParameter(::System::IO::Stream* input);

  /// @brief Method ReadDHParameters addr 0xfa6618 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReadDHParameters(::System::IO::Stream* input);

  /// @brief Method ReceiveDHParameters addr 0xfa45bc size 0x128 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReceiveDHParameters(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier, ::System::IO::Stream* input);

  /// @brief Method WriteDHParameter addr 0xfa6528 size 0x7c virtual false final false
  static inline void WriteDHParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteDHParameters addr 0xfa65a4 size 0x74 virtual false final false
  static inline void WriteDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities* New_ctor();

  /// @brief Method .ctor addr 0xfa682c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDHUtilities(TlsDHUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDHUtilities(TlsDHUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDHUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsDHUtilities");
