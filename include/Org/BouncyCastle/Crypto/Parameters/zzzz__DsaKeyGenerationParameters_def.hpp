#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DsaKeyGenerationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(DsaKeyGenerationParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters);
// Dependencies Org.BouncyCastle.Crypto.KeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters
class CORDL_TYPE DsaKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* Parameters;

  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters;

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                              ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::DsaParameters* value);

  /// @brief Method .ctor, addr 0x23ba75c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters);

  /// @brief Method get_Parameters, addr 0x23ba7a8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaKeyGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaKeyGenerationParameters(DsaKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaKeyGenerationParameters(DsaKeyGenerationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1026 };

  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters, ___parameters) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaKeyGenerationParameters");
