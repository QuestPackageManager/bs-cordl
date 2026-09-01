#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Custom\Sec\SecT193R2Point.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SecT193R2Point)
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
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193R2Point;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R2Point");
// Dependencies Org.BouncyCastle.Math.EC.AbstractF2mPoint
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R2Point
class CORDL_TYPE SecT193R2Point : public ::Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
  // Declarations
  __declspec(property(get = get_CompressionYTilde)) bool CompressionYTilde;

  __declspec(property(get = get_YCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* YCoord;

  /// @brief Method Add, addr 0x34f1604, size 0x738, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Detach, addr 0x34f142c, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method Negate, addr 0x34f25d0, size 0x160, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs,
                                                                                     bool withCompression);

  /// @brief Method Twice, addr 0x34f1d3c, size 0x36c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus, addr 0x34f20a8, size 0x528, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method .ctor, addr 0x34f0bf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor, addr 0x34f0d50, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x34f0e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression);

  /// @brief Method get_CompressionYTilde, addr 0x34f1588, size 0x7c, virtual true, abstract: false, final false
  inline bool get_CompressionYTilde();

  /// @brief Method get_YCoord, addr 0x34f14c0, size 0xc8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT193R2Point();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecT193R2Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT193R2Point(SecT193R2Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT193R2Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT193R2Point(SecT193R2Point const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point) == 0x40, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
