#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsAuthenticatedDataGenerator)
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator);
// Dependencies Org.BouncyCastle.Cms.CmsAuthenticatedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataGenerator
class CORDL_TYPE CmsAuthenticatedDataGenerator : public ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x35805d8, size 0x1b0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid);

  /// @brief Method Generate, addr 0x357fab0, size 0xb28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW macOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x357faa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x357faac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedDataGenerator(CmsAuthenticatedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedDataGenerator(CmsAuthenticatedDataGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataGenerator");
