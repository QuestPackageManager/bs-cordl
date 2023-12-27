#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Generators::Poly1305KeyGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(921))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Poly1305KeyGenerator*
class CORDL_TYPE Poly1305KeyGenerator : public ::Org::BouncyCastle::Crypto::CipherKeyGenerator {
public:
  // Declarations
  /// @brief Method engineInit addr 0xf05548 size 0x24 virtual true final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* param);

  /// @brief Method engineGenerateKey addr 0xf0556c size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> engineGenerateKey();

  /// @brief Method Clamp addr 0xf05588 size 0xc0 virtual false final false
  static inline void Clamp(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckKey addr 0xf05648 size 0x10c virtual false final false
  static inline void CheckKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckMask addr 0xf05754 size 0x60 virtual false final false
  static inline void CheckMask(uint8_t b, uint8_t mask);

  static inline ::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator* New_ctor();

  /// @brief Method .ctor addr 0xf057b4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poly1305KeyGenerator(Poly1305KeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poly1305KeyGenerator(Poly1305KeyGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poly1305KeyGenerator();

public:
  /// @brief Field R_MASK_LOW_2 offset 0xffffffff size 0x1
  static constexpr uint8_t R_MASK_LOW_2{ static_cast<uint8_t>(0xfcu) };

  /// @brief Field R_MASK_HIGH_4 offset 0xffffffff size 0x1
  static constexpr uint8_t R_MASK_HIGH_4{ static_cast<uint8_t>(0xfu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator*, "Org.BouncyCastle.Crypto.Generators", "Poly1305KeyGenerator");
