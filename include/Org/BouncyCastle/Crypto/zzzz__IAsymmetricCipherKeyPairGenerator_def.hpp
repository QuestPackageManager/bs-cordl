#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IAsymmetricCipherKeyPairGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsymmetricCipherKeyPairGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*, "Org.BouncyCastle.Crypto", "IAsymmetricCipherKeyPairGenerator");
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IAsymmetricCipherKeyPairGenerator
class CORDL_TYPE IAsymmetricCipherKeyPairGenerator {
public:
  // Declarations
  /// @brief Method GenerateKeyPair, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "IAsymmetricCipherKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsymmetricCipherKeyPairGenerator(IAsymmetricCipherKeyPairGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
