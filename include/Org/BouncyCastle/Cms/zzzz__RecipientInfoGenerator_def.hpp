#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(RecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientInfoGenerator);
// Type: Org.BouncyCastle.Cms::RecipientInfoGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(669))
// CS Name: ::Org.BouncyCastle.Cms::RecipientInfoGenerator*
class CORDL_TYPE RecipientInfoGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInfoGenerator(RecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInfoGenerator(RecipientInfoGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInfoGenerator*, "Org.BouncyCastle.Cms", "RecipientInfoGenerator");
