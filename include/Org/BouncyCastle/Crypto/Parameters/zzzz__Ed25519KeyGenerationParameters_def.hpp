#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(Ed25519KeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519KeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Ed25519KeyGenerationParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1018))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1040))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Ed25519KeyGenerationParameters*
class CORDL_TYPE Ed25519KeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0xf5ee68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed25519KeyGenerationParameters(Ed25519KeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed25519KeyGenerationParameters(Ed25519KeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed25519KeyGenerationParameters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed25519KeyGenerationParameters");
