#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsymmetricCipherKeyPairGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto::IAsymmetricCipherKeyPairGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(891))
// CS Name: ::Org.BouncyCastle.Crypto::IAsymmetricCipherKeyPairGenerator*
class CORDL_TYPE IAsymmetricCipherKeyPairGenerator {
public:
  // Declarations
  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method GenerateKeyPair, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  // Ctor Parameters [CppParam { name: "", ty: "IAsymmetricCipherKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsymmetricCipherKeyPairGenerator(IAsymmetricCipherKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsymmetricCipherKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsymmetricCipherKeyPairGenerator(IAsymmetricCipherKeyPairGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*, "Org.BouncyCastle.Crypto", "IAsymmetricCipherKeyPairGenerator");
