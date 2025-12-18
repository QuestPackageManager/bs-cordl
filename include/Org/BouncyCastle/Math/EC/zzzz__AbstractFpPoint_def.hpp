#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointBase_def.hpp"
CORDL_MODULE_EXPORT(AbstractFpPoint)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractFpPoint);
// Dependencies Org.BouncyCastle.Math.EC.ECPointBase
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpPoint
class CORDL_TYPE AbstractFpPoint : public ::Org::BouncyCastle::Math::EC::ECPointBase {
public:
  // Declarations
  __declspec(property(get = get_CompressionYTilde)) bool CompressionYTilde;

  static inline ::Org::BouncyCastle::Math::EC::AbstractFpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                         ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::AbstractFpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                         ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                         ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                         bool withCompression);

  /// @brief Method SatisfiesCurveEquation, addr 0x33ae868, size 0x2b8, virtual true, abstract: false, final false
  inline bool SatisfiesCurveEquation();

  /// @brief Method Subtract, addr 0x33aeb20, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method .ctor, addr 0x33ae834, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x33ae838, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method get_CompressionYTilde, addr 0x33ae83c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_CompressionYTilde();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractFpPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractFpPoint(AbstractFpPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractFpPoint(AbstractFpPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractFpPoint, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpPoint*, "Org.BouncyCastle.Math.EC", "AbstractFpPoint");
