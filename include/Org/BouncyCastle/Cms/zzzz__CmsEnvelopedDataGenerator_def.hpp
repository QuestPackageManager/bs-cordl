#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataGenerator)
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
// Dependencies Org.BouncyCastle.Cms.CmsEnvelopedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedDataGenerator
class CORDL_TYPE CmsEnvelopedDataGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x35849a0, size 0xc98, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* cipherBuilder);

  /// @brief Method Generate, addr 0x35847f0, size 0x1b0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid);

  /// @brief Method Generate, addr 0x3583bf8, size 0xbf8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);

  /// @brief Method Generate, addr 0x3585638, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid, int32_t keySize);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x3583b38, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3583b90, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataGenerator");
