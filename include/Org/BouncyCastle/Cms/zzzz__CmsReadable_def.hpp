#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsReadable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsReadable)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsReadable);
// Dependencies
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsReadable
class CORDL_TYPE CmsReadable {
public:
  // Declarations
  /// @brief Method GetInputStream, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  // Ctor Parameters [CppParam { name: "", ty: "CmsReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsReadable(CmsReadable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsReadable*, "Org.BouncyCastle.Cms", "CmsReadable");
