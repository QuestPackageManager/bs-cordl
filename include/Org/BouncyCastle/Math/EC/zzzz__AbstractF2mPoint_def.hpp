#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractF2mPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractF2mPoint)
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
class AbstractF2mPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractF2mPoint);
// Dependencies Org.BouncyCastle.Math.EC.ECPointBase
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractF2mPoint
class CORDL_TYPE AbstractF2mPoint : public ::Org::BouncyCastle::Math::EC::ECPointBase {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                          ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                          ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                          ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                          bool withCompression);

  /// @brief Method SatisfiesCurveEquation, addr 0x248731c, size 0x454, virtual true, abstract: false, final false
  inline bool SatisfiesCurveEquation();

  /// @brief Method SatisfiesOrder, addr 0x2487770, size 0x2c0, virtual true, abstract: false, final false
  inline bool SatisfiesOrder();

  /// @brief Method ScaleX, addr 0x2487a30, size 0x298, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleXNegateY, addr 0x2487cc8, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleXNegateY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleY, addr 0x2487cd8, size 0xe8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleYNegateX, addr 0x2487dc0, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleYNegateX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method Subtract, addr 0x2487dd0, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Tau, addr 0x2487e3c, size 0x284, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau();

  /// @brief Method TauPow, addr 0x24880c0, size 0x29c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* TauPow(int32_t pow);

  /// @brief Method .ctor, addr 0x2487304, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x2487310, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractF2mPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractF2mPoint(AbstractF2mPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractF2mPoint(AbstractF2mPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractF2mPoint, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, "Org.BouncyCastle.Math.EC", "AbstractF2mPoint");
