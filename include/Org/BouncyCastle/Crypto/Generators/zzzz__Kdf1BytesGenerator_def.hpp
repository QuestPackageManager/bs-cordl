#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Kdf1BytesGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_def.hpp"
CORDL_MODULE_EXPORT(Kdf1BytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Kdf1BytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator);
// Dependencies Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.Kdf1BytesGenerator
class CORDL_TYPE Kdf1BytesGenerator : public ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x238bdc8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Kdf1BytesGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Kdf1BytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Kdf1BytesGenerator(Kdf1BytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Kdf1BytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Kdf1BytesGenerator(Kdf1BytesGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "Kdf1BytesGenerator");
