#pragma once
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
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedDataGenerator*
class CORDL_TYPE CmsAuthenticatedDataGenerator : public ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x134947c, size 0x1b4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW encryptionOid);

  /// @brief Method Generate, addr 0x134893c, size 0xb40, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW macOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x1348934, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1348938, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataGenerator");
