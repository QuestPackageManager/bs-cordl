#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\FpPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpPoint)
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
class FpPoint;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::FpPoint*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::FpPoint*, "Org.BouncyCastle.Math.EC", "FpPoint");
// Dependencies Org.BouncyCastle.Math.EC.AbstractFpPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.FpPoint
class CORDL_TYPE FpPoint : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  /// @brief Method Add, addr 0x352a620, size 0xb4c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method CalculateJacobianModifiedW, addr 0x352ce6c, size 0x160, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::ECFieldElement* Z, ::Org::BouncyCastle::Math::EC::ECFieldElement* ZSquared);

  /// @brief Method Detach, addr 0x352a508, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method DoubleProductFromSquares, addr 0x352ccc8, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* aSquared, ::Org::BouncyCastle::Math::EC::ECFieldElement* bSquared);

  /// @brief Method Eight, addr 0x352cc94, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Four, addr 0x352cc60, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Four(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method GetJacobianModifiedW, addr 0x352cfcc, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW();

  /// @brief Method GetZCoord, addr 0x352a59c, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method Negate, addr 0x352cd3c, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression);

  /// @brief Method Three, addr 0x352cc2c, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Three(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method ThreeTimes, addr 0x352c0b8, size 0x3f4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method TimesPow2, addr 0x352c4ac, size 0x764, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);

  /// @brief Method Twice, addr 0x352b16c, size 0xad8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwiceJacobianModified, addr 0x352d058, size 0x348, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(bool calculateW);

  /// @brief Method TwicePlus, addr 0x352bc44, size 0x474, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Two, addr 0x352cc10, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Two(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method .ctor, addr 0x352a500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor, addr 0x3524854, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x3524c98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpPoint(FpPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpPoint(FpPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::EC::FpPoint) == 0x40, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
