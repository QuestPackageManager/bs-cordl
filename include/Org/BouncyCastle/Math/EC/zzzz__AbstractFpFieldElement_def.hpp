#pragma once
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
// Type: Org.BouncyCastle.Math.EC::AbstractFpFieldElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::AbstractFpFieldElement*
class CORDL_TYPE AbstractFpFieldElement : public ::Org::BouncyCastle::Math::EC::ECFieldElement {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement* New_ctor();

  /// @brief Method .ctor, addr 0x113a95c, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractFpFieldElement");
