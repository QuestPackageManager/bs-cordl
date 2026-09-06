#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsProcessable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsProcessable)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Cms::CmsProcessable*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Cms::CmsProcessable*, "Org.BouncyCastle.Cms", "CmsProcessable");
// Dependencies
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsProcessable
class CORDL_TYPE CmsProcessable {
public:
  // Declarations
  /// [Obsolete]
  /// @brief Method GetContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetContent();

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Write(::System::IO::Stream* outStream);

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessable(CmsProcessableconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
