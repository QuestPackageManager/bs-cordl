#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/CipherKeyGeneratorFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherKeyGeneratorFactory)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class CipherKeyGeneratorFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Utilities.CipherKeyGeneratorFactory
class CORDL_TYPE CipherKeyGeneratorFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateCipherKeyGenerator, addr 0x24460b8, size 0xac, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* CreateCipherKeyGenerator(::Org::BouncyCastle::Security::SecureRandom* random, int32_t keySize);

  /// @brief Method CreateKeyGenerator, addr 0x2445c94, size 0x424, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* CreateKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2445c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherKeyGeneratorFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CipherKeyGeneratorFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherKeyGeneratorFactory(CipherKeyGeneratorFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherKeyGeneratorFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherKeyGeneratorFactory(CipherKeyGeneratorFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*, "Org.BouncyCastle.Crypto.Utilities", "CipherKeyGeneratorFactory");
