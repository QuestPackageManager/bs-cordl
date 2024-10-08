#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDHUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDHUtilities)
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
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
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
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDHUtilities*
class CORDL_TYPE TlsDHUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two)) ::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field draft_ffdhe2432, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe2432, put = setStaticF_draft_ffdhe2432)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe2432;

  /// @brief Field draft_ffdhe2432_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe2432_p, put = setStaticF_draft_ffdhe2432_p)) ::StringW draft_ffdhe2432_p;

  /// @brief Field draft_ffdhe3072, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe3072, put = setStaticF_draft_ffdhe3072)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe3072;

  /// @brief Field draft_ffdhe3072_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe3072_p, put = setStaticF_draft_ffdhe3072_p)) ::StringW draft_ffdhe3072_p;

  /// @brief Field draft_ffdhe4096, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe4096, put = setStaticF_draft_ffdhe4096)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe4096;

  /// @brief Field draft_ffdhe4096_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe4096_p, put = setStaticF_draft_ffdhe4096_p)) ::StringW draft_ffdhe4096_p;

  /// @brief Field draft_ffdhe6144, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe6144, put = setStaticF_draft_ffdhe6144)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe6144;

  /// @brief Field draft_ffdhe6144_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe6144_p, put = setStaticF_draft_ffdhe6144_p)) ::StringW draft_ffdhe6144_p;

  /// @brief Field draft_ffdhe8192, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe8192, put = setStaticF_draft_ffdhe8192)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe8192;

  /// @brief Field draft_ffdhe8192_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draft_ffdhe8192_p, put = setStaticF_draft_ffdhe8192_p)) ::StringW draft_ffdhe8192_p;

  /// @brief Method AddNegotiatedDheGroupsClientExtension, addr 0x23ea668, size 0x14c, virtual false, abstract: false, final false
  static inline void AddNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> dheGroups);

  /// @brief Method AddNegotiatedDheGroupsServerExtension, addr 0x23ea858, size 0x14c, virtual false, abstract: false, final false
  static inline void AddNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions, uint8_t dheGroup);

  /// @brief Method AreCompatibleParameters, addr 0x23eafb4, size 0x90, virtual false, abstract: false, final false
  static inline bool AreCompatibleParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* b);

  /// @brief Method CalculateDHBasicAgreement, addr 0x23e99a8, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* publicKey,
                                                                               ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKey);

  /// @brief Method ContainsDheCipherSuites, addr 0x23eadbc, size 0xbc, virtual false, abstract: false, final false
  static inline bool ContainsDheCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> cipherSuites);

  /// @brief Method CreateNegotiatedDheGroupsClientExtension, addr 0x23ea7b4, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> dheGroups);

  /// @brief Method CreateNegotiatedDheGroupsServerExtension, addr 0x23ea9a4, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup);

  /// @brief Method FromHex, addr 0x23ea50c, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method FromSafeP, addr 0x23ea5a4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromSafeP(::StringW hexP);

  /// @brief Method GenerateDHKeyPair, addr 0x23eb044, size 0xb8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateDHKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);

  /// @brief Method GenerateEphemeralClientKeyExchange, addr 0x23e9670, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
  GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::System::IO::Stream* output);

  /// @brief Method GenerateEphemeralServerKeyExchange, addr 0x23e8f8c, size 0x144, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
  GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::System::IO::Stream* output);

  /// @brief Method GetNegotiatedDheGroupsClientExtension, addr 0x23ea9fc, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetNegotiatedDheGroupsServerExtension, addr 0x23eab74, size 0xd4, virtual false, abstract: false, final false
  static inline int16_t GetNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetParametersForDHEGroup, addr 0x23eaca0, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetParametersForDHEGroup(int16_t dheGroup);

  /// @brief Method IsDheCipherSuite, addr 0x23eae78, size 0x13c, virtual false, abstract: false, final false
  static inline bool IsDheCipherSuite(int32_t cipherSuite);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities* New_ctor();

  /// @brief Method ReadDHParameter, addr 0x23e92f8, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadDHParameter(::System::IO::Stream* input);

  /// @brief Method ReadDHParameters, addr 0x23eb1ec, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReadDHParameters(::System::IO::Stream* input);

  /// @brief Method ReadNegotiatedDheGroupsClientExtension, addr 0x23eaacc, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadNegotiatedDheGroupsServerExtension, addr 0x23eac48, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ReadNegotiatedDheGroupsServerExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReceiveDHParameters, addr 0x23e91d8, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReceiveDHParameters(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier, ::System::IO::Stream* input);

  /// @brief Method WriteDHParameter, addr 0x23eb0fc, size 0x7c, virtual false, abstract: false, final false
  static inline void WriteDHParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteDHParameters, addr 0x23eb178, size 0x74, virtual false, abstract: false, final false
  static inline void WriteDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x23eb3f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe2432();

  static inline ::StringW getStaticF_draft_ffdhe2432_p();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe3072();

  static inline ::StringW getStaticF_draft_ffdhe3072_p();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe4096();

  static inline ::StringW getStaticF_draft_ffdhe4096_p();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe6144();

  static inline ::StringW getStaticF_draft_ffdhe6144_p();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_draft_ffdhe8192();

  static inline ::StringW getStaticF_draft_ffdhe8192_p();

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_draft_ffdhe2432(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF_draft_ffdhe2432_p(::StringW value);

  static inline void setStaticF_draft_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF_draft_ffdhe3072_p(::StringW value);

  static inline void setStaticF_draft_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF_draft_ffdhe4096_p(::StringW value);

  static inline void setStaticF_draft_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF_draft_ffdhe6144_p(::StringW value);

  static inline void setStaticF_draft_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline void setStaticF_draft_ffdhe8192_p(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDHUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDHUtilities(TlsDHUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDHUtilities(TlsDHUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsDHUtilities");
