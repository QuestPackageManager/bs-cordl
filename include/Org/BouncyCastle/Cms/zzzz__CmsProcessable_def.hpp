#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsProcessable)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessable);
// Type: Org.BouncyCastle.Cms::CmsProcessable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(643))
// CS Name: ::Org.BouncyCastle.Cms::CmsProcessable*
class CORDL_TYPE CmsProcessable {
public:
  // Declarations
  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Write(::System::IO::Stream* outStream);

  /// @brief Method GetContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetContent();

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessable(CmsProcessable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessable(CmsProcessable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessable*, "Org.BouncyCastle.Cms", "CmsProcessable");
