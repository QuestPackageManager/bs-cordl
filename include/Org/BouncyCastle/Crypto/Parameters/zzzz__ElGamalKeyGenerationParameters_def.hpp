#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalKeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalKeyGenerationParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1046))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalKeyGenerationParameters*
class CORDL_TYPE ElGamalKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Parameters;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                  ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  /// @brief Method .ctor, addr 0xf355dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  /// @brief Method get_Parameters, addr 0xf3564c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* get_Parameters();

  /// @brief Method GetStrength, addr 0xf35618, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetStrength(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalKeyGenerationParameters(ElGamalKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalKeyGenerationParameters(ElGamalKeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalKeyGenerationParameters();

public:
  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters, ___parameters) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyGenerationParameters");
