#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DHKeyGenerationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHKeyGenerationParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters);
// Dependencies Org.BouncyCastle.Crypto.KeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
class CORDL_TYPE DHKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Parameters;

  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;

  /// @brief Method GetStrength, addr 0x3311c80, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetStrength(::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  /// @brief Method .ctor, addr 0x3311c44, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method get_Parameters, addr 0x3311cb4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKeyGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKeyGenerationParameters(DHKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKeyGenerationParameters(DHKeyGenerationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1019 };

  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, ___parameters) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyGenerationParameters");
