#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractFpFieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
CORDL_MODULE_EXPORT(AbstractFpFieldElement)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
// Dependencies Org.BouncyCastle.Math.EC.ECFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
class CORDL_TYPE AbstractFpFieldElement : public ::Org::BouncyCastle::Math::EC::ECFieldElement {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement* New_ctor();

  /// @brief Method .ctor, addr 0x2452f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractFpFieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractFpFieldElement(AbstractFpFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractFpFieldElement(AbstractFpFieldElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractFpFieldElement");
