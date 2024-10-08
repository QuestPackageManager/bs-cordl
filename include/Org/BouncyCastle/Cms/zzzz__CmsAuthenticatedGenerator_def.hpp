#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
CORDL_MODULE_EXPORT(CmsAuthenticatedGenerator)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator);
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedGenerator*
class CORDL_TYPE CmsAuthenticatedGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x260fcc0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x260fd14, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedGenerator(CmsAuthenticatedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedGenerator(CmsAuthenticatedGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedGenerator");
