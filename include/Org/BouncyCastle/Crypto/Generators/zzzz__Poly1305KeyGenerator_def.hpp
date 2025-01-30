#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Poly1305KeyGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Poly1305KeyGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Poly1305KeyGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator);
// Dependencies Org.BouncyCastle.Crypto.CipherKeyGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator
class CORDL_TYPE Poly1305KeyGenerator : public ::Org::BouncyCastle::Crypto::CipherKeyGenerator {
public:
  // Declarations
  /// @brief Method CheckKey, addr 0x238e84c, size 0x108, virtual false, abstract: false, final false
  static inline void CheckKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckMask, addr 0x238e954, size 0x5c, virtual false, abstract: false, final false
  static inline void CheckMask(uint8_t b, uint8_t mask);

  /// @brief Method Clamp, addr 0x238e790, size 0xbc, virtual false, abstract: false, final false
  static inline void Clamp(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x238e9b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method engineGenerateKey, addr 0x238e774, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> engineGenerateKey();

  /// @brief Method engineInit, addr 0x238e750, size 0x24, virtual true, abstract: false, final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* param);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poly1305KeyGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poly1305KeyGenerator(Poly1305KeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poly1305KeyGenerator(Poly1305KeyGenerator const&) = delete;

  /// @brief Field R_MASK_HIGH_4 offset 0xffffffff size 0x1
  static constexpr uint8_t R_MASK_HIGH_4{ static_cast<uint8_t>(0xfu) };

  /// @brief Field R_MASK_LOW_2 offset 0xffffffff size 0x1
  static constexpr uint8_t R_MASK_LOW_2{ static_cast<uint8_t>(0xfcu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*, "Org.BouncyCastle.Crypto.Generators", "Poly1305KeyGenerator");
