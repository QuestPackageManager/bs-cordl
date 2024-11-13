#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/DesKeyGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesKeyGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DesKeyGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DesKeyGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DesKeyGenerator*
class CORDL_TYPE DesKeyGenerator : public ::Org::BouncyCastle::Crypto::CipherKeyGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator* New_ctor(int32_t defaultStrength);

  /// @brief Method .ctor, addr 0x234bfd8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x234bfe8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t defaultStrength);

  /// @brief Method engineGenerateKey, addr 0x234c0d4, size 0xb4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> engineGenerateKey();

  /// @brief Method engineInit, addr 0x234bfec, size 0xe8, virtual true, abstract: false, final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesKeyGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesKeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesKeyGenerator(DesKeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesKeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesKeyGenerator(DesKeyGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator*, "Org.BouncyCastle.Crypto.Generators", "DesKeyGenerator");
