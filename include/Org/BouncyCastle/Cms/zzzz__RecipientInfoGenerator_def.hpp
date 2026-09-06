#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/RecipientInfoGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(RecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Cms::RecipientInfoGenerator*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Cms::RecipientInfoGenerator*, "Org.BouncyCastle.Cms", "RecipientInfoGenerator");
// Dependencies
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.RecipientInfoGenerator
class CORDL_TYPE RecipientInfoGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfoGenerator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInfoGenerator(RecipientInfoGeneratorconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
