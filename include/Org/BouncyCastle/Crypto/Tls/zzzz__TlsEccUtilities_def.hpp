#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsEccUtilities)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsEccUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1303))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsEccUtilities*
class CORDL_TYPE TlsEccUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field CurveNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CurveNames, put = setStaticF_CurveNames))::ArrayW<::StringW, ::Array<::StringW>*> CurveNames;

  static inline void setStaticF_CurveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_CurveNames();

  /// @brief Method AddSupportedEllipticCurvesExtension, addr 0xfa7078, size 0x120, virtual false, abstract: false, final false
  static inline void AddSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions, ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves);

  /// @brief Method AddSupportedPointFormatsExtension, addr 0xfa7240, size 0x120, virtual false, abstract: false, final false
  static inline void AddSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  /// @brief Method GetSupportedEllipticCurvesExtension, addr 0xfa7418, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetSupportedPointFormatsExtension, addr 0xfa7604, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateSupportedEllipticCurvesExtension, addr 0xfa7198, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSupportedEllipticCurvesExtension(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves);

  /// @brief Method CreateSupportedPointFormatsExtension, addr 0xfa7360, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSupportedPointFormatsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  /// @brief Method ReadSupportedEllipticCurvesExtension, addr 0xfa74b4, size 0x150, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadSupportedEllipticCurvesExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadSupportedPointFormatsExtension, addr 0xfa76a0, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadSupportedPointFormatsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method GetNameOfNamedCurve, addr 0xfa7780, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW GetNameOfNamedCurve(int32_t namedCurve);

  /// @brief Method GetParametersForNamedCurve, addr 0xfa78a4, size 0x12c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int32_t namedCurve);

  /// @brief Method HasAnySupportedNamedCurves, addr 0xfa79d0, size 0x6c, virtual false, abstract: false, final false
  static inline bool HasAnySupportedNamedCurves();

  /// @brief Method ContainsEccCipherSuites, addr 0xfa7a3c, size 0xb0, virtual false, abstract: false, final false
  static inline bool ContainsEccCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> cipherSuites);

  /// @brief Method IsEccCipherSuite, addr 0xfa7aec, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsEccCipherSuite(int32_t cipherSuite);

  /// @brief Method AreOnSameCurve, addr 0xfa7b78, size 0x14, virtual false, abstract: false, final false
  static inline bool AreOnSameCurve(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* a, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* b);

  /// @brief Method IsSupportedNamedCurve, addr 0xfa7824, size 0x80, virtual false, abstract: false, final false
  static inline bool IsSupportedNamedCurve(int32_t namedCurve);

  /// @brief Method IsCompressionPreferred, addr 0xfa7b8c, size 0x58, virtual false, abstract: false, final false
  static inline bool IsCompressionPreferred(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, uint8_t compressionFormat);

  /// @brief Method SerializeECFieldElement, addr 0xfa7be4, size 0x1c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method SerializeECPoint, addr 0xfa7c00, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method SerializeECPublicKey, addr 0xfa7cd4, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeECPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* keyParameters);

  /// @brief Method DeserializeECFieldElement, addr 0xfa7d3c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* DeserializeECFieldElement(int32_t fieldSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DeserializeECPoint, addr 0xfa7e08, size 0x130, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DeserializeECPublicKey, addr 0xfa7f38, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
  DeserializeECPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method CalculateECDHBasicAgreement, addr 0xfa80b8, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateECDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* publicKey,
                                                                                 ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKey);

  /// @brief Method GenerateECKeyPair, addr 0xfa8164, size 0xb4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);

  /// @brief Method GenerateEphemeralClientKeyExchange, addr 0xfa8218, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                                                                    ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams,
                                                                                                                    ::System::IO::Stream* output);

  /// @brief Method GenerateEphemeralServerKeyExchange, addr 0xfa83e4, size 0x22c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                    ::ArrayW<int32_t, ::Array<int32_t>*> namedCurves,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::System::IO::Stream* output);

  /// @brief Method ValidateECPublicKey, addr 0xfa8bcc, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);

  /// @brief Method ReadECExponent, addr 0xfa8bd0, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ReadECExponent(int32_t fieldSize, ::System::IO::Stream* input);

  /// @brief Method ReadECFieldElement, addr 0xfa8d4c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadECFieldElement(int32_t fieldSize, ::System::IO::Stream* input);

  /// @brief Method ReadECParameter, addr 0xfa8cac, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadECParameter(::System::IO::Stream* input);

  /// @brief Method ReadECParameters, addr 0xfa8de8, size 0x6a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ReadECParameters(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats,
                                                                                              ::System::IO::Stream* input);

  /// @brief Method CheckNamedCurve, addr 0xfa9490, size 0xac, virtual false, abstract: false, final false
  static inline void CheckNamedCurve(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, int32_t namedCurve);

  /// @brief Method WriteECExponent, addr 0xfa953c, size 0x9c, virtual false, abstract: false, final false
  static inline void WriteECExponent(int32_t k, ::System::IO::Stream* output);

  /// @brief Method WriteECFieldElement, addr 0xfa9654, size 0x84, virtual false, abstract: false, final false
  static inline void WriteECFieldElement(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::System::IO::Stream* output);

  /// @brief Method WriteECFieldElement, addr 0xfa96d8, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteECParameter, addr 0xfa95d8, size 0x7c, virtual false, abstract: false, final false
  static inline void WriteECParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method WriteExplicitECParameters, addr 0xfa8610, size 0x4f0, virtual false, abstract: false, final false
  static inline void WriteExplicitECParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParameters,
                                               ::System::IO::Stream* output);

  /// @brief Method WriteECPoint, addr 0xfa8340, size 0xa4, virtual false, abstract: false, final false
  static inline void WriteECPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::System::IO::Stream* output);

  /// @brief Method WriteNamedECParameters, addr 0xfa8b00, size 0xcc, virtual false, abstract: false, final false
  static inline void WriteNamedECParameters(int32_t namedCurve, ::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities* New_ctor();

  /// @brief Method .ctor, addr 0xfa9f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsEccUtilities(TlsEccUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsEccUtilities(TlsEccUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsEccUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
