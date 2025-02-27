#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Djb/Curve25519Point.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Curve25519Point)
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519FieldElement;
}
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
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
// Dependencies Org.BouncyCastle.Math.EC.AbstractFpPoint
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point
class CORDL_TYPE Curve25519Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  /// @brief Method Add, addr 0x2459d1c, size 0x6f4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method CalculateJacobianModifiedW, addr 0x245a6cc, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* Z,
                                                                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> ZSquared);

  /// @brief Method Detach, addr 0x2459c70, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method GetJacobianModifiedW, addr 0x245a840, size 0x128, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* GetJacobianModifiedW();

  /// @brief Method GetZCoord, addr 0x2459d00, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method Negate, addr 0x245a600, size 0xcc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*
  New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
           ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method ThreeTimes, addr 0x245a584, size 0x7c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method Twice, addr 0x245a410, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwiceJacobianModified, addr 0x245a968, size 0x450, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* TwiceJacobianModified(bool calculateW);

  /// @brief Method TwicePlus, addr 0x245a4b4, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method .ctor, addr 0x2454f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor, addr 0x2455260, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x245536c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Curve25519Point();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Curve25519Point(Curve25519Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Curve25519Point(Curve25519Point const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Point");
