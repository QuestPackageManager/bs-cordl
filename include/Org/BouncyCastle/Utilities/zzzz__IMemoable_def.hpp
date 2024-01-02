#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMemoable)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IMemoable);
// Type: Org.BouncyCastle.Utilities::IMemoable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(748))
// CS Name: ::Org.BouncyCastle.Utilities::IMemoable*
class CORDL_TYPE IMemoable {
public:
  // Declarations
  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "IMemoable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMemoable(IMemoable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMemoable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoable(IMemoable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IMemoable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IMemoable*, "Org.BouncyCastle.Utilities", "IMemoable");
