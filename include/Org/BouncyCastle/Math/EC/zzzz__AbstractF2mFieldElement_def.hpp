#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractF2mFieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractF2mFieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement);
// Dependencies Org.BouncyCastle.Math.EC.ECFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
class CORDL_TYPE AbstractF2mFieldElement : public ::Org::BouncyCastle::Math::EC::ECFieldElement {
public:
  // Declarations
  __declspec(property(get = get_HasFastTrace)) bool HasFastTrace;

  /// @brief Method HalfTrace, addr 0x24848d4, size 0x13c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();

  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement* New_ctor();

  /// @brief Method Trace, addr 0x2484a18, size 0x144, virtual true, abstract: false, final false
  inline int32_t Trace();

  /// @brief Method .ctor, addr 0x2484b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasFastTrace, addr 0x2484a10, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasFastTrace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractF2mFieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractF2mFieldElement(AbstractF2mFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractF2mFieldElement(AbstractF2mFieldElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractF2mFieldElement");
