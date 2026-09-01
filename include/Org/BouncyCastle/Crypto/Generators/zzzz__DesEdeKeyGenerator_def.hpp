#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DesEdeKeyGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeKeyGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DesEdeKeyGenerator;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*, "Org.BouncyCastle.Crypto.Generators", "DesEdeKeyGenerator");
// Dependencies Org.BouncyCastle.Crypto.Generators.DesKeyGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator
class CORDL_TYPE DesEdeKeyGenerator : public ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* New_ctor(int32_t defaultStrength);

  /// @brief Method .ctor, addr 0x33d559c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x33d55a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t defaultStrength);

  /// @brief Method engineGenerateKey, addr 0x33d57a4, size 0xe4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> engineGenerateKey();

  /// @brief Method engineInit, addr 0x33d55ac, size 0x1f8, virtual true, abstract: false, final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeKeyGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeKeyGenerator(DesEdeKeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeKeyGenerator(DesEdeKeyGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator) == 0x28, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
