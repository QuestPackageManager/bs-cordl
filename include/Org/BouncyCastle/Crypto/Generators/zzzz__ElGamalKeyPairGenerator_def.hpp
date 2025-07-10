#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/ElGamalKeyPairGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElGamalKeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class ElGamalKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricCipherKeyPairGenerator, System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.ElGamalKeyPairGenerator
class CORDL_TYPE ElGamalKeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field param, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param)) ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* param;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  /// @brief Method GenerateKeyPair, addr 0x2384c6c, size 0x188, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method Init, addr 0x2384bc8, size 0xa4, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* const& __cordl_internal_get_param() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*& __cordl_internal_get_param();

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* value);

  /// @brief Method .ctor, addr 0x2384df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalKeyPairGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalKeyPairGenerator(ElGamalKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalKeyPairGenerator(ElGamalKeyPairGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 902 };

  /// @brief Field param, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters* ___param;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator, ___param) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "ElGamalKeyPairGenerator");
