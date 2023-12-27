#pragma once
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
// Type: Org.BouncyCastle.Cms::CmsReadable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(644))
// CS Name: ::Org.BouncyCastle.Cms::CmsReadable*
class CORDL_TYPE CmsReadable {
public:
  // Declarations
  /// @brief Method GetInputStream addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::IO::Stream* GetInputStream();

  // Ctor Parameters [CppParam { name: "", ty: "CmsReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsReadable(CmsReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsReadable(CmsReadable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsReadable*, "Org.BouncyCastle.Cms", "CmsReadable");
