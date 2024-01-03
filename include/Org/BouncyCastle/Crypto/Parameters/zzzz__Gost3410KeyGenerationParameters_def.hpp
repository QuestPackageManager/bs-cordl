#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(Gost3410KeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410KeyGenerationParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1051))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410KeyGenerationParameters*
class CORDL_TYPE Gost3410KeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters;

  /// @brief Field publicKeyParamSet, offset 0x28, size 0x8
  __declspec(property(get = __get_publicKeyParamSet, put = __set_publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Parameters;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_publicKeyParamSet() const;

  constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                   ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  /// @brief Method .ctor, addr 0xf35d88, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                   ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor, addr 0xf35dd4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_Parameters, addr 0xf35f88, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* get_Parameters();

  /// @brief Method get_PublicKeyParamSet, addr 0xf35f90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

  /// @brief Method LookupParameters, addr 0xf35e10, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* LookupParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410KeyGenerationParameters(Gost3410KeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410KeyGenerationParameters(Gost3410KeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410KeyGenerationParameters();

public:
  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* ___parameters;

  /// @brief Field publicKeyParamSet, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___publicKeyParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, ___parameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, ___publicKeyParamSet) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyGenerationParameters");
