#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMemoable)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Utilities::IMemoable*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Utilities::IMemoable*, "Org.BouncyCastle.Utilities", "IMemoable");
// Dependencies
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IMemoable
class CORDL_TYPE IMemoable {
public:
  // Declarations
  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "IMemoable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoable(IMemoable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities
