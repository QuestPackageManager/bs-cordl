#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsEccUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsEccUtilities)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
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
class TlsEccUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
class CORDL_TYPE TlsEccUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field CurveNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CurveNames, put = setStaticF_CurveNames)) ::ArrayW<::StringW, ::Array<::StringW>*> CurveNames;

  /// @brief Method AddSupportedEllipticCurvesExtension, addr 0x242c3a4, size 0x120, virtual false, abstract: false, final false
  static inline void AddSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves);

  /// @brief Method AddSupportedPointFormatsExtension, addr 0x242c564, size 0x120, virtual false, abstract: false, final false
  static inline void AddSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  /// @brief Method AreOnSameCurve, addr 0x242ce84, size 0x14, virtual false, abstract: false, final false
  static inline bool AreOnSameCurve(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* a, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* b);

  /// @brief Method CalculateECDHBasicAgreement, addr 0x242d398, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateECDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* publicKey,
                                                                                 ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKey);

  /// @brief Method CheckNamedCurve, addr 0x242e700, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckNamedCurve(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, int32_t namedCurve);

  /// @brief Method ContainsEccCipherSuites, addr 0x242cd3c, size 0xbc, virtual false, abstract: false, final false
  static inline bool ContainsEccCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> cipherSuites);

  /// @brief Method CreateSupportedEllipticCurvesExtension, addr 0x242c4c4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSupportedEllipticCurvesExtension(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves);

  /// @brief Method CreateSupportedPointFormatsExtension, addr 0x242c684, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSupportedPointFormatsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  /// @brief Method DeserializeECFieldElement, addr 0x242d048, size 0xc0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* DeserializeECFieldElement(int32_t fieldSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DeserializeECPoint, addr 0x242d108, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DeserializeECPublicKey, addr 0x242d22c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
  DeserializeECPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method GenerateECKeyPair, addr 0x242d444, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);

  /// @brief Method GenerateEphemeralClientKeyExchange, addr 0x242d4f4, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                                                                    ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams,
                                                                                                                    ::System::IO::Stream* output);

  /// @brief Method GenerateEphemeralServerKeyExchange, addr 0x242d6c0, size 0x224, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                    ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::System::IO::Stream* output);

  /// @brief Method GetNameOfNamedCurve, addr 0x242ca88, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW GetNameOfNamedCurve(int32_t namedCurve);

  /// @brief Method GetParametersForNamedCurve, addr 0x242cbac, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int32_t namedCurve);

  /// @brief Method GetSupportedEllipticCurvesExtension, addr 0x242c73c, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetSupportedPointFormatsExtension, addr 0x242c914, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasAnySupportedNamedCurves, addr 0x242ccd0, size 0x6c, virtual false, abstract: false, final false
  static inline bool HasAnySupportedNamedCurves();

  /// @brief Method IsCompressionPreferred, addr 0x242ce98, size 0x58, virtual false, abstract: false, final false
  static inline bool IsCompressionPreferred(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, uint8_t compressionFormat);

  /// @brief Method IsEccCipherSuite, addr 0x242cdf8, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsEccCipherSuite(int32_t cipherSuite);

  /// @brief Method IsSupportedNamedCurve, addr 0x242cb2c, size 0x80, virtual false, abstract: false, final false
  static inline bool IsSupportedNamedCurve(int32_t namedCurve);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities* New_ctor();

  /// @brief Method ReadECExponent, addr 0x242de90, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t ReadECExponent(int32_t fieldSize, ::System::IO::Stream* input);

  /// @brief Method ReadECFieldElement, addr 0x242dffc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadECFieldElement(int32_t fieldSize, ::System::IO::Stream* input);

  /// @brief Method ReadECParameter, addr 0x242df64, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadECParameter(::System::IO::Stream* input);

  /// @brief Method ReadECParameters, addr 0x242e098, size 0x668, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ReadECParameters(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                                              ::System::IO::Stream* input);

  /// @brief Method ReadSupportedEllipticCurvesExtension, addr 0x242c7d8, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadSupportedEllipticCurvesExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadSupportedPointFormatsExtension, addr 0x242c9b0, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadSupportedPointFormatsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method SerializeECFieldElement, addr 0x242cef0, size 0x1c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method SerializeECPoint, addr 0x242cf0c, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method SerializeECPublicKey, addr 0x242cfe0, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* keyParameters);

  /// @brief Method ValidateECPublicKey, addr 0x242de8c, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);

  /// @brief Method WriteECExponent, addr 0x242e7a4, size 0x9c, virtual false, abstract: false, final false
  static inline void WriteECExponent(int32_t k, ::System::IO::Stream* output);

  /// @brief Method WriteECFieldElement, addr 0x242e940, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteECFieldElement, addr 0x242e8bc, size 0x84, virtual false, abstract: false, final false
  static inline void WriteECFieldElement(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::System::IO::Stream* output);

  /// @brief Method WriteECParameter, addr 0x242e840, size 0x7c, virtual false, abstract: false, final false
  static inline void WriteECParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteECPoint, addr 0x242d61c, size 0xa4, virtual false, abstract: false, final false
  static inline void WriteECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::System::IO::Stream* output);

  /// @brief Method WriteExplicitECParameters, addr 0x242d8e4, size 0x4e4, virtual false, abstract: false, final false
  static inline void WriteExplicitECParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParameters,
                                               ::System::IO::Stream* output);

  /// @brief Method WriteNamedECParameters, addr 0x242ddc8, size 0xc4, virtual false, abstract: false, final false
  static inline void WriteNamedECParameters(int32_t namedCurve, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x242ee5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_CurveNames();

  static inline void setStaticF_CurveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsEccUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsEccUtilities(TlsEccUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsEccUtilities(TlsEccUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
