#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_def.hpp"
CORDL_MODULE_EXPORT(Kdf2BytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Kdf2BytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Kdf2BytesGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(886))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(908))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Kdf2BytesGenerator*
class CORDL_TYPE Kdf2BytesGenerator : public ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xefd314, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  // Ctor Parameters [CppParam { name: "", ty: "Kdf2BytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Kdf2BytesGenerator(Kdf2BytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Kdf2BytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Kdf2BytesGenerator(Kdf2BytesGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Kdf2BytesGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "Kdf2BytesGenerator");
